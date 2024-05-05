#ifndef Systk_interface
#define Systk_interface

void STK_void_Init(void);
void STK_void_Delay_ms(f32 copy_u32_delay_ms);
void STK_void_SETBusyWait(u32 copy_u32_Ticks);
u32 STK_u32_GetElapsedtime(void);
u32 STK_u32_GetRemainingtime(void);
void STK_voidSetIntervalSignle(u32 copy_u32_Ticks , void (*ptr)(void));
void STK_voidSetIntervalPeriodic(u32 copy_u32_Ticks , void (*ptr)(void));



#define STK_AHB_OVER_8_CLK             8
#define STK_AHB_CLK                    1


#define INT_ON       1
#define INT_OFF      0



#endif
