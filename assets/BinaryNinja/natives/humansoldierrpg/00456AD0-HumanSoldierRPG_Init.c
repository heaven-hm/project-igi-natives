// Original IGI.EXE function: HumanSoldierRPG_Init (VA 0x00456AD0; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldierRPG_Init.h"
int32_t* HumanSoldierRPG_Init()

{
    int32_t item_d44 = 0;
    int16_t data_1 = TaskType_Register("HumanSoldierRPG", 0xd40, AI_UpdateOrders_17(), 0);
    g_5bda94 = data_1;
    QTask_RegisterEventCallback_3(data_1, 1);
    QTask_RemoveEventCallback(g_5bda94, 0, sub_456c70);
    QTask_TriggerEvent(g_5bda94, 1, sub_454ee0);
    QTask_TriggerEvent(g_5bda94, 2, HumanSoldier_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_d48 = data_3;
    data_3 = g_5bda94;
    QTask_RemoveEventCallback(data_3, item_d48, sub_456e40);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bda94, data_4, HumanSoldier_Process);
    int32_t data_5 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_5bda94, data_5, sub_456fb0);
    int32_t data_6 = Level_LoadLevel_3();
    int32_t item_d48_3 = data_6;
    data_6 = g_5bda94;
    QTask_RemoveEventCallback(data_6, item_d48_3, HumanSoldierRPG_Process);
    int32_t data_7 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5bda94, data_7, HumanSoldierRPG_Update);
    int32_t data_8 = AI_CheckSector_17();
    QTask_RemoveEventCallback(g_5bda94, data_8, HumanSoldierRPG_OnEvent);
    int32_t data_9 = Weapon_ReloadClip_9();
    int32_t item_d48_6 = data_9;
    data_9 = g_5bda94;
    QTask_RemoveEventCallback(data_9, item_d48_6, AIGraph_LoadParameters);
    g_5bda98 = Script_FormatString_7(AI_UpdatePatrol_18(), 2);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_d40;
    void item_48;
    Script_UndefinedParameterTy(g_5bda98, &item_d40, &item_48, data_12, 7, 0);
    int32_t data_14 = Script_ParseEnumString_3();
    void item_44;
    int32_t* result = Script_UndefinedParameterTy(g_5bda98, &item_d40, &item_44, data_14, 7, 0);
    g_5bdaa0 = 0;
    return result;
}
