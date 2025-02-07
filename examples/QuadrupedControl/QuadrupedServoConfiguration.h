/*
 * QuadrupedServoConfiguration.h
 *
 *  Created on: 08.03.2019
 *      Author: Armin
 */

#ifndef _QUADRUPED_SERVO_CONFIGURATION_H
#define _QUADRUPED_SERVO_CONFIGURATION_H

/*
 * Leg layout geometry
 */
#define NUMBER_OF_LEGS 4
#define NUMBER_OF_SERVOS 8
// Pins where servos are attached. The other servos are attached to the next pins (pins 6 to 12).
#define FRONT_LEFT_PIVOT_SERVO_PIN 5
#define SERVOS_PER_LEG (NUMBER_OF_SERVOS / NUMBER_OF_LEGS)
#define DIAGONAL_SERVO_OFFSET (2 * SERVOS_PER_LEG)
#define PIVOT_SERVO_OFFSET 0 // Pivot servo index in leg
#define LIFT_SERVO_OFFSET 1 // Lift servo number is 1 more than base/pivot servo number

#define FRONT_LEFT 0
// Index into (external) servo array. Order must be the same as of definitions in main.
#define FRONT_LEFT_PIVOT 0
#define FRONT_LEFT_LEG (FRONT_LEFT_PIVOT / SERVOS_PER_LEG)
#define FRONT_LEFT_LIFT 1

#define BACK_LEFT 1
#define BACK_LEFT_PIVOT 2
#define BACK_LEFT_LEG (BACK_LEFT_PIVOT / SERVOS_PER_LEG)
#define BACK_LEFT_LIFT 3

#define BACK_RIGHT 2
#define BACK_RIGHT_PIVOT 4
#define BACK_RIGHT_LEG (BACK_RIGHT_PIVOT / SERVOS_PER_LEG)
#define BACK_RIGHT_LIFT 5

#define FRONT_RIGHT 3
#define FRONT_RIGHT_PIVOT 6
#define FRONT_RIGHT_LEG (FRONT_RIGHT_PIVOT / SERVOS_PER_LEG)
#define FRONT_RIGHT_LIFT 7

// some useful constants
#define LIFT_MAX_ANGLE      135             // upper mechanical limit -> body is low
#define LIFT_HIGHEST_ANGLE  LIFT_MAX_ANGLE  // for better readability
#define LIFT_MIN_ANGLE      40              // lower mechanical limit -> body is high
#define LIFT_LOWEST_ANGLE   LIFT_MIN_ANGLE  // for better readability

#define MOVE_DIRECTION_FORWARD  0x00
#define MOVE_DIRECTION_LEFT     0x01
#define MOVE_DIRECTION_BACKWARD 0x02
#define MOVE_DIRECTION_RIGHT    0x03
#define MOVE_DIRECTION_MASK     0x03
#define MOVE_DIRECTION_SIDE_MASK    0x01

/*
 * Specifications required by basic creep
 * Angles are defined for front right leg
 */
#define Y_POSITION_OPEN_ANGLE  70 // the angle of both legs which are NOT together / upper part of Y
#define CREEP_BODY_MOVE_ANGLE  (Y_POSITION_OPEN_ANGLE - Y_POSITION_CLOSE_ANGLE)  // 50 the angle to move body
#define Y_POSITION_CLOSE_ANGLE 20 // the angle when both legs are together
#define Y_POSITION_FRONT_ANGLE (Y_POSITION_OPEN_ANGLE + CREEP_BODY_MOVE_ANGLE) // 120 the angle for the front leg after leg move forward

/*
 * Specification required by basic turn
 * The start and end angles should be symmetrical to 90 degrees
 */
#define TURN_LEFT_START_ANGLE   150
#define TURN_LEFT_END_ANGLE      30
#define TURN_LEFT_STEP_ANGLE    ((TURN_LEFT_START_ANGLE - TURN_LEFT_END_ANGLE) / 3) // 3 steps with this angle and then 1 step back to start

/*
 * Specification required by trot
 */
#define TROT_BASE_ANGLE_FL_BR 135
#define TROT_BASE_ANGLE_BL_FR 45
#define TROT_MOVE_ANGLE 30

#endif // _QUADRUPED_SERVO_CONFIGURATION_H
#pragma once
