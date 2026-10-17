// Original IGI.EXE function: Afterburner_Init (VA 0x0042BEB0; static CFG gate PASS, CFG score 1.000).
#include "Afterburner_Init.h"
void* Afterburner_Init()

{
    int32_t v_4 = 0;
    g_57bcf8 = TaskType_Register("Afterburner", 0x140, MagicObj_GetTypeId(), 0);
    int32_t valA2 = Display_RestoreDevice_14("AfterburnerPrimitive");
    g_bc2364 = valA2;
    Display_SetGammaRamp_14(valA2, sub_42c4b0);
    QTask_RemoveEventCallback(g_57bcf8, 0, Afterburner_LoadParameters);
    QTask_TriggerEvent(g_57bcf8, 1, Afterburner_Setup);
    QTask_TriggerEvent(g_57bcf8, 2, sub_51b940);
    int32_t valA4 = MagicObj_GetEventId();
    int32_t v_8 = valA4;
    valA4 = g_57bcf8;
    QTask_RemoveEventCallback(valA4, v_8, Afterburner_Process);
    QTask_RemoveEventCallback(g_57bcf8, 4, Afterburner_Update);
    int32_t valA5 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_57bcf8, valA5, 0);
    int32_t valA6 = DynObj_FindSymbol_6();
    int32_t v_8_2 = valA6;
    valA6 = g_57bcf8;
    QTask_RemoveEventCallback(valA6, v_8_2, 0);
    return TaskType_Set("TASKTYPE_AFTERBURNER", *g_57bcf8);
}
