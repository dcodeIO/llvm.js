cd llvm-project/llvm
mkdir build
cd build
cmake ..
cmake --build . --target llvm-tblgen
cd ../../..
node scripts/autoupdate
mkdir build
cd build
emcmake cmake ..
cmake --build . --target llvm
cd ..
