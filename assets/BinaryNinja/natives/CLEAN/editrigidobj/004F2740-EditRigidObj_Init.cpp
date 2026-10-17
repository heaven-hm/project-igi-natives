// IGI native provenance: EditRigidObj_Init - 0x004F2740 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F2740-EditRigidObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditRigidObj_Init.h"
void* EditRigidObj_Init()

{
    int32_t item_1a4 = 0;
    int16_t data_1 = TaskType_Register("EditRigidObj", 0x1a0, SoundSys_Update3DPosition(), 0);
    g_54e1ac = data_1;
    QTask_RemoveEventCallback(data_1, 0, EditRigidObj_LoadParameters);
    QTask_TriggerEvent(g_54e1ac, 1, EditRigidObj_Setup);
    QTask_TriggerEvent(g_54e1ac, 2, EditRigidObj_Process);
    int32_t data_3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_54e1ac, data_3, sub_4f2b80);
    int32_t data_4 = Script_ParseEnumReal32_8();
    int32_t item_1a8_1 = data_4;
    data_4 = g_54e1ac;
    QTask_RemoveEventCallback(data_4, item_1a8_1, EditRigidObj_Update);
    int32_t data_5 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_54e1ac, data_5, EditRigidObj_OnEvent);
    QTask_RemoveEventCallback(g_54e1ac, 6, AIGraph_LoadParameters);
    int32_t data_6 = DynObj_LinkDynamicCube_12();
    int32_t item_1a8_3 = data_6;
    data_6 = g_54e1ac;
    QTask_RemoveEventCallback(data_6, item_1a8_3, EditRigidObj_Cleanup_2);
    int32_t data_7 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_54e1ac, data_7, EditRigidObj_Cleanup);
    g_a76c14 = Script_EvaluateCondition_7(5);
    int32_t data_9 = Script_ParseEnumReal32_4();
    void item_1a0;
    void item_b0;
    Script_UndefinedParameterTy(g_a76c14, &item_1a0, &item_b0, data_9, 7, 0);
    int32_t data_10 = Script_SpawnNewTask_3();
    void item_98;
    Script_UndefinedParameterTy(g_a76c14, &item_1a0, &item_98, data_10, 7, 0);
    int32_t data_11 = Script_EvaluateCondition_3();
    void item_70;
    Script_UndefinedParameterTy(g_a76c14, &item_1a0, &item_70, data_11, 7, 0);
    Script_CallNativeHandler_9();
    int32_t data_12 = Script_CallNativeHandler_2();
    void item_60;
    Script_UndefinedParameterTy(g_a76c14, &item_1a0, &item_60, data_12, 7, &g_a76bf0);
    Script_CallNativeHandler_9();
    int32_t data_13 = Script_CallNativeHandler_2();
    void item_54;
    Script_UndefinedParameterTy(g_a76c14, &item_1a0, &item_54, data_13, 7, &g_a76bf0);
    return TaskType_Set("TASKTYPE_EDITRIGIDOBJ", *g_54e1ac);
}
