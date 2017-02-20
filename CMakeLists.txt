cmake_minimum_required(VERSION 3.3)
project(fibonacci)

include_directories(include)

# Build python module.
add_subdirectory(pybind11)
pybind11_add_module(fibonacci src/py_fib.cpp)
pybind11_add_module(dateLib src/py_dateLib.cpp)

# Build commandline executable.
add_executable(cmdline src/main.cpp)