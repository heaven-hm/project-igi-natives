/* LOGIC NOTE (Flow_Init @ 0x00401FC0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Game_D
   called by : Flow_RunHandler
   data refs : none
   strings   : Flow; FLOW_EVENT_QUIT; FLOW_EVENT_INTRO; FLOW_EVENT_MAINMENU
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Flow_Init.h"

void* Flow_Init()

{
    int32_t v_4 = 0;
    int16_t result_1 = TaskType_Register("Flow", 0x54, QTask_OpenEvent_2(), 0);
    data_567c7c = result_1;
    QTask_RemoveEventCallback(result_1, 0, sub_402070);
    QTask_TriggerEvent(data_567c7c, 1, Flow_LoadParameters);
    QTask_TriggerEvent(data_567c7c, 2, sub_402740);
    TaskType_Set("FLOW_EVENT_QUIT", 1);
    TaskType_Set("FLOW_EVENT_INTRO", 2);
    TaskType_Set("FLOW_EVENT_MAINMENU", 3);
    TaskType_Set("FLOW_EVENT_GAME", 4);
    TaskType_Set("FLOW_EVENT_RESTART_GAME", 5);
    return Game_DefineOptions("Flow_RequestEvent", Flow_RequestEvent, 0, 1);
}
