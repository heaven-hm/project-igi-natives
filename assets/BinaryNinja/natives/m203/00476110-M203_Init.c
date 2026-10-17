// Original IGI.EXE function: M203_Init (VA 0x00476110; static CFG gate PASS, CFG score 1.000).
#include "M203_Init.h"
char* M203_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("M203", 0x128, DynObj_LookupHashItem_5(), 0);
    g_5be3b0 = data_1;
    QTask_RemoveEventCallback(data_1, 0, M203_LoadParameters);
    QTask_TriggerEvent(g_5be3b0, 1, M203_Setup);
    QTask_TriggerEvent(g_5be3b0, 2, M203_Process);
    int32_t data_3 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5be3b0, data_3, sub_416a90);
    TaskType_Set("TASKTYPE_M203", *g_5be3b0);
    char* result = Level_LoadObjects_6("smoke1.spr");
    g_5be3ac = result;
    return result;
}
