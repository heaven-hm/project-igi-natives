// Original IGI.EXE function: HumanSoldier_Init (VA 0x0045CAB0; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldier_Init.h"
int32_t* HumanSoldier_Init()

{
    int32_t item_d54 = 0;
    int16_t data_1 = TaskType_Register("HumanSoldier", 0xd50, AI_UpdateOrders_17(), 0);
    g_5bdabc = data_1;
    QTask_RegisterEventCallback_3(data_1, 1);
    QTask_RemoveEventCallback(g_5bdabc, 0, sub_45cc50);
    QTask_TriggerEvent(g_5bdabc, 1, HumanSoldier_LoadParameters);
    QTask_TriggerEvent(g_5bdabc, 2, HumanSoldier_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_d58 = data_3;
    data_3 = g_5bdabc;
    QTask_RemoveEventCallback(data_3, item_d58, sub_45d030);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bdabc, data_4, HumanSoldier_Process);
    int32_t data_5 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_5bdabc, data_5, sub_45d040);
    int32_t data_6 = Level_LoadLevel_3();
    int32_t item_d58_3 = data_6;
    data_6 = g_5bdabc;
    QTask_RemoveEventCallback(data_6, item_d58_3, Human_DamageHandler);
    int32_t data_7 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5bdabc, data_7, HumanSoldier_OnEvent);
    int32_t data_8 = AI_CheckSector_17();
    QTask_RemoveEventCallback(g_5bdabc, data_8, HumanSoldier_Action);
    int32_t data_9 = Weapon_ReloadClip_9();
    int32_t item_d58_6 = data_9;
    data_9 = g_5bdabc;
    QTask_RemoveEventCallback(data_9, item_d58_6, AIGraph_LoadParameters);
    g_5bdab4 = Script_FormatString_7(AI_UpdatePatrol_18(), 2);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_d50;
    void item_58;
    Script_UndefinedParameterTy(g_5bdab4, &item_d50, &item_58, data_12, 7, 0);
    int32_t data_14 = Script_ParseEnumString_3();
    void item_54;
    int32_t* result = Script_UndefinedParameterTy(g_5bdab4, &item_d50, &item_54, data_14, 7, 0);
    g_5bdac0 = 0;
    return result;
}
