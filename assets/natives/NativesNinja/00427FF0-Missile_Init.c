#include "00427FF0-Missile_Init.h"
/* 0x00427ff0 Missile_Init full linked: callers=1 callees=43 */
int32_t* Missile_Init()

{
    int32_t var_89c = 0;
    int16_t eax_1 = TaskType_Register("Missile", 0x898, sub_4f45f0(), 0);
    g_53bb8c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_428270);
    QTask_TriggerEvent(g_53bb8c, 1, Missile_Run);
    QTask_TriggerEvent(g_53bb8c, 2, Missile_Setup);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53bb8c, eax_3, sub_429890);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_8a0_1 = eax_4;
    eax_4 = g_53bb8c;
    QTask_RemoveEventCallback(eax_4, var_8a0_1, Missile_Process);
    int32_t eax_5 = sub_4ee0e0();
    QTask_RemoveEventCallback(g_53bb8c, eax_5, Missile_Update);
    int32_t eax_6 = sub_4ee0f0();
    QTask_RemoveEventCallback(g_53bb8c, eax_6, sub_429720);
    int32_t eax_7 = HumanPlayer_UpdateHealth_10();
    int32_t var_8a0_4 = eax_7;
    eax_7 = g_53bb8c;
    QTask_RemoveEventCallback(eax_7, var_8a0_4, sub_4298a0);
    int32_t eax_8 = HumanPlayer_UpdateStamina_10();
    QTask_RemoveEventCallback(g_53bb8c, eax_8, Missile_OnEvent);
    int32_t eax_9 = HumanPlayer_CheckGround_10();
    QTask_RemoveEventCallback(g_53bb8c, eax_9, sub_429910);
    int32_t eax_10 = Level_StartMission_2();
    int32_t var_8a0_7 = eax_10;
    eax_10 = g_53bb8c;
    QTask_RemoveEventCallback(eax_10, var_8a0_7, sub_427fc0);
    int32_t eax_11 = sub_4fc840();
    QTask_RemoveEventCallback(g_53bb8c, eax_11, 0);
    QTask_RemoveEventCallback(g_53bb8c, 0xc, sub_45f920);
    int32_t eax_12 = AIConfig_LoadSettings();
    int32_t var_8a0_9 = eax_12;
    eax_12 = g_53bb8c;
    QTask_RemoveEventCallback(eax_12, var_8a0_9, Missile_Action);
    g_57bc94 = sub_4f1950(3);
    int32_t eax_14 = sub_4f1010();
    void var_898;
    void var_730;
    sub_4f1a80(g_57bc94, &var_898, &var_730, eax_14, 7, 0);
    int32_t eax_16 = sub_4f0f70();
    void var_828;
    sub_4f1a80(g_57bc94, &var_898, &var_828, eax_16, 7, 0);
    int32_t eax_18 = sub_4f0fd0();
    void var_744;
    sub_4f1a80(g_57bc94, &var_898, &var_744, eax_18, 7, 0);
    TaskType_Set("TASKTYPE_MISSILE", *g_53bb8c);
    TaskType_Set("MISSILE_SMOKE_NONE", 0);
    TaskType_Set("MISSILE_SMOKE_NORMAL", 1);
    TaskType_Set("MISSILE_TYPE_MISSILE_DIRECT", 0);
    TaskType_Set("MISSILE_TYPE_MISSILE_BALLISTIC", 2);
    TaskType_Set("MISSILE_TYPE_MISSILE_ANTITANK", 3);
    TaskType_Set("MISSILE_TYPE_MISSILE_KEYBOARD", 4);
    TaskType_Set("MISSILE_TYPE_BOMB", 5);
    TaskType_Set("MISSILE_TYPE_HIND_HELICOPTER", 1);
    return sub_4b4720(0x57bc88);
}
