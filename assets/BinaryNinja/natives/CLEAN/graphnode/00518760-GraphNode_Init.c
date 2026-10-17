// IGI native provenance: GraphNode_Init - 0x00518760 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00518760-GraphNode_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GraphNode_Init.h"
int32_t* GraphNode_Init()

{
    int32_t item_11c = 0;
    int16_t data_1 = TaskType_Register("GraphNode", 0x118, EditorRigidObj_OnEvent(), 0);
    g_54ec9c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_518870);
    QTask_TriggerEvent(g_54ec9c, 1, sub_5188c0);
    QTask_TriggerEvent(g_54ec9c, 2, sub_5188d0);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54ec9c, data_3, GraphNode_LoadParameters);
    int32_t data_4 = Script_ParseEnumInt32_8();
    int32_t item_120_1 = data_4;
    data_4 = g_54ec9c;
    QTask_RemoveEventCallback(data_4, item_120_1, sub_5188b0);
    int32_t data_5 = Script_CallNativeHandler_22();
    QTask_RemoveEventCallback(g_54ec9c, data_5, AIGraph_LoadParameters);
    g_a800f0 = DynObj_MtpNlodvirmodelD("1703_01_1");

    for (int32_t* i = &g_a800fc; i < &g_a801fc; i = &i[2])
    {
        i[-1] = 0;
        *i = 0;
    }

    g_a801fc = Script_EvaluateCondition_7(1);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_118;
    void item_e0;
    return Script_UndefinedParameterTy(g_a801fc, &item_118, &item_e0, data_8, 2, 0);
}
