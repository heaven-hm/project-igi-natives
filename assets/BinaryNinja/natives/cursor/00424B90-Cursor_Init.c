// Original IGI.EXE function: Cursor_Init (VA 0x00424B90; static CFG gate PASS, CFG score 1.000).
#include "Cursor_Init.h"
void* Cursor_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Cursor", 0x40, QTask_OpenEvent_2(), 0);
    g_57bc60 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_424c10);
    QTask_TriggerEvent(g_57bc60, 1, Cursor_LoadParameters);
    QTask_TriggerEvent(g_57bc60, 2, AIGraph_LoadParameters);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_57bc60, data_3, sub_424c40);
    return FX_FailedToRegisterWinp(sub_424ca0);
}
