
#include "../Inc/BIT_MATH.h"
#include "../Inc/STD_TYPES.h"
#include "../Inc/RCC_interface.h"
#include "../Inc/Systk_interface.h"
#include "../Inc/GPIO_interface.h"
#include "../Inc/OS_interface.h"

void MCU_init(void)
{
 	/*Enable CLock*/
	RCC_void_Sys_Clock();
	RCC_void_EnableClock(RCC_AHB_BUS,RCC_u8_GPIO_PORTA);
	/* Enable Systick */
	STK_void_Init();
	/* Config Used Pins */
	MGPIO_VidSetPinDirection(GPIO_u8_PORTA, PIN0,GPIO_u8_OUTPUT,GPIO_u8_OUTPUT_PUSH_PULL);
	MGPIO_VidSetPinDirection(GPIO_u8_PORTA, PIN3,GPIO_u8_INPUT,GPIO_u8_INPUT_PULL_UP);
}
void StartOS()
{
	unsigned char i = 0 ;
	//it is not memec 10ms or 12ms
	//it is just a prodic sequence fast implementation
	//as we will focus on implement OS and used accurate time based on the timer later on AUTOSAR OS unit
	//But nw we focused only on APPLICATion Layer
	while (1)
	{
		//memec RTE_Event_10ms
		if (i==10)
		{
			SendDoorStatuToSA1();
			i++ ;
		}else if (i==12)
		{
			//memec RTE_Event_12ms
			GetDoorStatusFromIO();
			i++;
		}
		else if (i==15)
		{
			//memec RTE_Event_15ms
			GetDoorStatusFromSA1();
			i++;
		}
		else if (i==18)
		{
			//memec RTE_Event_18ms
			GetDoorStatusFromApp();
			i=0 ;
		}
		else
		{
			i++ ;
		}
	}

}

int main(void){
MCU_init();
StartOS();
//SOS_voidStart();
while(1)
	{
	}

}




