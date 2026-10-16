#include "gi_platform.h"
#include "00473ED0-StationaryGun_Init.h"
int32_t* StationaryGun_Init()

{
    int32_t v_224 = 0;
    int16_t valA1 = TaskType_Register("StationaryGun", 0x220, DynObj_LookupHashItem_5(), 0);
    g_5be388 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_473d30);
    QTask_TriggerEvent(g_5be388, 1, StationaryGun_LoadParameters);
    QTask_TriggerEvent(g_5be388, 2, StationaryGun_Setup);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be388, valA3, sub_474980);
    int32_t valA4 = Level_InitTextures_2();
    int32_t v_228_1 = valA4;
    valA4 = g_5be388;
    QTask_RemoveEventCallback(valA4, v_228_1, StationaryGun_Process);
    int32_t valA5 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_5be388, valA5, sub_474ed0);
    int32_t valA6 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_5be388, valA6, sub_474ee0);
    int32_t valA7 = Level_SetMission_2();
    int32_t v_228_4 = valA7;
    valA7 = g_5be388;
    QTask_RemoveEventCallback(valA7, v_228_4, sub_474f10);
    int32_t valA8 = Level_SetMission_3();
    QTask_RemoveEventCallback(g_5be388, valA8, sub_474f30);
    int32_t valA9 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5be388, valA9, sub_474f50);
    int32_t valA10 = DynObj_CreateMagicObject_6();
    int32_t v_228_7 = valA10;
    valA10 = g_5be388;
    QTask_RemoveEventCallback(valA10, v_228_7, StationaryGun_Update);
    QTask_RemoveEventCallback(g_5be388, 6, AIGraph_LoadParameters);
    int32_t valA11 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_5be388, valA11, sub_4752b0);
    g_5be380 = 0;
    g_5be384 = 0x186a0;
    g_5be38c = Script_EvaluateCondition_7(8);
    int32_t valA13 = Script_ParseEnumReal32_4();
    char v_220;
    char v_130;
    Script_UndefinedParameterTy(g_5be38c, &v_220, &v_130, valA13, 7, 0);
    int32_t valA14 = Script_SpawnNewTask_3();
    char v_118;
    Script_UndefinedParameterTy(g_5be38c, &v_220, &v_118, valA14, 7, 0);
    int32_t valA15 = Script_EvaluateCondition_3();
    char v_70;
    Script_UndefinedParameterTy(g_5be38c, &v_220, &v_70, valA15, 7, 0);
    int32_t valA16 = Script_FormatString_3();
    char v_60;
    Script_UndefinedParameterTy(g_5be38c, &v_220, &v_60, valA16, 7, 0);
    int32_t valA17 = Script_ExecuteLevelScript_2();
    char v_40;
    Script_UndefinedParameterTy(g_5be38c, &v_220, &v_40, valA17, 7, 0);
    int32_t valA18 = Script_ExecuteLevelScript_2();
    char v_3c;
    Script_UndefinedParameterTy(g_5be38c, &v_220, &v_3c, valA18, 7, 0);
    int32_t valA19 = Script_ExecuteLevelScript_2();
    char v_38;
    Script_UndefinedParameterTy(g_5be38c, &v_220, &v_38, valA19, 7, 0);
    int32_t valA20 = Script_ParseEnumString_3();
    char v_34;
    return Script_UndefinedParameterTy(g_5be38c, &v_220, &v_34, valA20, 7, &g_5be380);
}
