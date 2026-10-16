#include "Flow_Init.h"
void* Flow_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Flow", 0x54, QTask_OpenEvent_2(), 0);
    g_567c7c = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_402070);
    QTask_TriggerEvent(g_567c7c, 1, Flow_LoadParameters);
    QTask_TriggerEvent(g_567c7c, 2, sub_402740);
    TaskType_Set("FLOW_EVENT_QUIT", 1);
    TaskType_Set("FLOW_EVENT_INTRO", 2);
    TaskType_Set("FLOW_EVENT_MAINMENU", 3);
    TaskType_Set("FLOW_EVENT_GAME", 4);
    TaskType_Set("FLOW_EVENT_RESTART_GAME", 5);
    return Game_DefineOptions("Flow_RequestEvent", Flow_RequestEvent, 0, 1);
}
