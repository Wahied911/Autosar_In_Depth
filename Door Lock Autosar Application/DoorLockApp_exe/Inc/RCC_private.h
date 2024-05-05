/***********************************************************************/
/*              		   Author  : Ahmed Wahied                      */
/*              		   Date    : 26/8/2022                         */
/*	               		   version :1                                  */
/***********************************************************************/
#ifndef RCC_private
#define RCC_private


/***********************************************************************/


#define RCC_u32_BaseAddress    0x40023800


/***********************************************************************/

					/* Register Definations */

#define RCC_u32_CR_Reg                *((volatile u32*)(RCC_u32_BaseAddress+0x00))
#define RCC_u32_PLL_CFGR_Reg          *((volatile u32*)(RCC_u32_BaseAddress+0x04))
#define RCC_u32_CFGR_Reg              *((volatile u32*)(RCC_u32_BaseAddress+0x08))
#define RCC_u32_CIR_Reg               *((volatile u32*)(RCC_u32_BaseAddress+0x0C))
#define RCC_u32_AHB1RSTR_Reg          *((volatile u32*)(RCC_u32_BaseAddress+0x10))
#define RCC_u32_AHB2RSTR_Reg          *((volatile u32*)(RCC_u32_BaseAddress+0x14))
#define RCC_u32_AHB3RSTR_Reg          *((volatile u32*)(RCC_u32_BaseAddress+0x18))
#define RCC_u32_APB1RSTR_Reg          *((volatile u32*)(RCC_u32_BaseAddress+0x20))
#define RCC_u32_APB2RSTR_Reg          *((volatile u32*)(RCC_u32_BaseAddress+0x24))
#define RCC_u32_AHBENR_Reg            *((volatile u32*)(RCC_u32_BaseAddress+0x30))
#define RCC_u32_AHB2ENR_Reg           *((volatile u32*)(RCC_u32_BaseAddress+0x34))
#define RCC_u32_AHB3ENR_Reg           *((volatile u32*)(RCC_u32_BaseAddress+0x38))
#define RCC_u32_APB1ENR_Reg           *((volatile u32*)(RCC_u32_BaseAddress+0x40))
#define RCC_u32_APB2ENR_Reg           *((volatile u32*)(RCC_u32_BaseAddress+0x44))
#define RCC_u32_AHB1LPENR_Reg         *((volatile u32*)(RCC_u32_BaseAddress+0x50))
#define RCC_u32_AHB2LPENR_Reg         *((volatile u32*)(RCC_u32_BaseAddress+0x54))
#define RCC_u32_AHB3LPENR_Reg         *((volatile u32*)(RCC_u32_BaseAddress+0x58))
#define RCC_u32_APB1LPENR_Reg         *((volatile u32*)(RCC_u32_BaseAddress+0x60))
#define RCC_u32_APB2LPENR_Reg         *((volatile u32*)(RCC_u32_BaseAddress+0x64))
#define RCC_u32_BDCR_Reg        	  *((volatile u32*)(RCC_u32_BaseAddress+0x70))
#define RCC_u32_CSR_Reg          	  *((volatile u32*)(RCC_u32_BaseAddress+0x74))
#define RCC_u32_SSCGR_Reg        	  *((volatile u32*)(RCC_u32_BaseAddress+0x80))
#define RCC_u32_PLL2scfgr_Reg         *((volatile u32*)(RCC_u32_BaseAddress+0x84))
/***********************************************************************/

#define	 RCC_RC_HSE_ON 				 16
#define  RCC_RC_HSE_RDY 			 17
#define RCC_u8_CFGR_SWITCH0		     0
#define RCC_u8_CFGR_SWITCH1		      1
#define  RCC_RC_HSE_BYP				 18
#define  RCC_RC_HSI_ON 				 0
#define  RCC_RC_HSI_RDY			 	 1
#define  RCC_RC_PLL_ON               14
#define  RCC_RC_PLL_RDY              15
#define  RCC_CLK_SECURITY            19


#endif
