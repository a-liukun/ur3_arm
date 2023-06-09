# Install script for directory: /home/lk/arm/ur3_ws/src

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
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lk/arm/ur3_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lk/arm/ur3_ws/install" TYPE PROGRAM FILES "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/_setup_util.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lk/arm/ur3_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lk/arm/ur3_ws/install" TYPE PROGRAM FILES "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/env.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lk/arm/ur3_ws/install/setup.bash;/home/lk/arm/ur3_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lk/arm/ur3_ws/install" TYPE FILE FILES
    "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/setup.bash"
    "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/local_setup.bash"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lk/arm/ur3_ws/install/setup.sh;/home/lk/arm/ur3_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lk/arm/ur3_ws/install" TYPE FILE FILES
    "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/setup.sh"
    "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/local_setup.sh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lk/arm/ur3_ws/install/setup.zsh;/home/lk/arm/ur3_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lk/arm/ur3_ws/install" TYPE FILE FILES
    "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/setup.zsh"
    "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/lk/arm/ur3_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/lk/arm/ur3_ws/install" TYPE FILE FILES "/home/lk/arm/ur3_ws/build/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/lk/arm/ur3_ws/build/gtest/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_controller_examples/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_controllers/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/handeye/easy_handeye/easy_handeye/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/navigation/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/openni2_launch/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/handeye/easy_handeye/rqt_easy_handeye/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_tools/scan_tools/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/handeye/aruco_ros/aruco_msgs/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/handeye/easy_handeye/easy_handeye_msgs/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_msgs/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/universal_robots/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/Universal_Robots_ROS_Driver/ur_dashboard_msgs/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/ur_msgs/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_ur_motion_demo/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/cmd_vel_pub/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/robot_description/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_driver/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/map_server/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_pub/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/Universal_Robots_ROS_Driver/controller_stopper/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_controller_utilities/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/handeye/aruco_ros/aruco/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/laser_process/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_tools/laser_scan_sparsifier/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_tools/laser_scan_splitter/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/otherLib/household_objects_database_msgs/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/otherLib/manipulation_msgs/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/handeye/aruco_ros/aruco_ros/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/gohome/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_tools/ncd_parser/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/odom_pub/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_tools/laser_ortho_projector/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_tools/laser_scan_matcher/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/LSLIDAR_N301/lslidar_n301/lslidar_n301_decoder/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_tools/polar_scan_matcher/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/rbx1_nav/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/rf2o_laser_odometry/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/scan_tools/scan_to_cloud_converter/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/amcl/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/fake_localization/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/ur3_move/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/image_process/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur_description/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur_gazebo/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/SomeConfig/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_controller_base/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_controller_handles/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_force_controller/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_motion_controller/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_compliance_controller/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/joint_to_cartesian_controller/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur_kinematics/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/voxel_grid/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/costmap_2d/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/nav_core/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/base_local_planner/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/carrot_planner/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/clear_costmap_recovery/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/dwa_local_planner/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/move_slow_and_clear/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/navfn/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/global_planner/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/relaxed_astar/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/rotate_recovery/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/move_base/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/omnicar/navigation/teb_local_planner/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/cartesian_controllers/cartesian_controller_tests/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/my_ur3_moveit_config/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur10_moveit_config/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur10e_moveit_config/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur16e_moveit_config/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur3_moveit_config/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur3e_moveit_config/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur5_moveit_config/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/fmauch_universal_robot/ur5e_moveit_config/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/Universal_Robots_ROS_Driver/ur_robot_driver/cmake_install.cmake")
  include("/home/lk/arm/ur3_ws/build/arm/ur_control/Universal_Robots_ROS_Driver/ur_calibration/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/lk/arm/ur3_ws/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
