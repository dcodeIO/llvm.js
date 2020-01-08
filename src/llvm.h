#include <llvm-c/Analysis.h>
#include <llvm-c/BitReader.h>
#include <llvm-c/BitWriter.h>
#include <llvm-c/Comdat.h>
#include <llvm-c/Core.h>
// #include <llvm-c/DataTypes.h>
#include <llvm-c/DebugInfo.h>
// #include <llvm-c/Disassembler.h>
// #include <llvm-c/DisassemblerTypes.h>
#include <llvm-c/Error.h>
#include <llvm-c/ErrorHandling.h>
#include <llvm-c/ExecutionEngine.h>
// #include <llvm-c/ExternC.h>
#include <llvm-c/Initialization.h>
#include <llvm-c/IRReader.h>
#include <llvm-c/Linker.h>
#include <llvm-c/LinkTimeOptimizer.h>
// #include <llvm-c/lto.h>
#include <llvm-c/Object.h>
// #include <llvm-c/OrcBindings.h>
#include <llvm-c/Remarks.h>
#include <llvm-c/Support.h>
#include <llvm-c/Target.h>
#include <llvm-c/TargetMachine.h>
// #include <llvm-c/Types.h>
#include <llvm-c/Transforms/AggressiveInstCombine.h>
#include <llvm-c/Transforms/Coroutines.h>
#include <llvm-c/Transforms/InstCombine.h>
#include <llvm-c/Transforms/IPO.h>
#include <llvm-c/Transforms/PassManagerBuilder.h>
#include <llvm-c/Transforms/Scalar.h>
#include <llvm-c/Transforms/Utils.h>
#include <llvm-c/Transforms/Vectorize.h>

#include <emscripten.h>

#define LLVM_API EMSCRIPTEN_KEEPALIVE
