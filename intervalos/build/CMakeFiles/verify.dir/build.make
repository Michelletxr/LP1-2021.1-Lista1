# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos/build

# Utility rule file for verify.

# Include any custom commands dependencies for this target.
include CMakeFiles/verify.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/verify.dir/progress.make

CMakeFiles/verify: program
	python3 /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos/../scripts/verify-inputs.py ./program

verify: CMakeFiles/verify
verify: CMakeFiles/verify.dir/build.make
.PHONY : verify

# Rule to build all files generated by this target.
CMakeFiles/verify.dir/build: verify
.PHONY : CMakeFiles/verify.dir/build

CMakeFiles/verify.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/verify.dir/cmake_clean.cmake
.PHONY : CMakeFiles/verify.dir/clean

CMakeFiles/verify.dir/depend:
	cd /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos/build /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos/build /home/michelle/Semestre/LP1-2021.1-Lista1/intervalos/build/CMakeFiles/verify.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/verify.dir/depend

