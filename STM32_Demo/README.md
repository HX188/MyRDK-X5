# STM32_Demo
* The subfolder slave in this directory contains the code project for the slave control STM32 end.
* Development platform: STM32CubeMX + Keil;
* Code library: HAL library;
* Chip used: STM32F103RCT6;
* High-speed crystal oscillator: 8 MHz;
* System clock: 72 MHz;
* It is recommended to set the Tab size to 4.

# STM32_Demo/MDK-ARM
* Contains the project file slave.uvprojx.

# STM32_Demo/Core/Src
* Contains the main file main.c, which includes the main function logic and some interrupt callback function logic.
* Contains the serial initialization configuration file usart.c: Enables USART1 (baud rate 115200) and enables global interrupts for communication with the RDK end main control; enables the DMA channel for USART1_RX to reduce CPU resource usage; enables USART1 (baud rate 115200) and global interrupts as the debug serial port.
* Contains the timer initialization configuration file tim.c: Enables TIM1, TIM2, TIM3, TIM8 as encoder counters; enables TIM5 to output PWM on four channels; enables TIM6 and global interrupts to perform periodic interrupt service (10 ms).
* Contains initialization configuration files for I2C, SPI peripherals, and GPIO.
* Contains the DMA initialization configuration file dma.c: Configures DMA for USART1_RX and SPI1_MOSI.

# STM32_Demo/MPU6050DMP
* Contains the driver code for the MPU6050 module, implementing the migration from the official DMP library to the HAL library.

# STM32_Demo/WS2812
* Contains the driver code for the WS2812 module, encapsulating the encoding function from RGB data to SPI data stream; encapsulates equivalent functions for various modes.

# STM32_Demo/Motor
* Contains the driver code for the motor.
* Contains the kinematic calculation functions for Mecanum, including forward and inverse kinematics calculations.

# STM32_Demo/PID
* Contains the PID functions for each loop and PID parameters.
* Encapsulates the PID cascade control function.
