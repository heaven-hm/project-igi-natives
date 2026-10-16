#include "gi_platform.h"
#include "0040FE30-HumanPlayer_Init.h"
void* HumanPlayer_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("HumanPlayer", 0xdf0, AI_UpdateOrders_17(), 0);
    g_5385b0 = valA1;
    QTask_RegisterEventCallback_3(valA1, 1);
    int32_t* valA2 = Mem_Alloc8(8);
    g_56e210 = valA2;
    valA2 = g_5385b0;
    QTask_RemoveEventCallback(valA2, 0, HumanPlayer_LoadParameters_11);
    QTask_TriggerEvent(g_5385b0, 1, sub_454ee0);
    QTask_TriggerEvent(g_5385b0, 2, HumanPlayer_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_8 = valA3;
    valA3 = g_5385b0;
    QTask_RemoveEventCallback(valA3, v_8, sub_4108b0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5385b0, valA4, sub_4108c0);
    int32_t valA5 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_5385b0, valA5, sub_410900);
    int32_t valA6 = Script_ParseEnumReal32_15();
    int32_t v_8_3 = valA6;
    valA6 = g_5385b0;
    QTask_RemoveEventCallback(valA6, v_8_3, sub_410960);
    int32_t valA7 = Script_ParseEnumString_15();
    QTask_RemoveEventCallback(g_5385b0, valA7, sub_4123f0);
    int32_t valA8 = Script_ParseEnumInt32_16();
    QTask_RemoveEventCallback(g_5385b0, valA8, sub_412420);
    int32_t valA9 = Level_LoadLevel_3();
    int32_t v_8_6 = valA9;
    valA9 = g_5385b0;
    QTask_RemoveEventCallback(valA9, v_8_6, Human_DamageApply);
    int32_t valA10 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5385b0, valA10, HumanPlayer_Update);
    int32_t valA11 = AI_CheckSector_17();
    QTask_RemoveEventCallback(g_5385b0, valA11, HumanPlayer_OnEvent);
    int32_t valA12 = Level_InitSprites_3();
    int32_t v_8_9 = valA12;
    valA12 = g_5385b0;
    QTask_RemoveEventCallback(valA12, v_8_9, HumanPlayer_Action);
    int32_t valA13 = Weapon_ReloadClip_9();
    QTask_RemoveEventCallback(g_5385b0, valA13, HumanPlayer_Cleanup);
    int32_t valA14 = FX_DebrisSpawn_8();
    QTask_RemoveEventCallback(g_5385b0, valA14, HumanPlayer_Cleanup_2);
    int32_t valA15 = AI_CheckHearing_25();
    int32_t v_8_12 = valA15;
    valA15 = g_5385b0;
    QTask_RemoveEventCallback(valA15, v_8_12, sub_413730);
    g_56e09c = Script_FormatString_7(AI_UpdatePatrol_18(), 1);
    Game_DefineOptions("DefineHumanPlayerGeneral", DefineHumanPlayerGeneral, 0, 0xffffffff);
    Game_DefineOptions("DefineHumanPlayerWeaponCycle", Define_HumanPlayerWeaponCycle, 0,
        0xffffffff);
    Game_DefineOptions("DefineHumanPlayerWeaponCategory", Define_HumanPlayerWeaponCategory, 0,
        0xffffffff);
    Game_DefineOptions("DefineHumanPlayerAmmoLimit", Define_HumanPlayerAmmoLimit, 0, 0xffffffff);
    return FX_FragmentSimulate_27("UnlimitedAmmo", sub_410360);
}
