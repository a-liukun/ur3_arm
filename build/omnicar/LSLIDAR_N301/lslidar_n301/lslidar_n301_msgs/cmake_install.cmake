# Install script for directory: /home/lk/arm/ur3_ws/src/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/lk/arm/ur3_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lslidar_n301_msgs/msg" TYPE FILE FILES
    "/home/lk/arm/ur3_ws/src/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/msg/LslidarN301Packet.msg"
    "/home/lk/arm/ur3_ws/src/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/msg/LslidarN301Point.msg"
    "/home/lk/arm/ur3_ws/src/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/msg/LslidarN301Scan.msg"
    "/home/lk/arm/ur3_ws/src/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/msg/LslidarN301Sweep.msg"
    "/home/lk/arm/ur3_ws/src/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/msg/LslidarN301Difop.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lslidar_n301_msgs/cmake" TYPE FILE FILES "/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/catkin_generated/installspace/lslidar_n301_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/lk/arm/ur3_ws/devel/include/lslidar_n301_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/lk/arm/ur3_ws/devel/share/roseus/ros/lslidar_n301_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/lk/arm/ur3_ws/devel/share/common-lisp/ros/lslidar_n301_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/lk/arm/ur3_ws/devel/share/gennodejs/ros/lslidar_n301_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/lk/arm/ur3_ws/devel/lib/python3/dist-packages/lslidar_n301_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/lk/arm/ur3_ws/devel/lib/python3/dist-packages/lslidar_n301_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/catkin_generated/installspace/lslidar_n301_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lslidar_n301_msgs/cmake" TYPE FILE FILES "/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/catkin_generated/installspace/lslidar_n301_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lslidar_n301_msgs/cmake" TYPE FILE FILES
    "/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/catkin_generated/installspace/lslidar_n301_msgsConfig.cmake"
    "/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/catkin_generated/installspace/lslidar_n301_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lslidar_n301_msgs" TYPE FILE FILES "/home/lk/arm/ur3_ws/src/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/package.xml")
endif()

