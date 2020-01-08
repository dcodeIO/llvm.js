require("../build/llvm")().then(llvm => {
  console.log(llvm);
  var mod = llvm._ModuleCreateWithName(0);
  var paramTypes = [ llvm._Int32Type(), llvm._Int32Type() ];
  console.log(mod, paramTypes);
});
