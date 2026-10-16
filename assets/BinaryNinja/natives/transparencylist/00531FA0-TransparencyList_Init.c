#include "TransparencyList_Init.h"
int32_t TransparencyList_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("TransparencyList", 0x80, g_54875c, 0);
    g_54f884 = valA1;
    QTask_RemoveEventCallback(valA1, 4, sub_532140);
    QTask_TriggerEvent(g_54f884, 2, TransparencyList_LoadParameters);
    g_c28f90 = Display_RestoreDevice_14("TransparencyListPrimitive");
    int32_t valA3 = Display_RestoreDevice_14("TransparencyListStartPrimitive");
    g_c28f94 = valA3;
    Display_SetGammaRamp_14(valA3, sub_532100);
    return Sys_CheckHeap_2(Display_CheckCapabilities_7(), g_c28f90, TransparencyList_Setup);
}
