# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sunrise/AI/AI_communicate/src/wheeltec_mic/wheeltec_mic_ros2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sunrise/AI/AI_communicate/build/wheeltec_mic_ros2

# Include any dependencies generated for this target.
include CMakeFiles/voice_control.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/voice_control.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/voice_control.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/voice_control.dir/flags.make

CMakeFiles/voice_control.dir/src/voice_control.cpp.o: CMakeFiles/voice_control.dir/flags.make
CMakeFiles/voice_control.dir/src/voice_control.cpp.o: /home/sunrise/AI/AI_communicate/src/wheeltec_mic/wheeltec_mic_ros2/src/voice_control.cpp
CMakeFiles/voice_control.dir/src/voice_control.cpp.o: CMakeFiles/voice_control.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sunrise/AI/AI_communicate/build/wheeltec_mic_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/voice_control.dir/src/voice_control.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/voice_control.dir/src/voice_control.cpp.o -MF CMakeFiles/voice_control.dir/src/voice_control.cpp.o.d -o CMakeFiles/voice_control.dir/src/voice_control.cpp.o -c /home/sunrise/AI/AI_communicate/src/wheeltec_mic/wheeltec_mic_ros2/src/voice_control.cpp

CMakeFiles/voice_control.dir/src/voice_control.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/voice_control.dir/src/voice_control.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sunrise/AI/AI_communicate/src/wheeltec_mic/wheeltec_mic_ros2/src/voice_control.cpp > CMakeFiles/voice_control.dir/src/voice_control.cpp.i

CMakeFiles/voice_control.dir/src/voice_control.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/voice_control.dir/src/voice_control.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sunrise/AI/AI_communicate/src/wheeltec_mic/wheeltec_mic_ros2/src/voice_control.cpp -o CMakeFiles/voice_control.dir/src/voice_control.cpp.s

# Object files for target voice_control
voice_control_OBJECTS = \
"CMakeFiles/voice_control.dir/src/voice_control.cpp.o"

# External object files for target voice_control
voice_control_EXTERNAL_OBJECTS =

voice_control: CMakeFiles/voice_control.dir/src/voice_control.cpp.o
voice_control: CMakeFiles/voice_control.dir/build.make
voice_control: /opt/ros/humble/lib/librclcpp.so
voice_control: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
voice_control: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
voice_control: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
voice_control: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
voice_control: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_cpp.so
voice_control: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_py.so
voice_control: /home/sunrise/AI/AI_communicate/install/wheeltec_mic_msg/lib/libwheeltec_mic_msg__rosidl_typesupport_fastrtps_c.so
voice_control: /home/sunrise/AI/AI_communicate/install/wheeltec_mic_msg/lib/libwheeltec_mic_msg__rosidl_typesupport_fastrtps_cpp.so
voice_control: /home/sunrise/AI/AI_communicate/install/wheeltec_mic_msg/lib/libwheeltec_mic_msg__rosidl_typesupport_introspection_c.so
voice_control: /home/sunrise/AI/AI_communicate/install/wheeltec_mic_msg/lib/libwheeltec_mic_msg__rosidl_typesupport_introspection_cpp.so
voice_control: /home/sunrise/AI/AI_communicate/install/wheeltec_mic_msg/lib/libwheeltec_mic_msg__rosidl_typesupport_cpp.so
voice_control: /home/sunrise/AI/AI_communicate/install/wheeltec_mic_msg/lib/libwheeltec_mic_msg__rosidl_generator_py.so
voice_control: /opt/ros/humble/lib/liblibstatistics_collector.so
voice_control: /opt/ros/humble/lib/librcl.so
voice_control: /opt/ros/humble/lib/librmw_implementation.so
voice_control: /opt/ros/humble/lib/libament_index_cpp.so
voice_control: /opt/ros/humble/lib/librcl_logging_spdlog.so
voice_control: /opt/ros/humble/lib/librcl_logging_interface.so
voice_control: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
voice_control: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
voice_control: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
voice_control: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
voice_control: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_cpp.so
voice_control: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_py.so
voice_control: /opt/ros/humble/lib/librcl_interfaces__rosidl_typesupport_c.so
voice_control: /opt/ros/humble/lib/librcl_interfaces__rosidl_generator_c.so
voice_control: /opt/ros/humble/lib/librcl_yaml_param_parser.so
voice_control: /opt/ros/humble/lib/libyaml.so
voice_control: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
voice_control: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
voice_control: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
voice_control: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
voice_control: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
voice_control: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_py.so
voice_control: /opt/ros/humble/lib/librosgraph_msgs__rosidl_typesupport_c.so
voice_control: /opt/ros/humble/lib/librosgraph_msgs__rosidl_generator_c.so
voice_control: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_c.so
voice_control: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_fastrtps_cpp.so
voice_control: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
voice_control: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
voice_control: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
voice_control: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_py.so
voice_control: /opt/ros/humble/lib/libstatistics_msgs__rosidl_typesupport_c.so
voice_control: /opt/ros/humble/lib/libstatistics_msgs__rosidl_generator_c.so
voice_control: /opt/ros/humble/lib/libtracetools.so
voice_control: /opt/ros/humble/lib/libstd_msgs__rosidl_typesupport_c.so
voice_control: /opt/ros/humble/lib/libstd_msgs__rosidl_generator_c.so
voice_control: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
voice_control: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_c.so
voice_control: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
voice_control: /opt/ros/humble/lib/librosidl_typesupport_fastrtps_cpp.so
voice_control: /opt/ros/humble/lib/libfastcdr.so.1.0.24
voice_control: /opt/ros/humble/lib/librmw.so
voice_control: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
voice_control: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
voice_control: /opt/ros/humble/lib/librosidl_typesupport_introspection_cpp.so
voice_control: /opt/ros/humble/lib/librosidl_typesupport_introspection_c.so
voice_control: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
voice_control: /opt/ros/humble/lib/librosidl_typesupport_cpp.so
voice_control: /home/sunrise/AI/AI_communicate/install/wheeltec_mic_msg/lib/libwheeltec_mic_msg__rosidl_typesupport_c.so
voice_control: /home/sunrise/AI/AI_communicate/install/wheeltec_mic_msg/lib/libwheeltec_mic_msg__rosidl_generator_c.so
voice_control: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_py.so
voice_control: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
voice_control: /opt/ros/humble/lib/libbuiltin_interfaces__rosidl_generator_c.so
voice_control: /opt/ros/humble/lib/librosidl_typesupport_c.so
voice_control: /opt/ros/humble/lib/librcpputils.so
voice_control: /opt/ros/humble/lib/librosidl_runtime_c.so
voice_control: /opt/ros/humble/lib/librcutils.so
voice_control: /usr/lib/aarch64-linux-gnu/libpython3.10.so
voice_control: CMakeFiles/voice_control.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sunrise/AI/AI_communicate/build/wheeltec_mic_ros2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable voice_control"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/voice_control.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/voice_control.dir/build: voice_control
.PHONY : CMakeFiles/voice_control.dir/build

CMakeFiles/voice_control.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/voice_control.dir/cmake_clean.cmake
.PHONY : CMakeFiles/voice_control.dir/clean

CMakeFiles/voice_control.dir/depend:
	cd /home/sunrise/AI/AI_communicate/build/wheeltec_mic_ros2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sunrise/AI/AI_communicate/src/wheeltec_mic/wheeltec_mic_ros2 /home/sunrise/AI/AI_communicate/src/wheeltec_mic/wheeltec_mic_ros2 /home/sunrise/AI/AI_communicate/build/wheeltec_mic_ros2 /home/sunrise/AI/AI_communicate/build/wheeltec_mic_ros2 /home/sunrise/AI/AI_communicate/build/wheeltec_mic_ros2/CMakeFiles/voice_control.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/voice_control.dir/depend

