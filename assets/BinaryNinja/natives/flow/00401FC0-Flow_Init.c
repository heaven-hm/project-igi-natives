// IGI native provenance: Flow_Init - 0x00401FC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00401FC0-Flow_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Flow_Init.h"
void* Flow_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("Flow", 0x54, QTask_OpenEvent_2(), 0);
    g_567c7c = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_402070);
    QTask_TriggerEvent(g_567c7c, 1, Flow_LoadParameters);
    QTask_TriggerEvent(g_567c7c, 2, sub_402740);
    TaskType_Set("FLOW_EVENT_QUIT", 1);
    TaskType_Set("FLOW_EVENT_INTRO", 2);
    TaskType_Set("FLOW_EVENT_MAINMENU", 3);
    TaskType_Set("FLOW_EVENT_GAME", 4);
    TaskType_Set("FLOW_EVENT_RESTART_GAME", 5);
    return Game_DefineOptions("Flow_RequestEvent", Flow_RequestEvent, 0, 1);
}
