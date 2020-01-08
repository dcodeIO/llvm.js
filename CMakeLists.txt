project(llvmjs C CXX)
cmake_minimum_required(VERSION 3.6)

if(NOT EMSCRIPTEN)
  message(ERROR "Must use Emscripten: emcmake cmake ...")
endif()

if(NOT CMAKE_BUILD_TYPE)
  message(STATUS "No build type selected, defaulting to Release")
  set(CMAKE_BUILD_TYPE "Release")
endif()

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CROSSCOMPILING True)
set(LLVM_TARGET_ARCH wasm32)
set(LLVM_TARGETS_TO_BUILD WebAssembly)
set(LLVM_HOST_TRIPLE wasm32-unknown-unknown)
set(LLVM_DEFAULT_TARGET_TRIPLE wasm32-unknown-unknown)

set(LLVM_TABLEGEN ../llvm-project/llvm/build/Debug/bin/llvm-tblgen)
set(CLANG_TABLEGEN ../llvm-project/llvm/build/Debug/bin/llvm-tblgen)

add_subdirectory(llvm-project/llvm EXCLUDE_FROM_ALL)

add_executable(llvm
  src/constants.c
  src/functions.c
)
include_directories(src llvm-project/llvm/include build/llvm-project/llvm/include)
target_link_libraries(llvm
  LLVMCoroutines
  LLVMCore
  LLVMInterpreter
  LLVMMCJIT
  LLVMObjCARCOpts
  LLVMPasses
  LLVMTarget
)
target_link_libraries(llvm "-O3")
target_link_libraries(llvm "-s SINGLE_FILE")
target_link_libraries(llvm "-s MODULARIZE=1")
target_link_libraries(llvm "-s NO_FILESYSTEM=1")
target_link_libraries(llvm "-s EXPORT_NAME=llvm")
target_link_libraries(llvm "-s ERROR_ON_UNDEFINED_SYMBOLS=0")
target_link_libraries(llvm "--closure 1")
target_link_libraries(llvm "--llvm-lto 1")
