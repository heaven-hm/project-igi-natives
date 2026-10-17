// Original IGI.EXE function: ExplodeMagicObj_Init (VA 0x0043BFD0; static CFG gate PASS, CFG score 1.000).
#include "ExplodeMagicObj_Init.h"
void* ExplodeMagicObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ExplodeMagicObj", 0x150, MagicObj_GetTypeId(), 0);
    g_57bf7c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_43be80);
    QTask_TriggerEvent(g_57bf7c, 1, ExplodeMagicObj_LoadParameters_2);
    QTask_TriggerEvent(g_57bf7c, 2, ExplodeMagicObj_Setup);
    int32_t valA3 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_57bf7c, valA3, ExplodeMagicObj_LoadParameters);
    int32_t valA4 = DynObj_RegisterSymbol_6();
    int32_t v_8_1 = valA4;
    valA4 = g_57bf7c;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_43c2a0);
    int32_t valA5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bf7c, valA5, sub_43c2b0);
    int32_t valA6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bf7c, valA6, ExplodeMagicObj_Update);
    return TaskType_Set("TASKTYPE_EXPLODEMAGICOBJ", *g_57bf7c);
}
