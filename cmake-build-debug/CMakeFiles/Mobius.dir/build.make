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

CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.o: Mobius_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.o -c /home/raf/Desktop/Mobius/cmake-build-debug/Mobius_autogen/mocs_compilation.cpp

CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/cmake-build-debug/Mobius_autogen/mocs_compilation.cpp > CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.i

CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/cmake-build-debug/Mobius_autogen/mocs_compilation.cpp -o CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.s

CMakeFiles/Mobius.dir/main.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Mobius.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/main.cpp.o -c /home/raf/Desktop/Mobius/main.cpp

CMakeFiles/Mobius.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/main.cpp > CMakeFiles/Mobius.dir/main.cpp.i

CMakeFiles/Mobius.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/main.cpp -o CMakeFiles/Mobius.dir/main.cpp.s

CMakeFiles/Mobius.dir/mainwindow.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/mainwindow.cpp.o: ../mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Mobius.dir/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/mainwindow.cpp.o -c /home/raf/Desktop/Mobius/mainwindow.cpp

CMakeFiles/Mobius.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/mainwindow.cpp > CMakeFiles/Mobius.dir/mainwindow.cpp.i

CMakeFiles/Mobius.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/mainwindow.cpp -o CMakeFiles/Mobius.dir/mainwindow.cpp.s

CMakeFiles/Mobius.dir/Shape/Shape.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/Shape/Shape.cpp.o: ../Shape/Shape.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Mobius.dir/Shape/Shape.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/Shape/Shape.cpp.o -c /home/raf/Desktop/Mobius/Shape/Shape.cpp

CMakeFiles/Mobius.dir/Shape/Shape.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/Shape/Shape.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Shape/Shape.cpp > CMakeFiles/Mobius.dir/Shape/Shape.cpp.i

CMakeFiles/Mobius.dir/Shape/Shape.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/Shape/Shape.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Shape/Shape.cpp -o CMakeFiles/Mobius.dir/Shape/Shape.cpp.s

CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.o: ../Shape/Ellipse/Ellipse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.o -c /home/raf/Desktop/Mobius/Shape/Ellipse/Ellipse.cpp

CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Shape/Ellipse/Ellipse.cpp > CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.i

CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Shape/Ellipse/Ellipse.cpp -o CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.s

CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.o: ../Shape/Rectangle/Rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.o -c /home/raf/Desktop/Mobius/Shape/Rectangle/Rectangle.cpp

CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Shape/Rectangle/Rectangle.cpp > CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.i

CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Shape/Rectangle/Rectangle.cpp -o CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.s

CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.o: ../Shape/Line/Line.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.o -c /home/raf/Desktop/Mobius/Shape/Line/Line.cpp

CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Shape/Line/Line.cpp > CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.i

CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Shape/Line/Line.cpp -o CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.s

CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.o: ../Shape/Polygon/Polygon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.o -c /home/raf/Desktop/Mobius/Shape/Polygon/Polygon.cpp

CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Shape/Polygon/Polygon.cpp > CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.i

CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Shape/Polygon/Polygon.cpp -o CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.s

CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.o: ../Shape/Polyline/Polyline.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.o -c /home/raf/Desktop/Mobius/Shape/Polyline/Polyline.cpp

CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Shape/Polyline/Polyline.cpp > CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.i

CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Shape/Polyline/Polyline.cpp -o CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.s

CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.o: ../Shape/Text/Text.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.o -c /home/raf/Desktop/Mobius/Shape/Text/Text.cpp

CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/Shape/Text/Text.cpp > CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.i

CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/Shape/Text/Text.cpp -o CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.s

CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.o: ../RenderArea/RenderArea.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.o -c /home/raf/Desktop/Mobius/RenderArea/RenderArea.cpp

CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/RenderArea/RenderArea.cpp > CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.i

CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/RenderArea/RenderArea.cpp -o CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.s

CMakeFiles/Mobius.dir/UI/Login/login.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/UI/Login/login.cpp.o: ../UI/Login/login.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Mobius.dir/UI/Login/login.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/UI/Login/login.cpp.o -c /home/raf/Desktop/Mobius/UI/Login/login.cpp

CMakeFiles/Mobius.dir/UI/Login/login.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/UI/Login/login.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/UI/Login/login.cpp > CMakeFiles/Mobius.dir/UI/Login/login.cpp.i

CMakeFiles/Mobius.dir/UI/Login/login.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/UI/Login/login.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/UI/Login/login.cpp -o CMakeFiles/Mobius.dir/UI/Login/login.cpp.s

CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.o: ../UI/Contact/contactus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.o -c /home/raf/Desktop/Mobius/UI/Contact/contactus.cpp

CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/UI/Contact/contactus.cpp > CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.i

CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/UI/Contact/contactus.cpp -o CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.s

CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.o: ../UI/Testimonial/Add/addtestimonialdialog.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.o -c /home/raf/Desktop/Mobius/UI/Testimonial/Add/addtestimonialdialog.cpp

CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/UI/Testimonial/Add/addtestimonialdialog.cpp > CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.i

CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/UI/Testimonial/Add/addtestimonialdialog.cpp -o CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.s

CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.o: ../UI/Testimonial/List/testimoniallistview.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.o -c /home/raf/Desktop/Mobius/UI/Testimonial/List/testimoniallistview.cpp

CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/UI/Testimonial/List/testimoniallistview.cpp > CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.i

CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/UI/Testimonial/List/testimoniallistview.cpp -o CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.s

CMakeFiles/Mobius.dir/DB/DB.cpp.o: CMakeFiles/Mobius.dir/flags.make
CMakeFiles/Mobius.dir/DB/DB.cpp.o: ../DB/DB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/Mobius.dir/DB/DB.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Mobius.dir/DB/DB.cpp.o -c /home/raf/Desktop/Mobius/DB/DB.cpp

CMakeFiles/Mobius.dir/DB/DB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mobius.dir/DB/DB.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/raf/Desktop/Mobius/DB/DB.cpp > CMakeFiles/Mobius.dir/DB/DB.cpp.i

CMakeFiles/Mobius.dir/DB/DB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mobius.dir/DB/DB.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/raf/Desktop/Mobius/DB/DB.cpp -o CMakeFiles/Mobius.dir/DB/DB.cpp.s

# Object files for target Mobius
Mobius_OBJECTS = \
"CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Mobius.dir/main.cpp.o" \
"CMakeFiles/Mobius.dir/mainwindow.cpp.o" \
"CMakeFiles/Mobius.dir/Shape/Shape.cpp.o" \
"CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.o" \
"CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.o" \
"CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.o" \
"CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.o" \
"CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.o" \
"CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.o" \
"CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.o" \
"CMakeFiles/Mobius.dir/UI/Login/login.cpp.o" \
"CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.o" \
"CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.o" \
"CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.o" \
"CMakeFiles/Mobius.dir/DB/DB.cpp.o"

# External object files for target Mobius
Mobius_EXTERNAL_OBJECTS =

Mobius: CMakeFiles/Mobius.dir/Mobius_autogen/mocs_compilation.cpp.o
Mobius: CMakeFiles/Mobius.dir/main.cpp.o
Mobius: CMakeFiles/Mobius.dir/mainwindow.cpp.o
Mobius: CMakeFiles/Mobius.dir/Shape/Shape.cpp.o
Mobius: CMakeFiles/Mobius.dir/Shape/Ellipse/Ellipse.cpp.o
Mobius: CMakeFiles/Mobius.dir/Shape/Rectangle/Rectangle.cpp.o
Mobius: CMakeFiles/Mobius.dir/Shape/Line/Line.cpp.o
Mobius: CMakeFiles/Mobius.dir/Shape/Polygon/Polygon.cpp.o
Mobius: CMakeFiles/Mobius.dir/Shape/Polyline/Polyline.cpp.o
Mobius: CMakeFiles/Mobius.dir/Shape/Text/Text.cpp.o
Mobius: CMakeFiles/Mobius.dir/RenderArea/RenderArea.cpp.o
Mobius: CMakeFiles/Mobius.dir/UI/Login/login.cpp.o
Mobius: CMakeFiles/Mobius.dir/UI/Contact/contactus.cpp.o
Mobius: CMakeFiles/Mobius.dir/UI/Testimonial/Add/addtestimonialdialog.cpp.o
Mobius: CMakeFiles/Mobius.dir/UI/Testimonial/List/testimoniallistview.cpp.o
Mobius: CMakeFiles/Mobius.dir/DB/DB.cpp.o
Mobius: CMakeFiles/Mobius.dir/build.make
Mobius: /home/raf/Qt/6.1.2/gcc_64/lib/libQt6Widgets.so.6.1.2
Mobius: /home/raf/Qt/6.1.2/gcc_64/lib/libQt6Gui.so.6.1.2
Mobius: /home/raf/Qt/6.1.2/gcc_64/lib/libQt6Core.so.6.1.2
Mobius: /usr/lib/x86_64-linux-gnu/libGLX.so
Mobius: /usr/lib/x86_64-linux-gnu/libOpenGL.so
Mobius: CMakeFiles/Mobius.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/raf/Desktop/Mobius/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable Mobius"
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

