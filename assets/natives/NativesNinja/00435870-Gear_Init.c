#include "00435870-Gear_Init.h"
/* 0x00435870 Gear_Init full linked: callers=1 callees=12 */
void* Gear_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Gear", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd64 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_435460);
    QTask_TriggerEvent(g_57bd64, 1, sub_435930);
    QTask_TriggerEvent(g_57bd64, 2, sub_51b940);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd64, eax_3, Gear_LoadParameters);
    int32_t eax_4 = sub_4c56d0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_57bd64;
    QTask_RemoveEventCallback(eax_4, var_8_1, Gear_Setup);
    int32_t eax_5 = sub_4c56e0();
    QTask_RemoveEventCallback(g_57bd64, eax_5, sub_4eff20);
    return TaskType_Set("TASKTYPE_GEAR", *g_57bd64);
}
