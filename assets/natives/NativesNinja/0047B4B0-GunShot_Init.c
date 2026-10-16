#include "0047B4B0-GunShot_Init.h"
/* 0x0047b4b0 GunShot_Init full linked: callers=1 callees=10 */
void* sub_47b4b0()

{
    int32_t var_4 = 0;
    g_5be3ce = TaskType_Register("GunShot", 0xc38, QTask_OpenEvent_2(), 0);
    g_5be3cc = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_5be3ce, 0, sub_47b560);
    QTask_TriggerEvent(g_5be3ce, 1, sub_47b690);
    QTask_TriggerEvent(g_5be3ce, 2, sub_47c3d0);
    QTask_RemoveEventCallback(g_5be3ce, 4, sub_47abd0);
    int32_t eax_4 = HumanPlayer_UpdateHealth_10();
    QTask_RemoveEventCallback(g_5be3ce, eax_4, sub_47c420);
    int32_t edx_1 = 0;
    edx_1 = g_5be3ce;
    return TaskType_Set("TASKTYPE_GUNSHOT", edx_1);
}
