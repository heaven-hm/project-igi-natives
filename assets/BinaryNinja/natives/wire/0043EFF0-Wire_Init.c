// Original IGI.EXE function: Wire_Init (VA 0x0043EFF0; static CFG gate PASS, CFG score 1.000).
#include "Wire_Init.h"
int32_t* Wire_Init()

{
    int32_t v_13c = 0;
    int16_t valA1 = TaskType_Register("Wire", 0x138, DynObj_LookupHashItem_5(), 0);
    g_57c144 = valA1;
    QTask_RemoveEventCallback(valA1, 0, Wire_LoadParameters);
    QTask_TriggerEvent(g_57c144, 1, sub_43f340);
    QTask_TriggerEvent(g_57c144, 2, Wire_Setup);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c144, valA3, sub_43f3c0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_140_1 = valA4;
    valA4 = g_57c144;
    QTask_RemoveEventCallback(valA4, v_140_1, Wire_Process);
    int32_t valA5 = Level_InitTextures_2();
    QTask_RemoveEventCallback(g_57c144, valA5, Wire_Update);
    int32_t valA6 = Level_CheckQTaskID_2();
    QTask_RemoveEventCallback(g_57c144, valA6, sub_43f6c0);
    int32_t valA7 = Level_InitSprites_2();
    int32_t v_140_4 = valA7;
    valA7 = g_57c144;
    QTask_RemoveEventCallback(valA7, v_140_4, sub_43f6d0);
    int32_t valA8 = Level_SetMission_2();
    QTask_RemoveEventCallback(g_57c144, valA8, sub_43f6e0);
    int32_t valA9 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_57c144, valA9, sub_45e3d0);
    int32_t valA10 = Script_FormatString_5();
    int32_t v_140_7 = valA10;
    valA10 = g_57c144;
    QTask_TriggerEvent(valA10, v_140_7, Wire_OnEvent);
    int32_t valA11 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c144, valA11, Wire_Action);
    QTask_RemoveEventCallback(g_57c144, 8, 0);
    int32_t valA12 = Weapon_CheckAmmo_8();
    int32_t v_140_9 = valA12;
    valA12 = g_57c144;
    QTask_RemoveEventCallback(valA12, v_140_9, 0);
    g_57c148 = Script_EvaluateCondition_7(3);
    int32_t valA14 = Script_ParseEnumReal32_4();
    void v_138;
    void v_48;
    Script_UndefinedParameterTy(g_57c148, &v_138, &v_48, valA14, 7, 0);
    int32_t valA16 = Script_ParseEnumReal32_4();
    void v_30;
    Script_UndefinedParameterTy(g_57c148, &v_138, &v_30, valA16, 7, 0);
    int32_t valA18 = Script_EvaluateCondition_3();
    void v_18;
    return Script_UndefinedParameterTy(g_57c148, &v_138, &v_18, valA18, 7, 0);
}
