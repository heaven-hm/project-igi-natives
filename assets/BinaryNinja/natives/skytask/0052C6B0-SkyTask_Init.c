// IGI native provenance: SkyTask_Init - 0x0052C6B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052C6B0-SkyTask_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SkyTask_Init.h"
int32_t* SkyTask_Init()

{
    int32_t item_7c = 0;
    int16_t data_1 = TaskType_Register("SkyTask", 0x78, QTask_OpenEvent_2(), 0);
    g_54f6e4 = data_1;
    QTask_RemoveEventCallback(data_1, 4, sub_52c7a0);
    QTask_RemoveEventCallback(g_54f6e4, 0, sub_52c7c0);
    QTask_TriggerEvent(g_54f6e4, 2, sub_520f20);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54f6e4, data_3, AIGraph_LoadParameters);
    int32_t data_4 = Script_ParseEnumInt32_8();
    int32_t item_80_1 = data_4;
    data_4 = g_54f6e4;
    QTask_RemoveEventCallback(data_4, item_80_1, sub_52c790);
    g_a84558 = Script_EvaluateCondition_7(2);
    int32_t data_6 = Script_EvaluateCondition_2();
    void item_78;
    void item_8;
    Script_UndefinedParameterTy(g_a84558, &item_78, &item_8, data_6, 7, 0);
    int32_t data_8 = Script_ParseEnumString_2();
    void item_c;
    return Script_UndefinedParameterTy(g_a84558, &item_78, &item_c, data_8, 7, 0);
}
