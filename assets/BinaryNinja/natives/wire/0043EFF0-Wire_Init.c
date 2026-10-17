// Original IGI.EXE function: Wire_Init (VA 0x0043EFF0; static CFG gate PASS, CFG score 1.000).
#include "Wire_Init.h"
int32_t* Wire_Init()

{
    int32_t item_13c = 0;
    int16_t data_1 = TaskType_Register("Wire", 0x138, DynObj_LookupHashItem_5(), 0);
    g_57c144 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Wire_LoadParameters);
    QTask_TriggerEvent(g_57c144, 1, sub_43f340);
    QTask_TriggerEvent(g_57c144, 2, Wire_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c144, data_3, sub_43f3c0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_140_1 = data_4;
    data_4 = g_57c144;
    QTask_RemoveEventCallback(data_4, item_140_1, Wire_Process);
    int32_t data_5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c144, data_5, Wire_Update);
    int32_t data_6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c144, data_6, sub_43f6c0);
    int32_t data_7 = Level_InitSprites_2();
    int32_t item_140_4 = data_7;
    data_7 = g_57c144;
    QTask_RemoveEventCallback(data_7, item_140_4, sub_43f6d0);
    int32_t data_8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c144, data_8, sub_43f6e0);
    int32_t data_9 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_57c144, data_9, sub_45e3d0);
    int32_t data_10 = Script_FormatString_5();
    int32_t item_140_7 = data_10;
    data_10 = g_57c144;
    QTask_TriggerEvent(data_10, item_140_7, Wire_OnEvent);
    int32_t data_11 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c144, data_11, Wire_Action);
    QTask_RemoveEventCallback(g_57c144, 8, 0);
    int32_t data_12 = Weapon_CheckAmmo_8();
    int32_t item_140_9 = data_12;
    data_12 = g_57c144;
    QTask_RemoveEventCallback(data_12, item_140_9, 0);
    g_57c148 = Script_EvaluateCondition_7(3);
    int32_t data_14 = Script_ParseEnumReal32_4();
    void item_138;
    void item_48;
    Script_UndefinedParameterTy(g_57c148, &item_138, &item_48, data_14, 7, 0);
    int32_t data_16 = Script_ParseEnumReal32_4();
    void item_30;
    Script_UndefinedParameterTy(g_57c148, &item_138, &item_30, data_16, 7, 0);
    int32_t data_18 = Script_EvaluateCondition_3();
    void item_18;
    return Script_UndefinedParameterTy(g_57c148, &item_138, &item_18, data_18, 7, 0);
}
