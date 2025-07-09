# MyRDK-X5
* Project Name: Child Monitoring and Companion Robot Based on RDK X5.
* Contains three subdirectories: RDKX5_Demo, STM32_Demo, Wechat_miniAPP.

# RDKX5_Demo
* This is the operating code for the main control RDK end, with the operating system being Ubuntu 22.04 provided by RDK X5, and developed based on ROS2 Humble. The main functionalities include: speech recognition and sound source localization, intelligent voice interaction, gesture recognition, visual tracking, fall detection, MQTT nodes related to mini-program communication, etc. For more details, refer to the documentation in the respective subdirectory.

# STM32_Demo
* This is the operating code for the slave control STM32 end, developed using STM32CubeMX + Keil with the HAL library. The main functionalities include: PID and motor control, MPU6050 module driving, WS2812 module driving, etc., with serial communication between the main control and slave. For more details, refer to the documentation in the respective subdirectory.

# Wechat_miniAPP
* This is the development code for the WeChat mini-program, developed using the WeChat Developer Tool, primarily in JavaScript. It includes a main interface and a remote control interface, with key functionalities such as: invoking MQTT service, subscribing to topics and displaying them in a scrolling manner, inputting and publishing text, multi-touch detection, and remote control information publishing. For more details, refer to the documentation in the respective subdirectory.
