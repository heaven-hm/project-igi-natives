// IGI native provenance: Hatch_Init - 0x00435D90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00435D90-Hatch_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Hatch_Init.h"
void* Hatch_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Hatch", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd6c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_435c50);
    QTask_TriggerEvent(g_57bd6c, 1, sub_435e50);
    QTask_TriggerEvent(g_57bd6c, 2, sub_51b940);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd6c, data_3, Hatch_LoadParameters);
    int32_t data_4 = DynObj_RemoveSymbol_5();
    int32_t item_8_1 = data_4;
    data_4 = g_57bd6c;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_436090);
    int32_t data_5 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_57bd6c, data_5, sub_427d70);
    return TaskType_Set("TASKTYPE_HATCH", *g_57bd6c);
}
