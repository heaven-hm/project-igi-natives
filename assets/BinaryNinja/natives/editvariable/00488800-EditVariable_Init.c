// Original IGI.EXE function: EditVariable_Init (VA 0x00488800; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_Init.h"
int32_t* EditVariable_Init()

{
    int32_t item_e4 = 0;
    int16_t data_1 = TaskType_Register("EditVariable", 0xe0, EditorRigidObj_OnEvent(), 0);
    g_5410d0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, EditVariable_LoadParameters);
    QTask_TriggerEvent(g_5410d0, 1, EditVariable_Setup);
    QTask_TriggerEvent(g_5410d0, 2, EditVariable_Process);
    QTask_TriggerEvent(g_5410d0, 3, AIGraph_LoadParameters);
    int32_t data_3 = Script_ParseEnumInt32_8();
    int32_t item_e8 = data_3;
    data_3 = g_5410d0;
    QTask_RemoveEventCallback(data_3, item_e8, sub_488a90);
    int32_t data_4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5410d0, data_4, EditVariable_OnEvent);
    int32_t data_5 = Script_FormatString_5();
    QTask_TriggerEvent(g_5410d0, data_5, EditVariable_Action);
    int32_t data_6 = Script_SpawnNewTask_6();
    int32_t item_e8_3 = data_6;
    data_6 = g_5410d0;
    QTask_TriggerEvent(data_6, item_e8_3, EditVariable_Cleanup);
    g_5c8a9c = Script_EvaluateCondition_7(4);
    int32_t data_8 = Script_ParseEnumReal32_4();
    void item_e0;
    void item_c0;
    Script_UndefinedParameterTy(g_5c8a9c, &item_e0, &item_c0, data_8, 7, 0);
    int32_t data_10 = Script_ParseEnumString_3();
    void item_8;
    Script_UndefinedParameterTy(g_5c8a9c, &item_e0, &item_8, data_10, 7, 0);
    int32_t data_12 = Script_CallNativeHandler_3();
    void item_a8;
    Script_UndefinedParameterTy(g_5c8a9c, &item_e0, &item_a8, data_12, 7, 0);
    int32_t data_14 = Script_CallNativeHandler_3();
    void item_58;
    return Script_UndefinedParameterTy(g_5c8a9c, &item_e0, &item_58, data_14, 7, 0);
}
