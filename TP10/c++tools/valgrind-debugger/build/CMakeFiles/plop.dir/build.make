# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/build

# Include any dependencies generated for this target.
include CMakeFiles/plop.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/plop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/plop.dir/flags.make

CMakeFiles/plop.dir/src/main.cpp.o: CMakeFiles/plop.dir/flags.make
CMakeFiles/plop.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/plop.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/plop.dir/src/main.cpp.o -c /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/src/main.cpp

CMakeFiles/plop.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/plop.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/src/main.cpp > CMakeFiles/plop.dir/src/main.cpp.i

CMakeFiles/plop.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/plop.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/src/main.cpp -o CMakeFiles/plop.dir/src/main.cpp.s

# Object files for target plop
plop_OBJECTS = \
"CMakeFiles/plop.dir/src/main.cpp.o"

# External object files for target plop
plop_EXTERNAL_OBJECTS =

plop: CMakeFiles/plop.dir/src/main.cpp.o
plop: CMakeFiles/plop.dir/build.make
plop: CMakeFiles/plop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable plop"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/plop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/plop.dir/build: plop

.PHONY : CMakeFiles/plop.dir/build

CMakeFiles/plop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/plop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/plop.dir/clean

CMakeFiles/plop.dir/depend:
	cd /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/build /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/build /home/margaux/Documents/S3_Cpp/TP10/c++tools/valgrind-debugger/build/CMakeFiles/plop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/plop.dir/depend

