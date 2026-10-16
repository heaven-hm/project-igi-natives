#include "004801B0-Explosion0_Init.h"
/* 0x004801b0 Explosion0_Init full linked: callers=1 callees=40 */
char* sub_4801b0()

{
    int32_t var_4_3 = 0;
    int16_t eax_1 = TaskType_Register("Explosion0", 0x88, QTask_OpenEvent_2(), 0x20);
    g_5c1154 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_480f30);
    QTask_TriggerEvent(g_5c1154, 1, sub_480f40);
    QTask_TriggerEvent(g_5c1154, 2, sub_4d3710);
    int32_t var_4 = 0;
    int16_t eax_4 = TaskType_Register("FireBall", 0x118, sub_4c48c0(), 0x60);
    g_5c1168 = eax_4;
    QTask_RemoveEventCallback(eax_4, 0, sub_4805f0);
    QTask_RemoveEventCallback(g_5c1168, 4, sub_480790);
    int32_t eax_5 = Level_StartMission_2();
    int32_t var_8 = eax_5;
    eax_5 = g_5c1168;
    QTask_RemoveEventCallback(eax_5, var_8, sub_45f920);
    int32_t eax_6 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5c1168, eax_6, sub_45f920);
    int32_t eax_7 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5c1168, eax_7, sub_45f920);
    QTask_RemoveEventCallback(g_5c1168, 0xc, sub_45f920);
    QTask_TriggerEvent(g_5c1168, 1, sub_4806e0);
    QTask_TriggerEvent(g_5c1168, 2, sub_480f00);
    int32_t eax_9 = sub_489610();
    int32_t var_8_3 = eax_9;
    eax_9 = g_5c1168;
    QTask_RemoveEventCallback(eax_9, var_8_3, sub_45f920);
    int32_t var_4_1 = 0;
    int16_t eax_11 = TaskType_Register("Fragment", 0x118, sub_503bf0(), 0xa0);
    g_5c1156 = eax_11;
    QTask_TriggerEvent(eax_11, 1, sub_4805b0);
    QTask_RemoveEventCallback(g_5c1156, 0xc, sub_45f920);
    int32_t eax_12 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5c1156, eax_12, 0);
    int32_t eax_13 = Level_LoadObjects_4();
    int32_t var_8_5 = eax_13;
    eax_13 = g_5c1156;
    QTask_RemoveEventCallback(eax_13, var_8_5, 0);
    int32_t eax_14 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5c1156, eax_14, 0);
    int32_t eax_15 = sub_489610();
    QTask_RemoveEventCallback(g_5c1156, eax_15, 0);
    int32_t var_4_2 = 0;
    int16_t eax_17 = TaskType_Register("ExplosionSmoke", 0x48, QTask_OpenEvent_2(), 0x40);
    g_5c115c = eax_17;
    QTask_RemoveEventCallback(eax_17, 0, sub_4d3710);
    QTask_TriggerEvent(g_5c115c, 1, sub_480420);
    QTask_TriggerEvent(g_5c115c, 2, sub_4d3710);
    g_5c1164 = Level_LoadLevel_5("burn1.tex");
    g_5c1160 = Level_LoadObjects_6("smoke2.spr");
    char* result = Level_LoadObjects_6("fireball.spr");
    g_5c1158 = result;
    return result;
}
