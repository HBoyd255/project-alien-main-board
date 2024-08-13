/**
 * @file systemInfo.h
 * @brief Definition for constant values related to the hardware setup for the
 * Project A.L.I.E.N. robot.
 *
 * @author Harry Boyd - https://github.com/HBoyd255
 * @date 2024-08-13
 * @copyright Copyright (c) 2024
 */

// This is a copy of the pin definitions for the robot.

#ifndef SYSTEM_INFO_H
#define SYSTEM_INFO_H

// Motors
// Left (Motor 1)
#define LEFT_MOTOR_DIRECTION_PIN A0
#define LEFT_MOTOR_SPEED_PIN D9
#define LEFT_MOTOR_ENCODER_A_PIN D2
#define LEFT_MOTOR_ENCODER_B_PIN D4

// Right (Motor 2)
#define RIGHT_MOTOR_DIRECTION_PIN A1
#define RIGHT_MOTOR_SPEED_PIN D10
#define RIGHT_MOTOR_ENCODER_A_PIN D3
#define RIGHT_MOTOR_ENCODER_B_PIN A7

// Shift registers
#define BUMPER_SHIFT_REG_DATA A6
#define NES_SHIFT_REG_DATA D8
#define COMMON_SHIFT_REG_LOAD A3
#define COMMON_SHIFT_REG_CLOCK A2

// Pixels
// The pin that D1 of the LED strip is connected to.
#define PIXELS_DATA_PIN D5
// The number of Ws2812 LEDs on the robot.
#define LED_COUNT 16

// Ultrasonic
#define ULTRASONIC_TRIGGER D7
#define ULTRASONIC_ECHO D6

// Infrared
#define LEFT_INFRARED_INDEX 0
#define RIGHT_INFRARED_INDEX 1
#define FRONT_LEFT_INFRARED_INDEX 2
#define FRONT_RIGHT_INFRARED_INDEX 3
#endif  // SYSTEM_INFO_H