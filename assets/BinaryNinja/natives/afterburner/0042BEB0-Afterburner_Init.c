// IGI native provenance: Afterburner_Init - 0x0042BEB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042BEB0-Afterburner_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Afterburner_Init.h"
void* Afterburner_Init()

{
    int32_t item_4 = 0;
    g_57bcf8 = TaskType_Register("Afterburner", 0x140, MagicObj_GetTypeId(), 0);
    int32_t data_2 = Display_RestoreDevice_14("AfterburnerPrimitive");
    g_bc2364 = data_2;
    Display_SetGammaRamp_14(data_2, sub_42c4b0);
    QTask_RemoveEventCallback(g_57bcf8, 0, Afterburner_LoadParameters);
    QTask_TriggerEvent(g_57bcf8, 1, Afterburner_Setup);
    QTask_TriggerEvent(g_57bcf8, 2, sub_51b940);
    int32_t data_4 = MagicObj_GetEventId();
    int32_t item_8 = data_4;
    data_4 = g_57bcf8;
    QTask_RemoveEventCallback(data_4, item_8, Afterburner_Process);
    QTask_RemoveEventCallback(g_57bcf8, 4, Afterburner_Update);
    int32_t data_5 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_57bcf8, data_5, 0);
    int32_t data_6 = DynObj_FindSymbol_6();
    int32_t item_8_2 = data_6;
    data_6 = g_57bcf8;
    QTask_RemoveEventCallback(data_6, item_8_2, 0);
    return TaskType_Set("TASKTYPE_AFTERBURNER", *g_57bcf8);
}
