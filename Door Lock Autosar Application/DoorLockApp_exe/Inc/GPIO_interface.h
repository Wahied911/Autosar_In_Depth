#ifndef GPIO_interface
#define GPIO_interface

/******************************************************************************************************************/
                                             // Functions of GPIO
/******************************************************************************************************************/

typedef unsigned char u8;

void MGPIO_VidSetPin_CLK(u8 copy_u8_ClkOptions,u8 Copy_u8Port, u8 Copy_u8Pin);
void MGPIO_VidSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 u8Copy_u8Mode,u8 copy_u8_Option);
void MGPIO_VidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 u8Copy_u8Value);
u8 MGPIO_VidGetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin);
void MGPIO_VidSetPortValue(u8 Copy_u8Port,u8 u8Copy_u8Value);



/******************************************************************************************************************/
                                           // Options For GPIO //
/******************************************************************************************************************/

#define GPIO_u8_PORTA    0
#define GPIO_u8_PORTB    1
#define GPIO_u8_PORTC    2
										  //             Modes Options for Pin         //
#define GPIO_u8_INPUT                             00
#define GPIO_u8_OUTPUT                            01
#define GPIO_u8_AF                                10
#define GPIO_u8_ANALOG                            11


										 //               Options for Output           //
#define GPIO_u8_OUTPUT_PUSH_PULL                   0
#define GPIO_u8_OUTPUT_OPEN_DRAIN                  1
									   	//                Options for Input            //

#define GPIO_u8_INPUT_NO_PULL_UD                   0b00
#define GPIO_u8_INPUT_PULL_UP                      0b01
#define GPIO_u8_INPUT_PULL_DOWN                    0b10

								    	//                 CLK FOR Output             //
#define GPIO_u8_OUTPUT_2MHZ                        0b00
#define GPIO_u8_OUTPUT_25MHZ                       0b01
#define GPIO_u8_OUTPUT_50MHZ                       0b10
#define GPIO_u8_OUTPUT_100MHZ                      0b11

										//               Options For Output           //
#define HIGH    1
#define LOW     0

                                      // SET PORT DIRECTION MODE
#define GPIO_u32_PORT_INPUT_MODE        0
#define GPIO_u32_PORT_OUTPUT_MODE       0x55555555
#define GPIO_u32_PORT_AF_MODE           0xAAAAAAAA
#define GPIO_u32_PORT_ANALOG_MODE       0xFFFFFFFF
                                     // SET PORT DIRECTION OPTION FOR INPUT

#define GPIO_u32_PORT_FLOATING        0
#define GPIO_u32_PORT_PULLUP          0x55555555
#define GPIO_u32_PORT_PULLDOWN        0xAAAAAAAA
									// SET PORT DIRECTION OPTION FOR OUTPUT
#define GPIO_u32_PORT_PUSHPULL          0
#define GPIO_u32_PORT_OPENDRAIN        0xFFFF

// Pins
#define PIN0    0
#define PIN1    1
#define PIN2    2
#define PIN3    3
#define PIN4    4
#define PIN5    5
#define PIN6    6
#define PIN7    7
#define PIN8    8
#define PIN9    9
#define PIN10    10
#define PIN11    11
#define PIN12    12
#define PIN13    13
#define PIN14    14
#define PIN15    15




#endif
