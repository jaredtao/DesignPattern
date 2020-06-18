@echo off
mkdir build-vs2019-clang
cd build-vs2019-clang
cmake .. -G "Visual Studio 16 2019" -DCMAKE_TOOLCHAIN_FILE="%VCPKG_PATH%scripts\buildsystems\vcpkg.cmake" -T"ClangCL"
pause