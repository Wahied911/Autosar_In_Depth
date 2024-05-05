/*
 * DIO.h
 *
 *  Created on: Apr 30, 2024
 *      Author: ahmed
 */

#ifndef MCAL_DIO_H_
#define MCAL_DIO_H_


unsigned char Dio_ReadChannel(void);
void          Dio_WriteChannel(unsigned char Value);

// DIO Ports

//#define DIO_DOOR 	GPIO_PIN_3
//#define DIO_LED_ID  GPIO_PIN_7
//
//
//#define DIO_PortUsed GPIOA


#endif /* MCAL_DIO_H_ */
