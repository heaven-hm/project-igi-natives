#include "004739D0-GunMP5SD_Init.h"
/* 0x004739d0 GunMP5SD_Init full linked: callers=1 callees=15 */
void* sub_4739d0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("GunMP5SD", 0x1b8, sub_477bf0(), 0);
    g_5be374 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_473ab0);
    QTask_TriggerEvent(g_5be374, 2, sub_4754a0);
    int32_t eax_3 = sub_460bf0();
    QTask_RemoveEventCallback(g_5be374, eax_3, sub_473af0);
    int32_t eax_4 = HumanPlayer_ApplyPhysics_10();
    QTask_RemoveEventCallback(g_5be374, eax_4, sub_4732f0);
    int32_t eax_5 = HumanPlayer_HandleInput_10();
    int32_t var_8_2 = eax_5;
    eax_5 = g_5be374;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_427d70);
    int32_t eax_6 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be374, eax_6, sub_473c80);
    int32_t eax_7 = sub_4f2030();
    QTask_TriggerEvent(g_5be374, eax_7, sub_473990);
    return TaskType_Set("TASKTYPE_GUNMP5SD", *g_5be374);
}
