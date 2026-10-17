// Original IGI.EXE function: Rudder_Init (VA 0x004361D0; static CFG gate PASS, CFG score 1.000).
#include "Rudder_Init.h"
void* Rudder_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Rudder", 0x140, MagicObj_GetTypeId(), 0);
    g_57bd74 = data_1;
    QTask_RemoveEventCallback(data_1, 0, Rudder_LoadParameters);
    QTask_TriggerEvent(g_57bd74, 1, sub_488700);
    QTask_TriggerEvent(g_57bd74, 2, sub_51b940);
    int32_t data_3 = MagicObj_GetEventId();
    QTask_RemoveEventCallback(g_57bd74, data_3, Rudder_Setup);
    int32_t data_4 = DynObj_RemoveSymbol_5();
    int32_t item_8_1 = data_4;
    data_4 = g_57bd74;
    QTask_RemoveEventCallback(data_4, item_8_1, sub_436740);
    int32_t data_5 = DynObj_RegisterSymbol_6();
    QTask_RemoveEventCallback(g_57bd74, data_5, sub_427f80);
    TaskType_Set("TASKTYPE_RUDDER", *g_57bd74);
    TaskType_Set("RUDDER_TAILERON_LEFT", 1);
    TaskType_Set("RUDDER_TAILERON_RIGHT", 2);
    TaskType_Set("RUDDER_AILERON", 0);
    return TaskType_Set("RUDDER_GAMMA", 3);
}
