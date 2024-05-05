/*
 * DIO.c
 *
 *  Created on: Apr 30, 2024
 *      Author: ahmed
 */
#include "../Inc/GPIO_interface.h"
#include "../Inc/DIO.h"
unsigned char Dio_ReadChannel(void)
{
return MGPIO_VidGetPinValue(GPIO_u8_PORTA, PIN3);
}
void Dio_WriteChannel(unsigned char Value)
{
	MGPIO_VidSetPinValue(GPIO_u8_PORTA, PIN0, Value);
}
