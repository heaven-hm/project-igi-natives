// IGI native provenance: FreeCamera_Init - 0x005310E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005310E0-FreeCamera_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FreeCamera_Init.h"
int32_t FreeCamera_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("FreeCamera", 0x90, QTask_OpenEvent_2(), 0);
    g_54f7d0 = data_1;
    QTask_TriggerEvent(data_1, 1, FreeCamera_LoadParameters);
    return QTask_TriggerEvent(g_54f7d0, 2, AIGraph_LoadParameters);
}
