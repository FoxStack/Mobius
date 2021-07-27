# Install script for directory: /home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/Lib/firebase-cpp-sdk

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/external/src/firestore-build/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/ios_pod/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/app/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/admob/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/analytics/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/auth/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/database/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/dynamic_links/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/firestore/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/functions/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/installations/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/messaging/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/remote_config/cmake_install.cmake")
  include("/home/parham/Personal/School/Saddleback/Summer 2021/CS 1C/Mobius/cmake-build-debug/Lib/firebase-cpp-sdk/storage/cmake_install.cmake")

endif()

