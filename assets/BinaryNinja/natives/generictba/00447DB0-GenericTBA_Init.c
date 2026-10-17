// Original IGI.EXE function: GenericTBA_Init (VA 0x00447DB0; static CFG gate PASS, CFG score 1.000).
#include "GenericTBA_Init.h"
int32_t* GenericTBA_Init()

{
    g_57c1f0 = 0xa;
    int32_t item_2ac = 0;
    g_57c1f4 = &g_5c8a4c;
    int16_t data_1 = TaskType_Register("GenericTBA", 0x2a8, FX_TrailUpdate(), 0);
    g_53c7dc = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_447ff0);
    QTask_TriggerEvent(g_53c7dc, 1, GenericTBA_LoadParameters);
    QTask_TriggerEvent(g_53c7dc, 2, GenericTBA_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c7dc, data_3, sub_4481f0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_2b0_1 = data_4;
    data_4 = g_53c7dc;
    QTask_RemoveEventCallback(data_4, item_2b0_1, sub_448200);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c7dc, data_5, GenericTBA_Process);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53c7dc, data_6, GenericTBA_Update);
    int32_t data_7 = Level_InitTextures_2();
    int32_t item_2b0_4 = data_7;
    data_7 = g_53c7dc;
    QTask_RemoveEventCallback(data_7, item_2b0_4, GenericTBA_OnEvent);
    int32_t data_8 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c7dc, data_8, sub_51baa0);
    int32_t data_9 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_53c7dc, data_9, sub_4484f0);
    int32_t data_10 = Level_SetMission_2();
    int32_t item_2b0_7 = data_10;
    data_10 = g_53c7dc;
    QTask_RemoveEventCallback(data_10, item_2b0_7, sub_448510);
    int32_t data_11 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_53c7dc, data_11, sub_443dc0);
    g_57c1fc = Script_FormatString_7(FX_ExplosionSpawn_2(), 5);
    int32_t data_14 = Script_ParseEnumInt32_4();
    void item_2a8;
    void item_70;
    Script_UndefinedParameterTy(g_57c1fc, &item_2a8, &item_70, data_14, 7, 0);
    int32_t data_15 = Script_CallNativeHandler_3();
    void item_50;
    Script_UndefinedParameterTy(g_57c1fc, &item_2a8, &item_50, data_15, 7, 0);
    int32_t data_16 = Script_ExecuteLevelScript_3();
    void item_5e;
    Script_UndefinedParameterTy(g_57c1fc, &item_2a8, &item_5e, data_16, 7, 0);
    int32_t data_17 = Script_EvaluateCondition_2();
    void item_5c;
    Script_UndefinedParameterTy(g_57c1fc, &item_2a8, &item_5c, data_17, 7, 0);
    int32_t data_18 = Script_ParseEnumInt32_2();
    void item_58;
    return Script_UndefinedParameterTy(g_57c1fc, &item_2a8, &item_58, data_18, 7, &g_57c1f0);
}
