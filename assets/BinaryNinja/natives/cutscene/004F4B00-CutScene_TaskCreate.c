// Original IGI.EXE function: CutScene_TaskCreate (VA 0x004F4B00; static CFG gate PASS, CFG score 1.000).
#include "CutScene_TaskCreate.h"
int32_t* CutScene_TaskCreate()

// Sig: void* CutScene_TaskCreate(void)
// Note: CREATES the CutScene task during level load: allocates 632-byte
// "CutScene" object via class factory 0x401900, attaches vtable 0x4F4EE0 +
// update cb 0x4F51D0, registers TASKTYPE_CUTSCENE (). TO DELETE
// CUTSCENES: early-return from this function so no CutScene task is ever
// instantiated - flow continues without them. Verified: prologue sub stack_ptr,0x278;
// string refs "1721_01_1","CutScene"; corroborated by IGI-MP plugin.
{
    g_a76c60 = 0;
    g_a76c64 = 0x41a00000;
    g_a76c50 = DynObj_MtpNlodvirmodelD("1721_01_1");
    int32_t item_27c = 0;
    int16_t data_2 = TaskType_Register("CutScene", 0x278, EditorRigidObj_OnEvent(), 0);
    g_a76c68 = data_2;
    QTask_RemoveEventCallback(data_2, 0, CutScene_LoadParameters);
    QTask_TriggerEvent(g_a76c68, 1, CutScene_TaskUpdate);
    QTask_TriggerEvent(g_a76c68, 2, CutScene_Process);
    int32_t data_4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a76c68, data_4, sub_4f51c0);
    int32_t data_5 = Script_ParseEnumReal32_8();
    int32_t item_280_1 = data_5;
    data_5 = g_a76c68;
    QTask_RemoveEventCallback(data_5, item_280_1, CutScene_PostLoad);
    int32_t data_6 = Script_FormatString_5();
    QTask_TriggerEvent(g_a76c68, data_6, CutScene_OnEvent);
    int32_t data_7 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a76c68, data_7, CutScene_Action);
    int32_t data_8 = Script_ParseEnumReal32_15();
    int32_t item_280_4 = data_8;
    data_8 = g_a76c68;
    QTask_RemoveEventCallback(data_8, item_280_4, sub_4f6500);
    int32_t data_9 = Script_ParseEnumString_15();
    QTask_RemoveEventCallback(g_a76c68, data_9, sub_4f64f0);
    int32_t data_10 = Script_EvaluateCondition_15();
    QTask_RemoveEventCallback(g_a76c68, data_10, sub_4f64e0);
    int32_t data_11 = Script_ParseEnumInt32_16();
    int32_t item_280_7 = data_11;
    data_11 = g_a76c68;
    QTask_RemoveEventCallback(data_11, item_280_7, AIGraph_LoadParameters);
    int32_t data_12 = Script_SpawnNewTask_16();
    QTask_RemoveEventCallback(g_a76c68, data_12, AIGraph_LoadParameters);
    int32_t data_13 = Script_FormatString_15();
    QTask_RemoveEventCallback(g_a76c68, data_13, AIGraph_LoadParameters);
    int32_t data_14 = DynObj_LinkDynamicCube_12();
    int32_t item_280_10 = data_14;
    data_14 = g_a76c68;
    QTask_RemoveEventCallback(data_14, item_280_10, CutScene_Cleanup);
    g_a76c58 = Script_EvaluateCondition_7(0xe);
    int32_t data_16 = Script_ParseEnumReal32_4();
    void item_278;
    void item_258;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_258, data_16, 7, 0);
    int32_t data_18 = Script_SpawnNewTask_3();
    void item_240;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_240, data_18, 7, 0);
    int32_t data_20 = Script_CallNativeHandler_3();
    void item_1fc;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_1fc, data_20, 7, 0);
    int32_t data_22 = Script_CallNativeHandler_3();
    void item_1ac;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_1ac, data_22, 7, 0);
    int32_t data_24 = Script_CallNativeHandler_3();
    void item_15c;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_15c, data_24, 7, 0);
    int32_t data_26 = Script_EvaluateCondition_2();
    void item_210;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_210, data_26, 7, 0);
    int32_t data_28 = Script_ParseEnumInt32_4();
    void item_218;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_218, data_28, 7, 0);
    int32_t data_30 = Script_EvaluateCondition_2();
    void item_20c;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_20c, data_30, 7, 0);
    int32_t data_32 = Script_EvaluateCondition_2();
    void item_208;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_208, data_32, 7, 0);
    int32_t data_34 = Script_EvaluateCondition_2();
    void item_204;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_204, data_34, 7, &g_a76c60);
    int32_t data_36 = Script_EvaluateCondition_2();
    void item_200;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_200, data_36, 7, &g_a76c60);
    int32_t data_38 = Script_EvaluateCondition_2();
    void item_68;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_68, data_38, 7, &g_a76c60);
    int32_t data_40 = Script_CallNativeHandler_3();
    void item_10c;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_10c, data_40, 7, 0);
    int32_t data_42 = Script_CallNativeHandler_3();
    void item_bc;
    Script_UndefinedParameterTy(g_a76c58, &item_278, &item_bc, data_42, 7, 0);
    TaskType_Set("TASKTYPE_CUTSCENE", *g_a76c68);
    return Sys_ResolveSymbol_13(0xa76c70);
}
