// IGI native provenance: GunMP5SD_Init - 0x004739D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004739D0-GunMP5SD_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunMP5SD_Init.h"
void* GunMP5SD_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("GunMP5SD", 0x1b8, Weapon_ComputeAccuracy_5(), 0);
    g_5be374 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_473ab0);
    QTask_TriggerEvent(g_5be374, 2, sub_4754a0);
    int32_t data_3 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be374, data_3, GunMP5SD_LoadParameters);
    int32_t data_4 = HumanPlayer_ApplyPhysics_10();
    QTask_RemoveEventCallback(g_5be374, data_4, sub_4732f0);
    int32_t data_5 = HumanPlayer_HandleInput_10();
    int32_t item_8_2 = data_5;
    data_5 = g_5be374;
    QTask_RemoveEventCallback(data_5, item_8_2, sub_427d70);
    int32_t data_6 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be374, data_6, GunMP5SD_Setup);
    int32_t data_7 = Script_SpawnNewTask_12();
    QTask_TriggerEvent(g_5be374, data_7, GunMP5SD_Process);
    return TaskType_Set("TASKTYPE_GUNMP5SD", *g_5be374);
}
