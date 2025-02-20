/*
 * QuadrupedHelper.h
 *
 *   Contains miscellaneous function for the quadruped
 *
 *  Created on: 04.02.2022
 *      Author: Armin
 */

#ifndef _QUADRUPED_HELPER_H
#define _QUADRUPED_HELPER_H

bool checkForLowVoltage();
void playShutdownMelody();
void doBeep();

#if defined(QUADRUPED_HAS_US_DISTANCE)
void handleUSSensor();
#endif

#if defined(QUADRUPED_HAS_US_DISTANCE_SERVO)
void doUSRight();
void doUSLeft();
void doUSScan();
#endif

void doCalibration();


#endif // _QUADRUPED_HELPER_H
#pragma once
