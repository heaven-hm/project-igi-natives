#include "SplinePathNodeQTask_Init.h"
int32_t* SplinePathNodeQTask_Init()

{
    int32_t v_cc = 0;
    int16_t valA1 = TaskType_Register("SplinePathNodeQTask", 0xc8, QTask_OpenEvent_2(), 0);
    g_54ed4c = valA1;
    QTask_RemoveEventCallback(valA1, 0, SplinePathNodeQTask_LoadParameters);
    QTask_TriggerEvent(g_54ed4c, 2, sub_519b80);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54ed4c, valA3, SplinePathNodeQTask_Setup);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54ed4c, valA4, sub_519a50);
    QTask_RemoveEventCallback(g_54ed4c, 7, sub_5199d0);
    g_a8374c = Script_EvaluateCondition_7(6);
    int32_t valA7 = Script_ParseEnumReal32_4();
    void v_c8;
    void v_a8;
    Script_UndefinedParameterTy(g_a8374c, &v_c8, &v_a8, valA7, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_3();
    void v_90;
    Script_UndefinedParameterTy(g_a8374c, &v_c8, &v_90, valA9, 7, 0);
    int32_t valA11 = Script_EvaluateCondition_2();
    void v_38;
    Script_UndefinedParameterTy(g_a8374c, &v_c8, &v_38, valA11, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_2();
    void v_34;
    Script_UndefinedParameterTy(g_a8374c, &v_c8, &v_34, valA13, 7, 0);
    int32_t valA15 = Script_ParseEnumReal32_4();
    void v_50;
    Script_UndefinedParameterTy(g_a8374c, &v_c8, &v_50, valA15, 7, 0);
    int32_t valA17 = Script_ParseEnumInt32_4();
    void v_4;
    return Script_UndefinedParameterTy(g_a8374c, &v_c8, &v_4, valA17, 7, 0);
}
