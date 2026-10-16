#include "gi_platform.h"
#include "004801B0-Explosion0_Init.h"
char* Explosion0_Init()

{
    int32_t v_4_3 = 0;
    int16_t valA1 = TaskType_Register("Explosion0", 0x88, QTask_OpenEvent_2(), 0x20);
    g_5c1154 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_480f30);
    QTask_TriggerEvent(g_5c1154, 1, Explosion0_LoadParameters);
    QTask_TriggerEvent(g_5c1154, 2, AIGraph_LoadParameters);
    int32_t v_4 = 0;
    int16_t valA4 = TaskType_Register("FireBall", 0x118, DynObj_LookupHashItem_5(), 0x60);
    g_5c1168 = valA4;
    QTask_RemoveEventCallback(valA4, 0, Explosion0_Process);
    QTask_RemoveEventCallback(g_5c1168, 4, Explosion0_Update);
    int32_t valA5 = Level_StartMission_2();
    int32_t v_8 = valA5;
    valA5 = g_5c1168;
    QTask_RemoveEventCallback(valA5, v_8, sub_45f920);
    int32_t valA6 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5c1168, valA6, sub_45f920);
    int32_t valA7 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5c1168, valA7, sub_45f920);
    QTask_RemoveEventCallback(g_5c1168, 0xc, sub_45f920);
    QTask_TriggerEvent(g_5c1168, 1, Explosion0_OnEvent);
    QTask_TriggerEvent(g_5c1168, 2, Explosion0_Action);
    int32_t valA9 = FX_TrailUpdate_12();
    int32_t v_8_3 = valA9;
    valA9 = g_5c1168;
    QTask_RemoveEventCallback(valA9, v_8_3, sub_45f920);
    int32_t v_4_1 = 0;
    int16_t valA11 = TaskType_Register("Fragment", 0x118, Physics_SimulateRigidBody_2(), 0xa0);
    g_5c1156 = valA11;
    QTask_TriggerEvent(valA11, 1, Explosion0_Cleanup_2);
    QTask_RemoveEventCallback(g_5c1156, 0xc, sub_45f920);
    int32_t valA12 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5c1156, valA12, 0);
    int32_t valA13 = Level_LoadObjects_4();
    int32_t v_8_5 = valA13;
    valA13 = g_5c1156;
    QTask_RemoveEventCallback(valA13, v_8_5, 0);
    int32_t valA14 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5c1156, valA14, 0);
    int32_t valA15 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_5c1156, valA15, 0);
    int32_t v_4_2 = 0;
    int16_t valA17 = TaskType_Register("ExplosionSmoke", 0x48, QTask_OpenEvent_2(), 0x40);
    g_5c115c = valA17;
    QTask_RemoveEventCallback(valA17, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_5c115c, 1, Explosion0_Cleanup);
    QTask_TriggerEvent(g_5c115c, 2, AIGraph_LoadParameters);
    g_5c1164 = Level_LoadLevel_5("burn1.tex");
    g_5c1160 = Level_LoadObjects_6("smoke2.spr");
    char* result = Level_LoadObjects_6("fireball.spr");
    g_5c1158 = result;
    return result;
}
