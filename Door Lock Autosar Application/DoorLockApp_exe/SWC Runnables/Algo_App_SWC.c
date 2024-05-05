/*
 * Algo_App_SWC.c
 *
 *  Created on: May 1, 2024
 *      Author: ahmed
 */


#include "../Autosar_Implementation/RTE_gen/Rte_Algo_App_SWC.h"
#define DoorStateLocked  0
#define DoorStateOpened  1
#define LedOn            1
#define LedOff           0
/*****************************************************
 * Runnable: 	GetDoorStatusFromSA1
 * Period:		0.015 s
 *****************************************************/

void GetDoorStatusFromSA1(void)
{
	unsigned DoorState = DoorStateLocked ;
	/* Read Door State From Rte SA1_APP_SRI interface */
	DoorState = Rte_IRead_Algo_App_SWC_GetDoorStatusRunnable_RP_APP_SWC_DoorStatus();
	/* Write Door Status on RTE APP_SA2_SRI interface */
	if(DoorState == DoorStateLocked)
	{
	Rte_IWrite_Algo_App_SWC_GetDoorStatusRunnable_PP_APP_SWC_LedStatus(LedOff);
	}
	else if(DoorState == DoorStateOpened)
	{
	Rte_IWrite_Algo_App_SWC_GetDoorStatusRunnable_PP_APP_SWC_LedStatus(LedOn);
	}
}
