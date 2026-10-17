// IGI native provenance: Origo_Init - 0x005207A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005207A0-Origo_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Origo_Init.h"
int32_t* Origo_Init()

{
    int32_t item_134 = 0;
    int16_t data_1 = TaskType_Register("Origo", 0x130, DynObj_LookupHashItem_5(), 0);
    g_a83854 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_520730);
    QTask_RemoveEventCallback(g_a83854, 4, AnimSound_LoadParameters);
    QTask_RemoveEventCallback(g_a83854, 7, sub_520910);
    QTask_TriggerEvent(g_a83854, 2, sub_5209e0);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_138 = data_3;
    data_3 = g_a83854;
    QTask_RemoveEventCallback(data_3, item_138, sub_520a00);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a83854, data_4, sub_520a10);
    QTask_RemoveEventCallback(g_a83854, 0xa, 0);
    QTask_RemoveEventCallback(g_a83854, 0xb, 0);
    int32_t data_6 = Render_DrawSplineMesh_4();
    QTask_RemoveEventCallback(g_a83854, data_6, 0);
    QTask_RemoveEventCallback(g_a83854, 9, 0);
    QTask_RemoveEventCallback(g_a83854, 8, 0);
    QTask_RemoveEventCallback(g_a83854, 0xc, 0);
    int32_t data_8 = SoundSys_AttachLipsync_2();
    QTask_RemoveEventCallback(g_a83854, data_8, sub_52bfe0);
    g_a83850 = Script_EvaluateCondition_7(1);
    int32_t data_10 = Script_ParseEnumReal32_4();
    void item_130;
    void item_38;
    return Script_UndefinedParameterTy(g_a83850, &item_130, &item_38, data_10, 7, 0);
}
