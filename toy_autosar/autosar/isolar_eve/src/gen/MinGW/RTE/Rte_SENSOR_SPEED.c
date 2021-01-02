/** @file     Rte_SENSOR_SPEED.c
  * 
  * @brief    RTE Sample SWC implementation skeleton file
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#include "Rte_SENSOR_SPEED.h"

/* --------------------------------------------------------------------------- */
/* RTE Event: /ARPackage_2/SENSOR_SPEED/IB_SENSOR_SPEED/TE_SPEED */

FUNC(void, SENSOR_SPEED_CODE) RE_SPEED(void)
{
	int speed = 0;
	Rte_Call_R_SPEED_FROM_ECU_ABS_AFS_OPER_ECU_TO_SENSOR( &speed );
	Rte_Result_R_SPEED_FROM_ECU_ABS_AFS_OPER_ECU_TO_SENSOR( &speed );
//	status_printf("speed(from ecu) : %d", speed);
	Rte_Write_P_SPEED_TO_APP_LOWBEAM_VDP_SENSOR_TO_APP( speed );
	Rte_Write_P_SPEED_TO_APP_MOTOR_VDP_SENSOR_TO_APP( speed );
}
