#include "005317D0-BoneMagicObj_Init.h"
/* 0x005317d0 BoneMagicObj_Init full linked: callers=1 callees=16 */
void* sub_5317d0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("BoneMagicObj", 0x130, sub_4d9610(), 0);
    g_54f848 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, 0);
    int32_t eax_2 = sub_4c56f0();
    int32_t var_8 = eax_2;
    eax_2 = g_54f848;
    QTask_RemoveEventCallback(eax_2, var_8, sub_5316f0);
    QTask_TriggerEvent(g_54f848, 1, sub_531620);
    QTask_RemoveEventCallback(g_54f848, 0, sub_5318d0);
    int32_t eax_3 = MagicObj_GetEventId();
    int32_t var_8_1 = eax_3;
    eax_3 = g_54f848;
    QTask_RemoveEventCallback(eax_3, var_8_1, sub_5319b0);
    QTask_RemoveEventCallback(g_54f848, 0xc, sub_531ca0);
    int32_t eax_4 = sub_4c56d0();
    QTask_RemoveEventCallback(g_54f848, eax_4, sub_531cd0);
    int32_t eax_5 = sub_4c56e0();
    int32_t var_8_3 = eax_5;
    eax_5 = g_54f848;
    QTask_RemoveEventCallback(eax_5, var_8_3, sub_427f80);
    QTask_TriggerEvent(g_54f848, 2, sub_5317b0);
    return TaskType_Set("TASKTYPE_BONEMAGICOBJ", *g_54f848);
}
