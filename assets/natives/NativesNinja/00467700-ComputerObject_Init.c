#include "00467700-ComputerObject_Init.h"
/* 0x00467700 ComputerObject_Init full linked: callers=1 callees=22 */
void* sub_467700()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ComputerObject", 0x24, QTask_OpenEvent_2(), 0);
    g_53f580 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4678f0);
    QTask_TriggerEvent(g_53f580, 2, sub_467960);
    int32_t eax_3 = sub_4e7530();
    QTask_TriggerEvent(g_53f580, eax_3, sub_467970);
    g_53f582 = sub_467d90();
    g_53f583 = sub_467db0();
    g_53f584 = sub_467dd0();
    int32_t eax_7 = sub_467d90();
    QTask_RemoveEventCallback(sub_4f45f0(), eax_7, sub_467c60);
    int32_t eax_9 = sub_467dd0();
    QTask_RemoveEventCallback(sub_4c48c0(), eax_9, sub_467800);
    TaskType_Set("MARKER_NONE", 0xffffffff);
    TaskType_Set("MARKER_BOX", 0);
    TaskType_Set("MARKER_COLOR_NONE", 0xffffffff);
    TaskType_Set("MARKER_COLOR_RED", 0);
    TaskType_Set("MARKER_COLOR_YELLOW", 1);
    TaskType_Set("MARKER_COLOR_GREEN", 2);
    return TaskType_Set("MARKER_COLOR_BLUE", 4);
}
