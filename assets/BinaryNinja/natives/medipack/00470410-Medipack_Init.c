// Original IGI.EXE function: Medipack_Init (VA 0x00470410; static CFG gate PASS, CFG score 1.000).
#include "Medipack_Init.h"
void* Medipack_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Medipack", 0x1b0, Weapon_ComputeAccuracy_5(), 0);
    g_5be334 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_470500);
    int32_t data_2 = Script_ParseEnumString_11();
    int32_t item_8 = data_2;
    data_2 = g_5be334;
    QTask_RemoveEventCallback(data_2, item_8, Binocular_Process_2);
    int32_t data_3 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be334, data_3, AIGraph_LoadParameters);
    int32_t data_4 = AI_SelectTarget_17();
    QTask_RemoveEventCallback(g_5be334, data_4, AIGraph_LoadParameters);
    int32_t data_5 = HumanPlayer_ApplyPhysics_10();
    int32_t item_8_3 = data_5;
    data_5 = g_5be334;
    QTask_RemoveEventCallback(data_5, item_8_3, sub_470540);
    int32_t data_6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be334, data_6, sub_427d70);
    int32_t data_7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be334, data_7, Medipack_Update);
    return TaskType_Set("TASKTYPE_MEDIPACK", *g_5be334);
}
