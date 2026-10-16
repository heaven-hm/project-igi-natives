#include "004230A0-ControlsMenu_Init.h"
/* 0x004230a0 ControlsMenu_Init full linked: callers=1 callees=21 */
void* ControlsMenu_Init()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ControlsMenu", 0x364, Menu_PlayMusic_13(), 0);
    g_53b874 = eax_1;
    QTask_TriggerEvent(eax_1, 1, ControlsMenu_LoadParameters);
    int32_t eax_2 = sub_4e7530();
    int32_t var_8 = eax_2;
    eax_2 = g_53b874;
    QTask_TriggerEvent(eax_2, var_8, ControlsMenu_Setup);
    QTask_TriggerEvent(g_53b874, 2, sub_423350);
    QTask_RemoveEventCallback(g_53b874, 0, ControlsMenu_Process);
    int32_t eax_3 = sub_4f1a60();
    int32_t var_8_1 = eax_3;
    eax_3 = g_53b874;
    QTask_RemoveEventCallback(eax_3, var_8_1, sub_423ca0);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_53b874, eax_4, ControlsMenu_Update);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_53b874, eax_5, ControlsMenu_OnEvent);
    int32_t eax_6 = sub_4f1220();
    int32_t var_8_4 = eax_6;
    eax_6 = g_53b874;
    QTask_TriggerEvent(eax_6, var_8_4, ControlsMenu_Action);
    int32_t eax_7 = Menu_HandleInput_13();
    QTask_TriggerEvent(g_53b874, eax_7, ControlsMenu_Cleanup);
    int32_t eax_8 = Menu_RequestScreen_14();
    QTask_TriggerEvent(g_53b874, eax_8, sub_423eb0);
    Game_DefineOptions("ControlsMenu_ConvertFloatFromOffset", ControlsMenu_ConvertFloatFromOffset,
        0, 1);
    return Game_DefineOptions("ControlsMenu_ConvertOffsetFromFloat",
        ControlsMenu_ConvertOffsetFromFloat, 0, 1);
}
