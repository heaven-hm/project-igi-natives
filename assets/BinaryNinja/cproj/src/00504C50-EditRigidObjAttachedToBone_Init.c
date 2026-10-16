#include "gi_platform.h"
#include "00504C50-EditRigidObjAttachedToBone_Init.h"
int32_t* EditRigidObjAttachedToBone_Init()

{
    int32_t v_13c = 0;
    int16_t valA1 = TaskType_Register("EditRigidObjAttachedToBone", 0x138, DynObj_LookupHashItem_5(), 0);
    g_ba8084 = valA1;
    QTask_RemoveEventCallback(valA1, 0, EditRigidObjAttachedToBone_LoadParameters);
    QTask_TriggerEvent(g_ba8084, 2, sub_51b940);
    QTask_TriggerEvent(g_ba8084, 1, AnimSound_LoadParameters);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_ba8084, valA3, EditRigidObjAttachedToBone_Process);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_140_1 = valA4;
    valA4 = g_ba8084;
    QTask_RemoveEventCallback(valA4, v_140_1, sub_504c40);
    g_ba8080 = Script_EvaluateCondition_7(4);
    int32_t valA6 = Script_FormatString_2();
    char v_138;
    char v_48;
    Script_UndefinedParameterTy(g_ba8080, &v_138, &v_48, valA6, 7, 0);
    int32_t valA8 = Script_SpawnNewTask_3();
    char v_3c;
    Script_UndefinedParameterTy(g_ba8080, &v_138, &v_3c, valA8, 7, 0);
    int32_t valA10 = Script_ParseEnumString_3();
    char v_14;
    Script_UndefinedParameterTy(g_ba8080, &v_138, &v_14, valA10, 7, 0);
    int32_t valA12 = Script_EvaluateCondition_3();
    char v_10;
    return Script_UndefinedParameterTy(g_ba8080, &v_138, &v_10, valA12, 7, 0);
}
