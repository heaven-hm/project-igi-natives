#include "AmbientArea_Init.h"
int32_t* AmbientArea_Init()

{
    g_57c73c = DynObj_MtpNlodvirmodelD("johan");
    int32_t v_214 = 0;
    int16_t valA2 = TaskType_Register("AmbientArea", 0x210, EditorRigidObj_OnEvent(), 0);
    g_57c734 = valA2;
    QTask_RemoveEventCallback(valA2, 0, sub_44c2c0);
    QTask_TriggerEvent(g_57c734, 1, AmbientArea_LoadParameters);
    QTask_TriggerEvent(g_57c734, 2, AmbientArea_Setup);
    int32_t valA4 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c734, valA4, sub_44c730);
    int32_t valA5 = Script_ParseEnumReal32_8();
    int32_t v_218_1 = valA5;
    valA5 = g_57c734;
    QTask_RemoveEventCallback(valA5, v_218_1, AmbientArea_Process);
    g_57c738 = Script_EvaluateCondition_7(6);
    int32_t valA7 = Script_ParseEnumReal32_4();
    void v_210;
    void v_1f0;
    Script_UndefinedParameterTy(g_57c738, &v_210, &v_1f0, valA7, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_3();
    void v_1c0;
    Script_UndefinedParameterTy(g_57c738, &v_210, &v_1c0, valA9, 7, 0);
    int32_t valA11 = Script_ParseEnumReal32_3();
    void v_1d8;
    Script_UndefinedParameterTy(g_57c738, &v_210, &v_1d8, valA11, 7, 0);
    int32_t valA13 = Script_ParseEnumInt32_3();
    void v_190;
    Script_UndefinedParameterTy(g_57c738, &v_210, &v_190, valA13, 7, 0);
    int32_t valA15 = Script_ParseEnumInt32_3();
    void v_188;
    Script_UndefinedParameterTy(g_57c738, &v_210, &v_188, valA15, 7, 0);
    int32_t valA17 = Script_SpawnNewTask_4();
    void v_17c;
    return Script_UndefinedParameterTy(g_57c738, &v_210, &v_17c, valA17, 7, 0);
}
