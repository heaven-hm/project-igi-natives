// Original IGI.EXE function: ComputerMap_Init (VA 0x004696B0; static CFG gate PASS, CFG score 1.000).
#include "ComputerMap_Init.h"
void* ComputerMap_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ComputerMap", 0xac, QTask_OpenEvent_2(), 0);
    g_5bdd90 = valA1;
    QTask_RemoveEventCallback(valA1, 0, ComputerMap_LoadParameters);
    QTask_TriggerEvent(g_5bdd90, 1, sub_46a0d0);
    QTask_TriggerEvent(g_5bdd90, 2, sub_46aa80);
    int32_t valA3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_5bdd90, valA3, sub_424280);
    g_53f760 = QTask_UnableToAllocateEvent(0);
    return Sys_CloseFileStream_22("Computer_nZoomLevel", &g_5bdda0);
}
