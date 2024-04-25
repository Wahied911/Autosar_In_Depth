#include "RTE_SWC.h"

void GetSum(void)
{
	std_ReturnType status=E_NOT_OK;
	unsigned short int Var1,Var2;
	unsigned int Result;
	RTE_Read_Required_Parameters_Var1(&Var1);
	RTE_Read_Required_Parameters_Var1(&Var2);
	Result = Var1 + Var2 ;
	status = RTE_Write_Provided_Parameters_Result(Result);
}