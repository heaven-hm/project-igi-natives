// Original IGI.EXE function: ComputerStartup_Init (VA 0x004663D0; static CFG gate PASS, CFG score 1.000).
#include "ComputerStartup_Init.h"
int32_t ComputerStartup_Init()

{
    int32_t item_4 = 0;
    g_53f520 = TaskType_Register("ComputerStartup", 0x90, QTask_OpenEvent_2(), 0);
    int32_t data_2 = StatusScreen_GetEvent();
    int32_t item_8 = data_2;
    data_2 = g_53f520;
    QTask_TriggerEvent(data_2, item_8, ComputerStartup_LoadParameters);
    QTask_TriggerEvent(g_53f520, 1, ComputerStartup_Setup);
    QTask_TriggerEvent(g_53f520, 2, ComputerStartup_Process);
    int32_t data_3 = Sys_RendermodeFailedToCr_2("ComputerStartup");
    g_5bdc54 = data_3;
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), data_3, ComputerStartup_Update);
    int32_t data_5 = Display_RestoreDevice_14("ComputerStartup");
    g_5bdc50 = data_5;
    return Display_SetGammaRamp_14(data_5, sub_466c60);
}
