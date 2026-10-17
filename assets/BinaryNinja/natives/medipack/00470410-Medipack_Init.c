// Original IGI.EXE function: Medipack_Init (VA 0x00470410; static CFG gate PASS, CFG score 1.000).
#include "Medipack_Init.h"
void* Medipack_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Medipack", 0x1b0, Weapon_ComputeAccuracy_5(), 0);
    g_5be334 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_470500);
    int32_t valA2 = Script_ParseEnumString_11();
    int32_t v_8 = valA2;
    valA2 = g_5be334;
    QTask_RemoveEventCallback(valA2, v_8, Binocular_Process_2);
    int32_t valA3 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be334, valA3, AIGraph_LoadParameters);
    int32_t valA4 = AI_SelectTarget_17();
    QTask_RemoveEventCallback(g_5be334, valA4, AIGraph_LoadParameters);
    int32_t valA5 = HumanPlayer_ApplyPhysics_10();
    int32_t v_8_3 = valA5;
    valA5 = g_5be334;
    QTask_RemoveEventCallback(valA5, v_8_3, sub_470540);
    int32_t valA6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be334, valA6, sub_427d70);
    int32_t valA7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be334, valA7, Medipack_Update);
    return TaskType_Set("TASKTYPE_MEDIPACK", *g_5be334);
}
