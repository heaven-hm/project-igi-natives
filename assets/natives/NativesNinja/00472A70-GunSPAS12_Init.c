#include "00472A70-GunSPAS12_Init.h"
/* 0x00472a70 GunSPAS12_Init full linked: callers=1 callees=6 */
void* sub_472a70()

{
    int32_t var_4 = 0;
    g_5be350 = TaskType_Register("GunSPAS12", 0x1b0, sub_477bf0(), 0);
    int32_t eax_2 = sub_460c10();
    int32_t var_8 = eax_2;
    eax_2 = g_5be350;
    QTask_RemoveEventCallback(eax_2, var_8, sub_472ae0);
    QTask_RemoveEventCallback(g_5be350, 0, sub_472ca0);
    return TaskType_Set("TASKTYPE_GUNSPAS12", *g_5be350);
}
