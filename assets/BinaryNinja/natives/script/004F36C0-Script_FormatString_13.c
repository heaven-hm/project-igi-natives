// Original IGI.EXE function: Script_FormatString_13 (VA 0x004F36C0; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_13.h"
❓  int32_t Script_FormatString_13()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x20160);
    QTask_RemoveEventCallback(g_54e1d8, 0, sub_4f3a00);
    QTask_TriggerEvent(g_54e1d8, 2, Script_SpawnNewTask_14);
    QTask_TriggerEvent(g_54e1d8, 1, Script_ParseEnumInt32_14);
    int32_t valA1 = Script_ParseEnumInt32_8();
    int32_t v_8 = valA1;
    valA1 = g_54e1d8;
    QTask_RemoveEventCallback(valA1, v_8, sub_4f39f0);
    int32_t valA2 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54e1d8, valA2, sub_4f3940);
    int32_t valA3 = Script_EvaluateCondition_15();
    QTask_RemoveEventCallback(g_54e1d8, valA3, sub_4f3ca0);
    int32_t valA4 = Script_FormatString_15();
    int32_t v_8_3 = valA4;
    valA4 = g_54e1d8;
    QTask_RemoveEventCallback(valA4, v_8_3, Script_ExecuteLevelScript_14);
    int32_t valA5 = Script_SpawnNewTask_16();
    QTask_RemoveEventCallback(g_54e1d8, valA5, Script_CallNativeHandler_14);
    int32_t valA6 = Script_FormatString_5();
    QTask_TriggerEvent(g_54e1d8, valA6, Script_ParseEnumReal32_14);
    int32_t valA7 = Script_SpawnNewTask_6();
    int32_t v_8_6 = valA7;
    valA7 = g_54e1d8;
    QTask_TriggerEvent(valA7, v_8_6, Script_ParseEnumString_14);
    g_a76c3c = Script_EvaluateCondition_7(8);
    int32_t valA9 = Script_ParseEnumReal32_4();
    void arg_20;
    Script_UndefinedParameterTy(g_a76c3c, &__return_addr, &arg_20, valA9, 7, 0);
    int32_t valA11 = Script_SpawnNewTask_3();
    void arg_38;
    Script_UndefinedParameterTy(g_a76c3c, &__return_addr, &arg_38, valA11, 7, 0);
    int32_t valA13 = Script_ParseEnumString_3();
    void arg_2014c;
    Script_UndefinedParameterTy(g_a76c3c, &__return_addr, &arg_2014c, valA13, 7, 0);
    int32_t valA15 = Script_CallNativeHandler_3();
    void arg_200f8;
    Script_UndefinedParameterTy(g_a76c3c, &__return_addr, &arg_200f8, valA15, 7, 0);
    int32_t valA17 = Script_ParseEnumInt32_4();
    void arg_200f4;
    Script_UndefinedParameterTy(g_a76c3c, &__return_addr, &arg_200f4, valA17, 7, 0);
    int32_t valA19 = Script_SpawnNewTask_2();
    void arg_20158;
    Script_UndefinedParameterTy(g_a76c3c, &__return_addr, &arg_20158, valA19, 6, 0);
    int32_t valA21 = Script_SpawnNewTask_2();
    void arg_20159;
    Script_UndefinedParameterTy(g_a76c3c, &__return_addr, &arg_20159, valA21, 6, 0);
    int32_t tmpD3 = Script_UndefinedParameterTy(g_a76c3c, &__return_addr, &__return_addr, g_54e1e4, 7, 0);
    tmpD3 = g_54e1db;
    int32_t result = QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), tmpD3, AIGraph_LoadParameters);
    g_a76c28 = &g_a76c2c;
    g_a76c30 = &g_a76c28;
    g_a76c2c = 0;
    g_a76c20 = 0x3c;
    g_a76c34 = 0x400;
    return result;
}
