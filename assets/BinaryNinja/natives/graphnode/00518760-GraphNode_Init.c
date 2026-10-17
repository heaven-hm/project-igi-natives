// Original IGI.EXE function: GraphNode_Init (VA 0x00518760; static CFG gate PASS, CFG score 1.000).
#include "GraphNode_Init.h"
int32_t* GraphNode_Init()

{
    int32_t v_11c = 0;
    int16_t valA1 = TaskType_Register("GraphNode", 0x118, EditorRigidObj_OnEvent(), 0);
    g_54ec9c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_518870);
    QTask_TriggerEvent(g_54ec9c, 1, sub_5188c0);
    QTask_TriggerEvent(g_54ec9c, 2, sub_5188d0);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54ec9c, valA3, GraphNode_LoadParameters);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_120_1 = valA4;
    valA4 = g_54ec9c;
    QTask_RemoveEventCallback(valA4, v_120_1, sub_5188b0);
    int32_t valA5 = Script_CallNativeHandler_22();
    QTask_RemoveEventCallback(g_54ec9c, valA5, AIGraph_LoadParameters);
    g_a800f0 = DynObj_MtpNlodvirmodelD("1703_01_1");

    for (int32_t* i = &g_a800fc; i < &g_a801fc; i = &i[2])
    {
        i[-1] = 0;
        *i = 0;
    }

    g_a801fc = Script_EvaluateCondition_7(1);
    int32_t valA8 = Script_ParseEnumString_3();
    void v_118;
    void v_e0;
    return Script_UndefinedParameterTy(g_a801fc, &v_118, &v_e0, valA8, 2, 0);
}
