#include "M203_Init.h"
char* M203_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("M203", 0x128, DynObj_LookupHashItem_5(), 0);
    g_5be3b0 = valA1;
    QTask_RemoveEventCallback(valA1, 0, M203_LoadParameters);
    QTask_TriggerEvent(g_5be3b0, 1, M203_Setup);
    QTask_TriggerEvent(g_5be3b0, 2, M203_Process);
    int32_t valA3 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5be3b0, valA3, sub_416a90);
    TaskType_Set("TASKTYPE_M203", *g_5be3b0);
    char* result = Level_LoadObjects_6("smoke1.spr");
    g_5be3ac = result;
    return result;
}
