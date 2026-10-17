// IGI native provenance: HumanSoldierPistol_Init - 0x00459880 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00459880-HumanSoldierPistol_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanSoldierPistol_Init.h"
int32_t* HumanSoldierPistol_Init()

{
    int32_t item_d54 = 0;
    int16_t data_1 = TaskType_Register("HumanSoldierPistol", 0xd50, AI_UpdateOrders_17(), 0);
    g_5bdaa8 = data_1;
    QTask_RegisterEventCallback_3(data_1, 1);
    QTask_RemoveEventCallback(g_5bdaa8, 0, sub_459a20);
    QTask_TriggerEvent(g_5bdaa8, 1, sub_454ee0);
    QTask_TriggerEvent(g_5bdaa8, 2, HumanSoldier_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_d58 = data_3;
    data_3 = g_5bdaa8;
    QTask_RemoveEventCallback(data_3, item_d58, sub_459f00);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bdaa8, data_4, HumanSoldier_Process);
    int32_t data_5 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_5bdaa8, data_5, sub_459f10);
    int32_t data_6 = Level_LoadLevel_3();
    int32_t item_d58_3 = data_6;
    data_6 = g_5bdaa8;
    QTask_RemoveEventCallback(data_6, item_d58_3, HumanSoldierPistol_Process);
    int32_t data_7 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5bdaa8, data_7, HumanSoldier_OnEvent);
    int32_t data_8 = AI_CheckSector_17();
    QTask_RemoveEventCallback(g_5bdaa8, data_8, HumanSoldier_Action);
    int32_t data_9 = Weapon_ReloadClip_9();
    int32_t item_d58_6 = data_9;
    data_9 = g_5bdaa8;
    QTask_RemoveEventCallback(data_9, item_d58_6, AIGraph_LoadParameters);
    g_5bdaa4 = Script_FormatString_7(AI_UpdatePatrol_18(), 2);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_d50;
    void item_58;
    Script_UndefinedParameterTy(g_5bdaa4, &item_d50, &item_58, data_12, 7, 0);
    int32_t data_14 = Script_ParseEnumString_3();
    void item_54;
    int32_t* result = Script_UndefinedParameterTy(g_5bdaa4, &item_d50, &item_54, data_14, 7, 0);
    g_5bdab0 = 0;
    return result;
}
