// Original IGI.EXE function: ControlsMenu_Init (VA 0x004230A0; static CFG gate PASS, CFG score 1.000).
#include "ControlsMenu_Init.h"
void* ControlsMenu_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ControlsMenu", 0x364, Menu_PlayMusic_13(), 0);
    g_53b874 = valA1;
    QTask_TriggerEvent(valA1, 1, ControlsMenu_LoadParameters);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_8 = valA2;
    valA2 = g_53b874;
    QTask_TriggerEvent(valA2, v_8, ControlsMenu_Setup);
    QTask_TriggerEvent(g_53b874, 2, sub_423350);
    QTask_RemoveEventCallback(g_53b874, 0, ControlsMenu_Process);
    int32_t valA3 = Script_ParseEnumInt32_8();
    int32_t v_8_1 = valA3;
    valA3 = g_53b874;
    QTask_RemoveEventCallback(valA3, v_8_1, sub_423ca0);
    int32_t valA4 = Script_ParseEnumReal32_8();
    QTask_RemoveEventCallback(g_53b874, valA4, ControlsMenu_Update);
    int32_t valA5 = Script_FormatString_5();
    QTask_TriggerEvent(g_53b874, valA5, ControlsMenu_OnEvent);
    int32_t valA6 = Script_SpawnNewTask_6();
    int32_t v_8_4 = valA6;
    valA6 = g_53b874;
    QTask_TriggerEvent(valA6, v_8_4, ControlsMenu_Action);
    int32_t valA7 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b874, valA7, ControlsMenu_Cleanup);
    int32_t valA8 = Menu_RequestScreen_14();
    QTask_TriggerEvent(g_53b874, valA8, sub_423eb0);
    Game_DefineOptions("ControlsMenu_ConvertFloatFromOffset", ControlsMenu_ConvertFloatFromOffset,
        0, 1);
    return Game_DefineOptions("ControlsMenu_ConvertOffsetFromFloat",
        ControlsMenu_ConvertOffsetFromFloat, 0, 1);
}
