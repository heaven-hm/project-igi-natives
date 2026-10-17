// Original IGI.EXE function: AlarmControl_Init (VA 0x00440710; static CFG gate PASS, CFG score 1.000).
#include "AlarmControl_Init.h"
int32_t* AlarmControl_Init()

{
    int32_t v_354 = 0;
    int16_t valA1 = TaskType_Register("AlarmControl", 0x350, Env_UpdateCameraLens_3(), 0);
    g_57c164 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_440840);
    QTask_TriggerEvent(g_57c164, 1, AlarmControl_LoadParameters);
    QTask_TriggerEvent(g_57c164, 2, sub_440970);
    int32_t valA3 = Script_ParseEnumInt32_8();
    QTask_RemoveEventCallback(g_57c164, valA3, sub_4409e0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    int32_t v_358_1 = valA4;
    valA4 = g_57c164;
    QTask_RemoveEventCallback(valA4, v_358_1, sub_4409f0);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_57c164, valA5, AlarmControl_Setup);
    int32_t valA6 = Script_SpawnNewTask_6();
    QTask_TriggerEvent(g_57c164, valA6, AlarmControl_Process);
    g_57c168 = Script_FormatString_7(Env_CheckAmbientArea_3(), 2);
    int32_t valA9 = Script_CallNativeHandler_3();
    void v_350;
    void v_a4;
    Script_UndefinedParameterTy(g_57c168, &v_350, &v_a4, valA9, 7, 0);
    int32_t valA10 = Script_CallNativeHandler_3();
    void v_54;
    return Script_UndefinedParameterTy(g_57c168, &v_350, &v_54, valA10, 7, 0);
}
