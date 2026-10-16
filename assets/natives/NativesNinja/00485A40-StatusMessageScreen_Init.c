#include "00485A40-StatusMessageScreen_Init.h"
/* 0x00485a40 StatusMessageScreen_Init full linked: callers=1 callees=8 */
void* sub_485a40()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("StatusMessageScreen", 0x18440, QTask_OpenEvent_2(), 0);
    g_540b08 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_485b20);
    QTask_TriggerEvent(g_540b08, 1, sub_485b40);
    QTask_TriggerEvent(g_540b08, 2, sub_486010);
    int32_t eax_3 = sub_4e7530();
    QTask_TriggerEvent(g_540b08, eax_3, sub_486020);
    return Game_DefineOptions("StatusMessageScreen_ClearMessages",
        StatusMessageScreen_ClearMessages, 0, 0);
}
