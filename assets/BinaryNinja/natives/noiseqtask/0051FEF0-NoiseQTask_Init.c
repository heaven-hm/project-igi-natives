// Original IGI.EXE function: NoiseQTask_Init (VA 0x0051FEF0; static CFG gate PASS, CFG score 1.000).
#include "NoiseQTask_Init.h"
int32_t* NoiseQTask_Init()

{
    int32_t v_134 = 0;
    int16_t valA1 = TaskType_Register("NoiseQTask", 0x130, EditorRigidObj_OnEvent(), 0);
    g_a83838 = valA1;
    QTask_RemoveEventCallback(valA1, 0, NoiseQTask_LoadParameters);
    QTask_TriggerEvent(g_a83838, 1, NoiseQTask_Setup);
    QTask_TriggerEvent(g_a83838, 2, NoiseQTask_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a83838, valA3, sub_5203f0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_138_1 = valA4;
    valA4 = g_a83838;
    QTask_RemoveEventCallback(valA4, v_138_1, sub_520630);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_a83838, valA5, NoiseQTask_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a83838, valA6, NoiseQTask_OnEvent);
    g_a8383c = Script_EvaluateCondition_7(0x14);
    int32_t valA8 = Script_ParseEnumReal32_4();
    void v_130;
    void v_110;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_110, valA8, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_3();
    void v_f8;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_f8, valA9, 7, 0);
    int32_t valA10 = Script_CallNativeHandler_3();
    void v_58;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_58, valA10, 7, 0);
    int32_t valA11 = Script_ParseEnumInt32_3();
    void v_a8;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_a8, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_3();
    void v_a0;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_a0, valA12, 7, 0);
    int32_t valA13 = Script_ParseEnumInt32_3();
    void v_98;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_98, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumInt32_3();
    void v_90;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_90, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumInt32_3();
    void v_88;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_88, valA15, 7, 0);
    int32_t valA16 = Script_ParseEnumInt32_3();
    void v_80;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_80, valA16, 7, 0);
    int32_t valA17 = Script_ParseEnumString_3();
    void v_78;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_78, valA17, 7, 0);
    int32_t valA18 = Script_ParseEnumString_3();
    void v_74;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_74, valA18, 7, 0);
    int32_t valA19 = Script_ParseEnumInt32_3();
    void v_70;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_70, valA19, 7, 0);
    int32_t valA20 = Script_ParseEnumInt32_3();
    void v_68;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_68, valA20, 7, 0);
    int32_t valA21 = Script_ParseEnumInt32_3();
    void v_60;
    Script_UndefinedParameterTy(g_a8383c, &v_130, &v_60, valA21, 7, 0);
    TaskType_Set("TASKTYPE_NOISEQTASK", *g_a83838);
    return Sys_ResolveSymbol_13(0xa83840);
}
