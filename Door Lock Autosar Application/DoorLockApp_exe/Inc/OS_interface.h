#ifndef OS_interface
#define OS_interface


void SOS_voidCreateTask(u8 copy_u8Pariorty, u16 Copy_u8Priodicity,void (*PTR_OF_FUNC)(void),u16 copy_u16FirstDelay);
void SOS_voidStart(void);
void scheduler(void);
void void_Suspend_Task (u8 copy_u8Pariorty);
void void_Resume_Task (u8 copy_u8Pariorty);
void void_Delete_Task(u8 copy_u8Pariorty);









#endif
