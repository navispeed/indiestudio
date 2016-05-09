# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:
.PHONY : .NOTPARALLEL

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
CMAKE_SOURCE_DIR = /home/celeri_y/cpp_indie_studio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/celeri_y/cpp_indie_studio

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/celeri_y/cpp_indie_studio/CMakeFiles /home/celeri_y/cpp_indie_studio/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/celeri_y/cpp_indie_studio/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named cpp_indie_studio

# Build rule for target.
cpp_indie_studio: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 cpp_indie_studio
.PHONY : cpp_indie_studio

# fast build rule for target.
cpp_indie_studio/fast:
	$(MAKE) -f CMakeFiles/cpp_indie_studio.dir/build.make CMakeFiles/cpp_indie_studio.dir/build
.PHONY : cpp_indie_studio/fast

srcs/graph/Ogre.o: srcs/graph/Ogre.cpp.o
.PHONY : srcs/graph/Ogre.o

# target to build an object file
srcs/graph/Ogre.cpp.o:
	$(MAKE) -f CMakeFiles/cpp_indie_studio.dir/build.make CMakeFiles/cpp_indie_studio.dir/srcs/graph/Ogre.cpp.o
.PHONY : srcs/graph/Ogre.cpp.o

srcs/graph/Ogre.i: srcs/graph/Ogre.cpp.i
.PHONY : srcs/graph/Ogre.i

# target to preprocess a source file
srcs/graph/Ogre.cpp.i:
	$(MAKE) -f CMakeFiles/cpp_indie_studio.dir/build.make CMakeFiles/cpp_indie_studio.dir/srcs/graph/Ogre.cpp.i
.PHONY : srcs/graph/Ogre.cpp.i

srcs/graph/Ogre.s: srcs/graph/Ogre.cpp.s
.PHONY : srcs/graph/Ogre.s

# target to generate assembly for a file
srcs/graph/Ogre.cpp.s:
	$(MAKE) -f CMakeFiles/cpp_indie_studio.dir/build.make CMakeFiles/cpp_indie_studio.dir/srcs/graph/Ogre.cpp.s
.PHONY : srcs/graph/Ogre.cpp.s

srcs/main.o: srcs/main.cpp.o
.PHONY : srcs/main.o

# target to build an object file
srcs/main.cpp.o:
	$(MAKE) -f CMakeFiles/cpp_indie_studio.dir/build.make CMakeFiles/cpp_indie_studio.dir/srcs/main.cpp.o
.PHONY : srcs/main.cpp.o

srcs/main.i: srcs/main.cpp.i
.PHONY : srcs/main.i

# target to preprocess a source file
srcs/main.cpp.i:
	$(MAKE) -f CMakeFiles/cpp_indie_studio.dir/build.make CMakeFiles/cpp_indie_studio.dir/srcs/main.cpp.i
.PHONY : srcs/main.cpp.i

srcs/main.s: srcs/main.cpp.s
.PHONY : srcs/main.s

# target to generate assembly for a file
srcs/main.cpp.s:
	$(MAKE) -f CMakeFiles/cpp_indie_studio.dir/build.make CMakeFiles/cpp_indie_studio.dir/srcs/main.cpp.s
.PHONY : srcs/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... cpp_indie_studio"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... srcs/graph/Ogre.o"
	@echo "... srcs/graph/Ogre.i"
	@echo "... srcs/graph/Ogre.s"
	@echo "... srcs/main.o"
	@echo "... srcs/main.i"
	@echo "... srcs/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

