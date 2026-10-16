#include "ElevatorFloorIndicator_Init.h"
int32_t* ElevatorFloorIndicator_Init()

{
    int32_t v_24c = 0;
    int16_t valA1 = TaskType_Register("ElevatorFloorIndicator", 0x248, DynObj_LookupHashItem_5(), 0);
    g_57bf84 = valA1;
    QTask_RemoveEventCallback(valA1, 0, ElevatorFloorIndicator_LoadParameters);
    QTask_TriggerEvent(g_57bf84, 1, ElevatorFloorIndicator_Setup);
    QTask_TriggerEvent(g_57bf84, 2, ElevatorFloorIndicator_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57bf84, valA3, sub_43cb60);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_250_1 = valA4;
    valA4 = g_57bf84;
    QTask_RemoveEventCallback(valA4, v_250_1, ElevatorFloorIndicator_Update);
    int32_t valA5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bf84, valA5, AIGraph_LoadParameters);
    int32_t valA6 = DynObj_CreateMagicObject_6();
    QTask_RemoveEventCallback(g_57bf84, valA6, ElevatorFloorIndicator_Action);
    int32_t valA7 = Weapon_CheckAmmo_8();
    int32_t v_250_4 = valA7;
    valA7 = g_57bf84;
    QTask_RemoveEventCallback(valA7, v_250_4, 0);
    g_57bf88 = Script_EvaluateCondition_7(7);
    int32_t valA9 = Script_ParseEnumReal32_4();
    void v_248;
    void v_158;
    Script_UndefinedParameterTy(g_57bf88, &v_248, &v_158, valA9, 7, 0);
    int32_t valA11 = Script_SpawnNewTask_3();
    void v_140;
    Script_UndefinedParameterTy(g_57bf88, &v_248, &v_140, valA11, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_3();
    void v_d8;
    Script_UndefinedParameterTy(g_57bf88, &v_248, &v_d8, valA13, 7, 0);
    int32_t valA15 = Script_EvaluateCondition_3();
    void v_c8;
    Script_UndefinedParameterTy(g_57bf88, &v_248, &v_c8, valA15, 7, 0);
    int32_t valA17 = Script_EvaluateCondition_3();
    void v_b8;
    Script_UndefinedParameterTy(g_57bf88, &v_248, &v_b8, valA17, 7, 0);
    int32_t valA19 = Script_CallNativeHandler_3();
    void v_a4;
    Script_UndefinedParameterTy(g_57bf88, &v_248, &v_a4, valA19, 7, 0);
    int32_t valA21 = Script_CallNativeHandler_3();
    void v_54;
    return Script_UndefinedParameterTy(g_57bf88, &v_248, &v_54, valA21, 7, 0);
}
