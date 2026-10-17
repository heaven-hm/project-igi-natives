// Original IGI.EXE function: GunM16A2_Init (VA 0x004733F0; static CFG gate PASS, CFG score 1.000).
#include "GunM16A2_Init.h"
void* GunM16A2_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("GunM16A2", 0x1b0, Weapon_ComputeAccuracy_5(), 0);
    g_5be36c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4734d0);
    QTask_TriggerEvent(g_5be36c, 2, sub_4754a0);
    int32_t data_3 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be36c, data_3, GunM16A2_LoadParameters);
    int32_t data_4 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5be36c, data_4, GunM16A2_Setup);
    int32_t data_5 = HumanPlayer_ApplyPhysics_10();
    int32_t item_8_2 = data_5;
    data_5 = g_5be36c;
    QTask_RemoveEventCallback(data_5, item_8_2, GunM16A2_Process);
    int32_t data_6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be36c, data_6, sub_4737e0);
    int32_t data_7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be36c, data_7, GunM16A2_Update);
    return TaskType_Set("TASKTYPE_GUNM16A2", *g_5be36c);
}
