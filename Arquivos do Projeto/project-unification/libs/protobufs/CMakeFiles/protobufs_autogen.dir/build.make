# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/build"

# Utility rule file for protobufs_autogen.

# Include any custom commands dependencies for this target.
include ../libs/protobufs/CMakeFiles/protobufs_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include ../libs/protobufs/CMakeFiles/protobufs_autogen.dir/progress.make

../libs/protobufs/CMakeFiles/protobufs_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target protobufs"
	cd "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/libs/protobufs" && /usr/bin/cmake -E cmake_autogen "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/libs/protobufs/CMakeFiles/protobufs_autogen.dir/AutogenInfo.json" ""

protobufs_autogen: ../libs/protobufs/CMakeFiles/protobufs_autogen
protobufs_autogen: ../libs/protobufs/CMakeFiles/protobufs_autogen.dir/build.make
.PHONY : protobufs_autogen

# Rule to build all files generated by this target.
../libs/protobufs/CMakeFiles/protobufs_autogen.dir/build: protobufs_autogen
.PHONY : ../libs/protobufs/CMakeFiles/protobufs_autogen.dir/build

../libs/protobufs/CMakeFiles/protobufs_autogen.dir/clean:
	cd "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/libs/protobufs" && $(CMAKE_COMMAND) -P CMakeFiles/protobufs_autogen.dir/cmake_clean.cmake
.PHONY : ../libs/protobufs/CMakeFiles/protobufs_autogen.dir/clean

../libs/protobufs/CMakeFiles/protobufs_autogen.dir/depend:
	cd "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification" "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/libs/protobufs" "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/build" "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/libs/protobufs" "/home/pedro/Documentos/Robocin/repositorio project-unification/project-unification/libs/protobufs/CMakeFiles/protobufs_autogen.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : ../libs/protobufs/CMakeFiles/protobufs_autogen.dir/depend

