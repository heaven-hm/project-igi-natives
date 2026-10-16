#include "004361D0-Rudder_Init.h"
/* 0x004361d0 Rudder_Init full linked: callers=1 callees=16 */
void* Rudder_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Rudder", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd74 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, Rudder_LoadParameters);
    QTask_TriggerEvent(g_57bd74, 1, sub_488700);
    QTask_TriggerEvent(g_57bd74, 2, sub_51b940);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd74, eax_3, Rudder_Setup);
    int32_t eax_4 = sub_4c56d0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_57bd74;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_436740);
    int32_t eax_5 = sub_4c56e0();
    QTask_RemoveEventCallback(g_57bd74, eax_5, sub_427f80);
    TaskType_Set("TASKTYPE_RUDDER", *g_57bd74);
    TaskType_Set("RUDDER_TAILERON_LEFT", 1);
    TaskType_Set("RUDDER_TAILERON_RIGHT", 2);
    TaskType_Set("RUDDER_AILERON", 0);
    return TaskType_Set("RUDDER_GAMMA", 3);
}
