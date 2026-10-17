// Original IGI.EXE function: SplinePathGuideQTask_Init (VA 0x0051B140; static CFG gate PASS, CFG score 1.000).
#include "SplinePathGuideQTask_Init.h"
int32_t* SplinePathGuideQTask_Init()

{
    int32_t item_48 = 0;
    g_54ed50 = TaskType_Register("SplinePathGuideQTask", 0x44, QTask_OpenEvent_2(), 0);
    g_54ed52 = QTask_UnableToAllocateEvent(0);
    g_54ed53 = QTask_UnableToAllocateEvent(0);
    QTask_TriggerEvent(g_54ed50, 1, SplinePathGuideQTask_LoadParameters);
    QTask_RemoveEventCallback(g_54ed50, 0, sub_51ae50);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54ed50, data_4, sub_51b390);
    int32_t data_5 = Script_ParseEnumReal32_8();
    int32_t item_4c_1 = data_5;
    data_5 = g_54ed50;
    QTask_RemoveEventCallback(data_5, item_4c_1, SplinePathGuideQTask_Setup);
    QTask_TriggerEvent(g_54ed50, 2, sub_51ae90);
    g_a83754 = Script_EvaluateCondition_7(5);
    int32_t data_7 = Script_ParseEnumString_3();
    void item_44;
    void item_24;
    Script_UndefinedParameterTy(g_a83754, &item_44, &item_24, data_7, 7, 0);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_20;
    Script_UndefinedParameterTy(g_a83754, &item_44, &item_20, data_8, 7, 0);
    int32_t data_9 = Script_ParseEnumString_3();
    void item_14;
    Script_UndefinedParameterTy(g_a83754, &item_44, &item_14, data_9, 7, 0);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_10;
    Script_UndefinedParameterTy(g_a83754, &item_44, &item_10, data_10, 7, 0);
    int32_t data_11 = Script_EvaluateCondition_2();
    void item_4;
    Script_UndefinedParameterTy(g_a83754, &item_44, &item_4, data_11, 7, 0);
    int32_t* result = Mem_Alloc8(0x64);
    g_a83760 = result;
    return result;
}
