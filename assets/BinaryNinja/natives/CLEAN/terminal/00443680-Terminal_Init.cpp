// IGI native provenance: Terminal_Init - 0x00443680 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00443680-Terminal_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terminal_Init.h"
int32_t* Terminal_Init()

{
    int32_t item_2a4 = 0;
    int16_t data_1 = TaskType_Register("Terminal", 0x2a0, FX_TrailUpdate(), 0);
    g_53c680 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_443840);
    QTask_TriggerEvent(g_53c680, 1, Terminal_LoadParameters);
    QTask_TriggerEvent(g_53c680, 2, Terminal_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53c680, data_3, sub_443a00);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_2a8_1 = data_4;
    data_4 = g_53c680;
    QTask_RemoveEventCallback(data_4, item_2a8_1, sub_443a10);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53c680, data_5, Terminal_Process);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_53c680, data_6, Terminal_Update);
    int32_t data_7 = Level_InitTextures_2();
    int32_t item_2a8_4 = data_7;
    data_7 = g_53c680;
    QTask_RemoveEventCallback(data_7, item_2a8_4, GenericTBA_OnEvent);
    int32_t data_8 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_53c680, data_8, sub_443d70);
    int32_t data_9 = Level_InitSprites_2();
    QTask_RemoveEventCallback(g_53c680, data_9, sub_443d80);
    int32_t data_10 = Level_SetMission_2();
    int32_t item_2a8_7 = data_10;
    data_10 = g_53c680;
    QTask_RemoveEventCallback(data_10, item_2a8_7, sub_443da0);
    int32_t data_11 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_53c680, data_11, sub_443dc0);
    g_57c1a0 = Script_FormatString_7(FX_ExplosionSpawn_2(), 2);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_2a0;
    void item_50;
    Script_UndefinedParameterTy(g_57c1a0, &item_2a0, &item_50, data_14, 7, 0);
    int32_t data_15 = Script_EvaluateCondition_2();
    void item_54;
    return Script_UndefinedParameterTy(g_57c1a0, &item_2a0, &item_54, data_15, 7, 0);
}
