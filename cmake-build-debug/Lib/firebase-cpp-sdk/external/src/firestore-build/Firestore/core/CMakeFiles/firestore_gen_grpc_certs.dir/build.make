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

# Utility rule file for firestore_gen_grpc_certs.

# Include the progress variables for this target.
include Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/progress.make

Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs: Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.h
Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs: Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.cc


Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.h: Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/grpc-build/libgrpc.a
Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.h: Lib/firebase-cpp-sdk/external/src/firestore/scripts/binary_to_array.py
Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.h: Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/grpc/etc/roots.pem
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Generating root certificates for embedding"
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core" && python "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore/scripts/binary_to_array.py" "--output_header=/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.h" "--output_source=/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.cc" --cpp_namespace=firebase::firestore::remote --array=grpc_root_certificates_generated_data --array_size=grpc_root_certificates_generated_size "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/grpc/etc/roots.pem"

Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.cc: Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.h
	@$(CMAKE_COMMAND) -E touch_nocreate Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.cc

firestore_gen_grpc_certs: Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs
firestore_gen_grpc_certs: Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.cc
firestore_gen_grpc_certs: Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core/src/remote/grpc_root_certificates_generated.h
firestore_gen_grpc_certs: Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/build.make

.PHONY : firestore_gen_grpc_certs

# Rule to build all files generated by this target.
Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/build: firestore_gen_grpc_certs

.PHONY : Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/build

Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/clean:
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core" && $(CMAKE_COMMAND) -P CMakeFiles/firestore_gen_grpc_certs.dir/cmake_clean.cmake
.PHONY : Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/clean

Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/depend:
	cd "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore/Firestore/core" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core" "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : Lib/firebase-cpp-sdk/external/src/firestore-build/Firestore/core/CMakeFiles/firestore_gen_grpc_certs.dir/depend

