// Original IGI.EXE function: HeliDoor_Init (VA 0x004272A0; static CFG gate PASS, CFG score 1.000).
#include "HeliDoor_Init.h"
void* HeliDoor_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("HeliDoor", 0x148, MagicObj_GetTypeId(), 0);
    g_53bb18 = valA1;
    QTask_RemoveEventCallback(valA1, 0, CarDoor_LoadParameters);
    QTask_TriggerEvent(g_53bb18, 1, sub_4273b0);
    QTask_TriggerEvent(g_53bb18, 2, sub_426860);
    int32_t valA3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53bb18, valA3, HeliDoor_Setup);
    int32_t valA4 = Level_LoadLevel_3();
    int32_t v_8_1 = valA4;
    valA4 = g_53bb18;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_42d9b0);
    int32_t valA5 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_53bb18, valA5, 0);
    int32_t valA6 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_53bb18, valA6, sub_4277c0);
    int32_t valA7 = DynObj_RegisterSymbol_6();
    int32_t v_8_4 = valA7;
    valA7 = g_53bb18;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_51baa0);
    int32_t valA8 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_53bb18, valA8, sub_426d30);
    return TaskType_Set("TASKTYPE_HELIDOOR", *g_53bb18);
}
