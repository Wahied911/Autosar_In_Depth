/***********************************************************************/
/*              		   Author  : Ahmed Wahied                      */
/*              		   Date    : 26/8/2022                         */
/*	               		   version :1                                  */
/***********************************************************************/



#include "../Inc/STD_TYPES.h"
#include "../Inc/Bit_Math.h"

#include "../Inc/RCC_interface.h"
#include "../Inc/RCC_private.h"
#include "../Inc/RCC_config.h"




void RCC_void_EnableClock (u8 Copy_u8_BusID, u8 Copy_u8_PrephiralID)
{
if	(Copy_u8_PrephiralID <= 31)
	{
	
	switch(Copy_u8_BusID)
		{
		case RCC_AHB_BUS:  SET_BIT(RCC_u32_AHBENR_Reg,Copy_u8_PrephiralID)  ;
		break;
		
		case RCC_APB1_BUS: SET_BIT(RCC_u32_APB1ENR_Reg,Copy_u8_PrephiralID) ;
		break ;
		
		case RCC_APB2_BUS: SET_BIT(RCC_u32_APB2ENR_Reg,Copy_u8_PrephiralID) ;
		break ;
//		default : /*return error*/
		}	
	}	

else	{ /* return error */ }
}


void RCC_void_disableClock (u8 Copy_u8_BusID, u8 Copy_u8_PrephiralID)
{
if	(Copy_u8_PrephiralID <= 31)
	{
	
	switch(Copy_u8_BusID)
		{
		case RCC_AHB_BUS:  CLR_BIT(RCC_u32_AHBENR_Reg,Copy_u8_PrephiralID) ;  break ;
		
		case RCC_APB1_BUS: CLR_BIT(RCC_u32_APB1ENR_Reg,Copy_u8_PrephiralID) ; break ;
		
		case RCC_APB2_BUS: CLR_BIT(RCC_u32_APB2ENR_Reg,Copy_u8_PrephiralID) ; break ;

	//	default : /*return error*/

		}	

	}	

else	{ /* return error */ }
}



void RCC_void_Sys_Clock(void)
{
	#if RCC_u8_SYS_CLOCK == RCC_u8_HSE_CRYSTAL
												SET_BIT(RCC_u32_CR_Reg,RCC_RC_HSE_ON);
											while(!GET_BIT(RCC_u32_CR_Reg,RCC_RC_HSE_RDY));
												SET_BIT(RCC_u32_CFGR_Reg,RCC_u8_CFGR_SWITCH0);
												CLR_BIT(RCC_u32_CFGR_Reg,RCC_u8_CFGR_SWITCH1);
	#if 	 RCC_u8_CLK_SECURITY_SYSTEM == ON
												SET_BIT(RCC_u32_CR_Reg,RCC_CLK_SECURITY);
    #elif 	 RCC_u8_CLK_SECURITY_SYSTEM == OFF
												CLR_BIT(RCC_u32_CR_Reg,RCC_CLK_SECURITY);
	#endif




	#elif RCC_u8_SYS_CLOCK == RCC_u8_HSE_RC
												SET_BIT(RCC_u32_CR_Reg,RCC_RC_HSE_BYP)
												SET_BIT(RCC_u32_CR_Reg,RCC_RC_HSE_ON);
												while(!GET_BIT(RCC_u32_CR_Reg,RCC_RC_HSE_RDY));
												SET_BIT(RCC_u32_CFGR_Reg,RCC_u8_CFGR_SWITCH0);
												CLR_BIT(RCC_u32_CFGR_Reg,RCC_u8_CFGR_SWITCH1);
	#if 	 RCC_u8_CLK_SECURITY_SYSTEM == ON
												SET_BIT(RCC_u32_CR_Reg,RCC_CLK_SECURITY);
    #elif 	 RCC_u8_CLK_SECURITY_SYSTEM == OFF
												CLR_BIT(RCC_u32_CR_Reg,RCC_CLK_SECURITY);
	#endif



	#elif RCC_u8_SYS_CLOCK == RCC_u8_HSI
												SET_BIT(RCC_u32_CR_Reg,RCC_RC_HSI_ON);
												while(!GET_BIT(RCC_u32_CR_Reg,RCC_RC_HSI_RDY));
												CLR_BIT(RCC_u32_CFGR_Reg,RCC_u8_CFGR_SWITCH0);
												CLR_BIT(RCC_u32_CFGR_Reg,RCC_u8_CFGR_SWITCH1);
/*
	#elif RCC_u8_SYS_CLOCK == RCC_u8_PLL

												SET_BIT(RCC_u32_CR_Reg,RCC_RC_PLL_ON);
								     			while(!GET_BIT(RCC_u32_CR_Reg,RCC_RC_PLL_RDY));
	#if RCC_u8_PLL_INPUT   == RCC_u8_PLL_HSI_DIV_2
												CLR_BIT(RCC_u32_CFGR_Reg,RCC_u8_PLL_HSI_DIV_2);
	#elif RCC_u8_PLL_INPUT == RCC_u8_PLL_HSE_DIV_2
												SET_BIT(RCC_u32_CFGR_Reg,RCC_u8_PLL_HSÙ�E_DIV_2);
	#elif RCC_u8_PLL_INPUT == RCC_u8_PLL_HSE
												SET_BIT(RCC_u32_CFGR_Reg,RCC_u8_PLL_HSE);

	#endif


	#else #error("You chosed Wrong Clock type")
	*/
	#endif

}



u8 RCC_void_CheckSysClk (void)
{
u8 RCC_u8_Check_Number=(RCC_u32_CFGR_Reg>>2) & 0x3 ;
switch 	(RCC_u8_Check_Number)
{
	case 0 : return RCC_u8_HSI; 			break ;
	case 1 : return RCC_u8_HSE_GENERAL; 	break ;
	case 2 : return RCC_u8_PLL;			break ;
}
}




void RCC_void_RepairClk (u16 copy_RCC_Differance_ByKilo)
{
	copy_RCC_Differance_ByKilo = copy_RCC_Differance_ByKilo / 40 ;
if(copy_RCC_Differance_ByKilo > 0)
								{
								RCC_u32_CR_Reg=((16+copy_RCC_Differance_ByKilo)<<3) | RCC_u32_CR_Reg;
								}


}

