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
CMAKE_SOURCE_DIR = "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Test.dir/flags.make

CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.o: Test_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/Test_autogen/mocs_compilation.cpp"

CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/Test_autogen/mocs_compilation.cpp" > CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.i

CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/Test_autogen/mocs_compilation.cpp" -o CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.s

CMakeFiles/Test.dir/main.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Test.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/main.cpp.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/main.cpp"

CMakeFiles/Test.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/main.cpp" > CMakeFiles/Test.dir/main.cpp.i

CMakeFiles/Test.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/main.cpp" -o CMakeFiles/Test.dir/main.cpp.s

CMakeFiles/Test.dir/mainwindow.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Test.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/mainwindow.cpp.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/mainwindow.cpp"

CMakeFiles/Test.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/mainwindow.cpp" > CMakeFiles/Test.dir/mainwindow.cpp.i

CMakeFiles/Test.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/mainwindow.cpp" -o CMakeFiles/Test.dir/mainwindow.cpp.s

CMakeFiles/Test.dir/src/Shape.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/src/Shape.cpp.o: ../src/Shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Test.dir/src/Shape.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/src/Shape.cpp.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Shape.cpp"

CMakeFiles/Test.dir/src/Shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/src/Shape.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Shape.cpp" > CMakeFiles/Test.dir/src/Shape.cpp.i

CMakeFiles/Test.dir/src/Shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/src/Shape.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Shape.cpp" -o CMakeFiles/Test.dir/src/Shape.cpp.s

CMakeFiles/Test.dir/src/Ellipse.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/src/Ellipse.cpp.o: ../src/Ellipse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Test.dir/src/Ellipse.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/src/Ellipse.cpp.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Ellipse.cpp"

CMakeFiles/Test.dir/src/Ellipse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/src/Ellipse.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Ellipse.cpp" > CMakeFiles/Test.dir/src/Ellipse.cpp.i

CMakeFiles/Test.dir/src/Ellipse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/src/Ellipse.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Ellipse.cpp" -o CMakeFiles/Test.dir/src/Ellipse.cpp.s

CMakeFiles/Test.dir/src/Rectangle.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/src/Rectangle.cpp.o: ../src/Rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Test.dir/src/Rectangle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/src/Rectangle.cpp.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Rectangle.cpp"

CMakeFiles/Test.dir/src/Rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/src/Rectangle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Rectangle.cpp" > CMakeFiles/Test.dir/src/Rectangle.cpp.i

CMakeFiles/Test.dir/src/Rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/src/Rectangle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Rectangle.cpp" -o CMakeFiles/Test.dir/src/Rectangle.cpp.s

CMakeFiles/Test.dir/src/Line.cpp.o: CMakeFiles/Test.dir/flags.make
CMakeFiles/Test.dir/src/Line.cpp.o: ../src/Line.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Test.dir/src/Line.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/src/Line.cpp.o -c "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Line.cpp"

CMakeFiles/Test.dir/src/Line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/src/Line.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Line.cpp" > CMakeFiles/Test.dir/src/Line.cpp.i

CMakeFiles/Test.dir/src/Line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/src/Line.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/src/Line.cpp" -o CMakeFiles/Test.dir/src/Line.cpp.s

# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Test.dir/main.cpp.o" \
"CMakeFiles/Test.dir/mainwindow.cpp.o" \
"CMakeFiles/Test.dir/src/Shape.cpp.o" \
"CMakeFiles/Test.dir/src/Ellipse.cpp.o" \
"CMakeFiles/Test.dir/src/Rectangle.cpp.o" \
"CMakeFiles/Test.dir/src/Line.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

Test: CMakeFiles/Test.dir/Test_autogen/mocs_compilation.cpp.o
Test: CMakeFiles/Test.dir/main.cpp.o
Test: CMakeFiles/Test.dir/mainwindow.cpp.o
Test: CMakeFiles/Test.dir/src/Shape.cpp.o
Test: CMakeFiles/Test.dir/src/Ellipse.cpp.o
Test: CMakeFiles/Test.dir/src/Rectangle.cpp.o
Test: CMakeFiles/Test.dir/src/Line.cpp.o
Test: CMakeFiles/Test.dir/build.make
Test: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
Test: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
Test: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
Test: CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable Test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Test.dir/build: Test

.PHONY : CMakeFiles/Test.dir/build

CMakeFiles/Test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Test.dir/clean

CMakeFiles/Test.dir/depend:
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Group Project/cmake-build-debug/CMakeFiles/Test.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Test.dir/depend

