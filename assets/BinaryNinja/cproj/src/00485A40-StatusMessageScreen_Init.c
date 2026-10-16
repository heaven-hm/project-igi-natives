#include "gi_platform.h"
#include "00485A40-StatusMessageScreen_Init.h"
void* StatusMessageScreen_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("StatusMessageScreen", 0x18440, QTask_OpenEvent_2(), 0);
    g_540b08 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_485b20);
    QTask_TriggerEvent(g_540b08, 1, sub_485b40);
    QTask_TriggerEvent(g_540b08, 2, sub_486010);
    int32_t valA3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_540b08, valA3, StatusMessageScreen_LoadParameters);
    return Game_DefineOptions("StatusMessageScreen_ClearMessages",
        StatusMessageScreen_ClearMessages, 0, 0);
}
