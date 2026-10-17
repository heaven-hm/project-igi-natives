// IGI native provenance: TerraDrawTask_Init - 0x004E82C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E82C0-TerraDrawTask_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "TerraDrawTask_Init.h"
int32_t TerraDrawTask_Init()

{
    int32_t item_4 = 0;
    g_54d9a0 = TaskType_Register("TerraDrawTask", 0x24, QTask_OpenEvent_2(), 0);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_8 = data_2;
    data_2 = g_54d9a0;
    QTask_TriggerEvent(data_2, item_8, sub_4e8310);
    return QTask_TriggerEvent(g_54d9a0, 2, AIGraph_LoadParameters);
}
