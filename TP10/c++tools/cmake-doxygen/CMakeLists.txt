cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(vectorD)

# compilation flags (but should be avoided)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O2")

# get automatically the files to compile
file(GLOB_RECURSE src_files_list src/*.cpp)

# or set them manualy
set(header_files_list src/VectorD.hpp)

# compile
add_executable(vectorD ${src_files_list} ${header_files_list})

# call the CMakeLists.txt to make the documentation (Doxygen)
# > 'make html' to generate the documentation
# > the documentation is located in : [CMAKE ROOT]/build/doc/doc-doxygen/html
add_subdirectory(doc)

