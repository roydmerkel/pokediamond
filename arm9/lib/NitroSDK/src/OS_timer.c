#include "OS_timer.h"
#include "function_target.h"
#include "code32.h"

static u16 OSi_TimerReserved = 0;

void OSi_SetTimerReserved(s32 timerNum)
{
    OSi_TimerReserved |= (1 << timerNum);
}
