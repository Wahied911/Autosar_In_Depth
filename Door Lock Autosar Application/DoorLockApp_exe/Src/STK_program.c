/*
 * STK_program.c
 *
 *  Created on: Sep 10, 2022
 *      Author: ahmed
 */
#include "../Inc/STD_TYPES.h"
#include "../Inc/Bit_Math.h"
#include "../Inc/Systk_interface.h"
#include "../Inc/Systk_private.h"
#include "../Inc/Systk_config.h"



/* Define Variable for interval mode */
static u8 MSTK_u8ModeOfInterval;




void STK_void_Init(void)
{
	// choose clock
#if STK_CLK_SRC == STK_AHB_OVER_8_CLK
	CLR_BIT(STK->Systk_u32_STK_CTRL,2);
#elif STK_CLK_SRC == STK_AHB_CLK
	SET_BIT(STK->Systk_u32_STK_CTRL,2);
#endif
// disable systick
	CLR_BIT(STK->Systk_u32_STK_CTRL,0);

// disable systick INT
	CLR_BIT(STK->Systk_u32_STK_CTRL,1);
/*if (copy_IntEnable==INT_ON)
	SET_BIT(STK->Systk_u32_STK_CTRL,1);
else if(copy_IntEnable == INT_OFF)
	*/
}

void STK_void_Delay_ms(f32 copy_u32_delay_ms)
{
STK->Systk_u32_STK_LOAD = (copy_u32_delay_ms*1000*(AHB_CLK_SYS_MHZ/STK_CLK_SRC));
SET_BIT(STK->Systk_u32_STK_CTRL,0);
while(!GET_BIT(STK->Systk_u32_STK_CTRL,16));
CLR_BIT(STK->Systk_u32_STK_CTRL,0);
}

void STK_void_SETBusyWait(u32 copy_u32_Ticks)
{
STK->Systk_u32_STK_LOAD = (copy_u32_Ticks);
SET_BIT(STK->Systk_u32_STK_CTRL,0);
while(!GET_BIT(STK->Systk_u32_STK_CTRL,16));
CLR_BIT(STK->Systk_u32_STK_CTRL,0);
STK->Systk_u32_STK_LOAD = 0 ;
}


u32 STK_u32_GetElapsedtime(void)
{
return (STK->Systk_u32_STK_LOAD - STK->systk_u32_STK_VALUE);
}


u32 STK_u32_GetRemainingtime(void)
{
return (STK->systk_u32_STK_VALUE);
}

void (*CallBack) (void);
void STK_voidSetIntervalSignle(u32 copy_u32_Ticks , void (*ptr)(void))
{
	STK->Systk_u32_STK_LOAD = (copy_u32_Ticks);
	SET_BIT(STK->Systk_u32_STK_CTRL,0);
	CallBack = ptr ;
	MSTK_u8ModeOfInterval = MSTK_SINGLE_INTERVAL;
	SET_BIT(STK->Systk_u32_STK_CTRL,1);

}


void STK_voidSetIntervalPeriodic(u32 copy_u32_Ticks , void (*ptr)(void))
{
	CallBack = ptr ;
	STK->Systk_u32_STK_LOAD = (copy_u32_Ticks);
	SET_BIT(STK->Systk_u32_STK_CTRL,0);
	MSTK_u8ModeOfInterval = MSTK_PERIOD_INTERVAL;
	SET_BIT(STK->Systk_u32_STK_CTRL,1);
}



void SysTick_Handler(void)
{

	if (MSTK_u8ModeOfInterval == MSTK_SINGLE_INTERVAL)
	{
		/* Disable STK Interrupt */
		CLR_BIT(STK->Systk_u32_STK_CTRL,1);

		/* Stop Timer */
		SET_BIT(STK->Systk_u32_STK_CTRL, 0);
		STK->Systk_u32_STK_LOAD= 0;
	}

	CallBack();
	STK->systk_u32_STK_VALUE = STK->Systk_u32_STK_LOAD ;
}
