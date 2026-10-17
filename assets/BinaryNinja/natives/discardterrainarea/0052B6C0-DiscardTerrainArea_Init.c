// IGI native provenance: DiscardTerrainArea_Init - 0x0052B6C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052B6C0-DiscardTerrainArea_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DiscardTerrainArea_Init.h"
int32_t* DiscardTerrainArea_Init()

{
    int32_t item_7c = 0;
    int16_t data_1 = TaskType_Register("DiscardTerrainArea", 0x78, DynObj_LookupHashItem_5(), 0);
    g_a84540 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_52b7f0);
    QTask_RemoveEventCallback(g_a84540, 7, sub_52be70);
    QTask_TriggerEvent(g_a84540, 2, AIGraph_LoadParameters);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a84540, data_3, sub_52be60);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_80_1 = data_4;
    data_4 = g_a84540;
    QTask_RemoveEventCallback(data_4, item_80_1, DiscardTerrainArea_Setup);
    g_a84544 = Script_EvaluateCondition_7(4);
    int32_t data_6 = Script_ParseEnumReal32_4();
    void item_78;
    void item_58;
    Script_UndefinedParameterTy(g_a84544, &item_78, &item_58, data_6, 7, 0);
    int32_t data_8 = Script_ParseEnumString_3();
    void item_10;
    Script_UndefinedParameterTy(g_a84544, &item_78, &item_10, data_8, 7, 0);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_c;
    Script_UndefinedParameterTy(g_a84544, &item_78, &item_c, data_10, 7, 0);
    int32_t data_12 = Script_ParseEnumInt32_4();
    void item_8;
    return Script_UndefinedParameterTy(g_a84544, &item_78, &item_8, data_12, 7, 0);
}
