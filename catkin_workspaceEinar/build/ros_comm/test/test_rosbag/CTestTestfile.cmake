# CMake generated Testfile for 
# Source directory: /home/einar/catkin_ws/src/ros_comm/test/test_rosbag
# Build directory: /home/einar/catkin_ws/build/ros_comm/test/test_rosbag
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
ADD_TEST(_ctest_test_rosbag_nosetests_test.test_bag.py "/home/einar/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/einar/catkin_ws/build/test_results/test_rosbag/nosetests-test.test_bag.py.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/einar/catkin_ws/build/test_results/test_rosbag" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/einar/catkin_ws/src/ros_comm/test/test_rosbag/test/test_bag.py --with-xunit --xunit-file=/home/einar/catkin_ws/build/test_results/test_rosbag/nosetests-test.test_bag.py.xml")
ADD_TEST(_ctest_test_rosbag_gtest_test_bag "/home/einar/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/einar/catkin_ws/build/test_results/test_rosbag/gtest-test_bag.xml" "--return-code" "/home/einar/catkin_ws/devel/lib/test_rosbag/test_bag --gtest_output=xml:/home/einar/catkin_ws/build/test_results/test_rosbag/gtest-test_bag.xml")
ADD_TEST(_ctest_test_rosbag_rostest_test_play_play.test "/home/einar/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/einar/catkin_ws/build/test_results/test_rosbag/rostest-test_play_play.xml" "--return-code" "/home/einar/catkin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/einar/catkin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_play_play.xml --results-base-dir \"/home/einar/catkin_ws/build/test_results\" /home/einar/catkin_ws/build/ros_comm/test/test_rosbag/test/play_play.test ")
ADD_TEST(_ctest_test_rosbag_rostest_test_rosbag_play.test "/home/einar/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/einar/catkin_ws/build/test_results/test_rosbag/rostest-test_rosbag_play.xml" "--return-code" "/home/einar/catkin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/einar/catkin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_rosbag_play.xml --results-base-dir \"/home/einar/catkin_ws/build/test_results\" /home/einar/catkin_ws/build/ros_comm/test/test_rosbag/test/rosbag_play.test ")
ADD_TEST(_ctest_test_rosbag_rostest_test_latched_pub.test "/home/einar/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/einar/catkin_ws/build/test_results/test_rosbag/rostest-test_latched_pub.xml" "--return-code" "/home/einar/catkin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/einar/catkin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_latched_pub.xml --results-base-dir \"/home/einar/catkin_ws/build/test_results\" /home/einar/catkin_ws/src/ros_comm/test/test_rosbag/test/latched_pub.test ")
ADD_TEST(_ctest_test_rosbag_rostest_test_latched_sub.test "/home/einar/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/einar/catkin_ws/build/test_results/test_rosbag/rostest-test_latched_sub.xml" "--return-code" "/home/einar/catkin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/einar/catkin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_latched_sub.xml --results-base-dir \"/home/einar/catkin_ws/build/test_results\" /home/einar/catkin_ws/build/ros_comm/test/test_rosbag/test/latched_sub.test ")
ADD_TEST(_ctest_test_rosbag_rostest_test_record_two_publishers.test "/home/einar/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/einar/catkin_ws/build/test_results/test_rosbag/rostest-test_record_two_publishers.xml" "--return-code" "/home/einar/catkin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/einar/catkin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_record_two_publishers.xml --results-base-dir \"/home/einar/catkin_ws/build/test_results\" /home/einar/catkin_ws/src/ros_comm/test/test_rosbag/test/record_two_publishers.test ")
ADD_TEST(_ctest_test_rosbag_rostest_test_record_one_publisher_two_topics.test "/home/einar/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/indigo/share/catkin/cmake/test/run_tests.py" "/home/einar/catkin_ws/build/test_results/test_rosbag/rostest-test_record_one_publisher_two_topics.xml" "--return-code" "/home/einar/catkin_ws/src/ros_comm/tools/rostest/scripts/rostest --pkgdir=/home/einar/catkin_ws/src/ros_comm/test/test_rosbag --package=test_rosbag --results-filename test_record_one_publisher_two_topics.xml --results-base-dir \"/home/einar/catkin_ws/build/test_results\" /home/einar/catkin_ws/src/ros_comm/test/test_rosbag/test/record_one_publisher_two_topics.test ")
SUBDIRS(bag_migration_tests)
