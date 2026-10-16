#include "004696B0-ComputerMap_Init.h"
/* 0x004696b0 ComputerMap_Init full linked: callers=1 callees=9 */
void* sub_4696b0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ComputerMap", 0xac, QTask_OpenEvent_2(), 0);
    g_5bdd90 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_469740);
    QTask_TriggerEvent(g_5bdd90, 1, sub_46a0d0);
    QTask_TriggerEvent(g_5bdd90, 2, sub_46aa80);
    int32_t eax_3 = sub_4e7530();
    QTask_TriggerEvent(g_5bdd90, eax_3, sub_424280);
    g_53f760 = QTask_UnableToAllocateEven(0);
    return sub_4b7f40("Computer_nZoomLevel", &g_5bdda0);
}
