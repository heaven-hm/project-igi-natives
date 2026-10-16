#include "00435D90-Hatch_Init.h"
/* 0x00435d90 Hatch_Init full linked: callers=1 callees=12 */
void* Hatch_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Hatch", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd6c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_435c50);
    QTask_TriggerEvent(g_57bd6c, 1, sub_435e50);
    QTask_TriggerEvent(g_57bd6c, 2, sub_51b940);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd6c, eax_3, Hatch_LoadParameters);
    int32_t eax_4 = sub_4c56d0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_57bd6c;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_436090);
    int32_t eax_5 = sub_4c56e0();
    QTask_RemoveEventCallback(g_57bd6c, eax_5, sub_427d70);
    return TaskType_Set("TASKTYPE_HATCH", *g_57bd6c);
}
