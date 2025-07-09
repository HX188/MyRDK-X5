# RDKX5_Demo
* The subfolder code in this directory contains the operating code for the main control RDK end.
* The code folder contains four subfolders: AI, down_detection, hand_gesture_recognize, and yaokong.

# Function Introduction
* Our project contains multiple functions, and below are the running instructions for each function.

# 1. Gesture Control
* ros2 launch ros2_end yao_kong.launch.py # In the yangkong/ directory
* ros2 launch hand_gesture_detection_develop hand_gesture_detection.launch.py # In the hand_gesture_recognize/ directory

# 2. Voice Dialogue
* ros2 launch wheeltec_aiui aiui_start.launch.py # In the AI/AI_whole directory

# 3. Voice Control
* ros2 launch ros2_end yao_kong.launch.py # In the yangkong/ directory
* ros2 launch wheeltec_mic_ros2 base.launch.py # In the AI/sound/wheeltec_mic directory
* ros2 launch wheeltec_mic_ros2 mic_init.launch.py # In the AI/sound/wheeltec_mic directory

# 4. Body Tracking and Fall Detection
* ros2 launch ros2_end yao_kong.launch.py # In the yangkong/ directory
* ros2 launch body_tracking_custom body_tracking_without_gesture # In the down_detection/ directory
* ros2 run fall_detector_py fall_detector_node # In the down_detection/ directory
* ros2 launch tts tts_make.launch.py # In the AI/test_to_sound/ directory

# 5. Remote Control and Remote Broadcasting
* ros2 launch ros2_end yao_kong.launch.py # In the yangkong/ directory
* ros2 launch tts tts_make.launch.py # In the AI/test_to_sound/ directory
