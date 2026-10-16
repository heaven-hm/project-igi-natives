#include "ShadowTask_Init.h"
int32_t* ShadowTask_Init()

{
    int32_t v_34 = 0;
    g_54ed3c = TaskType_Register("ShadowTask", 0x30, QTask_OpenEvent_2(), 0);
    int32_t valA2 = Script_ParseEnumInt32_8();
    int32_t v_38 = valA2;
    valA2 = g_54ed3c;
    QTask_RemoveEventCallback(valA2, v_38, sub_519810);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54ed3c, valA3, AIGraph_LoadParameters);
    g_a83744 = Script_EvaluateCondition_7(2);
    int32_t valA5 = Script_FormatString_2();
    void v_30;
    void v_10;
    Script_UndefinedParameterTy(g_a83744, &v_30, &v_10, valA5, 7, 0);
    int32_t valA6 = Script_EvaluateCondition_2();
    void v_4;
    return Script_UndefinedParameterTy(g_a83744, &v_30, &v_4, valA6, 7, 0);
}
