#ifndef Systk_private
#define Systk_private


#define Systk_u32_Base_Address                                  0xE000E010

typedef struct {

	volatile u32 Systk_u32_STK_CTRL;
	volatile u32 Systk_u32_STK_LOAD;
	volatile u32 systk_u32_STK_VALUE;
	volatile u32 systk_u32_STK_CALIB;
}STK_T;

#define STK ((volatile STK_T*)Systk_u32_Base_Address)




#define MSTK_SINGLE_INTERVAL 0
#define MSTK_PERIOD_INTERVAL 1














#endif
