#include "gi_platform.h"
#include "0046E370-AIStationaryGunHolder_Init.h"
  int32_t* AIStationaryGunHolder_Init()
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x26a0);
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("AIStationaryGunHolder", 0x26a0, DynObj_LookupHashItem_5(), 0);
    g_5be318 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_46e210);
    QTask_TriggerEvent(g_5be318, 1, AIStationaryGunHolder_LoadParameters);
    QTask_TriggerEvent(g_5be318, 2, AIStationaryGunHolder_Setup);
    int32_t valA3 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be318, valA3, AIStationaryGunHolder_Process);
    int32_t valA4 = Script_ParseEnumInt32_8();
    int32_t v_8_1 = valA4;
    valA4 = g_5be318;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_46e9d0);
    int32_t valA5 = FX_FireBallUpdate_13();
    QTask_RemoveEventCallback(g_5be318, valA5, sub_46e9e0);
    int32_t valA6 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_5be318, valA6, sub_42fc50);
    int32_t valA7 = AI_CheckHearing_25();
    int32_t v_8_4 = valA7;
    valA7 = g_5be318;
    QTask_RemoveEventCallback(valA7, v_8_4, sub_46e9f0);
    g_5be320 = 0;
    g_5be324 = 0x42c80000;
    g_5be328 = Script_EvaluateCondition_7(8);
    int32_t valA9 = Script_ParseEnumReal32_4();
    char arg_2598;
    Script_UndefinedParameterTy(g_5be328, &__return_addr, &arg_2598, valA9, 7, 0);
    int32_t valA11 = Script_SpawnNewTask_3();
    char arg_25b0;
    Script_UndefinedParameterTy(g_5be328, &__return_addr, &arg_25b0, valA11, 7, 0);
    int32_t valA13 = Script_EvaluateCondition_3();
    char arg_25d8;
    Script_UndefinedParameterTy(g_5be328, &__return_addr, &arg_25d8, valA13, 7, 0);
    int32_t valA15 = Script_ExecuteLevelScript_2();
    char arg_25e8;
    Script_UndefinedParameterTy(g_5be328, &__return_addr, &arg_25e8, valA15, 7, 0);
    int32_t valA17 = Script_ExecuteLevelScript_2();
    char arg_25ec;
    Script_UndefinedParameterTy(g_5be328, &__return_addr, &arg_25ec, valA17, 7, 0);
    int32_t valA19 = Script_EvaluateCondition_2();
    char arg_25f0;
    Script_UndefinedParameterTy(g_5be328, &__return_addr, &arg_25f0, valA19, 7, &g_5be320);
    int32_t valA21 = Script_CallNativeHandler_3();
    char arg_25f4;
    Script_UndefinedParameterTy(g_5be328, &__return_addr, &arg_25f4, valA21, 7, 0);
    int32_t valA23 = Script_CallNativeHandler_3();
    char arg_2644;
    Script_UndefinedParameterTy(g_5be328, &__return_addr, &arg_2644, valA23, 7, 0);
    int32_t* result = Mem_Alloc8(0x10);
    g_5be330 = result;
    return result;
}
