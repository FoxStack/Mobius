# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /home/raf/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.7442.42/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/raf/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/211.7442.42/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/raf/Desktop/Mobius

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/raf/Desktop/Mobius/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Mobius.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Mobius.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Mobius.dir/flags.make

CMakeFiles/Mobius.dir/main.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Mobius.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/main.cpp.o -c /home/raf/Desktop/Mobius/main.cpp

CMakeFiles/Mobius.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/main.cpp > CMakeFiles/Mobius.dir/main.cpp.i

CMakeFiles/Mobius.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/main.cpp -o CMakeFiles/Mobius.dir/main.cpp.s

# Object files for target Mobius
Mobius_OBJECTS = \
"CMakeFiles/Mobius.dir/main.cpp.o"

# External object files for target Mobius
Mobius_EXTERNAL_OBJECTS =

Mobius: CMakeFiles/Mobius.dir/main.cpp.o
Mobius: CMakeFiles/Mobius.dir/build.make
Mobius: CMakeFiles/Mobius.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Mobius"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Mobius.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Mobius.dir/build: Mobius

.PHONY : CMakeFiles/Mobius.dir/build

CMakeFiles/Mobius.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Mobius.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Mobius.dir/clean

CMakeFiles/Mobius.dir/depend:
	cd /home/raf/Desktop/Mobius/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/raf/Desktop/Mobius /home/raf/Desktop/Mobius /home/raf/Desktop/Mobius/cmake-build-debug /home/raf/Desktop/Mobius/cmake-build-debug /home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles/Mobius.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Mobius.dir/depend

