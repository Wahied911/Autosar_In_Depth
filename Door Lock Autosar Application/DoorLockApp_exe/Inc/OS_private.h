#ifndef OS_private
#define OS_private


typedef struct
{
u16 Priodicity	;
u16 FirstDelay ;
void (*PTR) (void);
u8 State ;
}TASK;



#define RUNNING_STATE         0
#define SUSPENDED_STATE       1
#define WAITING_STATE         2
#define READY_STATE           3







#endif
