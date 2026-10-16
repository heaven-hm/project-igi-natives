#include "RotatingObject_Init.h"
int32_t* RotatingObject_Init()

{
    int32_t v_204 = 0;
    int16_t valA1 = TaskType_Register("RotatingObject", 0x200, DynObj_LookupHashItem_5(), 0);
    g_57be98 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_438c30);
    QTask_TriggerEvent(g_57be98, 1, RotatingObject_LoadParameters);
    QTask_TriggerEvent(g_57be98, 2, RotatingObject_Setup);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_57be98, valA3, RotatingObject_Process);
    int32_t valA4 = Level_LoadLevel_3();
    int32_t v_208_1 = valA4;
    valA4 = g_57be98;
    QTask_RemoveEventCallback(valA4, v_208_1, sub_439750);
    int32_t valA5 = SoundSys_SetFrequency_5();
    QTask_RemoveEventCallback(g_57be98, valA5, sub_439770);
    int32_t valA6 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57be98, valA6, sub_439790);
    g_57be90 = Script_EvaluateCondition_7(0xc);
    int32_t valA8 = Script_ParseEnumReal32_4();
    void v_200;
    void v_78;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_78, valA8, 7, 0);
    int32_t valA9 = Script_SpawnNewTask_3();
    void v_a0;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_a0, valA9, 7, 0);
    int32_t valA10 = Script_EvaluateCondition_3();
    void v_f0;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_f0, valA10, 7, 0);
    int32_t valA11 = Script_EvaluateCondition_3();
    void v_110;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_110, valA11, 7, 0);
    int32_t valA12 = Script_ExecuteLevelScript_2();
    void v_e0;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_e0, valA12, 7, 0);
    int32_t valA13 = Script_ExecuteLevelScript_2();
    void v_dc;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_dc, valA13, 7, 0);
    int32_t valA14 = Script_ExecuteLevelScript_2();
    void v_d8;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_d8, valA14, 7, 0);
    int32_t valA15 = Script_ExecuteLevelScript_2();
    void v_d4;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_d4, valA15, 7, 0);
    int32_t valA16 = Script_ExecuteLevelScript_2();
    void v_d0;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_d0, valA16, 7, 0);
    int32_t valA17 = Script_ExecuteLevelScript_2();
    void v_cc;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_cc, valA17, 7, 0);
    int32_t valA18 = Script_ParseEnumInt32_4();
    void v_c8;
    Script_UndefinedParameterTy(g_57be90, &v_200, &v_c8, valA18, 7, 0);
    int32_t valA19 = Script_CallNativeHandler_3();
    void v_54;
    return Script_UndefinedParameterTy(g_57be90, &v_200, &v_54, valA19, 7, 0);
}
