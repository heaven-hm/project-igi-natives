#include "00419760-BackgroundFX_Init.h"
/* 0x00419760 BackgroundFX_Init full linked: callers=1 callees=9 */
int32_t BackgroundFX_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("BackgroundFX", 0x24, QTask_OpenEvent_2(), 0);
    g_539af0 = eax_1;
    QTask_TriggerEvent(eax_1, 1, sub_419800);
    int32_t eax_2 = sub_4e7530();
    int32_t var_8 = eax_2;
    eax_2 = g_539af0;
    QTask_TriggerEvent(eax_2, var_8, BackgroundFX_LoadParameters);
    QTask_TriggerEvent(g_539af0, 2, sub_4d3710);
    QTask_RemoveEventCallback(g_539af0, 0, sub_4197f0);
    int32_t eax_3 = sub_4f1a70();
    int32_t var_8_1 = eax_3;
    eax_3 = g_539af0;
    return QTask_RemoveEventCallback(eax_3, var_8_1, sub_4d3710);
}
