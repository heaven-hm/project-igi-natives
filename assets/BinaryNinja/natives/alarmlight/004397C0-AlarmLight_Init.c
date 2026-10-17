// Original IGI.EXE function: AlarmLight_Init (VA 0x004397C0; static CFG gate PASS, CFG score 1.000).
#include "AlarmLight_Init.h"
char* AlarmLight_Init()

{
    int32_t item_204 = 0;
    int16_t data_1 = TaskType_Register("AlarmLight", 0x1f8, SoundSys_Update3DPosition(), 0);
    g_57bea2 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_43a0e0);
    QTask_TriggerEvent(g_57bea2, 1, AlarmLight_LoadParameters);
    QTask_TriggerEvent(g_57bea2, 2, AlarmLight_Setup);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bea2, data_3, sub_43a440);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_208_1 = data_4;
    data_4 = g_57bea2;
    QTask_RemoveEventCallback(data_4, item_208_1, AlarmLight_Parsed);
    int32_t data_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bea2, data_5, sub_43a5e0);
    int32_t data_6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bea2, data_6, AlarmLight_Update);
    int32_t data_7 = Script_FormatString_5();
    int32_t item_208_4 = data_7;
    data_7 = g_57bea2;
    QTask_TriggerEvent(data_7, item_208_4, AlarmLight_OnEvent);
    int32_t data_8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57bea2, data_8, AlarmLight_Action);
    int32_t temp_2 = 0;
    temp_2 = g_57bea2;
    TaskType_Set("TASKTYPE_ALARMLIGHT", temp_2);
    g_57be9c = Script_EvaluateCondition_7(8);
    int32_t data_10 = Script_ParseEnumReal32_4();
    void item_1f8;
    void item_108;
    Script_UndefinedParameterTy(g_57be9c, &item_1f8, &item_108, data_10, 7, 0);
    int32_t data_11 = Script_SpawnNewTask_3();
    void item_f0;
    Script_UndefinedParameterTy(g_57be9c, &item_1f8, &item_f0, data_11, 7, 0);
    int32_t data_12 = Script_CallNativeHandler_3();
    void item_54;
    Script_UndefinedParameterTy(g_57be9c, &item_1f8, &item_54, data_12, 7, 0);
    void item_c8;
    void* source_val = &item_c8;
    int32_t i_2 = 3;
    int32_t i;

    do
    {
        int32_t data_13 = Script_EvaluateCondition_3();
        Script_UndefinedParameterTy(g_57be9c, &item_1f8, source_val, data_13, 7, 0);
        source_val += 0x10;
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    void item_98;
    void* source_1 = &item_98;
    int32_t i_3 = 2;
    int32_t i_1;

    do
    {
        int32_t data_14 = Script_EvaluateCondition_3();
        Script_UndefinedParameterTy(g_57be9c, &item_1f8, source_1, data_14, 7, 0);
        source_1 += 0x20;
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    int32_t item_204_1 = 0;
    int16_t data_17 = TaskType_Register("AlarmLightReflector", 0x140, MagicObj_GetTypeId(), 0);
    g_57bea0 = data_17;
    QTask_RemoveEventCallback(data_17, 0, AlarmLight_Cleanup);
    QTask_TriggerEvent(g_57bea0, 1, AlarmLight_Cleanup_2);
    QTask_TriggerEvent(g_57bea0, 2, sub_426860);
    QTask_RemoveEventCallback(g_57bea0, 4, AlarmLight_Cleanup_3);
    TaskType_Set("TASKTYPE_ALARMLIGHTREFLECTOR", *g_57bea0);
    char* result = Level_LoadObjects_6("alarmlight.spr");
    g_57bea4 = result;
    return result;
}
