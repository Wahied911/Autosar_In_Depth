/***********************************************************************/
/*              		   Author  : Ahmed Wahied                      */
/*              		   Date    : 26/8/2022                         */
/*	               		   version :1                                  */
/***********************************************************************/
#ifndef RCC_config
#define RCC_config

/* System clock config 
   1 - RCC_u8_HSE_CRYSTAL
   2-  RCC_u8_HSE_RC
   3-  RCC_u8_HSI
   */
#define RCC_u8_SYS_CLOCK     RCC_u8_HSI

/* PLL options 
RCC_u8_PLL_HSI_DIV_2
RCC_u8_PLL_HSI_DIV_2 
RCC_u8_PLL_HSE
*/
#define RCC_u8_PLL_INPUT     RCC_u8_PLL_HSE
/* CLOCK SECURITY SYSTEM 
   1-  ON
   2-  OFF
   */
   
#define RCC_u8_CLK_SECURITY_SYSTEM  ON
#endif
