// Original IGI.EXE function: Cabinet_Init (VA 0x00443ED0; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Init.h"
void* Cabinet_Init()

{
    int32_t item_13c = 0;
    int16_t data_1 = TaskType_Register("Cabinet", 0x138, SoundSys_Update3DPosition(), 0);
    g_57c1ac = data_1;
    QTask_RemoveEventCallback(data_1, 0, Cabinet_LoadParameters);
    QTask_TriggerEvent(g_57c1ac, 1, Cabinet_Setup);
    QTask_TriggerEvent(g_57c1ac, 2, Cabinet_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c1ac, data_3, sub_4446d0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_140_1 = data_4;
    data_4 = g_57c1ac;
    QTask_RemoveEventCallback(data_4, item_140_1, Cabinet_Update);
    int32_t data_5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c1ac, data_5, Cabinet_OnEvent);
    int32_t data_6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c1ac, data_6, sub_427d70);
    int32_t data_7 = Level_InitSprites_2();
    int32_t item_140_4 = data_7;
    data_7 = g_57c1ac;
    QTask_RemoveEventCallback(data_7, item_140_4, sub_444940);
    int32_t data_8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c1ac, data_8, sub_4449a0);
    int32_t data_9 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c1ac, data_9, AIGraph_LoadParameters);
    int32_t data_10 = Script_FormatString_5();
    int32_t item_140_7 = data_10;
    data_10 = g_57c1ac;
    QTask_TriggerEvent(data_10, item_140_7, Cabinet_Cleanup_3);
    int32_t data_11 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c1ac, data_11, Cabinet_Cleanup_4);
    int32_t data_12 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_57c1ac, data_12, sub_443dc0);
    g_57c1a8 = Script_EvaluateCondition_7(4);
    int32_t data_14 = Script_ParseEnumReal32_4();
    void item_138;
    void item_48;
    Script_UndefinedParameterTy(g_57c1a8, &item_138, &item_48, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumString_2();
    void item_30;
    Script_UndefinedParameterTy(g_57c1a8, &item_138, &item_30, data_15, 7, 0);
    int32_t data_16 = Script_EvaluateCondition_3();
    void item_2c;
    Script_UndefinedParameterTy(g_57c1a8, &item_138, &item_2c, data_16, 7, 0);
    int32_t data_17 = Script_EvaluateCondition_2();
    void item_c;
    Script_UndefinedParameterTy(g_57c1a8, &item_138, &item_c, data_17, 7, 0);
    int32_t item_13c_1 = 0;
    int16_t data_19 = TaskType_Register("Drawer", 0x160, MagicObj_GetTypeId(), 0);
    g_57c1a4 = data_19;
    QTask_RemoveEventCallback(data_19, 0, Cabinet_Cleanup);
    QTask_TriggerEvent(g_57c1a4, 1, Cabinet_Cleanup_2);
    QTask_TriggerEvent(g_57c1a4, 2, sub_426860);
    return TaskType_Set("TASKTYPE_DRAWER", *g_57c1a4);
}
