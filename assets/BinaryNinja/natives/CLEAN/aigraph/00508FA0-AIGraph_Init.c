// IGI native provenance: AIGraph_Init - 0x00508FA0 - CFG score 99.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 00508FA0-AIGraph_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIGraph_Init.h"
void* AIGraph_Init()

{
    int32_t item_c4 = 0;
    int16_t data_1 = TaskType_Register("AIGraph", 0xc0, Script_FormatString_21(), 0);
    g_54e83c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_509570);
    QTask_TriggerEvent(g_54e83c, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_54e83c, 2, AIGraph_Setup);
    int32_t data_3 = Script_EvaluateCondition_22();
    QTask_RemoveEventCallback(g_54e83c, data_3, sub_5093b0);
    int32_t data_4 = Script_ParseEnumInt32_22();
    int32_t item_c8_1 = data_4;
    data_4 = g_54e83c;
    QTask_RemoveEventCallback(data_4, item_c8_1, AIGraph_Process);
    int32_t data_5 = Script_ParseEnumString_22();
    QTask_RemoveEventCallback(g_54e83c, data_5, AIGraph_LoadParameters);
    int32_t data_6 = Script_ExecuteLevelScript_22();
    QTask_RemoveEventCallback(g_54e83c, data_6, AIGraph_LoadParameters);
    int32_t data_7 = Script_SpawnNewTask_22();
    int32_t item_c8_4 = data_7;
    data_7 = g_54e83c;
    QTask_RemoveEventCallback(data_7, item_c8_4, sub_509450);
    int32_t data_8 = Script_ParseEnumReal32_22();
    QTask_RemoveEventCallback(g_54e83c, data_8, AIGraph_Action);
    int32_t data_9 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_54e83c, data_9, AIGraph_Cleanup_2);
    int32_t data_10 = Script_ParseEnumInt32_8();
    int32_t item_c8_7 = data_10;
    data_10 = g_54e83c;
    QTask_RemoveEventCallback(data_10, item_c8_7, sub_509440);
    g_a7b2c0 = 0;
    g_a7b2c4 = 0x40340000;
    strncpy(&g_a7b2b8, "3333", 4);
    g_a7b2bc = 0x3fd33333;
    g_a7b2b0 = 0;
    g_a7b2b4 = 0x3ff00000;
    g_a7b2a8 = 0x47ae147b;
    g_a7b2ac = 0x3f847ae1;
    g_a7b2cc = Script_FormatString_7(Script_EvaluateCondition_21(), 7);
    int32_t data_13 = Script_ParseEnumInt32_3();
    void item_c0;
    void item_40;
    Script_UndefinedParameterTy(g_a7b2cc, &item_c0, &item_40, data_13, 7, 0);
    int32_t data_15 = Script_ParseEnumInt32_3();
    void item_38;
    Script_UndefinedParameterTy(g_a7b2cc, &item_c0, &item_38, data_15, 5, 0);
    int32_t data_17 = Script_ParseEnumInt32_3();
    void item_30;
    Script_UndefinedParameterTy(g_a7b2cc, &item_c0, &item_30, data_17, 7, 0);
    int32_t data_19 = Script_ParseEnumInt32_3();
    void item_28;
    Script_UndefinedParameterTy(g_a7b2cc, &item_c0, &item_28, data_19, 7, &g_a7b2b8);
    int32_t data_21 = Script_ParseEnumInt32_3();
    void item_20;
    Script_UndefinedParameterTy(g_a7b2cc, &item_c0, &item_20, data_21, 7, 0);
    int32_t data_23 = Script_ParseEnumInt32_4();
    void item_4;
    Script_UndefinedParameterTy(g_a7b2cc, &item_c0, &item_4, data_23, 7, 0);
    int32_t data_25 = Script_ParseEnumInt32_3();
    void item_18;
    Script_UndefinedParameterTy(g_a7b2cc, &item_c0, &item_18, data_25, 7, &g_a7b2a8);
    Script_NoFreeNodesizeElemen(g_54e83c, 0x240);
    g_a7b2d0 = Terrain_RenderQuadtree_9("NODECRITERIA_DOOR");
    g_a7b2d4 = Terrain_RenderQuadtree_9("NODECRITERIA_VIEW");
    g_a7b2d8 = Terrain_RenderQuadtree_9("NODECRITERIA_STAIR");
    return Script_GraphstreamCollision("RouteTable", 0xa, AIGraph_Cleanup);
}
