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
CMAKE_BINARY_DIR = /home/raf/Desktop/Mobius/cmake-build-release

# Include any dependencies generated for this target.
include Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/depend.make

# Include the progress variables for this target.
include Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/progress.make

# Include the compile flags for this target's objects.
include Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/flags.make

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.o: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/flags.make
Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.o: ../Lib/firebase-cpp-sdk/functions/src/common/callable_reference.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.o"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.o -c /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/callable_reference.cc

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.i"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/callable_reference.cc > CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.i

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.s"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/callable_reference.cc -o CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.s

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.o: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/flags.make
Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.o: ../Lib/firebase-cpp-sdk/functions/src/common/callable_result.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.o"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.o -c /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/callable_result.cc

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.i"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/callable_result.cc > CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.i

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.s"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/callable_result.cc -o CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.s

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/common.cc.o: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/flags.make
Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/common.cc.o: ../Lib/firebase-cpp-sdk/functions/src/common/common.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/common.cc.o"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_functions.dir/src/common/common.cc.o -c /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/common.cc

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/common.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_functions.dir/src/common/common.cc.i"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/common.cc > CMakeFiles/firebase_functions.dir/src/common/common.cc.i

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/common.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_functions.dir/src/common/common.cc.s"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/common.cc -o CMakeFiles/firebase_functions.dir/src/common/common.cc.s

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/functions.cc.o: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/flags.make
Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/functions.cc.o: ../Lib/firebase-cpp-sdk/functions/src/common/functions.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/functions.cc.o"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_functions.dir/src/common/functions.cc.o -c /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/functions.cc

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/functions.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_functions.dir/src/common/functions.cc.i"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/functions.cc > CMakeFiles/firebase_functions.dir/src/common/functions.cc.i

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/functions.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_functions.dir/src/common/functions.cc.s"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/common/functions.cc -o CMakeFiles/firebase_functions.dir/src/common/functions.cc.s

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.o: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/flags.make
Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.o: ../Lib/firebase-cpp-sdk/functions/src/desktop/callable_reference_desktop.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.o"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.o -c /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/callable_reference_desktop.cc

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.i"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/callable_reference_desktop.cc > CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.i

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.s"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/callable_reference_desktop.cc -o CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.s

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.o: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/flags.make
Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.o: ../Lib/firebase-cpp-sdk/functions/src/desktop/functions_desktop.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.o"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.o -c /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/functions_desktop.cc

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.i"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/functions_desktop.cc > CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.i

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.s"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/functions_desktop.cc -o CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.s

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.o: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/flags.make
Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.o: ../Lib/firebase-cpp-sdk/functions/src/desktop/serialization.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.o"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.o -c /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/serialization.cc

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.i"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/serialization.cc > CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.i

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.s"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions/src/desktop/serialization.cc -o CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.s

# Object files for target firebase_functions
firebase_functions_OBJECTS = \
"CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.o" \
"CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.o" \
"CMakeFiles/firebase_functions.dir/src/common/common.cc.o" \
"CMakeFiles/firebase_functions.dir/src/common/functions.cc.o" \
"CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.o" \
"CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.o" \
"CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.o"

# External object files for target firebase_functions
firebase_functions_EXTERNAL_OBJECTS =

Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_reference.cc.o
Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/callable_result.cc.o
Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/common.cc.o
Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/common/functions.cc.o
Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/callable_reference_desktop.cc.o
Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/functions_desktop.cc.o
Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/src/desktop/serialization.cc.o
Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/build.make
Lib/firebase-cpp-sdk/functions/libfirebase_functions.a: Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/raf/Desktop/Mobius/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library libfirebase_functions.a"
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && $(CMAKE_COMMAND) -P CMakeFiles/firebase_functions.dir/cmake_clean_target.cmake
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/firebase_functions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/build: Lib/firebase-cpp-sdk/functions/libfirebase_functions.a

.PHONY : Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/build

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/clean:
	cd /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions && $(CMAKE_COMMAND) -P CMakeFiles/firebase_functions.dir/cmake_clean.cmake
.PHONY : Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/clean

Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/depend:
	cd /home/raf/Desktop/Mobius/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/raf/Desktop/Mobius /home/raf/Desktop/Mobius/Lib/firebase-cpp-sdk/functions /home/raf/Desktop/Mobius/cmake-build-release /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions /home/raf/Desktop/Mobius/cmake-build-release/Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Lib/firebase-cpp-sdk/functions/CMakeFiles/firebase_functions.dir/depend
