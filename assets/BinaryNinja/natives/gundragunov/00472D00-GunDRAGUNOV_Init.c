// Original IGI.EXE function: GunDRAGUNOV_Init (VA 0x00472D00; static CFG gate PASS, CFG score 1.000).
#include "GunDRAGUNOV_Init.h"
char* GunDRAGUNOV_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("GunDRAGUNOV", 0x1b8, Weapon_ComputeAccuracy_5(), 0);
    g_5be358 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_472e10);
    QTask_TriggerEvent(g_5be358, 2, sub_4754a0);
    int32_t valA3 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be358, valA3, GunDRAGUNOV_LoadParameters);
    int32_t valA4 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5be358, valA4, GunDRAGUNOV_Setup);
    int32_t valA5 = HumanPlayer_ApplyPhysics_10();
    int32_t v_8_2 = valA5;
    valA5 = g_5be358;
    QTask_RemoveEventCallback(valA5, v_8_2, sub_4732f0);
    int32_t valA6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be358, valA6, sub_427d70);
    int32_t valA7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be358, valA7, GunDRAGUNOV_Process);
    TaskType_Set("TASKTYPE_GUNDRAGUNOV", *g_5be358);
    g_5be360 = Level_LoadObjects_6("snipersight.spr");
    g_5be364 = Level_LoadObjects_6("snipersight_x.spr");
    char* result = Level_LoadObjects_6("snipersight_y.spr");
    g_5be35c = result;
    return result;
}
