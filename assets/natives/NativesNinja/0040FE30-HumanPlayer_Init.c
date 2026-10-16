#include "0040FE30-HumanPlayer_Init.h"
/* 0x0040fe30 HumanPlayer_Init full linked: callers=1 callees=40 */
void* HumanPlayer_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("HumanPlayer", 0xdf0, sub_460be0(), 0);
    g_HumanPlayerType = eax_1;
    QTask_RegisterEventCallback_3(eax_1, 1);
    int32_t* eax_2 = sub_4c1800(8);
    g_HumanPlayerCtx = eax_2;
    eax_2 = g_HumanPlayerType;
    QTask_RemoveEventCallback(eax_2, 0, HumanPlayer_LoadParameters_11);
    QTask_TriggerEvent(g_HumanPlayerType, 1, sub_454ee0);
    QTask_TriggerEvent(g_HumanPlayerType, 2, HumanPlayer_Setup);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_8 = eax_3;
    eax_3 = g_HumanPlayerType;
    QTask_RemoveEventCallback(eax_3, var_8, sub_4108b0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_HumanPlayerType, eax_4, sub_4108c0);
    int32_t eax_5 = sub_4cea20();
    QTask_RemoveEventCallback(g_HumanPlayerType, eax_5, sub_410900);
    int32_t eax_6 = sub_4f40d0();
    int32_t var_8_3 = eax_6;
    eax_6 = g_HumanPlayerType;
    QTask_RemoveEventCallback(eax_6, var_8_3, sub_410960);
    int32_t eax_7 = sub_4f40e0();
    QTask_RemoveEventCallback(g_HumanPlayerType, eax_7, sub_4123f0);
    int32_t eax_8 = sub_4f4140();
    QTask_RemoveEventCallback(g_HumanPlayerType, eax_8, sub_412420);
    int32_t eax_9 = Level_LoadLevel_3();
    int32_t var_8_6 = eax_9;
    eax_9 = g_HumanPlayerType;
    QTask_RemoveEventCallback(eax_9, var_8_6, Human_DamageApply);
    int32_t eax_10 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_HumanPlayerType, eax_10, HumanPlayer_Update);
    int32_t eax_11 = sub_460c40();
    QTask_RemoveEventCallback(g_HumanPlayerType, eax_11, HumanPlayer_OnEvent);
    int32_t eax_12 = Level_InitSprites_3();
    int32_t var_8_9 = eax_12;
    eax_12 = g_HumanPlayerType;
    QTask_RemoveEventCallback(eax_12, var_8_9, HumanPlayer_Action);
    int32_t eax_13 = sub_47e990();
    QTask_RemoveEventCallback(g_HumanPlayerType, eax_13, HumanPlayer_Cleanup);
    int32_t eax_14 = sub_487190();
    QTask_RemoveEventCallback(g_HumanPlayerType, eax_14, HumanPlayer_Cleanup_2);
    int32_t eax_15 = sub_467d90();
    int32_t var_8_12 = eax_15;
    eax_15 = g_HumanPlayerType;
    QTask_RemoveEventCallback(eax_15, var_8_12, sub_413730);
    g_HumanPlayerFlags = sub_4f1980(sub_460c50(), 1);
    Game_DefineOptions("DefineHumanPlayerGeneral", DefineHumanPlayerGeneral, 0, 0xffffffff);
    Game_DefineOptions("DefineHumanPlayerWeaponCycle", Define_HumanPlayerWeaponCycle, 0,
        0xffffffff);
    Game_DefineOptions("DefineHumanPlayerWeaponCategory", Define_HumanPlayerWeaponCategory, 0,
        0xffffffff);
    Game_DefineOptions("DefineHumanPlayerAmmoLimit", Define_HumanPlayerAmmoLimit, 0, 0xffffffff);
    return sub_48f360("UnlimitedAmmo", sub_410360);
}
