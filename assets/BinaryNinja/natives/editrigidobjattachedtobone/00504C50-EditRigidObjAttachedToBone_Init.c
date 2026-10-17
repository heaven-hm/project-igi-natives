// Original IGI.EXE function: EditRigidObjAttachedToBone_Init (VA 0x00504C50; static CFG gate PASS, CFG score 1.000).
#include "EditRigidObjAttachedToBone_Init.h"
int32_t* EditRigidObjAttachedToBone_Init()

{
    int32_t item_13c = 0;
    int16_t data_1 = TaskType_Register("EditRigidObjAttachedToBone", 0x138, DynObj_LookupHashItem_5(), 0);
    g_ba8084 = data_1;
    QTask_RemoveEventCallback(data_1, 0, EditRigidObjAttachedToBone_LoadParameters);
    QTask_TriggerEvent(g_ba8084, 2, sub_51b940);
    QTask_TriggerEvent(g_ba8084, 1, AnimSound_LoadParameters);
    int32_t data_3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_ba8084, data_3, EditRigidObjAttachedToBone_Process);
    int32_t data_4 = Script_ParseEnumInt32_8();
    int32_t item_140_1 = data_4;
    data_4 = g_ba8084;
    QTask_RemoveEventCallback(data_4, item_140_1, sub_504c40);
    g_ba8080 = Script_EvaluateCondition_7(4);
    int32_t data_6 = Script_FormatString_2();
    void item_138;
    void item_48;
    Script_UndefinedParameterTy(g_ba8080, &item_138, &item_48, data_6, 7, 0);
    int32_t data_8 = Script_SpawnNewTask_3();
    void item_3c;
    Script_UndefinedParameterTy(g_ba8080, &item_138, &item_3c, data_8, 7, 0);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_14;
    Script_UndefinedParameterTy(g_ba8080, &item_138, &item_14, data_10, 7, 0);
    int32_t data_12 = Script_EvaluateCondition_3();
    void item_10;
    return Script_UndefinedParameterTy(g_ba8080, &item_138, &item_10, data_12, 7, 0);
}
