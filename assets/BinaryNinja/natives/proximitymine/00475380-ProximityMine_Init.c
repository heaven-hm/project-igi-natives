#include "ProximityMine_Init.h"
void* ProximityMine_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ProximityMine", 0x1b0, Weapon_ComputeAccuracy_5(), 0);
    g_5be394 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_475460);
    QTask_TriggerEvent(g_5be394, 2, sub_4754a0);
    int32_t valA3 = Script_ParseEnumString_11();
    QTask_RemoveEventCallback(g_5be394, valA3, Binocular_Process_2);
    int32_t valA4 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be394, valA4, ProximityMine_Setup);
    int32_t valA5 = HumanPlayer_ApplyPhysics_10();
    int32_t v_8_2 = valA5;
    valA5 = g_5be394;
    QTask_RemoveEventCallback(valA5, v_8_2, ProximityMine_Process);
    int32_t valA6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be394, valA6, sub_429910);
    int32_t valA7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be394, valA7, ProximityMine_Update);
    return TaskType_Set("TASKTYPE_PROXIMITYMINE", *g_5be394);
}
