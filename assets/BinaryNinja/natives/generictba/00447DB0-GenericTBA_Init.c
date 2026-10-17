// Original IGI.EXE function: GenericTBA_Init (VA 0x00447DB0; static CFG gate PASS, CFG score 1.000).
#include "GenericTBA_Init.h"
int32_t* GenericTBA_Init()

{
    g_57c1f0 = 0xa;
    int32_t v_2ac = 0;
    g_57c1f4 = &g_5c8a4c;
    int16_t valA1 = TaskType_Register("GenericTBA", 0x2a8, FX_TrailUpdate(), 0);
    g_53c7dc = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_447ff0);
    QTask_TriggerEvent(g_53c7dc, 1, GenericTBA_LoadParameters);
    QTask_TriggerEvent(g_53c7dc, 2, GenericTBA_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c7dc, valA3, sub_4481f0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_2b0_1 = valA4;
    valA4 = g_53c7dc;
    QTask_RemoveEventCallback(valA4, v_2b0_1, sub_448200);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c7dc, valA5, GenericTBA_Process);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53c7dc, valA6, GenericTBA_Update);
    int32_t valA7 = Level_InitTextures_2();
    int32_t v_2b0_4 = valA7;
    valA7 = g_53c7dc;
    QTask_RemoveEventCallback(valA7, v_2b0_4, GenericTBA_OnEvent);
    int32_t valA8 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c7dc, valA8, sub_51baa0);
    int32_t valA9 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_53c7dc, valA9, sub_4484f0);
    int32_t valA10 = Level_SetMission_2();
    int32_t v_2b0_7 = valA10;
    valA10 = g_53c7dc;
    QTask_RemoveEventCallback(valA10, v_2b0_7, sub_448510);
    int32_t valA11 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_53c7dc, valA11, sub_443dc0);
    g_57c1fc = Script_FormatString_7(FX_ExplosionSpawn_2(), 5);
    int32_t valA14 = Script_ParseEnumInt32_4();
    void v_2a8;
    void v_70;
    Script_UndefinedParameterTy(g_57c1fc, &v_2a8, &v_70, valA14, 7, 0);
    int32_t valA15 = Script_CallNativeHandler_3();
    void v_50;
    Script_UndefinedParameterTy(g_57c1fc, &v_2a8, &v_50, valA15, 7, 0);
    int32_t valA16 = Script_ExecuteLevelScript_3();
    void v_5e;
    Script_UndefinedParameterTy(g_57c1fc, &v_2a8, &v_5e, valA16, 7, 0);
    int32_t valA17 = Script_EvaluateCondition_2();
    void v_5c;
    Script_UndefinedParameterTy(g_57c1fc, &v_2a8, &v_5c, valA17, 7, 0);
    int32_t valA18 = Script_ParseEnumInt32_2();
    void v_58;
    return Script_UndefinedParameterTy(g_57c1fc, &v_2a8, &v_58, valA18, 7, &g_57c1f0);
}
