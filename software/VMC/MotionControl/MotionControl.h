/** @file
 * MotionControl.h
 *
 *\brief Header file which contains all necessary declarations for the module MotionControl:
 *
 */

#ifndef MOTIONCONTROL_H_
#define MOTIONCONTROL_H_

/* --------------- Prototypes --------------- */
extern void speedControl(void *pdata);
extern INT16S calcSteeringOffset(INT16S steeringValue);


#endif /* MOTIONCONTROL_H_ */
