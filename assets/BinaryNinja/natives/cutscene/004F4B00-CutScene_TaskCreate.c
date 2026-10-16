#include "CutScene_TaskCreate.h"
int32_t* CutScene_TaskCreate()

// Sig: void* CutScene_TaskCreate(void)
// Note: CREATES the CutScene task during level load: allocates 632-byte
// "CutScene" object via class factory 0x401900, attaches vtable 0x4F4EE0 +
// update cb 0x4F51D0, registers TASKTYPE_CUTSCENE (@0x4F4EB8). TO DELETE
// CUTSCENES: early-return from this function so no CutScene task is ever
// instantiated - flow continues without them. Verified: prologue sub esp,0x278;
// string refs "1721_01_1","CutScene"; corroborated by IGI-MP plugin.
{
    g_a76c60 = 0;
    g_a76c64 = 0x41a00000;
    g_a76c50 = DynObj_MtpNlodvirmodelD("1721_01_1");
    int32_t v_27c = 0;
    int16_t valA2 = TaskType_Register("CutScene", 0x278, EditorRigidObj_OnEvent(), 0);
    g_a76c68 = valA2;
    QTask_RemoveEventCallback(valA2, 0, CutScene_LoadParameters);
    QTask_TriggerEvent(g_a76c68, 1, CutScene_TaskUpdate);
    QTask_TriggerEvent(g_a76c68, 2, CutScene_Process);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a76c68, valA4, sub_4f51c0);
    int32_t valA5 = Script_ParseEnumReal32_8();
    int32_t v_280_1 = valA5;
    valA5 = g_a76c68;
    QTask_RemoveEventCallback(valA5, v_280_1, CutScene_PostLoad);
    int32_t valA6 = Script_FormatString_5();
    QTask_TriggerEvent(g_a76c68, valA6, CutScene_OnEvent);
    int32_t valA7 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a76c68, valA7, CutScene_Action);
    int32_t valA8 = Script_ParseEnumReal32_15();
    int32_t v_280_4 = valA8;
    valA8 = g_a76c68;
    QTask_RemoveEventCallback(valA8, v_280_4, sub_4f6500);
    int32_t valA9 = Script_ParseEnumString_15();
    QTask_RemoveEventCallback(g_a76c68, valA9, sub_4f64f0);
    int32_t valA10 = Script_EvaluateCondition_15();
    QTask_RemoveEventCallback(g_a76c68, valA10, sub_4f64e0);
    int32_t valA11 = Script_ParseEnumInt32_16();
    int32_t v_280_7 = valA11;
    valA11 = g_a76c68;
    QTask_RemoveEventCallback(valA11, v_280_7, AIGraph_LoadParameters);
    int32_t valA12 = Script_SpawnNewTask_16();
    QTask_RemoveEventCallback(g_a76c68, valA12, AIGraph_LoadParameters);
    int32_t valA13 = Script_FormatString_15();
    QTask_RemoveEventCallback(g_a76c68, valA13, AIGraph_LoadParameters);
    int32_t valA14 = DynObj_LinkDynamicCube_12();
    int32_t v_280_10 = valA14;
    valA14 = g_a76c68;
    QTask_RemoveEventCallback(valA14, v_280_10, CutScene_Cleanup);
    g_a76c58 = Script_EvaluateCondition_7(0xe);
    int32_t valA16 = Script_ParseEnumReal32_4();
    void v_278;
    void v_258;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_258, valA16, 7, 0);
    int32_t valA18 = Script_SpawnNewTask_3();
    void v_240;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_240, valA18, 7, 0);
    int32_t valA20 = Script_CallNativeHandler_3();
    void v_1fc;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_1fc, valA20, 7, 0);
    int32_t valA22 = Script_CallNativeHandler_3();
    void v_1ac;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_1ac, valA22, 7, 0);
    int32_t valA24 = Script_CallNativeHandler_3();
    void v_15c;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_15c, valA24, 7, 0);
    int32_t valA26 = Script_EvaluateCondition_2();
    void v_210;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_210, valA26, 7, 0);
    int32_t valA28 = Script_ParseEnumInt32_4();
    void v_218;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_218, valA28, 7, 0);
    int32_t valA30 = Script_EvaluateCondition_2();
    void v_20c;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_20c, valA30, 7, 0);
    int32_t valA32 = Script_EvaluateCondition_2();
    void v_208;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_208, valA32, 7, 0);
    int32_t valA34 = Script_EvaluateCondition_2();
    void v_204;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_204, valA34, 7, &g_a76c60);
    int32_t valA36 = Script_EvaluateCondition_2();
    void v_200;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_200, valA36, 7, &g_a76c60);
    int32_t valA38 = Script_EvaluateCondition_2();
    void v_68;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_68, valA38, 7, &g_a76c60);
    int32_t valA40 = Script_CallNativeHandler_3();
    void v_10c;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_10c, valA40, 7, 0);
    int32_t valA42 = Script_CallNativeHandler_3();
    void v_bc;
    Script_UndefinedParameterTy(g_a76c58, &v_278, &v_bc, valA42, 7, 0);
    TaskType_Set("TASKTYPE_CUTSCENE", *g_a76c68);
    return Sys_ResolveSymbol_13(0xa76c70);
}
