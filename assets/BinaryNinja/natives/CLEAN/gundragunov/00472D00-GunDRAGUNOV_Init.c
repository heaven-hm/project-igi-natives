// IGI native provenance: GunDRAGUNOV_Init - 0x00472D00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472D00-GunDRAGUNOV_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunDRAGUNOV_Init.h"
char* GunDRAGUNOV_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("GunDRAGUNOV", 0x1b8, Weapon_ComputeAccuracy_5(), 0);
    g_5be358 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_472e10);
    QTask_TriggerEvent(g_5be358, 2, sub_4754a0);
    int32_t data_3 = AI_AlertAllies_17();
    QTask_RemoveEventCallback(g_5be358, data_3, GunDRAGUNOV_LoadParameters);
    int32_t data_4 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5be358, data_4, GunDRAGUNOV_Setup);
    int32_t data_5 = HumanPlayer_ApplyPhysics_10();
    int32_t item_8_2 = data_5;
    data_5 = g_5be358;
    QTask_RemoveEventCallback(data_5, item_8_2, sub_4732f0);
    int32_t data_6 = HumanPlayer_HandleInput_10();
    QTask_RemoveEventCallback(g_5be358, data_6, sub_427d70);
    int32_t data_7 = AIConfig_LoadSettings();
    QTask_RemoveEventCallback(g_5be358, data_7, GunDRAGUNOV_Process);
    TaskType_Set("TASKTYPE_GUNDRAGUNOV", *g_5be358);
    g_5be360 = Level_LoadObjects_6("snipersight.spr");
    g_5be364 = Level_LoadObjects_6("snipersight_x.spr");
    char* result = Level_LoadObjects_6("snipersight_y.spr");
    g_5be35c = result;
    return result;
}
