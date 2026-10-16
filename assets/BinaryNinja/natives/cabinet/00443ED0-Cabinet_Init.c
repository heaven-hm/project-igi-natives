#include "Cabinet_Init.h"
void* Cabinet_Init()

{
    int32_t v_13c = 0;
    int16_t valA1 = TaskType_Register("Cabinet", 0x138, SoundSys_Update3DPosition(), 0);
    g_57c1ac = valA1;
    QTask_RemoveEventCallback(valA1, 0, Cabinet_LoadParameters);
    QTask_TriggerEvent(g_57c1ac, 1, Cabinet_Setup);
    QTask_TriggerEvent(g_57c1ac, 2, Cabinet_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c1ac, valA3, sub_4446d0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_140_1 = valA4;
    valA4 = g_57c1ac;
    QTask_RemoveEventCallback(valA4, v_140_1, Cabinet_Update);
    int32_t valA5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c1ac, valA5, Cabinet_OnEvent);
    int32_t valA6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c1ac, valA6, sub_427d70);
    int32_t valA7 = Level_InitSprites_2();
    int32_t v_140_4 = valA7;
    valA7 = g_57c1ac;
    QTask_RemoveEventCallback(valA7, v_140_4, sub_444940);
    int32_t valA8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c1ac, valA8, sub_4449a0);
    int32_t valA9 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57c1ac, valA9, AIGraph_LoadParameters);
    int32_t valA10 = Script_FormatString_5();
    int32_t v_140_7 = valA10;
    valA10 = g_57c1ac;
    QTask_TriggerEvent(valA10, v_140_7, Cabinet_Cleanup_3);
    int32_t valA11 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c1ac, valA11, Cabinet_Cleanup_4);
    int32_t valA12 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(g_57c1ac, valA12, sub_443dc0);
    g_57c1a8 = Script_EvaluateCondition_7(4);
    int32_t valA14 = Script_ParseEnumReal32_4();
    void v_138;
    void v_48;
    Script_UndefinedParameterTy(g_57c1a8, &v_138, &v_48, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumString_2();
    void v_30;
    Script_UndefinedParameterTy(g_57c1a8, &v_138, &v_30, valA15, 7, 0);
    int32_t valA16 = Script_EvaluateCondition_3();
    void v_2c;
    Script_UndefinedParameterTy(g_57c1a8, &v_138, &v_2c, valA16, 7, 0);
    int32_t valA17 = Script_EvaluateCondition_2();
    void v_c;
    Script_UndefinedParameterTy(g_57c1a8, &v_138, &v_c, valA17, 7, 0);
    int32_t v_13c_1 = 0;
    int16_t valA19 = TaskType_Register("Drawer", 0x160, MagicObj_GetTypeId(), 0);
    g_57c1a4 = valA19;
    QTask_RemoveEventCallback(valA19, 0, Cabinet_Cleanup);
    QTask_TriggerEvent(g_57c1a4, 1, Cabinet_Cleanup_2);
    QTask_TriggerEvent(g_57c1a4, 2, sub_426860);
    return TaskType_Set("TASKTYPE_DRAWER", *g_57c1a4);
}
