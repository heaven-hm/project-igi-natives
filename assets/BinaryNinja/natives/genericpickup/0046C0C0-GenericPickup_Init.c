#include "GenericPickup_Init.h"
int32_t* GenericPickup_Init()

{
    int32_t v_124 = 0;
    int16_t valA1 = TaskType_Register("GenericPickup", 0x120, SoundSys_Update3DPosition(), 0);
    g_5be2d0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_46c2b0);
    QTask_TriggerEvent(g_5be2d0, 1, GenericPickup_LoadParameters);
    QTask_TriggerEvent(g_5be2d0, 2, GenericPickup_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_5be2d0, valA3, sub_46c480);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_128_1 = valA4;
    valA4 = g_5be2d0;
    QTask_RemoveEventCallback(valA4, v_128_1, GenericPickup_Process);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_5be2d0, valA5, GenericPickup_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_5be2d0, valA6, GenericPickup_OnEvent);
    int32_t valA7 = Level_LoadObjects_4();
    int32_t v_128_4 = valA7;
    valA7 = g_5be2d0;
    QTask_RemoveEventCallback(valA7, v_128_4, sub_45f920);
    int32_t valA8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be2d0, valA8, sub_45f920);
    int32_t valA9 = Level_LoadObjects_3();
    QTask_RemoveEventCallback(g_5be2d0, valA9, GenericPickup_Action);
    int32_t valA10 = AI_CheckHearing_25();
    int32_t v_128_7 = valA10;
    valA10 = g_5be2d0;
    QTask_RemoveEventCallback(valA10, v_128_7, sub_443dc0);
    int32_t valA11 = DynObj_LinkDynamicCube_12();
    QTask_RemoveEventCallback(g_5be2d0, valA11, GenericPickup_Cleanup_2);
    int32_t valA12 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_5be2d0, valA12, GenericPickup_Cleanup);
    g_5be2d4 = Script_EvaluateCondition_7(3);
    int32_t valA14 = Script_ParseEnumReal32_4();
    void v_120;
    void v_30;
    Script_UndefinedParameterTy(g_5be2d4, &v_120, &v_30, valA14, 7, 0);
    int32_t valA15 = Script_SpawnNewTask_3();
    void v_b0;
    Script_UndefinedParameterTy(g_5be2d4, &v_120, &v_b0, valA15, 7, 0);
    int32_t valA16 = Script_EvaluateCondition_3();
    void v_18;
    return Script_UndefinedParameterTy(g_5be2d4, &v_120, &v_18, valA16, 7, 0);
}
