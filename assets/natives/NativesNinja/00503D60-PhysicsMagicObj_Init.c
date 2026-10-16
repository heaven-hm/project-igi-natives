#include "00503D60-PhysicsMagicObj_Init.h"
/* 0x00503d60 PhysicsMagicObj_Init full linked: callers=1 callees=8 */
void* sub_503d60()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("PhysicsMagicObj", 0x768, sub_4fb5e0(), 0);
    g_54e66c = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_4d9970);
    QTask_RemoveEventCallback(g_54e66c, 0, sub_503df0);
    int32_t eax_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_54e66c, eax_3, sub_503f20);
    QTask_RemoveEventCallback(g_54e66c, 0xc, sub_504250);
    return TaskType_Set("TASKTYPE_PHYSICSMAGICOBJ", *g_54e66c);
}
