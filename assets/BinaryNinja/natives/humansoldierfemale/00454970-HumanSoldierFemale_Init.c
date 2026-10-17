// Original IGI.EXE function: HumanSoldierFemale_Init (VA 0x00454970; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldierFemale_Init.h"
int32_t* HumanSoldierFemale_Init()

{
    int32_t item_d54 = 0;
    int16_t data_1 = TaskType_Register("HumanSoldierFemale", 0xd50, AI_UpdateOrders_17(), 0);
    g_5bda88 = data_1;
    QTask_RegisterEventCallback_3(data_1, 1);
    QTask_RemoveEventCallback(g_5bda88, 0, sub_454b10);
    QTask_TriggerEvent(g_5bda88, 1, sub_454ee0);
    QTask_TriggerEvent(g_5bda88, 2, HumanSoldier_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_d58 = data_3;
    data_3 = g_5bda88;
    QTask_RemoveEventCallback(data_3, item_d58, sub_454f00);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5bda88, data_4, HumanSoldierFemale_Setup);
    int32_t data_5 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_5bda88, data_5, sub_455070);
    int32_t data_6 = Level_LoadLevel_3();
    int32_t item_d58_3 = data_6;
    data_6 = g_5bda88;
    QTask_RemoveEventCallback(data_6, item_d58_3, HumanSoldierFemale_Process);
    int32_t data_7 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_5bda88, data_7, HumanSoldierFemale_Update);
    int32_t data_8 = AI_CheckSector_17();
    QTask_RemoveEventCallback(g_5bda88, data_8, HumanSoldierFemale_OnEvent);
    int32_t data_9 = Weapon_ReloadClip_9();
    int32_t item_d58_6 = data_9;
    data_9 = g_5bda88;
    QTask_RemoveEventCallback(data_9, item_d58_6, AIGraph_LoadParameters);
    g_5bda84 = Script_FormatString_7(AI_UpdatePatrol_18(), 2);
    int32_t data_12 = Script_ParseEnumString_3();
    void item_d50;
    void item_58;
    Script_UndefinedParameterTy(g_5bda84, &item_d50, &item_58, data_12, 7, 0);
    int32_t data_14 = Script_ParseEnumString_3();
    void item_54;
    int32_t* result = Script_UndefinedParameterTy(g_5bda84, &item_d50, &item_54, data_14, 7, 0);
    g_5bda90 = 0;
    return result;
}
