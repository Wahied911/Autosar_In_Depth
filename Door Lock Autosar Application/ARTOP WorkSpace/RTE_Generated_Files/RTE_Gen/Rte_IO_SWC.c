/********************************************************************
 * Automatically generated by ARUnit
 * Filename: Rte_IO_SWC_.c
 * Generated on: Wed May 1 6:2:58 EET
 ********************************************************************/

#include "string.h"
#include "Rte_IO_SWC.h"


Rte_DE_uint8 ReadDoorStatus_PP_IO_SWC_DoorStatus;


const Rte_CDS_IO_SWC Rte_Instance_IO_SWC = {
&ReadDoorStatus_PP_IO_SWC_DoorStatus
};

const Rte_CDS_IO_SWC * const Rte_Inst_IO_SWC = &Rte_Instance_IO_SWC;




void Rte_IWrite_IO_SWC_ReadDoorStatus_PP_IO_SWC_DoorStatus (uint8 DoorStatus)
{
	(Rte_Inst_IO_SWC)->ReadDoorStatus_PP_IO_SWC_DoorStatus->value = DoorStatus;
}
uint8* Rte_IWriteRef_IO_SWC_ReadDoorStatus_PP_IO_SWC_DoorStatus(void)
{
	return &(Rte_Inst_IO_SWC)->ReadDoorStatus_PP_IO_SWC_DoorStatus->value;
}