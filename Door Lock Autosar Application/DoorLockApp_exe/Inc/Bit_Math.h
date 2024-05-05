/***********************************************************************/
/*              		   Author  : Ahmed Wahied                      */
/*              		   Date    : 24/8/2022                         */
/*	               		   version :1                                  */
/***********************************************************************/


#ifndef Bit_Math_h 
#define Bit_Math_h

#define SET_BIT(VAR,BIT)              VAR=VAR |(1<<BIT)

#define CLR_BIT(VAR,BIT)              VAR=VAR &(~(1<<BIT))

#define TOG_BIT(VAR,BIT)              VAR=VAR ^(1<<BIT)

#define GET_BIT(VAR,BIT)              ((VAR >> BIT)&1)


#endif