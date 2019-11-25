cmake_minimum_required(VERSION 3.5)

project(vectorD)

# include eigen
find_package(Eigen3 REQUIRED)
if(${EIGEN3_FOUND})
    message(STATUS "lib EIGEN3 found")
    message(STATUS "  version " ${EIGEN3_VERSION_STRING})
    message(STATUS "  include " ${EIGEN3_INCLUDE_DIR})
else()
    include_directories("/usr/include/eigen3") # manually specify the include location
endif()


# put the binary files in this directory (set this line before to add the sub directory)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)


# compilation flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O2 -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG_INIT "-g")


# compile
add_executable(vectorD src/main.cpp src/VectorD.cpp src/VectorD.hpp)


# includes
include_directories(${EIGEN3_INCLUDE_DIR})


# link
# target_link_libraries(vectorD xxx)


# add outpout directory 
file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/output)


# call the CMakeLists.txt to make the documentation (Doxygen)
# > 'make html' to generate the documentation
add_subdirectory(doc)

