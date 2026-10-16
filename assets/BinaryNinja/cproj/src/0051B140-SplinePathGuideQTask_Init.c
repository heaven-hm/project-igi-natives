#include "gi_platform.h"
#include "0051B140-SplinePathGuideQTask_Init.h"
int32_t* SplinePathGuideQTask_Init()

{
    int32_t v_48 = 0;
    g_54ed50 = TaskType_Register("SplinePathGuideQTask", 0x44, QTask_OpenEvent_2(), 0);
    g_54ed52 = QTask_UnableToAllocateEvent(0);
    g_54ed53 = QTask_UnableToAllocateEvent(0);
    QTask_TriggerEvent(g_54ed50, 1, SplinePathGuideQTask_LoadParameters);
    QTask_RemoveEventCallback(g_54ed50, 0, sub_51ae50);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54ed50, valA4, sub_51b390);
    int32_t valA5 = Script_ParseEnumReal32_8();
    int32_t v_4c_1 = valA5;
    valA5 = g_54ed50;
    QTask_RemoveEventCallback(valA5, v_4c_1, SplinePathGuideQTask_Setup);
    QTask_TriggerEvent(g_54ed50, 2, sub_51ae90);
    g_a83754 = Script_EvaluateCondition_7(5);
    int32_t valA7 = Script_ParseEnumString_3();
    char v_44;
    char v_24;
    Script_UndefinedParameterTy(g_a83754, &v_44, &v_24, valA7, 7, 0);
    int32_t valA8 = Script_ParseEnumString_3();
    char v_20;
    Script_UndefinedParameterTy(g_a83754, &v_44, &v_20, valA8, 7, 0);
    int32_t valA9 = Script_ParseEnumString_3();
    char v_14;
    Script_UndefinedParameterTy(g_a83754, &v_44, &v_14, valA9, 7, 0);
    int32_t valA10 = Script_ParseEnumString_3();
    char v_10;
    Script_UndefinedParameterTy(g_a83754, &v_44, &v_10, valA10, 7, 0);
    int32_t valA11 = Script_EvaluateCondition_2();
    char v_4;
    Script_UndefinedParameterTy(g_a83754, &v_44, &v_4, valA11, 7, 0);
    int32_t* result = Mem_Alloc8(0x64);
    g_a83760 = result;
    return result;
}
