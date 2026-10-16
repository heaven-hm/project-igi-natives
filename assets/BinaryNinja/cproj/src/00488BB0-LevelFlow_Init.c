#include "gi_platform.h"
#include "00488BB0-LevelFlow_Init.h"
void* LevelFlow_Init()

{
    g_5c8ab4 = DynObj_MtpNlodvirmodelD("306_01_1");
    int32_t v_12c = 0;
    int16_t valA2 = TaskType_Register("LevelFlow", 0x128, EditorRigidObj_OnEvent(), 0);
    g_5c8ab8 = valA2;
    QTask_RemoveEventCallback(valA2, 0, sub_488ed0);
    QTask_TriggerEvent(g_5c8ab8, 1, LevelFlow_LoadParameters);
    QTask_TriggerEvent(g_5c8ab8, 2, sub_489200);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5c8ab8, valA4, sub_489280);
    int32_t valA5 = Script_ParseEnumReal32_8();
    int32_t v_130_1 = valA5;
    valA5 = g_5c8ab8;
    QTask_RemoveEventCallback(valA5, v_130_1, LevelFlow_Setup);
    int32_t valA6 = Script_FormatString_5();
    QTask_TriggerEvent(g_5c8ab8, valA6, LevelFlow_Process);
    int32_t valA7 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_5c8ab8, valA7, LevelFlow_Update);
    QTask_RemoveEventCallback(g_5c8ab8, 7, 0);
    g_5c8aa4 = Script_EvaluateCondition_7(7);
    int32_t valA10 = Script_ParseEnumReal32_4();
    char v_128;
    char v_108;
    Script_UndefinedParameterTy(g_5c8aa4, &v_128, &v_108, valA10, 7, 0);
    int32_t valA12 = Script_SpawnNewTask_3();
    char v_f0;
    Script_UndefinedParameterTy(g_5c8aa4, &v_128, &v_f0, valA12, 7, 0);
    Script_EvaluateCondition_9();
    int32_t valA14 = Script_EvaluateCondition_2();
    char v_bc;
    Script_UndefinedParameterTy(g_5c8aa4, &v_128, &v_bc, valA14, 7, &g_a76be8);
    int32_t valA16 = Script_CallNativeHandler_3();
    char v_ac;
    Script_UndefinedParameterTy(g_5c8aa4, &v_128, &v_ac, valA16, 7, 0);
    int32_t valA18 = Script_CallNativeHandler_3();
    char v_5c;
    Script_UndefinedParameterTy(g_5c8aa4, &v_128, &v_5c, valA18, 7, 0);
    int32_t valA20 = Script_ParseEnumInt32_4();
    char v_b8;
    Script_UndefinedParameterTy(g_5c8aa4, &v_128, &v_b8, valA20, 7, 0);
    int32_t valA22 = Script_EvaluateCondition_2();
    char v_b4;
    Script_UndefinedParameterTy(g_5c8aa4, &v_128, &v_b4, valA22, 7, 0);
    TaskType_Set("TASKTYPE_LEVELFLOW", *g_5c8ab8);
    Game_DefineOptions("LevelFlow_GetBreakCutSceneKey", LevelFlow_GetBreakCutSceneKey, 0, 0);
    Game_DefineOptions("LevelFlow_LevelFailed", LevelFlow_LevelFailed, 0, 0);
    return Game_DefineOptions("LevelFlow_IsCountryUSA", LevelFlow_IsCountryUSA, 0, 0);
}
