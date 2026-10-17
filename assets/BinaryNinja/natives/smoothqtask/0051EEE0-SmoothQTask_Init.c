// Original IGI.EXE function: SmoothQTask_Init (VA 0x0051EEE0; static CFG gate PASS, CFG score 1.000).
#include "SmoothQTask_Init.h"
void* SmoothQTask_Init()

{
    int32_t v_104 = 0;
    int16_t valA1 = TaskType_Register("SmoothQTask", 0x100, EditorRigidObj_OnEvent(), 0);
    g_a837a0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, SmoothQTask_LoadParameters);
    QTask_TriggerEvent(g_a837a0, 1, SmoothQTask_Setup);
    QTask_TriggerEvent(g_a837a0, 2, SmoothQTask_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a837a0, valA3, sub_51f330);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_108_1 = valA4;
    valA4 = g_a837a0;
    QTask_RemoveEventCallback(valA4, v_108_1, sub_51f4b0);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_a837a0, valA5, SmoothQTask_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a837a0, valA6, SmoothQTask_OnEvent);
    g_a837a4 = Script_EvaluateCondition_7(0xa);
    int32_t valA8 = Script_ParseEnumReal32_4();
    void v_100;
    void v_e0;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_e0, valA8, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_3();
    void v_c8;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_c8, valA9, 7, 0);
    int32_t valA10 = Script_CallNativeHandler_3();
    void v_58;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_58, valA10, 7, 0);
    int32_t valA11 = Script_ParseEnumInt32_3();
    void v_90;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_90, valA11, 7, 0);
    int32_t valA12 = Script_ParseEnumInt32_3();
    void v_88;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_88, valA12, 7, 0);
    int32_t valA13 = Script_ParseEnumInt32_3();
    void v_80;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_80, valA13, 7, 0);
    int32_t valA14 = Script_ParseEnumInt32_3();
    void v_78;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_78, valA14, 7, 0);
    int32_t valA15 = Script_ParseEnumInt32_3();
    void v_70;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_70, valA15, 7, 0);
    int32_t valA16 = Script_ParseEnumInt32_3();
    void v_68;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_68, valA16, 7, 0);
    int32_t valA17 = Script_ParseEnumInt32_3();
    void v_60;
    Script_UndefinedParameterTy(g_a837a4, &v_100, &v_60, valA17, 7, 0);
    return TaskType_Set("TASKTYPE_SMOOTHQTASK", *g_a837a0);
}
