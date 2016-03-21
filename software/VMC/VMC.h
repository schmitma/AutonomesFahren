#ifndef _VMC_H_
#define _VMC_H_

#include <stdio.h>
#include <io.h>
#include "head.h"
#include "includes.h"
#include "time.h"
#include "MPU6050/mpu6050.h"
#include <iostream>
#include <cstdlib>
#include "altera_up_avalon_rs232.h"
#include "system.h"
#include "VMClib/VMClib.h"
#include "DMP/helper_3dmathc.h"
#include "math.h"
#include "string.h"

#define WHL_CIRCUMFERENCE 		200 // [mm]
#define WHL_TICKS_PER_REVOLUTION 	20 // [whl_tick]
#define DISTANCE_PER_WHL_TICK (WHL_CIRCUMFERENCE/WHL_TICKS_PER_REVOLUTION) // [mm/ whl_tick]

#define OS_TICKS_PER_USEC (OS_TICKS_PER_SEC/1000000)
#define OS_TICKS_PER_MSEC (OS_TICKS_PER_SEC/1000)

#define SPD_CTRL_CYCLE_TIME_MS 200
#define STP_RESP_CYCLE_TIME_MS 100
#define SENSOR_COLLECTOR_CYCLE_TIME_MS 60

#define EMERGENCY_STOP_DISTANCE 100

extern INT32S desired_speed;
extern INT16S Kp_SpeedCtrl_num;
extern INT16S Kp_SpeedCtrl_den;
extern INT16S Ki_SpeedCtrl_num;
extern INT16S Ki_SpeedCtrl_den;
extern INT16S Kd_SpeedCtrl_num;
extern INT16S Kd_SpeedCtrl_den;
extern INT32S I_SpeedCtrl_min;//-10000;
extern INT32S I_SpeedCtrl_max;//10000;
extern INT32S P_SpeedCtrl;
extern INT32S I_SpeedCtrl;
extern INT32S D_SpeedCtrl;
extern INT16S g_i16s_PWMSpeedCtrl;
extern INT16S Fast_Forward_Control;
extern INT32S I_SpeedCtrl_error;
extern INT32U speed;
extern INT32S e_speed;
extern INT32S e_speed_old;
extern INT16S PWM_SpeedCtrl_max;
extern INT16S PWM_SpeedCtrl_min;
extern INT32S step_size;
extern OS_EVENT *mutex;

typedef enum
{
	Ready,
	SearchParkingSlot,
	AntiClockRightAxis1,
	BackwardApproach1,
	AntiClock1,
	AntiClock2,
	BackwardApproach2,
	parked
} ParkingStateType_t;

/*typedef enum
{
	true,
	false
} bool_t;*/

#endif
