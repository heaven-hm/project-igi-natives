// Original IGI.EXE function: SplinePathNodeQTask_Init (VA 0x00519850; static CFG gate PASS, CFG score 1.000).
#include "SplinePathNodeQTask_Init.h"
int32_t* SplinePathNodeQTask_Init()

{
    int32_t item_cc = 0;
    int16_t data_1 = TaskType_Register("SplinePathNodeQTask", 0xc8, QTask_OpenEvent_2(), 0);
    g_54ed4c = data_1;
    QTask_RemoveEventCallback(data_1, 0, SplinePathNodeQTask_LoadParameters);
    QTask_TriggerEvent(g_54ed4c, 2, sub_519b80);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54ed4c, data_3, SplinePathNodeQTask_Setup);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54ed4c, data_4, sub_519a50);
    QTask_RemoveEventCallback(g_54ed4c, 7, sub_5199d0);
    g_a8374c = Script_EvaluateCondition_7(6);
    int32_t data_7 = Script_ParseEnumReal32_4();
    void item_c8;
    void item_a8;
    Script_UndefinedParameterTy(g_a8374c, &item_c8, &item_a8, data_7, 7, 0);
    int32_t data_9 = Script_SpawnNewTask_3();
    void item_90;
    Script_UndefinedParameterTy(g_a8374c, &item_c8, &item_90, data_9, 7, 0);
    int32_t data_11 = Script_EvaluateCondition_2();
    void item_38;
    Script_UndefinedParameterTy(g_a8374c, &item_c8, &item_38, data_11, 7, 0);
    int32_t data_13 = Script_EvaluateCondition_2();
    void item_34;
    Script_UndefinedParameterTy(g_a8374c, &item_c8, &item_34, data_13, 7, 0);
    int32_t data_15 = Script_ParseEnumReal32_4();
    void item_50;
    Script_UndefinedParameterTy(g_a8374c, &item_c8, &item_50, data_15, 7, 0);
    int32_t data_17 = Script_ParseEnumInt32_4();
    void item_4;
    return Script_UndefinedParameterTy(g_a8374c, &item_c8, &item_4, data_17, 7, 0);
}
