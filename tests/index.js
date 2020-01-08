require("../build/llvm")().then(llvm => {
  const { cstring, carray32 } = llvm;

  var mod = llvm._ModuleCreateWithName(cstring("adder"));
  var paramTypes = carray32([ llvm._Int32Type(), llvm._Int32Type() ]);
  var retType = llvm._FunctionType(llvm._Int32Type(), paramTypes, 2, 0);
  var sum = llvm._AddFunction(mod, cstring("sum"), retType);
  var entry = llvm._AppendBasicBlock(sum, cstring("entry"));
  var builder = llvm._CreateBuilder();
  llvm._PositionBuilderAtEnd(builder, entry);
  var tmp = llvm._BuildAdd(builder, llvm._GetParam(sum, 0), llvm._GetParam(sum, 1), cstring("tmp"));
  llvm._BuildRet(builder, tmp);
  llvm._VerifyModule(mod, llvm._AbortProcessAction(), 0);

  console.log(cstring(llvm._PrintModuleToString(mod)));

  // ; ModuleID = 'adder'
  // source_filename = "adder"
  // define i32 @sum(i32 %0, i32 %1) {
  // entry:
  //   %tmp = add i32 %0, %1
  //   ret i32 %tmp
  // }

});
