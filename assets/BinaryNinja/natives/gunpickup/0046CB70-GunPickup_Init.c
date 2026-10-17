// Original IGI.EXE function: GunPickup_Init (VA 0x0046CB70; static CFG gate PASS, CFG score 1.000).
#include "GunPickup_Init.h"
int32_t* GunPickup_Init()

{
    int32_t v_15c = 0;
    g_5be2e0 = TaskType_Register("GunPickup", 0x158, SoundSys_Update3DPosition(), 0);
    g_53fde0 = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_5be2e0, 0, GunPickup_LoadParameters);
    QTask_TriggerEvent(g_5be2e0, 1, GunPickup_Setup);
    QTask_TriggerEvent(g_5be2e0, 2, AmmoPickup_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_160 = valA3;
    valA3 = g_5be2e0;
    QTask_RemoveEventCallback(valA3, v_160, sub_46d040);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_5be2e0, valA4, sub_46d050);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_5be2e0, valA5, GunPickup_Update);
    int32_t valA6 = Script_SpawnNewTask_6();
    int32_t v_160_3 = valA6;
    valA6 = g_5be2e0;
    QTask_TriggerEvent(valA6, v_160_3, GunPickup_OnEvent);
    int32_t valA7 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5be2e0, valA7, sub_45f920);
    int32_t valA8 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5be2e0, valA8, sub_45f920);
    int32_t valA9 = Level_LoadObjects_3();
    int32_t v_160_6 = valA9;
    valA9 = g_5be2e0;
    QTask_RemoveEventCallback(valA9, v_160_6, GunPickup_Action);
    g_5be2f8 = Script_EvaluateCondition_7(3);
    int32_t valA11 = Script_ParseEnumReal32_4();
    void v_158;
    void v_68;
    Script_UndefinedParameterTy(g_5be2f8, &v_158, &v_68, valA11, 7, 0);
    int32_t valA13 = Script_SpawnNewTask_3();
    void v_e8;
    Script_UndefinedParameterTy(g_5be2f8, &v_158, &v_e8, valA13, 7, 0);
    int32_t valA15 = Script_CallNativeHandler_10();
    void v_28;
    return Script_UndefinedParameterTy(g_5be2f8, &v_158, &v_28, valA15, 7, 0x56e228);
}
