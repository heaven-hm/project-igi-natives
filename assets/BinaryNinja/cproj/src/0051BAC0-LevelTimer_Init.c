#include "gi_platform.h"
#include "0051BAC0-LevelTimer_Init.h"
void* LevelTimer_Init()

{
    int32_t v_114 = 0;
    int16_t valA1 = TaskType_Register("LevelTimer", 0x110, EditorRigidObj_OnEvent(), 0);
    g_a83774 = valA1;
    QTask_RemoveEventCallback(valA1, 0, LevelTimer_LoadParameters);
    QTask_TriggerEvent(g_a83774, 1, LevelTimer_Tick);
    QTask_TriggerEvent(g_a83774, 2, LevelTimer_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83774, valA3, sub_51be00);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_118_1 = valA4;
    valA4 = g_a83774;
    QTask_RemoveEventCallback(valA4, v_118_1, sub_51bee0);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_a83774, valA5, LevelTimer_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a83774, valA6, LevelTimer_OnEvent);
    g_a83778 = Script_EvaluateCondition_7(5);
    int32_t valA8 = Script_ParseEnumReal32_4();
    char v_110;
    char v_f0;
    Script_UndefinedParameterTy(g_a83778, &v_110, &v_f0, valA8, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_3();
    char v_d8;
    Script_UndefinedParameterTy(g_a83778, &v_110, &v_d8, valA9, 7, 0);
    int32_t valA10 = Script_CallNativeHandler_3();
    char v_a4;
    Script_UndefinedParameterTy(g_a83778, &v_110, &v_a4, valA10, 7, 0);
    int32_t valA11 = Script_CallNativeHandler_3();
    char v_54;
    Script_UndefinedParameterTy(g_a83778, &v_110, &v_54, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_4();
    char v_b0;
    Script_UndefinedParameterTy(g_a83778, &v_110, &v_b0, valA12, 7, 0);
    return TaskType_Set("TASKTYPE_LEVELTIMER", *g_a83774);
}
