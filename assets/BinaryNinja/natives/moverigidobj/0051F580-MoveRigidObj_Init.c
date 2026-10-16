#include "MoveRigidObj_Init.h"
void* MoveRigidObj_Init()

{
    int32_t v_21c = 0;
    int16_t valA1 = TaskType_Register("MoveRigidObj", 0x208, DynObj_LookupHashItem_5(), 0);
    g_a837cc = valA1;
    QTask_RemoveEventCallback(valA1, 0, MoveRigidObj_LoadParameters);
    QTask_TriggerEvent(g_a837cc, 1, MoveRigidObj_Setup);
    QTask_TriggerEvent(g_a837cc, 2, MoveRigidObj_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_a837cc, valA3, sub_51fa90);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_220_1 = valA4;
    valA4 = g_a837cc;
    QTask_RemoveEventCallback(valA4, v_220_1, sub_51fd60);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_a837cc, valA5, MoveRigidObj_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_a837cc, valA6, MoveRigidObj_OnEvent);
    int32_t dstD = 0;
    g_a837d0 = Script_EvaluateCondition_7(0x14);
    void v_b0;
    void* ctxB = &v_b0;
    void v_118;
    void* flagP = &v_118;
    void v_208;

    for (void* i = nullptr; i < 0x20; )
    {
        int32_t v_21c_1 = dstD;
        Game_DataSymbolLoad(i + 0xa83814, "Position %d");
        int32_t v_228_1 = dstD;
        Game_DataSymbolLoad(i + 0xa837d4, "Alpha %d");
        int32_t v_234_1 = dstD;
        Game_DataSymbolLoad(i + 0xa837ac, "Beta %d");
        int32_t v_240_1 = dstD;
        Game_DataSymbolLoad(i + 0xa837f4, "Gamma %d");
        int32_t valA10 = Script_ParseEnumReal32_4();
        Script_UndefinedParameterTy(g_a837d0, &v_208, flagP, valA10, 7, 0);
        int32_t valA11 = Script_ParseEnumString_2();
        Script_UndefinedParameterTy(g_a837d0, &v_208, ctxB - 8, valA11, 7, 0);
        int32_t valA13 = Script_ParseEnumString_2();
        Script_UndefinedParameterTy(g_a837d0, &v_208, ctxB, valA13, 7, 0);
        int32_t valA14 = Script_ParseEnumString_2();
        Script_UndefinedParameterTy(g_a837d0, &v_208, ctxB + 8, valA14, 7, 0);
        i += 0x10;
        dstD += 1;
        flagP += 0x18;
        ctxB += 4;
    }

    int32_t valA15 = Script_EvaluateCondition_3();
    void v_88;
    Script_UndefinedParameterTy(g_a837d0, &v_208, &v_88, valA15, 3, 0);
    int32_t valA16 = Script_CallNativeHandler_3();
    void v_54;
    Script_UndefinedParameterTy(g_a837d0, &v_208, &v_54, valA16, 7, 0);
    int32_t valA17 = Script_ParseEnumInt32_3();
    void v_68;
    Script_UndefinedParameterTy(g_a837d0, &v_208, &v_68, valA17, 3, 0);
    int32_t valA18 = Script_ParseEnumInt32_4();
    void v_58;
    Script_UndefinedParameterTy(g_a837d0, &v_208, &v_58, valA18, 3, 0);
    return TaskType_Set("TASKTYPE_MOVERIGIDOBJ", *g_a837cc);
}
