#include "Dirlight_Init.h"
int32_t* Dirlight_Init()

{
    int32_t v_bc = 0;
    g_a83d34 = TaskType_Register("Dirlight", 0x64, QTask_OpenEvent_2(), 0);
    int32_t v_bc_1 = 0;
    g_a83d4c = TaskType_Register("DirlightKeyframe", 0x54, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_a83d34, 0, sub_527160);
    QTask_TriggerEvent(g_a83d34, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a83d34, 2, Dirlight_Setup);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_c0 = valA4;
    valA4 = g_a83d34;
    QTask_RemoveEventCallback(valA4, v_c0, sub_527260);
    int32_t valA5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a83d34, valA5, Dirlight_Process);
    QTask_RemoveEventCallback(g_a83d4c, 0, sub_5272f0);
    QTask_TriggerEvent(g_a83d4c, 2, sub_527470);
    int32_t valA7 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83d4c, valA7, sub_527460);
    int32_t valA8 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a83d4c, valA8, sub_527320);
    g_a83d30 = Script_EvaluateCondition_7(4);
    g_a83d48 = Script_EvaluateCondition_7(6);
    int32_t valA11 = Script_ParseEnumInt32_4();
    void v_64;
    void v_18;
    Script_UndefinedParameterTy(g_a83d30, &v_64, &v_18, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_4();
    void v_17;
    Script_UndefinedParameterTy(g_a83d30, &v_64, &v_17, valA12, 7, 0);
    Script_EvaluateCondition_9();
    int32_t valA13 = Script_EvaluateCondition_2();
    void v_14;
    Script_UndefinedParameterTy(g_a83d30, &v_64, &v_14, valA13, 7, &g_a76be8);
    int32_t valA14 = Script_ParseEnumString_2();
    void v_b8;
    void v_98;
    Script_UndefinedParameterTy(g_a83d48, &v_b8, &v_98, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumString_2();
    void v_94;
    Script_UndefinedParameterTy(g_a83d48, &v_b8, &v_94, valA15, 7, 0);
    int32_t valA16 = Script_CallNativeHandler_2();
    void v_84;
    Script_UndefinedParameterTy(g_a83d48, &v_b8, &v_84, valA16, 7, 0);
    int32_t valA17 = Script_CallNativeHandler_2();
    void v_78;
    Script_UndefinedParameterTy(g_a83d48, &v_b8, &v_78, valA17, 7, 0);
    int32_t valA18 = Script_EvaluateCondition_2();
    void v_6c;
    Script_UndefinedParameterTy(g_a83d48, &v_b8, &v_6c, valA18, 7, 0);
    Sys_FreeMemory_2(&g_ba1e00, 4, 3, 4);
    Sys_ResolveSymbol_13(0xa83d38);
    return SoundSys_InitSoundSys_13(AIGraph_LoadParameters);
}
