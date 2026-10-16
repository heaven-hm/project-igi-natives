#include "0043BFD0-ExplodeMagicObj_Init.h"
/* 0x0043bfd0 ExplodeMagicObj_Init full linked: callers=1 callees=14 */
void* ExplodeMagicObj_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ExplodeMagicObj", 0x150, MagicObj_GetTypeId(), 0);
    g_57bf7c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_43be80);
    QTask_TriggerEvent(g_57bf7c, 1, ExplodeMagicObj_LoadParameters_2);
    QTask_TriggerEvent(g_57bf7c, 2, sub_449950);
    int32_t eax_3 = sub_4c56d0();
    QTask_RemoveEventCallback(g_57bf7c, eax_3, ExplodeMagicObj_LoadParameters);
    int32_t eax_4 = sub_4c56e0();
    int32_t var_8_1 = eax_4;
    eax_4 = g_57bf7c;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_43c2a0);
    int32_t eax_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bf7c, eax_5, sub_43c2b0);
    int32_t eax_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bf7c, eax_6, ExplodeMagicObj_Update);
    return TaskType_Set("TASKTYPE_EXPLODEMAGICOBJ", *g_57bf7c);
}
