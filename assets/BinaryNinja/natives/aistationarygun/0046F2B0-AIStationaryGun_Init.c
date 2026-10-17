// Original IGI.EXE function: AIStationaryGun_Init (VA 0x0046F2B0; static CFG gate PASS, CFG score 1.000).
#include "AIStationaryGun_Init.h"
void* AIStationaryGun_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("AIStationaryGun", 0x1e8, MagicObj_GetTypeId(), 0);
    g_53fec0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, AIStationaryGun_LoadParameters);
    QTask_TriggerEvent(g_53fec0, 1, AIStationaryGun_Setup);
    QTask_TriggerEvent(g_53fec0, 2, sub_426860);
    int32_t valA3 = DynObj_RemoveSymbol_5();
    QTask_RemoveEventCallback(g_53fec0, valA3, AIStationaryGun_Process);
    int32_t valA4 = DynObj_RegisterSymbol_6();
    int32_t v_8_1 = valA4;
    valA4 = g_53fec0;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_46fb50);
    int32_t valA5 = FX_TrailUpdate_12();
    QTask_RemoveEventCallback(g_53fec0, valA5, sub_46fb60);
    int32_t valA6 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_53fec0, valA6, AIStationaryGun_Update);
    return TaskType_Set("TASKTYPE_AISTATIONARYGUN", *g_53fec0);
}
