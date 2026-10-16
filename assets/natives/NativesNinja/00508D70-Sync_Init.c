#include "00508D70-Sync_Init.h"
/* 0x00508d70 Sync_Init full linked: callers=1 callees=9 */
int32_t sub_508d70()

{
    int32_t var_4 = 0;
    g_a7b298 = TaskType_Register("Sync", 0x994, QTask_OpenEvent_2(), 0);
    g_54e830 = QTask_UnableToAllocateEven(0);
    g_54e831 = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_a7b298, 0, sub_508e00);
    QTask_TriggerEvent(g_a7b298, 1, sub_4d3710);
    QTask_TriggerEvent(g_a7b298, 2, sub_508e30);
    int32_t eax_4 = sub_4e7530();
    int32_t var_8 = eax_4;
    eax_4 = g_a7b298;
    return QTask_TriggerEvent(eax_4, var_8, sub_508e40);
}
