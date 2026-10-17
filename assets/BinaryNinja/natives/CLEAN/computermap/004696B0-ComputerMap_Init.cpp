// IGI native provenance: ComputerMap_Init - 0x004696B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004696B0-ComputerMap_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerMap_Init.h"
void* ComputerMap_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ComputerMap", 0xac, QTask_OpenEvent_2(), 0);
    g_5bdd90 = data_1;
    QTask_RemoveEventCallback(data_1, 0, ComputerMap_LoadParameters);
    QTask_TriggerEvent(g_5bdd90, 1, sub_46a0d0);
    QTask_TriggerEvent(g_5bdd90, 2, sub_46aa80);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_5bdd90, data_3, sub_424280);
    g_53f760 = QTask_UnableToAllocateEvent(0);
    return Sys_CloseFileStream_22("Computer_nZoomLevel", &g_5bdda0);
}
