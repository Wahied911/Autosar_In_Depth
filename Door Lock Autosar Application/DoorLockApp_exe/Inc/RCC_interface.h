/***********************************************************************/
/*              		   Author  : Ahmed Wahied                      */
/*              		   Date    : 26/8/2022                         */
/*	               		   version :1                                  */
/***********************************************************************/
#ifndef RCC_interface
#define RCC_interface



void RCC_void_EnableClock (u8 Copy_u8_ChooseBus , u8 Copy_u8_Choose_Prephiral);
void RCC_void_disableClock (u8 Copy_u8_BusID, u8 Copy_u8_PrephiralID);
void RCC_void_Sys_Clock(void);
u8 RCC_void_CheckSysClk (void);
void RCC_void_RepairClk (u16 copy_RCC_Differance_ByKilo);







#define RCC_AHB_BUS 	0

#define RCC_APB1_BUS 	1

#define RCC_APB2_BUS	2

#define RCC_u8_HSI               0
#define RCC_u8_HSE_CRYSTAL 		 1
#define RCC_u8_HSE_RC 			 4
#define RCC_u8_PLL 				 2
#define RCC_u8_HSE_GENERAL       1

#define  RCC_u8_PLL_HSI_DIV_2     16
#define  RCC_u8_PLL_HSE_DIV_2	  17
#define  RCC_u8_PLL_HSE			  16

#define  ON   	     1
#define  OFF	     0

#define RCC_u8_GPIO_PORTA   0
#define RCC_u8_GPIO_PORTB   1
#define RCC_u8_GPIO_PORTC   2

#endif
