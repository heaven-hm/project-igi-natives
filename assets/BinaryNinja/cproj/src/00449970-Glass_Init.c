#include "gi_platform.h"
#include "00449970-Glass_Init.h"
void* Glass_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Glass", 0x148, MagicObj_GetTypeId(), 0);
    g_57c220 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4497f0);
    QTask_TriggerEvent(g_57c220, 1, Glass_LoadParameters);
    QTask_TriggerEvent(g_57c220, 2, ExplodeMagicObj_Setup);
    int32_t valA3 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_57c220, valA3, AIGraph_LoadParameters);
    int32_t valA4 = DynObj_RegisterSymbol_6();
    int32_t v_8_1 = valA4;
    valA4 = g_57c220;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_427d70);
    int32_t valA5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c220, valA5, sub_449b00);
    int32_t valA6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57c220, valA6, Glass_Update);
    int32_t valA7 = Script_CallNativeHandler_29();
    int32_t v_8_4 = valA7;
    valA7 = g_57c220;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_449cb0);
    int32_t valA8 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_57c220, valA8, sub_45f920);
    return TaskType_Set("TASKTYPE_GLASS", *g_57c220);
}
