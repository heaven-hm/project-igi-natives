#include "ComputerStartup_Init.h"
int32_t ComputerStartup_Init()

{
    int32_t v_4 = 0;
    g_53f520 = TaskType_Register("ComputerStartup", 0x90, QTask_OpenEvent_2(), 0);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_8 = valA2;
    valA2 = g_53f520;
    QTask_TriggerEvent(valA2, v_8, ComputerStartup_LoadParameters);
    QTask_TriggerEvent(g_53f520, 1, ComputerStartup_Setup);
    QTask_TriggerEvent(g_53f520, 2, ComputerStartup_Process);
    int32_t valA3 = Sys_RendermodeFailedToCr_2("ComputerStartup");
    g_5bdc54 = valA3;
    Sys_CheckHeap_2(Display_CheckCapabilities_7(), valA3, ComputerStartup_Update);
    int32_t valA5 = Display_RestoreDevice_14("ComputerStartup");
    g_5bdc50 = valA5;
    return Display_SetGammaRamp_14(valA5, sub_466c60);
}
