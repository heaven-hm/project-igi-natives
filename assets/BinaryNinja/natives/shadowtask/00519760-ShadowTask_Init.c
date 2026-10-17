// Original IGI.EXE function: ShadowTask_Init (VA 0x00519760; static CFG gate PASS, CFG score 1.000).
#include "ShadowTask_Init.h"
int32_t* ShadowTask_Init()

{
    int32_t item_34 = 0;
    g_54ed3c = TaskType_Register("ShadowTask", 0x30, QTask_OpenEvent_2(), 0);
    int32_t data_2 = Script_ParseEnumInt32_8();
    int32_t item_38 = data_2;
    data_2 = g_54ed3c;
    QTask_RemoveEventCallback(data_2, item_38, sub_519810);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54ed3c, data_3, AIGraph_LoadParameters);
    g_a83744 = Script_EvaluateCondition_7(2);
    int32_t data_5 = Script_FormatString_2();
    void item_30;
    void item_10;
    Script_UndefinedParameterTy(g_a83744, &item_30, &item_10, data_5, 7, 0);
    int32_t data_6 = Script_EvaluateCondition_2();
    void item_4;
    return Script_UndefinedParameterTy(g_a83744, &item_30, &item_4, data_6, 7, 0);
}
