// IGI native provenance: NoiseQTask_Init - 0x0051FEF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051FEF0-NoiseQTask_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "NoiseQTask_Init.h"
int32_t* NoiseQTask_Init()

{
    int32_t item_134 = 0;
    int16_t data_1 = TaskType_Register("NoiseQTask", 0x130, EditorRigidObj_OnEvent(), 0);
    g_a83838 = data_1;
    QTask_RemoveEventCallback(data_1, 0, NoiseQTask_LoadParameters);
    QTask_TriggerEvent(g_a83838, 1, NoiseQTask_Setup);
    QTask_TriggerEvent(g_a83838, 2, NoiseQTask_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83838, data_3, sub_5203f0);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_138_1 = data_4;
    data_4 = g_a83838;
    QTask_RemoveEventCallback(data_4, item_138_1, sub_520630);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_a83838, data_5, NoiseQTask_Update);
    int32_t data_6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a83838, data_6, NoiseQTask_OnEvent);
    g_a8383c = Script_EvaluateCondition_7(0x14);
    int32_t data_8 = Script_ParseEnumReal32_4();
    void item_130;
    void item_110;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_110, data_8, 7, 0);
    int32_t data_9 = Script_SpawnNewTask_3();
    void item_f8;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_f8, data_9, 7, 0);
    int32_t data_10 = Script_CallNativeHandler_3();
    void item_58;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_58, data_10, 7, 0);
    int32_t data_11 = Script_ParseEnumInt32_3();
    void item_a8;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_a8, data_11, 7, 0);
    int32_t data_12 = Script_ParseEnumInt32_3();
    void item_a0;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_a0, data_12, 7, 0);
    int32_t data_13 = Script_ParseEnumInt32_3();
    void item_98;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_98, data_13, 7, 0);
    int32_t data_14 = Script_ParseEnumInt32_3();
    void item_90;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_90, data_14, 7, 0);
    int32_t data_15 = Script_ParseEnumInt32_3();
    void item_88;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_88, data_15, 7, 0);
    int32_t data_16 = Script_ParseEnumInt32_3();
    void item_80;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_80, data_16, 7, 0);
    int32_t data_17 = Script_ParseEnumString_3();
    void item_78;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_78, data_17, 7, 0);
    int32_t data_18 = Script_ParseEnumString_3();
    void item_74;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_74, data_18, 7, 0);
    int32_t data_19 = Script_ParseEnumInt32_3();
    void item_70;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_70, data_19, 7, 0);
    int32_t data_20 = Script_ParseEnumInt32_3();
    void item_68;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_68, data_20, 7, 0);
    int32_t data_21 = Script_ParseEnumInt32_3();
    void item_60;
    Script_UndefinedParameterTy(g_a8383c, &item_130, &item_60, data_21, 7, 0);
    TaskType_Set("TASKTYPE_NOISEQTASK", *g_a83838);
    return Sys_ResolveSymbol_13(0xa83840);
}
