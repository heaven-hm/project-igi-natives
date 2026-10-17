// Original IGI.EXE function: HumanPlayer_Init (VA 0x0040FE30; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_Init.h"
void* HumanPlayer_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("HumanPlayer", 0xdf0, AI_UpdateOrders_17(), 0);
    g_5385b0 = data_1;
    QTask_RegisterEventCallback_3(data_1, 1);
    int32_t* data_2 = Mem_Alloc8(8);
    g_56e210 = data_2;
    data_2 = g_5385b0;
    QTask_RemoveEventCallback(data_2, 0, HumanPlayer_LoadParameters_11);
    QTask_TriggerEvent(g_5385b0, 1, sub_454ee0);
    QTask_TriggerEvent(g_5385b0, 2, HumanPlayer_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_8 = data_3;
    data_3 = g_5385b0;
    QTask_RemoveEventCallback(data_3, item_8, sub_4108b0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5385b0, data_4, sub_4108c0);
    int32_t data_5 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_5385b0, data_5, sub_410900);
    int32_t data_6 = Script_ParseEnumReal32_15();
    int32_t item_8_3 = data_6;
    data_6 = g_5385b0;
    QTask_RemoveEventCallback(data_6, item_8_3, sub_410960);
    int32_t data_7 = Script_ParseEnumString_15();
    QTask_RemoveEventCallback(g_5385b0, data_7, sub_4123f0);
    int32_t data_8 = Script_ParseEnumInt32_16();
    QTask_RemoveEventCallback(g_5385b0, data_8, sub_412420);
    int32_t data_9 = Level_LoadLevel_3();
    int32_t item_8_6 = data_9;
    data_9 = g_5385b0;
    QTask_RemoveEventCallback(data_9, item_8_6, Human_DamageApply);
    int32_t data_10 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5385b0, data_10, HumanPlayer_Update);
    int32_t data_11 = AI_CheckSector_17();
    QTask_RemoveEventCallback(g_5385b0, data_11, HumanPlayer_OnEvent);
    int32_t data_12 = Level_InitSprites_3();
    int32_t item_8_9 = data_12;
    data_12 = g_5385b0;
    QTask_RemoveEventCallback(data_12, item_8_9, HumanPlayer_Action);
    int32_t data_13 = Weapon_ReloadClip_9();
    QTask_RemoveEventCallback(g_5385b0, data_13, HumanPlayer_Cleanup);
    int32_t data_14 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5385b0, data_14, HumanPlayer_Cleanup_2);
    int32_t data_15 = AI_CheckHearing_25();
    int32_t item_8_12 = data_15;
    data_15 = g_5385b0;
    QTask_RemoveEventCallback(data_15, item_8_12, sub_413730);
    g_56e09c = Script_FormatString_7(AI_UpdatePatrol_18(), 1);
    Game_DefineOptions("DefineHumanPlayerGeneral", DefineHumanPlayerGeneral, 0, 0xffffffff);
    Game_DefineOptions("DefineHumanPlayerWeaponCycle", Define_HumanPlayerWeaponCycle, 0,
        0xffffffff);
    Game_DefineOptions("DefineHumanPlayerWeaponCategory", Define_HumanPlayerWeaponCategory, 0,
        0xffffffff);
    Game_DefineOptions("DefineHumanPlayerAmmoLimit", Define_HumanPlayerAmmoLimit, 0, 0xffffffff);
    return FX_FragmentSimulate_27("UnlimitedAmmo", sub_410360);
}
