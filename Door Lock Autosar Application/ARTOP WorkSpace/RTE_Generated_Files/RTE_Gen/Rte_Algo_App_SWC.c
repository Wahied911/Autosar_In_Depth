/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_Algo_App_SWC_.c
 * Generated on: Wed May 1 6:2:58 EET
 ********************************************************************/

#include "string.h"
#include "Rte_Algo_App_SWC.h"


Rte_DE_uint8 GetDoorStatusRunnable_RP_APP_SWC_DoorStatus;
Rte_DE_uint8 GetDoorStatusRunnable_PP_APP_SWC_LedStatus;


const Rte_CDS_Algo_App_SWC Rte_Instance_Algo_App_SWC = {
&GetDoorStatusRunnable_RP_APP_SWC_DoorStatus,
&GetDoorStatusRunnable_PP_APP_SWC_LedStatus
};

const Rte_CDS_Algo_App_SWC * const Rte_Inst_Algo_App_SWC = &Rte_Instance_Algo_App_SWC;




uint8 Rte_IRead_Algo_App_SWC_GetDoorStatusRunnable_RP_APP_SWC_DoorStatus (void)
{
	return (Rte_Inst_Algo_App_SWC)->GetDoorStatusRunnable_RP_APP_SWC_DoorStatus->value;
}
void Rte_IWrite_Algo_App_SWC_GetDoorStatusRunnable_PP_APP_SWC_LedStatus (uint8 LedStatus)
{
	(Rte_Inst_Algo_App_SWC)->GetDoorStatusRunnable_PP_APP_SWC_LedStatus->value = LedStatus;
}
uint8* Rte_IWriteRef_Algo_App_SWC_GetDoorStatusRunnable_PP_APP_SWC_LedStatus(void)
{
	return &(Rte_Inst_Algo_App_SWC)->GetDoorStatusRunnable_PP_APP_SWC_LedStatus->value;
}
