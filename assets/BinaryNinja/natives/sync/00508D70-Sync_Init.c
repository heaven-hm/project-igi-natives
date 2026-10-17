// Original IGI.EXE function: Sync_Init (VA 0x00508D70; static CFG gate PASS, CFG score 1.000).
#include "Sync_Init.h"
int32_t Sync_Init()

{
    int32_t v_4 = 0;
    g_a7b298 = TaskType_Register("Sync", 0x994, QTask_OpenEvent_2(), 0);
    g_54e830 = QTask_UnableToAllocateEvent(0);
    g_54e831 = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_a7b298, 0, sub_508e00);
    QTask_TriggerEvent(g_a7b298, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a7b298, 2, sub_508e30);
    int32_t valA4 = StatusScreen_GetEvent();
    int32_t v_8 = valA4;
    valA4 = g_a7b298;
    return QTask_TriggerEvent(valA4, v_8, Sync_Setup);
}
