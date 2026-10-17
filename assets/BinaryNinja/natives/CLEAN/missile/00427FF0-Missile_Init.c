// IGI native provenance: Missile_Init - 0x00427FF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00427FF0-Missile_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Missile_Init.h"
int32_t* Missile_Init()

{
    int32_t item_89c = 0;
    int16_t data_1 = TaskType_Register("Missile", 0x898, Script_ExecuteLevelScript_16(), 0);
    g_53bb8c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_428270);
    QTask_TriggerEvent(g_53bb8c, 1, Missile_Run);
    QTask_TriggerEvent(g_53bb8c, 2, Missile_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53bb8c, data_3, sub_429890);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_8a0_1 = data_4;
    data_4 = g_53bb8c;
    QTask_RemoveEventCallback(data_4, item_8a0_1, Missile_Process);
    int32_t data_5 = SoundSys_Update3DPosition_18();
    QTask_RemoveEventCallback(g_53bb8c, data_5, Missile_Update);
    int32_t data_6 = SoundSys_SetMasterVolume_18();
    QTask_RemoveEventCallback(g_53bb8c, data_6, sub_429720);
    int32_t data_7 = HumanPlayer_UpdateHealth_10();
    int32_t item_8a0_4 = data_7;
    data_7 = g_53bb8c;
    QTask_RemoveEventCallback(data_7, item_8a0_4, sub_4298a0);
    int32_t data_8 = HumanPlayer_UpdateStamina_10();
    QTask_RemoveEventCallback(g_53bb8c, data_8, Missile_OnEvent);
    int32_t data_9 = HumanPlayer_CheckGround_10();
    QTask_RemoveEventCallback(g_53bb8c, data_9, sub_429910);
    int32_t data_10 = Level_StartMission_2();
    int32_t item_8a0_7 = data_10;
    data_10 = g_53bb8c;
    QTask_RemoveEventCallback(data_10, item_8a0_7, sub_427fc0);
    int32_t data_11 = Script_ParseEnumString_29();
    QTask_RemoveEventCallback(g_53bb8c, data_11, 0);
    QTask_RemoveEventCallback(g_53bb8c, 0xc, sub_45f920);
    int32_t data_12 = AIConfig_LoadSettings();
    int32_t item_8a0_9 = data_12;
    data_12 = g_53bb8c;
    QTask_RemoveEventCallback(data_12, item_8a0_9, Missile_Action);
    g_57bc94 = Script_EvaluateCondition_7(3);
    int32_t data_14 = Script_ParseEnumReal32_4();
    void item_898;
    void item_730;
    Script_UndefinedParameterTy(g_57bc94, &item_898, &item_730, data_14, 7, 0);
    int32_t data_16 = Script_SpawnNewTask_3();
    void item_828;
    Script_UndefinedParameterTy(g_57bc94, &item_898, &item_828, data_16, 7, 0);
    int32_t data_18 = Script_EvaluateCondition_3();
    void item_744;
    Script_UndefinedParameterTy(g_57bc94, &item_898, &item_744, data_18, 7, 0);
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
