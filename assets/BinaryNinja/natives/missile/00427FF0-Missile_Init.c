// Original IGI.EXE function: Missile_Init (VA 0x00427FF0; static CFG gate PASS, CFG score 1.000).
#include "Missile_Init.h"
int32_t* Missile_Init()

{
    int32_t v_89c = 0;
    int16_t valA1 = TaskType_Register("Missile", 0x898, Script_ExecuteLevelScript_16(), 0);
    g_53bb8c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_428270);
    QTask_TriggerEvent(g_53bb8c, 1, Missile_Run);
    QTask_TriggerEvent(g_53bb8c, 2, Missile_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53bb8c, valA3, sub_429890);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_8a0_1 = valA4;
    valA4 = g_53bb8c;
    QTask_RemoveEventCallback(valA4, v_8a0_1, Missile_Process);
    int32_t valA5 = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(g_53bb8c, valA5, Missile_Update);
    int32_t valA6 = SoundSys_SetMasterVolume_18();
    QTask_RemoveEventCallback(g_53bb8c, valA6, sub_429720);
    int32_t valA7 = HumanPlayer_UpdateHealth_10();
    int32_t v_8a0_4 = valA7;
    valA7 = g_53bb8c;
    QTask_RemoveEventCallback(valA7, v_8a0_4, sub_4298a0);
    int32_t valA8 = HumanPlayer_UpdateStamina_10();
    QTask_RemoveEventCallback(g_53bb8c, valA8, Missile_OnEvent);
    int32_t valA9 = HumanPlayer_CheckGround_10();
    QTask_RemoveEventCallback(g_53bb8c, valA9, sub_429910);
    int32_t valA10 = Level_StartMission_2();
    int32_t v_8a0_7 = valA10;
    valA10 = g_53bb8c;
    QTask_RemoveEventCallback(valA10, v_8a0_7, sub_427fc0);
    int32_t valA11 = Script_ParseEnumString_29();
    QTask_RemoveEventCallback(g_53bb8c, valA11, 0);
    QTask_RemoveEventCallback(g_53bb8c, 0xc, sub_45f920);
    int32_t valA12 = AIConfig_LoadSettings();
    int32_t v_8a0_9 = valA12;
    valA12 = g_53bb8c;
    QTask_RemoveEventCallback(valA12, v_8a0_9, Missile_Action);
    g_57bc94 = Script_EvaluateCondition_7(3);
    int32_t valA14 = Script_ParseEnumReal32_4();
    void v_898;
    void v_730;
    Script_UndefinedParameterTy(g_57bc94, &v_898, &v_730, valA14, 7, 0);
    int32_t valA16 = Script_SpawnNewTask_3();
    void v_828;
    Script_UndefinedParameterTy(g_57bc94, &v_898, &v_828, valA16, 7, 0);
    int32_t valA18 = Script_EvaluateCondition_3();
    void v_744;
    Script_UndefinedParameterTy(g_57bc94, &v_898, &v_744, valA18, 7, 0);
    TaskType_Set("TASKTYPE_MISSILE", *g_53bb8c);
    TaskType_Set("MISSILE_SMOKE_NONE", 0);
    TaskType_Set("MISSILE_SMOKE_NORMAL", 1);
    TaskType_Set("MISSILE_TYPE_MISSILE_DIRECT", 0);
    TaskType_Set("MISSILE_TYPE_MISSILE_BALLISTIC", 2);
    TaskType_Set("MISSILE_TYPE_MISSILE_ANTITANK", 3);
    TaskType_Set("MISSILE_TYPE_MISSILE_KEYBOARD", 4);
    TaskType_Set("MISSILE_TYPE_BOMB", 5);
    TaskType_Set("MISSILE_TYPE_HIND_HELICOPTER", 1);
    return Sys_ResolveSymbol_13(0x57bc88);
}
