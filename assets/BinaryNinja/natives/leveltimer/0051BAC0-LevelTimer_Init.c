// Original IGI.EXE function: LevelTimer_Init (VA 0x0051BAC0; static CFG gate PASS, CFG score 1.000).
#include "LevelTimer_Init.h"
void* LevelTimer_Init()

{
    int32_t item_114 = 0;
    int16_t data_1 = TaskType_Register("LevelTimer", 0x110, EditorRigidObj_OnEvent(), 0);
    g_a83774 = data_1;
    QTask_RemoveEventCallback(data_1, 0, LevelTimer_LoadParameters);
    QTask_TriggerEvent(g_a83774, 1, LevelTimer_Tick);
    QTask_TriggerEvent(g_a83774, 2, LevelTimer_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83774, data_3, sub_51be00);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_118_1 = data_4;
    data_4 = g_a83774;
    QTask_RemoveEventCallback(data_4, item_118_1, sub_51bee0);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_a83774, data_5, LevelTimer_Update);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a83774, data_6, LevelTimer_OnEvent);
    g_a83778 = Script_EvaluateCondition_7(5);
    int32_t data_8 = Script_ParseEnumReal32_4();
    void item_110;
    void item_f0;
    Script_UndefinedParameterTy(g_a83778, &item_110, &item_f0, data_8, 7, 0);
    int32_t data_9 = Script_SpawnNewTask_3();
    void item_d8;
    Script_UndefinedParameterTy(g_a83778, &item_110, &item_d8, data_9, 7, 0);
    int32_t data_10 = Script_CallNativeHandler_3();
    void item_a4;
    Script_UndefinedParameterTy(g_a83778, &item_110, &item_a4, data_10, 7, 0);
    int32_t data_11 = Script_CallNativeHandler_3();
    void item_54;
    Script_UndefinedParameterTy(g_a83778, &item_110, &item_54, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumInt32_4();
    void item_b0;
    Script_UndefinedParameterTy(g_a83778, &item_110, &item_b0, data_12, 7, 0);
    return TaskType_Set("TASKTYPE_LEVELTIMER", *g_a83774);
}
