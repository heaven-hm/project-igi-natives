#include "0042BEB0-Afterburner_Init.h"
/* 0x0042beb0 Afterburner_Init full linked: callers=1 callees=15 */
void* Afterburner_Init()

{
    int32_t var_4 = 0;
    g_57bcf8 = TaskType_Register("Afterburner", 0x140, MagicObj_GetTypeId(), 0);
    int32_t eax_2 = sub_4978d0("AfterburnerPrimitive");
    g_bc2364 = eax_2;
    sub_4978f0(eax_2, sub_42c4b0);
    QTask_RemoveEventCallback(g_57bcf8, 0, Afterburner_LoadParameters);
    QTask_TriggerEvent(g_57bcf8, 1, Afterburner_Setup);
    QTask_TriggerEvent(g_57bcf8, 2, sub_51b940);
    int32_t eax_4 = MagicObj_GetEventId();
    int32_t var_8 = eax_4;
    eax_4 = g_57bcf8;
    QTask_RemoveEventCallback(eax_4, var_8, Afterburner_Process);
    QTask_RemoveEventCallback(g_57bcf8, 4, Afterburner_Update);
    int32_t eax_5 = sub_4e7530();
    QTask_TriggerEvent(g_57bcf8, eax_5, 0);
    int32_t eax_6 = sub_4c56f0();
    int32_t var_8_2 = eax_6;
    eax_6 = g_57bcf8;
    QTask_RemoveEventCallback(eax_6, var_8_2, 0);
    return TaskType_Set("TASKTYPE_AFTERBURNER", *g_57bcf8);
}
