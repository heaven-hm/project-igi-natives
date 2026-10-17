// IGI native provenance: Plane_Init - 0x004330F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004330F0-Plane_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Plane_Init.h"
int32_t* Plane_Init()

{
    int32_t item_88c = 0;
    int16_t data_1 = TaskType_Register("Plane", 0x888, Script_ExecuteLevelScript_16(), 0);
    g_53bee8 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Plane_LoadParameters);
    QTask_TriggerEvent(g_53bee8, 1, Plane_Setup);
    QTask_TriggerEvent(g_53bee8, 2, Plane_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_53bee8, data_3, sub_4337d0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_890_1 = data_4;
    data_4 = g_53bee8;
    QTask_RemoveEventCallback(data_4, item_890_1, Plane_Update);
    int32_t data_5 = SoundSys_SetFrequency_5();
    QTask_RemoveEventCallback(g_53bee8, data_5, sub_434a30);
    int32_t data_6 = Script_ParseEnumReal32_15();
    QTask_RemoveEventCallback(g_53bee8, data_6, Plane_ReceiveChannels);
    int32_t data_7 = Script_ParseEnumString_15();
    int32_t item_890_4 = data_7;
    data_7 = g_53bee8;
    QTask_RemoveEventCallback(data_7, item_890_4, sub_434a50);
    int32_t data_8 = Script_EvaluateCondition_15();
    QTask_RemoveEventCallback(g_53bee8, data_8, sub_432bd0);
    int32_t data_9 = Script_ParseEnumInt32_16();
    QTask_RemoveEventCallback(g_53bee8, data_9, sub_434a80);
    int32_t data_10 = Script_SpawnNewTask_16();
    int32_t item_890_7 = data_10;
    data_10 = g_53bee8;
    QTask_RemoveEventCallback(data_10, item_890_7, sub_434cd0);
    int32_t data_11 = Script_FormatString_15();
    QTask_RemoveEventCallback(g_53bee8, data_11, sub_434da0);
    g_57bd54 = Script_EvaluateCondition_7(0xa);
    int32_t data_13 = Script_ParseEnumReal32_4();
    void item_888;
    void item_720;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_720, data_13, 7, 0);
    int32_t data_14 = Script_SpawnNewTask_3();
    void item_6fc;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_6fc, data_14, 7, 0);
    int32_t data_15 = Script_EvaluateCondition_2();
    void item_148;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_148, data_15, 7, 0);
    int32_t data_16 = Script_FormatString_2();
    void item_708;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_708, data_16, 7, 0);
    int32_t data_17 = Script_EvaluateCondition_3();
    void item_734;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_734, data_17, 7, 0);
    int32_t data_18 = Script_ParseEnumInt32_4();
    void item_57;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_57, data_18, 7, 0);
    int32_t data_19 = Script_ParseEnumInt32_4();
    void item_58;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_58, data_19, 7, 0);
    int32_t data_20 = Script_ParseEnumInt32_4();
    void item_1b0;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_1b0, data_20, 7, 0);
    int32_t data_21 = Script_ParseEnumInt32_4();
    void item_1af;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_1af, data_21, 7, 0);
    int32_t data_22 = Script_CallNativeHandler_3();
    void item_50;
    Script_UndefinedParameterTy(g_57bd54, &item_888, &item_50, data_22, 7, 0);
    TaskType_Set("TASKTYPE_PLANE", *g_53bee8);
    return Sys_ResolveSymbol_13(0x57bd48);
}
