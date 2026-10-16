#include "00476110-M203_Init.h"
/* 0x00476110 M203_Init full linked: callers=1 callees=9 */
char* sub_476110()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("M203", 0x128, sub_4c48c0(), 0);
    g_5be3b0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4761b0);
    QTask_TriggerEvent(g_5be3b0, 1, sub_476340);
    QTask_TriggerEvent(g_5be3b0, 2, sub_476600);
    int32_t eax_3 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5be3b0, eax_3, sub_416a90);
    TaskType_Set("TASKTYPE_M203", *g_5be3b0);
    char* result = Level_LoadObjects_6("smoke1.spr");
    g_5be3ac = result;
    return result;
}
