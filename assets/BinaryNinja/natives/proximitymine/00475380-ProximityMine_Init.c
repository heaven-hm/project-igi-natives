// Original IGI.EXE function: ProximityMine_Init (VA 0x00475380; static CFG gate PASS, CFG score 1.000).
#include "ProximityMine_Init.h"
void* ProximityMine_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ProximityMine", 0x1b0, Weapon_ComputeAccuracy_5(), 0);
    g_5be394 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_475460);
    QTask_TriggerEvent(g_5be394, 2, sub_4754a0);
    int32_t data_3 = Script_ParseEnumString_11();
    QTask_RemoveEventCallback(g_5be394, data_3, Binocular_Process_2);
    int32_t data_4 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be394, data_4, ProximityMine_Setup);
    int32_t data_5 = HumanPlayer_ApplyPhysics_10();
    int32_t item_8_2 = data_5;
    data_5 = g_5be394;
    QTask_RemoveEventCallback(data_5, item_8_2, ProximityMine_Process);
    int32_t data_6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be394, data_6, sub_429910);
    int32_t data_7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be394, data_7, ProximityMine_Update);
    return TaskType_Set("TASKTYPE_PROXIMITYMINE", *g_5be394);
}
