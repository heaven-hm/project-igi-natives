// IGI native provenance: ExplodeMagicObj_Init - 0x0043BFD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043BFD0-ExplodeMagicObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplodeMagicObj_Init.h"
void* ExplodeMagicObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ExplodeMagicObj", 0x150, MagicObj_GetTypeId(), 0);
    g_57bf7c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_43be80);
    QTask_TriggerEvent(g_57bf7c, 1, ExplodeMagicObj_LoadParameters_2);
    QTask_TriggerEvent(g_57bf7c, 2, ExplodeMagicObj_Setup);
    int32_t data_3 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_57bf7c, data_3, ExplodeMagicObj_LoadParameters);
    int32_t data_4 = DynObj_RegisterSymbol_6();
    int32_t item_8_1 = data_4;
    data_4 = g_57bf7c;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_43c2a0);
    int32_t data_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bf7c, data_5, sub_43c2b0);
    int32_t data_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bf7c, data_6, ExplodeMagicObj_Update);
    return TaskType_Set("TASKTYPE_EXPLODEMAGICOBJ", *g_57bf7c);
}
