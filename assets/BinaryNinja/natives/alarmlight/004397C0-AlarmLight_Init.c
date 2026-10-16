#include "AlarmLight_Init.h"
char* AlarmLight_Init()

{
    int32_t v_204 = 0;
    int16_t valA1 = TaskType_Register("AlarmLight", 0x1f8, SoundSys_Update3DPosition(), 0);
    g_57bea2 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_43a0e0);
    QTask_TriggerEvent(g_57bea2, 1, AlarmLight_LoadParameters);
    QTask_TriggerEvent(g_57bea2, 2, AlarmLight_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bea2, valA3, sub_43a440);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_208_1 = valA4;
    valA4 = g_57bea2;
    QTask_RemoveEventCallback(valA4, v_208_1, AlarmLight_Parsed);
    int32_t valA5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bea2, valA5, sub_43a5e0);
    int32_t valA6 = Level_InitTextures_3();
    QTask_RemoveEventCallback(g_57bea2, valA6, AlarmLight_Update);
    int32_t valA7 = Script_FormatString_5();
    int32_t v_208_4 = valA7;
    valA7 = g_57bea2;
    QTask_TriggerEvent(valA7, v_208_4, AlarmLight_OnEvent);
    int32_t valA8 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57bea2, valA8, AlarmLight_Action);
    int32_t tmpD2 = 0;
    tmpD2 = g_57bea2;
    TaskType_Set("TASKTYPE_ALARMLIGHT", tmpD2);
    g_57be9c = Script_EvaluateCondition_7(8);
    int32_t valA10 = Script_ParseEnumReal32_4();
    void v_1f8;
    void v_108;
    Script_UndefinedParameterTy(g_57be9c, &v_1f8, &v_108, valA10, 7, 0);
    int32_t valA11 = Script_SpawnNewTask_3();
    void v_f0;
    Script_UndefinedParameterTy(g_57be9c, &v_1f8, &v_f0, valA11, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_3();
    void v_54;
    Script_UndefinedParameterTy(g_57be9c, &v_1f8, &v_54, valA12, 7, 0);
    void v_c8;
    void* srcS = &v_c8;
    int32_t i_2 = 3;
    int32_t i;

    do
    {
        int32_t valA13 = Script_EvaluateCondition_3();
        Script_UndefinedParameterTy(g_57be9c, &v_1f8, srcS, valA13, 7, 0);
        srcS += 0x10;
        i = i_2;
        i_2 -= 1;
    } while (i != 1);
    void v_98;
    void* srcS1 = &v_98;
    int32_t i_3 = 2;
    int32_t i_1;

    do
    {
        int32_t valA14 = Script_EvaluateCondition_3();
        Script_UndefinedParameterTy(g_57be9c, &v_1f8, srcS1, valA14, 7, 0);
        srcS1 += 0x20;
        i_1 = i_3;
        i_3 -= 1;
    } while (i_1 != 1);
    int32_t v_204_1 = 0;
    int16_t valA17 = TaskType_Register("AlarmLightReflector", 0x140, MagicObj_GetTypeId(), 0);
    g_57bea0 = valA17;
    QTask_RemoveEventCallback(valA17, 0, AlarmLight_Cleanup);
    QTask_TriggerEvent(g_57bea0, 1, AlarmLight_Cleanup_2);
    QTask_TriggerEvent(g_57bea0, 2, sub_426860);
    QTask_RemoveEventCallback(g_57bea0, 4, AlarmLight_Cleanup_3);
    TaskType_Set("TASKTYPE_ALARMLIGHTREFLECTOR", *g_57bea0);
    char* result = Level_LoadObjects_6("alarmlight.spr");
    g_57bea4 = result;
    return result;
}
