/*
 * IO_SWC.c
 *
 *  Created on: May 1, 2024
 *      Author: ahmed
 */
#include "../Autosar_Implementation/RTE_gen/Rte_IO_SWC.h"
#include "DIO.h"
#define LED_ON  1
#define LED_OFF 0

/*****************************************************
 * Runnable: 	ReadDoorStatus
 * Period:		0.01
 *****************************************************/
void SendDoorStatuToSA1(void) {
	/* Read Door State */
	unsigned char DoorState = Dio_ReadChannel();
	/* Write Door Status on RTE APP_SA2_SRI interface */
	Rte_IWrite_IO_SWC_ReadDoorStatus_PP_IO_SWC_DoorStatus(DoorState);
}
/*****************************************************
 * Port: 		PPS_IO_SWC
 * Interface:	IO_SA2_Led_Switch
 * Operation:	Led_Switch
 *****************************************************/
Std_ReturnType LedSwitch(uint8 LedStatus) {
	Std_ReturnType ErrorState = RTE_E_IO_SA2_Led_Switch_E_OK;
	if (LedStatus == LED_ON) {
		Dio_WriteChannel(LED_ON);
	} else if (LedStatus == LED_OFF) {
		Dio_WriteChannel(LED_OFF);
	} else {
		ErrorState = RTE_E_IO_SA2_Led_Switch_E_Not_Ok;
	}
	return ErrorState;
}

