#include "gi_platform.h"
#include "004739D0-GunMP5SD_Init.h"
void* GunMP5SD_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("GunMP5SD", 0x1b8, Weapon_ComputeAccuracy_5(), 0);
    g_5be374 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_473ab0);
    QTask_TriggerEvent(g_5be374, 2, sub_4754a0);
    int32_t valA3 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be374, valA3, GunMP5SD_LoadParameters);
    int32_t valA4 = HumanPlayer_ApplyPhysics_10();
    QTask_RemoveEventCallback(g_5be374, valA4, sub_4732f0);
    int32_t valA5 = HumanPlayer_HandleInput_10();
    int32_t v_8_2 = valA5;
    valA5 = g_5be374;
    QTask_RemoveEventCallback(valA5, v_8_2, sub_427d70);
    int32_t valA6 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be374, valA6, GunMP5SD_Setup);
    int32_t valA7 = Script_SpawnNewTask_12();
    QTask_TriggerEvent(g_5be374, valA7, GunMP5SD_Process);
    return TaskType_Set("TASKTYPE_GUNMP5SD", *g_5be374);
}
