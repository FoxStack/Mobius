# Install script for directory: /home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE FILE FILES "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb-build/nanopb_pb2.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE FILE FILES "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb-build/plugin_pb2.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb-build/libprotobuf-nanopbd.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/protobuf/nanopb-targets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/protobuf/nanopb-targets.cmake"
         "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb-build/CMakeFiles/Export/lib/cmake/protobuf/nanopb-targets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/protobuf/nanopb-targets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/protobuf/nanopb-targets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/protobuf" TYPE FILE FILES "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb-build/CMakeFiles/Export/lib/cmake/protobuf/nanopb-targets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/protobuf" TYPE FILE FILES "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb-build/CMakeFiles/Export/lib/cmake/protobuf/nanopb-targets-debug.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/protobuf" TYPE FILE FILES
    "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb/extra/nanopb-config.cmake"
    "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb-build/nanopb-config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb/pb.h"
    "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb/pb_common.h"
    "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb/pb_encode.h"
    "/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/external/src/nanopb/pb_decode.h"
    )
endif()

