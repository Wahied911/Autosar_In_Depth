/*
 * GPIO_program.c
 *
 *  Created on: Aug 29, 2022
 *      Author: ahmed
 */
#include "../Inc/STD_TYPES.h"
#include "../Inc/Bit_Math.h"
#include "../Inc/GPIO_interface.h"
#include "../Inc/GPIO_private.h"
#include "../Inc/RCC_config.h"

void MGPIO_VidSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 u8Copy_u8Mode,
		u8 copy_u8_Option) {
	switch (Copy_u8Port) {
	case GPIO_u8_PORTA:

		GPIO_u32_PORTA_MODER = GPIO_u32_PORTA_MODER
				& (~(0b11 << (Copy_u8Pin * 2)));
		GPIO_u32_PORTA_MODER = GPIO_u32_PORTA_MODER
				| (u8Copy_u8Mode << (Copy_u8Pin * 2));
		switch (u8Copy_u8Mode) {
		case GPIO_u8_INPUT:
			GPIO_u32_PORTA_PUPDR &= (~(0b11 << (Copy_u8Pin * 2)));
			GPIO_u32_PORTA_PUPDR |= copy_u8_Option;
			break;
		case GPIO_u8_OUTPUT:
			switch (copy_u8_Option) {
			case GPIO_u8_OUTPUT_PUSH_PULL:
				CLR_BIT(GPIO_u32_PORTA_OTYPER, Copy_u8Pin);
				break;
			case GPIO_u8_OUTPUT_OPEN_DRAIN:
				SET_BIT(GPIO_u32_PORTA_OTYPER, Copy_u8Pin);
				break;
			default:
				break;
			}
			break;
		}
		break;

	case GPIO_u8_PORTB:
		GPIO_u32_PORTB_MODER = GPIO_u32_PORTB_MODER
				& (~(0b11 << (Copy_u8Pin * 2)));
		GPIO_u32_PORTB_MODER = GPIO_u32_PORTB_MODER
				| (u8Copy_u8Mode << (Copy_u8Pin * 2));
		switch (u8Copy_u8Mode) {
		case GPIO_u8_INPUT:
			GPIO_u32_PORTB_PUPDR &= (~(0b11 << (Copy_u8Pin * 2)));
			GPIO_u32_PORTB_PUPDR |= copy_u8_Option;
			break;
			break;
		case GPIO_u8_OUTPUT:
			switch (copy_u8_Option) {
			case GPIO_u8_OUTPUT_PUSH_PULL:
				CLR_BIT(GPIO_u32_PORTB_OTYPER, Copy_u8Pin);
				break;
			case GPIO_u8_OUTPUT_OPEN_DRAIN:
				SET_BIT(GPIO_u32_PORTB_OTYPER, Copy_u8Pin);
				break;
			default:
				break;
			}
			break;
		}
		break;

	case GPIO_u8_PORTC:
		GPIO_u32_PORTC_MODER = GPIO_u32_PORTC_MODER
				& (~(0b11 << (Copy_u8Pin * 2)));
		GPIO_u32_PORTC_MODER = GPIO_u32_PORTC_MODER
				| (u8Copy_u8Mode << (Copy_u8Pin * 2));
		switch (u8Copy_u8Mode) {
		case GPIO_u8_INPUT:
			GPIO_u32_PORTC_PUPDR &= (~(0b11 << (Copy_u8Pin * 2)));
			GPIO_u32_PORTC_PUPDR |= copy_u8_Option;
			break;
			break;
		case GPIO_u8_OUTPUT:
			switch (copy_u8_Option) {
			case GPIO_u8_OUTPUT_PUSH_PULL:
				CLR_BIT(GPIO_u32_PORTC_OTYPER, Copy_u8Pin);
				break;
			case GPIO_u8_OUTPUT_OPEN_DRAIN:
				SET_BIT(GPIO_u32_PORTC_OTYPER, Copy_u8Pin);
				break;
			default:
				break;
			}
		}
		break;
	}

}
void MGPIO_VidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 u8Copy_u8Value) {
	switch (Copy_u8Port) {
	case GPIO_u8_PORTA:
		if (u8Copy_u8Value == HIGH)
			SET_BIT(GPIO_u32_PORTA_ODR, Copy_u8Pin);
		else
			CLR_BIT(GPIO_u32_PORTA_ODR, Copy_u8Pin);
		break;

	case GPIO_u8_PORTB:
		if (u8Copy_u8Value == HIGH)
			SET_BIT(GPIO_u32_PORTB_ODR, Copy_u8Pin);
		else
			CLR_BIT(GPIO_u32_PORTB_ODR, Copy_u8Pin);
		break;
	case GPIO_u8_PORTC:
		if (u8Copy_u8Value == HIGH)
			SET_BIT(GPIO_u32_PORTC_ODR, Copy_u8Pin);
		else
			CLR_BIT(GPIO_u32_PORTC_ODR, Copy_u8Pin);
		break;
		break;
	}

}
u8 MGPIO_VidGetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin) {
	u8 local_u8_ReturnedValue = 0;
	switch (Copy_u8Port) {
	case GPIO_u8_PORTA:
	local_u8_ReturnedValue = GET_BIT(GPIO_u32_PORTA_IDR, Copy_u8Pin);
	break;

case GPIO_u8_PORTB:
	local_u8_ReturnedValue = GET_BIT(GPIO_u32_PORTB_IDR, Copy_u8Pin);

	break;
case GPIO_u8_PORTC:
	local_u8_ReturnedValue = GET_BIT(GPIO_u32_PORTB_IDR, Copy_u8Pin);
	break;
	}
	return local_u8_ReturnedValue;
}

void MGPIO_VidSetPin_CLK(u8 copy_u8_ClkOptions, u8 Copy_u8Port, u8 Copy_u8Pin) {
	switch (Copy_u8Port) {
	case GPIO_u8_PORTA:
		GPIO_u32_PORTA_OSPEED = GPIO_u32_PORTA_OSPEED
				& (~(0b11 << (Copy_u8Pin * 2)));
		GPIO_u32_PORTA_OSPEED = GPIO_u32_PORTA_OSPEED
				| ((copy_u8_ClkOptions) << (Copy_u8Pin * 2));
		break;
	case GPIO_u8_PORTB:
		GPIO_u32_PORTA_OSPEED = GPIO_u32_PORTB_OSPEED
				& (~(0b11 << (Copy_u8Pin * 2)));
		GPIO_u32_PORTB_OSPEED = GPIO_u32_PORTB_OSPEED
				| ((copy_u8_ClkOptions) << (Copy_u8Pin * 2));
		break;
	case GPIO_u8_PORTC:
		GPIO_u32_PORTC_OSPEED = GPIO_u32_PORTC_OSPEED
				& (~(0b11 << (Copy_u8Pin * 2)));
		GPIO_u32_PORTC_OSPEED = GPIO_u32_PORTC_OSPEED
				| ((copy_u8_ClkOptions) << (Copy_u8Pin * 2));
		break;
	}
}


void MGPIO_VidSetPortDirection(u8 Copy_u8Port,u32 GPIO_u32_PORT_MODE,u8 copy_u8_PORT_OPTION)
{

switch (Copy_u8Port)
{
case GPIO_u8_PORTA:
	GPIO_u32_PORTA_MODER = GPIO_u32_PORT_MODE;
	switch(GPIO_u32_PORT_MODE)
	{
	case GPIO_u32_PORT_INPUT_MODE :GPIO_u32_PORTA_PUPDR =   copy_u8_PORT_OPTION; break;
	case GPIO_u32_PORT_OUTPUT_MODE : GPIO_u32_PORTA_OTYPER =copy_u8_PORT_OPTION; break;
	}
	break;
case GPIO_u8_PORTB:
	GPIO_u32_PORTB_MODER = GPIO_u32_PORT_MODE;
	switch(GPIO_u32_PORT_MODE)
	{
	case GPIO_u32_PORT_INPUT_MODE :  GPIO_u32_PORTB_PUPDR =   copy_u8_PORT_OPTION; break;
	case GPIO_u32_PORT_OUTPUT_MODE : GPIO_u32_PORTB_OTYPER =copy_u8_PORT_OPTION; break;
	}
	break;
case GPIO_u8_PORTC:
	GPIO_u32_PORTC_MODER = GPIO_u32_PORT_MODE;
	switch(GPIO_u32_PORT_MODE)
	{
	case GPIO_u32_PORT_INPUT_MODE :GPIO_u32_PORTC_PUPDR =   copy_u8_PORT_OPTION; break;
	case GPIO_u32_PORT_OUTPUT_MODE : GPIO_u32_PORTC_OTYPER =copy_u8_PORT_OPTION; break;
	}
	break;
}
}


void MGPIO_VidSetPORTVALUE(u8 Copy_u8Port,u8 u8Copy_u8Value)
{

switch (Copy_u8Port)
{
case GPIO_u8_PORTA: GPIO_u32_PORTA_ODR = u8Copy_u8Value ; break;
case GPIO_u8_PORTB: GPIO_u32_PORTB_ODR = u8Copy_u8Value ; break;
case GPIO_u8_PORTC: GPIO_u32_PORTC_ODR = u8Copy_u8Value ; break;
}
}




