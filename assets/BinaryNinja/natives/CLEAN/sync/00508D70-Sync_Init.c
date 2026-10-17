// IGI native provenance: Sync_Init - 0x00508D70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00508D70-Sync_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sync_Init.h"
int32_t Sync_Init()

{
    int32_t item_4 = 0;
    g_a7b298 = TaskType_Register("Sync", 0x994, QTask_OpenEvent_2(), 0);
    g_54e830 = QTask_UnableToAllocateEvent(0);
    g_54e831 = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_a7b298, 0, sub_508e00);
    QTask_TriggerEvent(g_a7b298, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a7b298, 2, sub_508e30);
    int32_t data_4 = StatusScreen_GetEvent();
    int32_t item_8 = data_4;
    data_4 = g_a7b298;
    return QTask_TriggerEvent(data_4, item_8, Sync_Setup);
}
