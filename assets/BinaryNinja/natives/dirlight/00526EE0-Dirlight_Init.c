// Original IGI.EXE function: Dirlight_Init (VA 0x00526EE0; static CFG gate PASS, CFG score 1.000).
#include "Dirlight_Init.h"
int32_t* Dirlight_Init()

{
    int32_t item_bc = 0;
    g_a83d34 = TaskType_Register("Dirlight", 0x64, QTask_OpenEvent_2(), 0);
    int32_t item_bc_1 = 0;
    g_a83d4c = TaskType_Register("DirlightKeyframe", 0x54, QTask_OpenEvent_2(), 0);
    QTask_RemoveEventCallback(g_a83d34, 0, sub_527160);
    QTask_TriggerEvent(g_a83d34, 1, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a83d34, 2, Dirlight_Setup);
    int32_t data_4 = Script_ParseEnumInt32_8();
    int32_t item_c0 = data_4;
    data_4 = g_a83d34;
    QTask_RemoveEventCallback(data_4, item_c0, sub_527260);
    int32_t data_5 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a83d34, data_5, Dirlight_Process);
    QTask_RemoveEventCallback(g_a83d4c, 0, sub_5272f0);
    QTask_TriggerEvent(g_a83d4c, 2, sub_527470);
    int32_t data_7 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83d4c, data_7, sub_527460);
    int32_t data_8 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_a83d4c, data_8, sub_527320);
    g_a83d30 = Script_EvaluateCondition_7(4);
    g_a83d48 = Script_EvaluateCondition_7(6);
    int32_t data_11 = Script_ParseEnumInt32_4();
    void item_64;
    void item_18;
    Script_UndefinedParameterTy(g_a83d30, &item_64, &item_18, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumInt32_4();
    void item_17;
    Script_UndefinedParameterTy(g_a83d30, &item_64, &item_17, data_12, 7, 0);
    Script_EvaluateCondition_9();
    int32_t data_13 = Script_EvaluateCondition_2();
    void item_14;
    Script_UndefinedParameterTy(g_a83d30, &item_64, &item_14, data_13, 7, &g_a76be8);
    int32_t data_14 = Script_ParseEnumString_2();
    void item_b8;
    void item_98;
    Script_UndefinedParameterTy(g_a83d48, &item_b8, &item_98, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumString_2();
    void item_94;
    Script_UndefinedParameterTy(g_a83d48, &item_b8, &item_94, data_15, 7, 0);
    int32_t data_16 = Script_CallNativeHandler_2();
    void item_84;
    Script_UndefinedParameterTy(g_a83d48, &item_b8, &item_84, data_16, 7, 0);
    int32_t data_17 = Script_CallNativeHandler_2();
    void item_78;
    Script_UndefinedParameterTy(g_a83d48, &item_b8, &item_78, data_17, 7, 0);
    int32_t data_18 = Script_EvaluateCondition_2();
    void item_6c;
    Script_UndefinedParameterTy(g_a83d48, &item_b8, &item_6c, data_18, 7, 0);
    Sys_FreeMemory_2(&g_ba1e00, 4, 3, 4);
    Sys_ResolveSymbol_13(0xa83d38);
    return SoundSys_InitSoundSys_13(AIGraph_LoadParameters);
}
