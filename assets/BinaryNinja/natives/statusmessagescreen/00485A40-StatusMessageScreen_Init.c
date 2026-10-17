// Original IGI.EXE function: StatusMessageScreen_Init (VA 0x00485A40; static CFG gate PASS, CFG score 1.000).
#include "StatusMessageScreen_Init.h"
void* StatusMessageScreen_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("StatusMessageScreen", 0x18440, QTask_OpenEvent_2(), 0);
    g_540b08 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_485b20);
    QTask_TriggerEvent(g_540b08, 1, sub_485b40);
    QTask_TriggerEvent(g_540b08, 2, sub_486010);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_540b08, data_3, StatusMessageScreen_LoadParameters);
    return Game_DefineOptions("StatusMessageScreen_ClearMessages",
        StatusMessageScreen_ClearMessages, 0, 0);
}
