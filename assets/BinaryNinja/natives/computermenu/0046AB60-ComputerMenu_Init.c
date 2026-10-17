// Original IGI.EXE function: ComputerMenu_Init (VA 0x0046AB60; static CFG gate PASS, CFG score 1.000).
#include "ComputerMenu_Init.h"
int32_t ComputerMenu_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ComputerMenu", 0x3c, QTask_OpenEvent_2(), 0);
    g_5bdda8 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_46abe0);
    QTask_TriggerEvent(g_5bdda8, 1, ComputerMenu_LoadParameters);
    QTask_TriggerEvent(g_5bdda8, 2, sub_46ae20);
    int32_t valA3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_5bdda8, valA3, ComputerMenu_Setup);
    return Script_RegisterNamespace("COMPUTER:", "LOCAL:computer/");
}
