// Original IGI.EXE function: HumanSoldierFemale_Init (VA 0x00454970; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldierFemale_Init.h"
int32_t* HumanSoldierFemale_Init()

{
    int32_t v_d54 = 0;
    int16_t valA1 = TaskType_Register("HumanSoldierFemale", 0xd50, AI_UpdateOrders_17(), 0);
    g_5bda88 = valA1;
    QTask_RegisterEventCallback_3(valA1, 1);
    QTask_RemoveEventCallback(g_5bda88, 0, sub_454b10);
    QTask_TriggerEvent(g_5bda88, 1, sub_454ee0);
    QTask_TriggerEvent(g_5bda88, 2, HumanSoldier_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_d58 = valA3;
    valA3 = g_5bda88;
    QTask_RemoveEventCallback(valA3, v_d58, sub_454f00);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bda88, valA4, HumanSoldierFemale_Setup);
    int32_t valA5 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_5bda88, valA5, sub_455070);
    int32_t valA6 = Level_LoadLevel_3();
    int32_t v_d58_3 = valA6;
    valA6 = g_5bda88;
    QTask_RemoveEventCallback(valA6, v_d58_3, HumanSoldierFemale_Process);
    int32_t valA7 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5bda88, valA7, HumanSoldierFemale_Update);
    int32_t valA8 = AI_CheckSector_17();
    QTask_RemoveEventCallback(g_5bda88, valA8, HumanSoldierFemale_OnEvent);
    int32_t valA9 = Weapon_ReloadClip_9();
    int32_t v_d58_6 = valA9;
    valA9 = g_5bda88;
    QTask_RemoveEventCallback(valA9, v_d58_6, AIGraph_LoadParameters);
    g_5bda84 = Script_FormatString_7(AI_UpdatePatrol_18(), 2);
    int32_t valA12 = Script_ParseEnumString_3();
    void v_d50;
    void v_58;
    Script_UndefinedParameterTy(g_5bda84, &v_d50, &v_58, valA12, 7, 0);
    int32_t valA14 = Script_ParseEnumString_3();
    void v_54;
    int32_t* result = Script_UndefinedParameterTy(g_5bda84, &v_d50, &v_54, valA14, 7, 0);
    g_5bda90 = 0;
    return result;
}
