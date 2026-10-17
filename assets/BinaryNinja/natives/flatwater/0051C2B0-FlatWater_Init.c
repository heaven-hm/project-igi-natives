// Original IGI.EXE function: FlatWater_Init (VA 0x0051C2B0; static CFG gate PASS, CFG score 1.000).
#include "FlatWater_Init.h"
int32_t* FlatWater_Init()

{
    int32_t v_300 = 0;
    g_ba2020 = TaskType_Register("FlatWater", 0x90, QTask_OpenEvent_2(), 0);
    int32_t v_300_1 = 0;
    g_ba2018 = TaskType_Register("FlatWaterLayer", 0x26c, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_ba2020, 0, sub_51d840);
    QTask_TriggerEvent(g_ba2020, 2, sub_51d8b0);
    QTask_RemoveEventCallback(g_ba2020, 4, FlatWater_LoadParameters);
    QTask_TriggerEvent(g_ba2020, 1, sub_488700);
    int32_t valA5 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_ba2020, valA5, sub_51d8e0);
    int32_t valA6 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_ba2020, valA6, sub_51d8f0);
    QTask_RemoveEventCallback(g_ba2018, 0, FlatSky_OnEvent);
    QTask_TriggerEvent(g_ba2018, 2, FlatSky_Action);
    int32_t valA8 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_ba2018, valA8, sub_51dda0);
    int32_t valA9 = Script_ParseEnumReal32_8();
    int32_t v_304_3 = valA9;
    valA9 = g_ba2018;
    QTask_RemoveEventCallback(valA9, v_304_3, FlatSky_Cleanup);
    QTask_TriggerEvent(g_ba2018, 1, sub_51da90);
    g_ba201c = Script_EvaluateCondition_7(4);
    int32_t valA11 = Script_EvaluateCondition_2();
    void v_2fc;
    void v_280;
    Script_UndefinedParameterTy(g_ba201c, &v_2fc, &v_280, valA11, 7, 0x54ee68);
    int32_t valA12 = Script_ParseEnumInt32_3();
    void v_28c;
    Script_UndefinedParameterTy(g_ba201c, &v_2fc, &v_28c, valA12, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_2();
    void v_284;
    Script_UndefinedParameterTy(g_ba201c, &v_2fc, &v_284, valA13, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_2();
    void v_27c;
    Script_UndefinedParameterTy(g_ba201c, &v_2fc, &v_27c, valA14, 7, 0);
    g_ba2024 = Script_EvaluateCondition_7(6);
    int32_t valA16 = Script_SpawnNewTask_4();
    void v_26c;
    void v_124;
    Script_UndefinedParameterTy(g_ba2024, &v_26c, &v_124, valA16, 7, 0);
    int32_t valA17 = Script_EvaluateCondition_2();
    void v_24;
    Script_UndefinedParameterTy(g_ba2024, &v_26c, &v_24, valA17, 7, 0);
    int32_t valA18 = Script_EvaluateCondition_2();
    void v_20;
    Script_UndefinedParameterTy(g_ba2024, &v_26c, &v_20, valA18, 7, 0x54ee70);
    int32_t valA19 = Script_EvaluateCondition_2();
    void v_1c;
    Script_UndefinedParameterTy(g_ba2024, &v_26c, &v_1c, valA19, 7, 0x54ee70);
    int32_t valA20 = Script_EvaluateCondition_2();
    void v_10;
    Script_UndefinedParameterTy(g_ba2024, &v_26c, &v_10, valA20, 7, 0x54ee68);
    int32_t valA21 = Script_CallNativeHandler_2();
    void v_c;
    return Script_UndefinedParameterTy(g_ba2024, &v_26c, &v_c, valA21, 7, 0);
}
