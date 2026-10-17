// Original IGI.EXE function: EditRigidObj_Init (VA 0x004F2740; static CFG gate PASS, CFG score 1.000).
#include "EditRigidObj_Init.h"
void* EditRigidObj_Init()

{
    int32_t v_1a4 = 0;
    int16_t valA1 = TaskType_Register("EditRigidObj", 0x1a0, SoundSys_Update3DPosition(), 0);
    g_54e1ac = valA1;
    QTask_RemoveEventCallback(valA1, 0, EditRigidObj_LoadParameters);
    QTask_TriggerEvent(g_54e1ac, 1, EditRigidObj_Setup);
    QTask_TriggerEvent(g_54e1ac, 2, EditRigidObj_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54e1ac, valA3, sub_4f2b80);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_1a8_1 = valA4;
    valA4 = g_54e1ac;
    QTask_RemoveEventCallback(valA4, v_1a8_1, EditRigidObj_Update);
    int32_t valA5 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_54e1ac, valA5, EditRigidObj_OnEvent);
    QTask_RemoveEventCallback(g_54e1ac, 6, AIGraph_LoadParameters);
    int32_t valA6 = DynObj_LinkDynamicCube_12();
    int32_t v_1a8_3 = valA6;
    valA6 = g_54e1ac;
    QTask_RemoveEventCallback(valA6, v_1a8_3, EditRigidObj_Cleanup_2);
    int32_t valA7 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_54e1ac, valA7, EditRigidObj_Cleanup);
    g_a76c14 = Script_EvaluateCondition_7(5);
    int32_t valA9 = Script_ParseEnumReal32_4();
    void v_1a0;
    void v_b0;
    Script_UndefinedParameterTy(g_a76c14, &v_1a0, &v_b0, valA9, 7, 0);
    int32_t valA10 = Script_SpawnNewTask_3();
    void v_98;
    Script_UndefinedParameterTy(g_a76c14, &v_1a0, &v_98, valA10, 7, 0);
    int32_t valA11 = Script_EvaluateCondition_3();
    void v_70;
    Script_UndefinedParameterTy(g_a76c14, &v_1a0, &v_70, valA11, 7, 0);
    Script_CallNativeHandler_9();
    int32_t valA12 = Script_CallNativeHandler_2();
    void v_60;
    Script_UndefinedParameterTy(g_a76c14, &v_1a0, &v_60, valA12, 7, &g_a76bf0);
    Script_CallNativeHandler_9();
    int32_t valA13 = Script_CallNativeHandler_2();
    void v_54;
    Script_UndefinedParameterTy(g_a76c14, &v_1a0, &v_54, valA13, 7, &g_a76bf0);
    return TaskType_Set("TASKTYPE_EDITRIGIDOBJ", *g_54e1ac);
}
