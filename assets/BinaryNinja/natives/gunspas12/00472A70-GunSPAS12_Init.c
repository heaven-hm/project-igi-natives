// Original IGI.EXE function: GunSPAS12_Init (VA 0x00472A70; static CFG gate PASS, CFG score 1.000).
#include "GunSPAS12_Init.h"
void* GunSPAS12_Init()

{
    int32_t item_4 = 0;
    g_5be350 = TaskType_Register("GunSPAS12", 0x1b0, Weapon_ComputeAccuracy_5(), 0);
    int32_t data_2 = AI_SelectTarget_17();
    int32_t item_8 = data_2;
    data_2 = g_5be350;
    QTask_RemoveEventCallback(data_2, item_8, sub_472ae0);
    QTask_RemoveEventCallback(g_5be350, 0, sub_472ca0);
    return TaskType_Set("TASKTYPE_GUNSPAS12", *g_5be350);
}
