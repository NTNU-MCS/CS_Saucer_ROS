# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/einar/catkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/einar/catkin_ws/build

# Include any dependencies generated for this target.
include ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/depend.make

# Include the progress variables for this target.
include ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/progress.make

# Include the compile flags for this target's objects.
include ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/flags.make

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o: ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/flags.make
ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o: /home/einar/catkin_ws/src/ros_comm/utilities/roslz4/test/roslz4_test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/einar/catkin_ws/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o"
	cd /home/einar/catkin_ws/build/ros_comm/utilities/roslz4 && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o -c /home/einar/catkin_ws/src/ros_comm/utilities/roslz4/test/roslz4_test.cpp

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.i"
	cd /home/einar/catkin_ws/build/ros_comm/utilities/roslz4 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/einar/catkin_ws/src/ros_comm/utilities/roslz4/test/roslz4_test.cpp > CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.i

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.s"
	cd /home/einar/catkin_ws/build/ros_comm/utilities/roslz4 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/einar/catkin_ws/src/ros_comm/utilities/roslz4/test/roslz4_test.cpp -o CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.s

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o.requires:
.PHONY : ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o.requires

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o.provides: ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o.requires
	$(MAKE) -f ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/build.make ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o.provides.build
.PHONY : ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o.provides

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o.provides.build: ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o

# Object files for target test_roslz4
test_roslz4_OBJECTS = \
"CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o"

# External object files for target test_roslz4
test_roslz4_EXTERNAL_OBJECTS =

/home/einar/catkin_ws/devel/lib/roslz4/test_roslz4: ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o
/home/einar/catkin_ws/devel/lib/roslz4/test_roslz4: ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/build.make
/home/einar/catkin_ws/devel/lib/roslz4/test_roslz4: gtest/libgtest.so
/home/einar/catkin_ws/devel/lib/roslz4/test_roslz4: /home/einar/catkin_ws/devel/lib/libroslz4.so
/home/einar/catkin_ws/devel/lib/roslz4/test_roslz4: /usr/lib/x86_64-linux-gnu/liblz4.so
/home/einar/catkin_ws/devel/lib/roslz4/test_roslz4: ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/einar/catkin_ws/devel/lib/roslz4/test_roslz4"
	cd /home/einar/catkin_ws/build/ros_comm/utilities/roslz4 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_roslz4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/build: /home/einar/catkin_ws/devel/lib/roslz4/test_roslz4
.PHONY : ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/build

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/requires: ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/test/roslz4_test.cpp.o.requires
.PHONY : ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/requires

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/clean:
	cd /home/einar/catkin_ws/build/ros_comm/utilities/roslz4 && $(CMAKE_COMMAND) -P CMakeFiles/test_roslz4.dir/cmake_clean.cmake
.PHONY : ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/clean

ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/depend:
	cd /home/einar/catkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/einar/catkin_ws/src /home/einar/catkin_ws/src/ros_comm/utilities/roslz4 /home/einar/catkin_ws/build /home/einar/catkin_ws/build/ros_comm/utilities/roslz4 /home/einar/catkin_ws/build/ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ros_comm/utilities/roslz4/CMakeFiles/test_roslz4.dir/depend

