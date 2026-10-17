// Original IGI.EXE function: AmmoPickup_Init (VA 0x0046D420; static CFG gate PASS, CFG score 1.000).
#include "AmmoPickup_Init.h"
int32_t* AmmoPickup_Init()

{
    int32_t v_13c = 0;
    g_5be300 = TaskType_Register("AmmoPickup", 0x138, SoundSys_Update3DPosition(), 0);
    g_53fe28 = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_5be300, 0, AmmoPickup_LoadParameters);
    QTask_TriggerEvent(g_5be300, 1, sub_46d740);
    QTask_TriggerEvent(g_5be300, 2, AmmoPickup_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_140 = valA3;
    valA3 = g_5be300;
    QTask_RemoveEventCallback(valA3, v_140, sub_46d7c0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be300, valA4, sub_46d7d0);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_5be300, valA5, AmmoPickup_Process);
    int32_t valA6 = Script_SpawnNewTask_6();
    int32_t v_140_3 = valA6;
    valA6 = g_5be300;
    QTask_TriggerEvent(valA6, v_140_3, AmmoPickup_Update);
    int32_t valA7 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5be300, valA7, sub_45f920);
    int32_t valA8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be300, valA8, sub_45f920);
    int32_t valA9 = Level_LoadObjects_3();
    int32_t v_140_6 = valA9;
    valA9 = g_5be300;
    QTask_RemoveEventCallback(valA9, v_140_6, AmmoPickup_OnEvent);
    g_5be304 = Script_EvaluateCondition_7(4);
    int32_t valA11 = Script_ParseEnumReal32_4();
    void v_138;
    void v_48;
    Script_UndefinedParameterTy(g_5be304, &v_138, &v_48, valA11, 7, 0);
    int32_t valA13 = Script_SpawnNewTask_3();
    void v_c8;
    Script_UndefinedParameterTy(g_5be304, &v_138, &v_c8, valA13, 7, 0);
    int32_t valA15 = Script_CallNativeHandler_10();
    void v_28;
    Script_UndefinedParameterTy(g_5be304, &v_138, &v_28, valA15, 7, 0x5c10f0);
    int32_t valA17 = Script_ExecuteLevelScript_3();
    void v_8;
    return Script_UndefinedParameterTy(g_5be304, &v_138, &v_8, valA17, 7, 0);
}
