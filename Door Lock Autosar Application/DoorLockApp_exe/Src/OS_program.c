#include "../Inc/STD_TYPES.h"
#include "../Inc/Systk_interface.h"
#include "../Inc/GPIO_interface.h"
#include "../Inc/OS_interface.h"
#include "../Inc/OS_private.h"
#include "../Inc/OS_config.h"

#define NULL (void *)0
// Array of Tasks
static TASK OS_TASKS[NUMBER_OF_TASKS] = { NULL };
u8 NumberOfTasks=NUMBER_OF_TASKS;
void SOS_voidCreateTask(u8 copy_u8Pariorty, u16 Copy_u8Priodicity,
		void (*PTR_OF_FUNC)(void), u16 copy_u16FirstDelay) {
	OS_TASKS[copy_u8Pariorty].Priodicity = Copy_u8Priodicity;
	OS_TASKS[copy_u8Pariorty].PTR = PTR_OF_FUNC;
	OS_TASKS[copy_u8Pariorty].FirstDelay = copy_u16FirstDelay;
	OS_TASKS[copy_u8Pariorty].State = READY_STATE;
}

void SOS_voidStart(void) {
	/*               INIT                   */
	STK_void_Init();

	/*       TICK => 1 msec                 */
	STK_voidSetIntervalPeriodic(2000, scheduler);

}

void scheduler(void) {
	for (u16 i = 0; i < NumberOfTasks; i++) {
		if ((OS_TASKS[i].PTR != NULL ) && (OS_TASKS[i].State == READY_STATE)) {
			if (OS_TASKS[i].FirstDelay == 0) {
				OS_TASKS[i].State = RUNNING_STATE;
				OS_TASKS[i].PTR();
				OS_TASKS[i].FirstDelay = OS_TASKS[i].Priodicity - 1;
				OS_TASKS[i].State = READY_STATE;

			} else {
				OS_TASKS[i].FirstDelay--;
			}
		}
	}

}

void void_Suspend_Task (u8 copy_u8Pariorty)
{
	OS_TASKS[copy_u8Pariorty].State = SUSPENDED_STATE;
}

void void_Resume_Task (u8 copy_u8Pariorty)
{
   if (OS_TASKS[copy_u8Pariorty].State == SUSPENDED_STATE)
	OS_TASKS[copy_u8Pariorty].State = READY_STATE;
}


void void_Delete_Task(u8 copy_u8Pariorty)
{
for(int i=(copy_u8Pariorty+1) ; i<NumberOfTasks; i++)
{
	OS_TASKS[i-1].Priodicity = OS_TASKS[i].Priodicity;
	OS_TASKS[i-1].PTR        = OS_TASKS[i].PTR       ;
	OS_TASKS[i-1].FirstDelay = OS_TASKS[i].FirstDelay;
	OS_TASKS[i-1].State      = OS_TASKS[i].State     ;
}
NumberOfTasks--;
}

// pause TASK ID to SUSPENDED
// resume task
// delete task
