#include "ComputerLog_Init.h"
int32_t ComputerLog_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ComputerLog", 0x24, QTask_OpenEvent_2(), 0);
    g_5bdc98 = valA1;
    QTask_RemoveEventCallback(valA1, 0, ComputerLog_LoadParameters);
    QTask_TriggerEvent(g_5bdc98, 1, sub_488700);
    QTask_TriggerEvent(g_5bdc98, 2, sub_468bb0);
    int32_t valA3 = StatusScreen_GetEvent();
    return QTask_TriggerEvent(g_5bdc98, valA3, ComputerLog_Setup);
}
