// Original IGI.EXE function: ViewportQTask_Init (VA 0x004E7D90; static CFG gate PASS, CFG score 0.963).
#include "ViewportQTask_Init.h"
int32_t ViewportQTask_Init()

{
    int32_t v_8 = 0;
    int16_t valA1 = TaskType_Register("ViewportQTask", 0xc8, QTask_OpenEvent_2(), 0);
    g_54d98c = valA1;
    QTask_TriggerEvent(valA1, 1, sub_488700);
    QTask_TriggerEvent(g_54d98c, 2, ViewportQTask_LoadParameters);
    int32_t valA3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_54d98c, valA3, ViewportQTask_Setup);
    g_a5ec64 = 1;
    Display_SwapBuffers_3(ViewportQTask_Process);
    ViewportQTask_Process();
    __builtin_memset(&g_a5ebe0, 0, 0x3c);
    return 0;
}
