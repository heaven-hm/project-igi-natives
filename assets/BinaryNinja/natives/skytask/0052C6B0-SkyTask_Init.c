// Original IGI.EXE function: SkyTask_Init (VA 0x0052C6B0; static CFG gate PASS, CFG score 1.000).
#include "SkyTask_Init.h"
int32_t* SkyTask_Init()

{
    int32_t v_7c = 0;
    int16_t valA1 = TaskType_Register("SkyTask", 0x78, QTask_OpenEvent_2(), 0);
    g_54f6e4 = valA1;
    QTask_RemoveEventCallback(valA1, 4, sub_52c7a0);
    QTask_RemoveEventCallback(g_54f6e4, 0, sub_52c7c0);
    QTask_TriggerEvent(g_54f6e4, 2, sub_520f20);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54f6e4, valA3, AIGraph_LoadParameters);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_80_1 = valA4;
    valA4 = g_54f6e4;
    QTask_RemoveEventCallback(valA4, v_80_1, sub_52c790);
    g_a84558 = Script_EvaluateCondition_7(2);
    int32_t valA6 = Script_EvaluateCondition_2();
    void v_78;
    void v_8;
    Script_UndefinedParameterTy(g_a84558, &v_78, &v_8, valA6, 7, 0);
    int32_t valA8 = Script_ParseEnumString_2();
    void v_c;
    return Script_UndefinedParameterTy(g_a84558, &v_78, &v_c, valA8, 7, 0);
}
