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
CMAKE_COMMAND = /snap/clion/158/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/158/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug"

# Include any dependencies generated for this target.
include Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/depend.make

# Include the progress variables for this target.
include Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/progress.make

# Include the compile flags for this target's objects.
include Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/flags.make

generated/analytics/src/include/firebase/analytics/event_names.h: ../Lib/firebase-cpp-sdk/analytics/ios_headers/FIREventNames.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating /home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/generated/analytics/src/include/firebase/analytics/event_names.h"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && python /home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/Lib/firebase-cpp-sdk/analytics/generate_constants.py --objc_header=/home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/Lib/firebase-cpp-sdk/analytics/ios_headers/FIREventNames.h --cpp_header=/home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/cmake-build-debug/generated/analytics/src/include/firebase/analytics/event_names.h

generated/analytics/src/include/firebase/analytics/parameter_names.h: ../Lib/firebase-cpp-sdk/analytics/ios_headers/FIRParameterNames.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Generating /home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/generated/analytics/src/include/firebase/analytics/parameter_names.h"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && python /home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/Lib/firebase-cpp-sdk/analytics/generate_constants.py --objc_header=/home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/Lib/firebase-cpp-sdk/analytics/ios_headers/FIRParameterNames.h --cpp_header=/home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/cmake-build-debug/generated/analytics/src/include/firebase/analytics/parameter_names.h

generated/analytics/src/include/firebase/analytics/user_property_names.h: ../Lib/firebase-cpp-sdk/analytics/ios_headers/FIRUserPropertyNames.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Generating /home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/generated/analytics/src/include/firebase/analytics/user_property_names.h"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && python /home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/Lib/firebase-cpp-sdk/analytics/generate_constants.py --objc_header=/home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/Lib/firebase-cpp-sdk/analytics/ios_headers/FIRUserPropertyNames.h --cpp_header=/home/parham/Personal/School/Saddleback/Summer\ 2021/CS\ 1C/Mobius/cmake-build-debug/generated/analytics/src/include/firebase/analytics/user_property_names.h

Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.o: Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/flags.make
Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.o: ../Lib/firebase-cpp-sdk/analytics/src/analytics_common.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.o"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/Lib/firebase-cpp-sdk/analytics/src/analytics_common.cc"

Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.i"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/Lib/firebase-cpp-sdk/analytics/src/analytics_common.cc" > CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.i

Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.s"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/Lib/firebase-cpp-sdk/analytics/src/analytics_common.cc" -o CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.s

Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.o: Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/flags.make
Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.o: ../Lib/firebase-cpp-sdk/analytics/src/analytics_stub.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.o"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/Lib/firebase-cpp-sdk/analytics/src/analytics_stub.cc"

Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.i"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/Lib/firebase-cpp-sdk/analytics/src/analytics_stub.cc" > CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.i

Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.s"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/Lib/firebase-cpp-sdk/analytics/src/analytics_stub.cc" -o CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.s

# Object files for target firebase_analytics
firebase_analytics_OBJECTS = \
"CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.o" \
"CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.o"

# External object files for target firebase_analytics
firebase_analytics_EXTERNAL_OBJECTS =

Lib/firebase-cpp-sdk/analytics/libfirebase_analytics.a: Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_common.cc.o
Lib/firebase-cpp-sdk/analytics/libfirebase_analytics.a: Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/src/analytics_stub.cc.o
Lib/firebase-cpp-sdk/analytics/libfirebase_analytics.a: Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/build.make
Lib/firebase-cpp-sdk/analytics/libfirebase_analytics.a: Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libfirebase_analytics.a"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && $(CMAKE_COMMAND) -P CMakeFiles/firebase_analytics.dir/cmake_clean_target.cmake
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/firebase_analytics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/build: Lib/firebase-cpp-sdk/analytics/libfirebase_analytics.a

.PHONY : Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/build

Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/clean:
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" && $(CMAKE_COMMAND) -P CMakeFiles/firebase_analytics.dir/cmake_clean.cmake
.PHONY : Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/clean

Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/depend: generated/analytics/src/include/firebase/analytics/event_names.h
Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/depend: generated/analytics/src/include/firebase/analytics/parameter_names.h
Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/depend: generated/analytics/src/include/firebase/analytics/user_property_names.h
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/Lib/firebase-cpp-sdk/analytics" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : Lib/firebase-cpp-sdk/analytics/CMakeFiles/firebase_analytics.dir/depend

