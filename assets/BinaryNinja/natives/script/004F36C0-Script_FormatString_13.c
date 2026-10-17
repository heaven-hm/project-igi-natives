// Original IGI.EXE function: Script_FormatString_13 (VA 0x004F36C0; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_13.h"
❓  int32_t Script_FormatString_13()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x20160);
    QTask_RemoveEventCallback(g_54e1d8, 0, sub_4f3a00);
    QTask_TriggerEvent(g_54e1d8, 2, Script_SpawnNewTask_14);
    QTask_TriggerEvent(g_54e1d8, 1, Script_ParseEnumInt32_14);
    int32_t data_1 = Script_ParseEnumInt32_8();
    int32_t item_8 = data_1;
    data_1 = g_54e1d8;
    QTask_RemoveEventCallback(data_1, item_8, sub_4f39f0);
    int32_t data_2 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54e1d8, data_2, sub_4f3940);
    int32_t data_3 = Script_EvaluateCondition_15();
    QTask_RemoveEventCallback(g_54e1d8, data_3, sub_4f3ca0);
    int32_t data_4 = Script_FormatString_15();
    int32_t item_8_3 = data_4;
    data_4 = g_54e1d8;
    QTask_RemoveEventCallback(data_4, item_8_3, Script_ExecuteLevelScript_14);
    int32_t data_5 = Script_SpawnNewTask_16();
    QTask_RemoveEventCallback(g_54e1d8, data_5, Script_CallNativeHandler_14);
    int32_t data_6 = Script_FormatString_5();
    QTask_TriggerEvent(g_54e1d8, data_6, Script_ParseEnumReal32_14);
    int32_t data_7 = Script_SpawnNewTask_6();
    int32_t item_8_6 = data_7;
    data_7 = g_54e1d8;
    QTask_TriggerEvent(data_7, item_8_6, Script_ParseEnumString_14);
    g_a76c3c = Script_EvaluateCondition_7(8);
    int32_t data_9 = Script_ParseEnumReal32_4();
    void arg_20;
    Script_UndefinedParameterTy(g_a76c3c, &return_addr, &arg_20, data_9, 7, 0);
    int32_t data_11 = Script_SpawnNewTask_3();
    void arg_38;
    Script_UndefinedParameterTy(g_a76c3c, &return_addr, &arg_38, data_11, 7, 0);
    int32_t data_13 = Script_ParseEnumString_3();
    void arg_2014c;
    Script_UndefinedParameterTy(g_a76c3c, &return_addr, &arg_2014c, data_13, 7, 0);
    int32_t data_15 = Script_CallNativeHandler_3();
    void arg_200f8;
    Script_UndefinedParameterTy(g_a76c3c, &return_addr, &arg_200f8, data_15, 7, 0);
    int32_t data_17 = Script_ParseEnumInt32_4();
    void arg_200f4;
    Script_UndefinedParameterTy(g_a76c3c, &return_addr, &arg_200f4, data_17, 7, 0);
    int32_t data_19 = Script_SpawnNewTask_2();
    void arg_20158;
    Script_UndefinedParameterTy(g_a76c3c, &return_addr, &arg_20158, data_19, 6, 0);
    int32_t data_21 = Script_SpawnNewTask_2();
    void arg_20159;
    Script_UndefinedParameterTy(g_a76c3c, &return_addr, &arg_20159, data_21, 6, 0);
    int32_t temp_3 = Script_UndefinedParameterTy(g_a76c3c, &return_addr, &return_addr, g_54e1e4, 7, 0);
    temp_3 = g_54e1db;
    int32_t result = QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), temp_3, AIGraph_LoadParameters);
    g_a76c28 = &g_a76c2c;
    g_a76c30 = &g_a76c28;
    g_a76c2c = 0;
    g_a76c20 = 0x3c;
    g_a76c34 = 0x400;
    return result;
}
