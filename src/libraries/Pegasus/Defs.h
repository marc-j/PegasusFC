/*
 * Defs.h
 *
 *  Created on: 7 nov. 2013
 *      Author: alienx
 */

#ifndef DEFS_H_
#define DEFS_H_


namespace Pegasus {
  typedef void(*Func)(void);
}


/****************************************************
 * VERSION
 ****************************************************/
#define PEGASUS_VB 0    // Prototypage version
#define PEGASUS_V1 1    // Serie version 1

/****************************************************
 * ESC / SERVO
 ****************************************************/
#define ESC_200HZ       200       // 5ms
#define ESC_400HZ       400       // 2.5ms
#define ESC_50HZ        50        // 20ms

#define SERVO_200HZ     200
#define SERVO_400HZ     400
#define SERVO_50HZ      50

#define VAL_PWM_MIN         1000
#define VAL_PWM_MAX         2000

#define MIXING_MAX_OUTPUT 8

/****************************************************
 * RC Input
 ****************************************************/
#define RC_INPUT_SEPARATED_SIGNALS      0
#define RC_INPUT_PPM                    1

/****************************************************
 * FRAME / MIXING
 ****************************************************/
#define FRAME_QUAD      0
#define FRAME_X4        1
#define FRAME_HEXA      2
#define FRAME_X8        3
#define FRAME_Y3        4
#define FRAME_Y6        5
#define FRAME_OCTO      6
#define FRAME_OSPREY    7



#endif /* DEFS_H_ */
