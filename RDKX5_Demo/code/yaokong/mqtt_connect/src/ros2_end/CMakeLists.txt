cmake_minimum_required(VERSION 3.5)
project(ros2_end)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(eclipse-paho-mqtt-c 1.3.9 REQUIRED)

include_directories(
    include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

add_executable(main src/main.cpp src/mqtt_c.cpp)
ament_target_dependencies(main rclcpp std_msgs)
target_link_libraries(main paho-mqtt3c)

install(TARGETS
  main
  DESTINATION lib/${PROJECT_NAME})


add_executable(serial_sender_node src/serial_sender_node.cpp)
ament_target_dependencies(serial_sender_node rclcpp std_msgs)

install(TARGETS
  serial_sender_node
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
)
  
ament_package()
