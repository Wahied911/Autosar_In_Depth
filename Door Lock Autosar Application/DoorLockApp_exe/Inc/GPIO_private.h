/***********************************************************************/
/*              		   Author  : Ahmed Wahied                      */
/*              		   Date    : 26/8/2022                         */
/*	               		   version :1                                  */
/***********************************************************************/
#ifndef GPIO_private
#define GPIO_private

#define GPIO_PORTA_BASE_REG               0x40020000
#define GPIO_PORTB_BASE_REG               0x40020400
#define GPIO_PORTC_BASE_REG               0x40020800

/*******************************************************************************/
/* Port A REGISTERS */
#define GPIO_u32_PORTA_MODER                   *((volatile u32*)(GPIO_PORTA_BASE_REG+0x00))
#define GPIO_u32_PORTA_OTYPER                  *((volatile u32*)(GPIO_PORTA_BASE_REG+0x04))
#define GPIO_u32_PORTA_OSPEED                  *((volatile u32*)(GPIO_PORTA_BASE_REG+0x08))
#define GPIO_u32_PORTA_PUPDR                   *((volatile u32*)(GPIO_PORTA_BASE_REG+0x0C))
#define GPIO_u32_PORTA_IDR                     *((volatile u32*)(GPIO_PORTA_BASE_REG+0x10))
#define GPIO_u32_PORTA_ODR                     *((volatile u32*)(GPIO_PORTA_BASE_REG+0x14))
#define GPIO_u32_PORTA_BSRR                    *((volatile u32*)(GPIO_PORTA_BASE_REG+0x18))
#define GPIO_u32_PORTA_LCKR                    *((volatile u32*)(GPIO_PORTA_BASE_REG+0x1C))

/* Port B REGISTERS */

#define GPIO_u32_PORTB_MODER                   *((volatile u32*)(GPIO_PORTB_BASE_REG+0x00))
#define GPIO_u32_PORTB_OTYPER                  *((volatile u32*)(GPIO_PORTB_BASE_REG+0x04))
#define GPIO_u32_PORTB_OSPEED                  *((volatile u32*)(GPIO_PORTB_BASE_REG+0x08))
#define GPIO_u32_PORTB_PUPDR                   *((volatile u32*)(GPIO_PORTB_BASE_REG+0x0C))
#define GPIO_u32_PORTB_IDR                     *((volatile u32*)(GPIO_PORTB_BASE_REG+0x10))
#define GPIO_u32_PORTB_ODR                     *((volatile u32*)(GPIO_PORTB_BASE_REG+0x14))
#define GPIO_u32_PORTB_BSRR                    *((volatile u32*)(GPIO_PORTB_BASE_REG+0x18))
#define GPIO_u32_PORTB_LCKR                    *((volatile u32*)(GPIO_PORTB_BASE_REG+0x1C))

/* Port c REGISTERS */

#define GPIO_u32_PORTC_MODER                  *((volatile u32*)(GPIO_PORTC_BASE_REG+0x00))
#define GPIO_u32_PORTC_OTYPER                 *((volatile u32*)(GPIO_PORTC_BASE_REG+0x04))
#define GPIO_u32_PORTC_OSPEED                 *((volatile u32*)(GPIO_PORTC_BASE_REG+0x08))
#define GPIO_u32_PORTC_PUPDR                  *((volatile u32*)(GPIO_PORTC_BASE_REG+0x0C))
#define GPIO_u32_PORTC_IDR                    *((volatile u32*)(GPIO_PORTC_BASE_REG+0x10))
#define GPIO_u32_PORTC_ODR                    *((volatile u32*)(GPIO_PORTC_BASE_REG+0x14))
#define GPIO_u32_PORTC_BSRR                   *((volatile u32*)(GPIO_PORTC_BASE_REG+0x18))
#define GPIO_u32_PORTC_LCKR                   *((volatile u32*)(GPIO_PORTC_BASE_REG+0x1C))

#endif
