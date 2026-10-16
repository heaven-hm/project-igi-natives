#include "Terminal_Init.h"
int32_t* Terminal_Init()

{
    int32_t v_2a4 = 0;
    int16_t valA1 = TaskType_Register("Terminal", 0x2a0, FX_TrailUpdate(), 0);
    g_53c680 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_443840);
    QTask_TriggerEvent(g_53c680, 1, Terminal_LoadParameters);
    QTask_TriggerEvent(g_53c680, 2, Terminal_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c680, valA3, sub_443a00);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_2a8_1 = valA4;
    valA4 = g_53c680;
    QTask_RemoveEventCallback(valA4, v_2a8_1, sub_443a10);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c680, valA5, Terminal_Process);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53c680, valA6, Terminal_Update);
    int32_t valA7 = Level_InitTextures_2();
    int32_t v_2a8_4 = valA7;
    valA7 = g_53c680;
    QTask_RemoveEventCallback(valA7, v_2a8_4, GenericTBA_OnEvent);
    int32_t valA8 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c680, valA8, sub_443d70);
    int32_t valA9 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_53c680, valA9, sub_443d80);
    int32_t valA10 = Level_SetMission_2();
    int32_t v_2a8_7 = valA10;
    valA10 = g_53c680;
    QTask_RemoveEventCallback(valA10, v_2a8_7, sub_443da0);
    int32_t valA11 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_53c680, valA11, sub_443dc0);
    g_57c1a0 = Script_FormatString_7(FX_ExplosionSpawn_2(), 2);
    int32_t valA14 = Script_CallNativeHandler_3();
    void v_2a0;
    void v_50;
    Script_UndefinedParameterTy(g_57c1a0, &v_2a0, &v_50, valA14, 7, 0);
    int32_t valA15 = Script_EvaluateCondition_2();
    void v_54;
    return Script_UndefinedParameterTy(g_57c1a0, &v_2a0, &v_54, valA15, 7, 0);
}
