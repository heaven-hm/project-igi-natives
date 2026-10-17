// Original IGI.EXE function: FlatWater_Init (VA 0x0051C2B0; static CFG gate PASS, CFG score 1.000).
#include "FlatWater_Init.h"
int32_t* FlatWater_Init()

{
    int32_t item_300 = 0;
    g_ba2020 = TaskType_Register("FlatWater", 0x90, QTask_OpenEvent_2(), 0);
    int32_t item_300_1 = 0;
    g_ba2018 = TaskType_Register("FlatWaterLayer", 0x26c, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_ba2020, 0, sub_51d840);
    QTask_TriggerEvent(g_ba2020, 2, sub_51d8b0);
    QTask_RemoveEventCallback(g_ba2020, 4, FlatWater_LoadParameters);
    QTask_TriggerEvent(g_ba2020, 1, sub_488700);
    int32_t data_5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_ba2020, data_5, sub_51d8e0);
    int32_t data_6 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_ba2020, data_6, sub_51d8f0);
    QTask_RemoveEventCallback(g_ba2018, 0, FlatSky_OnEvent);
    QTask_TriggerEvent(g_ba2018, 2, FlatSky_Action);
    int32_t data_8 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_ba2018, data_8, sub_51dda0);
    int32_t data_9 = Script_ParseEnumReal32_8();
    int32_t item_304_3 = data_9;
    data_9 = g_ba2018;
    QTask_RemoveEventCallback(data_9, item_304_3, FlatSky_Cleanup);
    QTask_TriggerEvent(g_ba2018, 1, sub_51da90);
    g_ba201c = Script_EvaluateCondition_7(4);
    int32_t data_11 = Script_EvaluateCondition_2();
    void item_2fc;
    void item_280;
    Script_UndefinedParameterTy(g_ba201c, &item_2fc, &item_280, data_11, 7, 0x54ee68);
    int32_t data_12 = Script_ParseEnumInt32_3();
    void item_28c;
    Script_UndefinedParameterTy(g_ba201c, &item_2fc, &item_28c, data_12, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_2();
    void item_284;
    Script_UndefinedParameterTy(g_ba201c, &item_2fc, &item_284, data_13, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_2();
    void item_27c;
    Script_UndefinedParameterTy(g_ba201c, &item_2fc, &item_27c, data_14, 7, 0);
    g_ba2024 = Script_EvaluateCondition_7(6);
    int32_t data_16 = Script_SpawnNewTask_4();
    void item_26c;
    void item_124;
    Script_UndefinedParameterTy(g_ba2024, &item_26c, &item_124, data_16, 7, 0);
    int32_t data_17 = Script_EvaluateCondition_2();
    void item_24;
    Script_UndefinedParameterTy(g_ba2024, &item_26c, &item_24, data_17, 7, 0);
    int32_t data_18 = Script_EvaluateCondition_2();
    void item_20;
    Script_UndefinedParameterTy(g_ba2024, &item_26c, &item_20, data_18, 7, 0x54ee70);
    int32_t data_19 = Script_EvaluateCondition_2();
    void item_1c;
    Script_UndefinedParameterTy(g_ba2024, &item_26c, &item_1c, data_19, 7, 0x54ee70);
    int32_t data_20 = Script_EvaluateCondition_2();
    void item_10;
    Script_UndefinedParameterTy(g_ba2024, &item_26c, &item_10, data_20, 7, 0x54ee68);
    int32_t data_21 = Script_CallNativeHandler_2();
    void item_c;
    return Script_UndefinedParameterTy(g_ba2024, &item_26c, &item_c, data_21, 7, 0);
}
