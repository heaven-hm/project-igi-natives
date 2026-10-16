#include "004688B0-ComputerLog_Init.h"
/* 0x004688b0 ComputerLog_Init full linked: callers=1 callees=7 */
int32_t sub_4688b0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ComputerLog", 0x24, QTask_OpenEvent_2(), 0);
    g_5bdc98 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_468920);
    QTask_TriggerEvent(g_5bdc98, 1, sub_488700);
    QTask_TriggerEvent(g_5bdc98, 2, sub_468bb0);
    int32_t eax_3 = sub_4e7530();
    return QTask_TriggerEvent(g_5bdc98, eax_3, sub_468bc0);
}
