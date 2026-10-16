#include "gi_platform.h"
#include "00488800-EditVariable_Init.h"
int32_t* EditVariable_Init()

{
    int32_t v_e4 = 0;
    int16_t valA1 = TaskType_Register("EditVariable", 0xe0, EditorRigidObj_OnEvent(), 0);
    g_5410d0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, EditVariable_LoadParameters);
    QTask_TriggerEvent(g_5410d0, 1, EditVariable_Setup);
    QTask_TriggerEvent(g_5410d0, 2, EditVariable_Process);
    QTask_TriggerEvent(g_5410d0, 3, AIGraph_LoadParameters);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_e8 = valA3;
    valA3 = g_5410d0;
    QTask_RemoveEventCallback(valA3, v_e8, sub_488a90);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5410d0, valA4, EditVariable_OnEvent);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_5410d0, valA5, EditVariable_Action);
    int32_t valA6 = Script_SpawnNewTask_6();
    int32_t v_e8_3 = valA6;
    valA6 = g_5410d0;
    QTask_TriggerEvent(valA6, v_e8_3, EditVariable_Cleanup);
    g_5c8a9c = Script_EvaluateCondition_7(4);
    int32_t valA8 = Script_ParseEnumReal32_4();
    char v_e0;
    char v_c0;
    Script_UndefinedParameterTy(g_5c8a9c, &v_e0, &v_c0, valA8, 7, 0);
    int32_t valA10 = Script_ParseEnumString_3();
    char v_8;
    Script_UndefinedParameterTy(g_5c8a9c, &v_e0, &v_8, valA10, 7, 0);
    int32_t valA12 = Script_CallNativeHandler_3();
    char v_a8;
    Script_UndefinedParameterTy(g_5c8a9c, &v_e0, &v_a8, valA12, 7, 0);
    int32_t valA14 = Script_CallNativeHandler_3();
    char v_58;
    return Script_UndefinedParameterTy(g_5c8a9c, &v_e0, &v_58, valA14, 7, 0);
}
