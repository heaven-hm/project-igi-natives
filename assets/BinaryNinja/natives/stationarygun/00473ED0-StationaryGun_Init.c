// Original IGI.EXE function: StationaryGun_Init (VA 0x00473ED0; static CFG gate PASS, CFG score 1.000).
#include "StationaryGun_Init.h"
int32_t* StationaryGun_Init()

{
    int32_t item_224 = 0;
    int16_t data_1 = TaskType_Register("StationaryGun", 0x220, DynObj_LookupHashItem_5(), 0);
    g_5be388 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_473d30);
    QTask_TriggerEvent(g_5be388, 1, StationaryGun_LoadParameters);
    QTask_TriggerEvent(g_5be388, 2, StationaryGun_Setup);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be388, data_3, sub_474980);
    int32_t data_4 = Level_InitTextures_2();
    int32_t item_228_1 = data_4;
    data_4 = g_5be388;
    QTask_RemoveEventCallback(data_4, item_228_1, StationaryGun_Process);
    int32_t data_5 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_5be388, data_5, sub_474ed0);
    int32_t data_6 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_5be388, data_6, sub_474ee0);
    int32_t data_7 = Level_SetMission_2();
    int32_t item_228_4 = data_7;
    data_7 = g_5be388;
    QTask_RemoveEventCallback(data_7, item_228_4, sub_474f10);
    int32_t data_8 = Level_SetMission_3();
    QTask_RemoveEventCallback(g_5be388, data_8, sub_474f30);
    int32_t data_9 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5be388, data_9, sub_474f50);
    int32_t data_10 = DynObj_CreateMagicObject_6();
    int32_t item_228_7 = data_10;
    data_10 = g_5be388;
    QTask_RemoveEventCallback(data_10, item_228_7, StationaryGun_Update);
    QTask_RemoveEventCallback(g_5be388, 6, AIGraph_LoadParameters);
    int32_t data_11 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_5be388, data_11, sub_4752b0);
    g_5be380 = 0;
    g_5be384 = 0x186a0;
    g_5be38c = Script_EvaluateCondition_7(8);
    int32_t data_13 = Script_ParseEnumReal32_4();
    void item_220;
    void item_130;
    Script_UndefinedParameterTy(g_5be38c, &item_220, &item_130, data_13, 7, 0);
    int32_t data_14 = Script_SpawnNewTask_3();
    void item_118;
    Script_UndefinedParameterTy(g_5be38c, &item_220, &item_118, data_14, 7, 0);
    int32_t data_15 = Script_EvaluateCondition_3();
    void item_70;
    Script_UndefinedParameterTy(g_5be38c, &item_220, &item_70, data_15, 7, 0);
    int32_t data_16 = Script_FormatString_3();
    void item_60;
    Script_UndefinedParameterTy(g_5be38c, &item_220, &item_60, data_16, 7, 0);
    int32_t data_17 = Script_ExecuteLevelScript_2();
    void item_40;
    Script_UndefinedParameterTy(g_5be38c, &item_220, &item_40, data_17, 7, 0);
    int32_t data_18 = Script_ExecuteLevelScript_2();
    void item_3c;
    Script_UndefinedParameterTy(g_5be38c, &item_220, &item_3c, data_18, 7, 0);
    int32_t data_19 = Script_ExecuteLevelScript_2();
    void item_38;
    Script_UndefinedParameterTy(g_5be38c, &item_220, &item_38, data_19, 7, 0);
    int32_t data_20 = Script_ParseEnumString_3();
    void item_34;
    return Script_UndefinedParameterTy(g_5be38c, &item_220, &item_34, data_20, 7, &g_5be380);
}
