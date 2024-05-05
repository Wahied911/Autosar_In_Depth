/*
 * SA2_SWC.c
 *
 *  Created on: May 1, 2024
 *      Author: ahmed
 */

#include "../Autosar_Implementation/RTE_gen/Rte_SA2_SWC.h"
#define LedOn            1
#define LedOff           0
/*#define E_OK 		(unsigned char) 0
 #define E_NOT_OK 	(unsigned char) 1*/
/*****************************************************
 * Runnable: 	GetDoorStatus
 * Period:		0.018
 *****************************************************/
void GetDoorStatusFromApp(void) {
	unsigned char LedState = LedOff;
	unsigned char ErrorState = RTE_E_IO_SA2_Led_Switch_E_OK;
	/* Read Door State From Rte SA1_APP_SRI interface */
	LedState = Rte_IRead_SA2_SWC_GetDoorStatus_RP1_SA2_SWC_LedStatus();
	/* Call Server */
	ErrorState = Rte_Call_SA2_SWC_RP2_SA2_SWC_Led_Switch(LedState);

}
