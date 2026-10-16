#include "00475380-ProximityMine_Init.h"
/* 0x00475380 ProximityMine_Init full linked: callers=1 callees=15 */
void* sub_475380()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ProximityMine", 0x1b0, sub_477bf0(), 0);
    g_5be394 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_475460);
    QTask_TriggerEvent(g_5be394, 2, sub_4754a0);
    int32_t eax_3 = sub_4f1fe0();
    QTask_RemoveEventCallback(g_5be394, eax_3, sub_4754c0);
    int32_t eax_4 = sub_460bf0();
    QTask_RemoveEventCallback(g_5be394, eax_4, sub_4755a0);
    int32_t eax_5 = HumanPlayer_ApplyPhysics_10();
    int32_t var_8_2 = eax_5;
    eax_5 = g_5be394;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_475900);
    int32_t eax_6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be394, eax_6, sub_429910);
    int32_t eax_7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be394, eax_7, sub_475960);
    return TaskType_Set("TASKTYPE_PROXIMITYMINE", *g_5be394);
}
