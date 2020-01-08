const fs = require("fs");

// Use LLVM headers referenced in src/llvm.h
const header = fs.readFileSync(__dirname + "/../src/llvm.h", "utf8");
const inclRe = /^#include <(llvm-c(?:\/\w+)+.h)>/mg;
const headers = [];
do {
  let match = inclRe.exec(header);
  if (!match) break;
  console.log("include: " + match[1]);
  headers.push(match[1]);
} while (true);

const constants = [];
const functions = [];

const exclude = [
  "LLVMAddInternalizePassWithMustPreservePredicate"
];

headers.forEach(file => {
  const source = fs.readFileSync(__dirname + "/../llvm-project/llvm/include/" + file, "utf8");

  // Constants
  {
    const enumRe = /^(?:typedef )enum {([^}]*)}/mg;
    do {
      let enumMatch = enumRe.exec(source);
      if (!enumMatch) break;
      const valueRe = /^[\s]*(LLVM(?:\w+))/mg;
      do {
        let valueMatch = valueRe.exec(enumMatch[1]);
        if (!valueMatch) break;
        if (exclude.includes(valueMatch[1])) {
          console.log("skipping constant: " + valueMatch[1]);
          continue;
        }
        console.log("constant: " + valueMatch[1]);
        exclude.push(valueMatch[1]);
        constants.push(
          "LLVM_API int " + valueMatch[1].replace(/^LLVM/, "") + "() { return " + valueMatch[1] + "; }"
        );
      } while (true);
    } while (true);
  }

  // Functions
  {
    const funcRe = /^(\w+ [\*]*)(LLVM\w+)\(([^)]*)\)/mg; // char *LLVMPrintValueToString(LLVMValueRef Val)
    do {
      let funcMatch = funcRe.exec(source);
      if (!funcMatch) break;
      if (exclude.includes(funcMatch[2])) {
        console.log("skipping function: " + funcMatch[2]);
        continue;
      }
      console.log("function: " + funcMatch[2]);
      exclude.push(funcMatch[2]);
      let params = [];
      let args = [];
      funcMatch[3].split(",").forEach((s,i) => {
        s = s.trim();
        if (s != "void") {
          let name = s;
          let m2 = /(\w+)(?:\[\])?$/.exec(name);
          if (!m2) throw Error("what");
          if (m2[1] == s) {
            params.push(s + " $" + i);
            args.push("$" + i);
          } else {
            params.push(s);
            args.push(m2[1]); 
          }
        }
      });
      functions.push(
        "LLVM_API " + funcMatch[1] + funcMatch[2].replace(/^LLVM/, "") + "(" + (params.length ? "\n  " + params.join(",\n  ") + "\n" : "void") + ") { return " + funcMatch[2] + "(" + args.join(", ") + "); }\n"
      );
    } while (true);
  }

});

fs.writeFileSync(__dirname + "/../src/constants.c", "#include \"llvm.h\"\n\n" + constants.join("\n") + "\n");
fs.writeFileSync(__dirname + "/../src/functions.c", "#include \"llvm.h\"\n\n" + functions.join("\n"));
