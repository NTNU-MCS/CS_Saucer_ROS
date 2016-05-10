# Install script for directory: /home/einar/catkin_ws/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/einar/catkin_ws/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/einar/catkin_ws/install/_setup_util.py")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/einar/catkin_ws/install" TYPE PROGRAM FILES "/home/einar/catkin_ws/build/catkin_generated/installspace/_setup_util.py")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/einar/catkin_ws/install/env.sh")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/einar/catkin_ws/install" TYPE PROGRAM FILES "/home/einar/catkin_ws/build/catkin_generated/installspace/env.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/einar/catkin_ws/install/setup.bash")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/einar/catkin_ws/install" TYPE FILE FILES "/home/einar/catkin_ws/build/catkin_generated/installspace/setup.bash")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/einar/catkin_ws/install/setup.sh")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/einar/catkin_ws/install" TYPE FILE FILES "/home/einar/catkin_ws/build/catkin_generated/installspace/setup.sh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/einar/catkin_ws/install/setup.zsh")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/einar/catkin_ws/install" TYPE FILE FILES "/home/einar/catkin_ws/build/catkin_generated/installspace/setup.zsh")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/einar/catkin_ws/install/.rosinstall")
  IF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
  IF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  ENDIF (CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
FILE(INSTALL DESTINATION "/home/einar/catkin_ws/install" TYPE FILE FILES "/home/einar/catkin_ws/build/catkin_generated/installspace/.rosinstall")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/einar/catkin_ws/build/gtest/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/geometry/geometry/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_slam/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_slam_launch/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/multimaster_fkie/multimaster_fkie/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/ros_comm/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosgraph/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosmaster/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosmsg/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosparam/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/clients/rospy/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosservice/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/roslaunch/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosconsole/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/utilities/roslz4/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosbag_storage/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rostest/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/geometry/eigen_conversions/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/geometry/kdl_conversions/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/multimaster_fkie/multimaster_msgs_fkie/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/multimaster_fkie/default_cfg_fkie/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_map_tools/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_nav_msgs/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/multimaster_fkie/master_discovery_fkie/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_rosbag_storage/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_roslib_comm/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/utilities/xmlrpcpp/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/clients/roscpp/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/arduinosim/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/etalisttoset/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/etasetget/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/etasetget256discretized2/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/etasetgett/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/haterl/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/haterl2/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector2p2/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_geotiff/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_geotiff_plugins/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_marker_drawing/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/lidarmapsim/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/multimaster_fkie/master_sync_fkie/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/mindistfromscan2/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/multimaster_fkie/node_manager_fkie/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/provpos/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_controller/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_controllerniki/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosout/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/utilities/message_filters/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_compressed_map_transport/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosnode/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rostopic/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/utilities/roswtf/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/rplidar_ros/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_roscpp/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_rosgraph/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_roslaunch/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_rosmaster/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_rosparam/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_rospy/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_rosservice/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/testt/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/topic_tools/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/tools/rosbag/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_rosbag/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/ros_comm/test/test_rostopic/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/geometry/tf/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_imu_attitude_to_tf/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_imu_tools/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_map_server/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_trajectory_server/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/qualisys/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/q2p2/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/q2pall/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/geometry/tf_conversions/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/hector_slam/hector_mapping/cmake_install.cmake")
  INCLUDE("/home/einar/catkin_ws/build/vesselsimulator/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/einar/catkin_ws/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/einar/catkin_ws/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
