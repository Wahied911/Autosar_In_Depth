/*
 * SA1_SWC.c
 *
 *  Created on: May 1, 2024
 *      Author: ahmed
 */
#include "../Autosar_Implementation/RTE_gen/Rte_SA1_SWC.h"
#define DoorStateLocked  0
#define DoorStateOpened  1

/*****************************************************
 * Runnable: 	GetDoorStatus_IO_SA1
 * Period:		0.012
 *****************************************************/
void GetDoorStatusFromIO(void)
{
	unsigned char DoorState = 	DoorStateLocked;
	/* Read Door State From RTE IO_SA1_SRI interface */
	DoorState = Rte_IRead_SA1_SWC_GetDoorStatus_IO_SA1_RP_SA1_SWC_DoorStatus();
	/* Write Door Status on RTE SA1_APP_SRI interface */
	Rte_IWrite_SA1_SWC_GetDoorStatus_IO_SA1_PP_SA1_SWC_DoorStatus(DoorState);
}
