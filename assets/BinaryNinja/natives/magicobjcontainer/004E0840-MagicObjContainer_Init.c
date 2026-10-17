// IGI native provenance: MagicObjContainer_Init - 0x004E0840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E0840-MagicObjContainer_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "MagicObjContainer_Init.h"
int32_t MagicObjContainer_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("MagicObjContainer", 0x24, QTask_OpenEvent_2(), 0);
    g_a5e364 = data_1;
    QTask_TriggerEvent(data_1, 1, sub_488700);
    int32_t data_2 = DynObj_FindSymbol_6();
    int32_t item_8 = data_2;
    data_2 = g_a5e364;
    return QTask_RemoveEventCallback(data_2, item_8, sub_4e0890);
}
