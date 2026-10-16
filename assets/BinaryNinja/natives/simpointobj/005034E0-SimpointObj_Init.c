#include "SimpointObj_Init.h"
int32_t* SimpointObj_Init()

{
    int32_t v_4_1 = 0;
    int16_t valA1 = TaskType_Register("SimpointObjContainer", 0x64, QTask_OpenEvent_2(), 0x20);
    g_a7a628 = valA1;
    QTask_RemoveEventCallback(valA1, 0, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a7a628, 2, AIGraph_LoadParameters);
    QTask_TriggerEvent(g_a7a628, 1, SimpointObj_Process);
    int32_t v_4 = 0;
    int16_t valA4 = TaskType_Register("SimpointObj", 0x100, DynObj_LookupHashItem_5(), 0);
    g_a7a62a = valA4;
    QTask_RemoveEventCallback(valA4, 0, sub_503b60);
    QTask_TriggerEvent(g_a7a62a, 2, sub_503b90);
    QTask_TriggerEvent(g_a7a62a, 1, sub_503bb0);
    QTask_RemoveEventCallback(g_a7a62a, 0xc, sub_45f920);
    return Sys_ResolveSymbol_13(0xa7a630);
}
