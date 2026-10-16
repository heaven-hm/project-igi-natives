#include "gi_platform.h"
#include "00456AD0-HumanSoldierRPG_Init.h"
int32_t* HumanSoldierRPG_Init()

{
    int32_t v_d44 = 0;
    int16_t valA1 = TaskType_Register("HumanSoldierRPG", 0xd40, AI_UpdateOrders_17(), 0);
    g_5bda94 = valA1;
    QTask_RegisterEventCallback_3(valA1, 1);
    QTask_RemoveEventCallback(g_5bda94, 0, sub_456c70);
    QTask_TriggerEvent(g_5bda94, 1, sub_454ee0);
    QTask_TriggerEvent(g_5bda94, 2, HumanSoldier_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_d48 = valA3;
    valA3 = g_5bda94;
    QTask_RemoveEventCallback(valA3, v_d48, sub_456e40);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bda94, valA4, HumanSoldier_Process);
    int32_t valA5 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_5bda94, valA5, sub_456fb0);
    int32_t valA6 = Level_LoadLevel_3();
    int32_t v_d48_3 = valA6;
    valA6 = g_5bda94;
    QTask_RemoveEventCallback(valA6, v_d48_3, HumanSoldierRPG_Process);
    int32_t valA7 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5bda94, valA7, HumanSoldierRPG_Update);
    int32_t valA8 = AI_CheckSector_17();
    QTask_RemoveEventCallback(g_5bda94, valA8, HumanSoldierRPG_OnEvent);
    int32_t valA9 = Weapon_ReloadClip_9();
    int32_t v_d48_6 = valA9;
    valA9 = g_5bda94;
    QTask_RemoveEventCallback(valA9, v_d48_6, AIGraph_LoadParameters);
    g_5bda98 = Script_FormatString_7(AI_UpdatePatrol_18(), 2);
    int32_t valA12 = Script_ParseEnumString_3();
    char v_d40;
    char v_48;
    Script_UndefinedParameterTy(g_5bda98, &v_d40, &v_48, valA12, 7, 0);
    int32_t valA14 = Script_ParseEnumString_3();
    char v_44;
    int32_t* result = Script_UndefinedParameterTy(g_5bda98, &v_d40, &v_44, valA14, 7, 0);
    g_5bdaa0 = 0;
    return result;
}
