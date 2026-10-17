// IGI native provenance: Glass_Init - 0x00449970 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449970-Glass_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Glass_Init.h"
void* Glass_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Glass", 0x148, MagicObj_GetTypeId(), 0);
    g_57c220 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4497f0);
    QTask_TriggerEvent(g_57c220, 1, Glass_LoadParameters);
    QTask_TriggerEvent(g_57c220, 2, ExplodeMagicObj_Setup);
    int32_t data_3 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_57c220, data_3, AIGraph_LoadParameters);
    int32_t data_4 = DynObj_RegisterSymbol_6();
    int32_t item_8_1 = data_4;
    data_4 = g_57c220;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_427d70);
    int32_t data_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c220, data_5, sub_449b00);
    int32_t data_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57c220, data_6, Glass_Update);
    int32_t data_7 = Script_CallNativeHandler_29();
    int32_t item_8_4 = data_7;
    data_7 = g_57c220;
    QTask_RemoveEventCallback(data_7, item_8_4, sub_449cb0);
    int32_t data_8 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_57c220, data_8, sub_45f920);
    return TaskType_Set("TASKTYPE_GLASS", *g_57c220);
}
