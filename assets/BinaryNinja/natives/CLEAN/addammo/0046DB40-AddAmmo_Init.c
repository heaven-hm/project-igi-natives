// IGI native provenance: AddAmmo_Init - 0x0046DB40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046DB40-AddAmmo_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AddAmmo_Init.h"
int32_t* AddAmmo_Init()

{
    int32_t item_4c = 0;
    int16_t data_1 = TaskType_Register("AddAmmo", 0x48, QTask_OpenEvent_2(), 0);
    g_5be30c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_46dc20);
    QTask_TriggerEvent(g_5be30c, 1, AddAmmo_LoadParameters);
    QTask_TriggerEvent(g_5be30c, 2, AIGraph_LoadParameters);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5be30c, data_3, sub_46dca0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_50_1 = data_4;
    data_4 = g_5be30c;
    QTask_RemoveEventCallback(data_4, item_50_1, sub_46dcb0);
    g_5be310 = Script_EvaluateCondition_7(2);
    int32_t data_6 = Script_CallNativeHandler_10();
    void item_48;
    void item_24;
    Script_UndefinedParameterTy(g_5be310, &item_48, &item_24, data_6, 7, 0x5c10f0);
    int32_t data_8 = Script_ExecuteLevelScript_3();
    void item_4;
    return Script_UndefinedParameterTy(g_5be310, &item_48, &item_4, data_8, 7, 0);
}
