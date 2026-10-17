// IGI native provenance: GunSPAS12_Init - 0x00472A70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472A70-GunSPAS12_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
