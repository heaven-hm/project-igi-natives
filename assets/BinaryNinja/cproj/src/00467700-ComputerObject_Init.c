#include "gi_platform.h"
#include "00467700-ComputerObject_Init.h"
void* ComputerObject_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ComputerObject", 0x24, QTask_OpenEvent_2(), 0);
    g_53f580 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4678f0);
    QTask_TriggerEvent(g_53f580, 2, sub_467960);
    int32_t valA3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_53f580, valA3, ComputerObject_LoadParameters);
    g_53f582 = AI_CheckHearing_25();
    g_53f583 = AI_FireWeapon_25();
    g_53f584 = AI_MoveToNode_25();
    int32_t valA7 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(Script_ExecuteLevelScript_16(), valA7, sub_467c60);
    int32_t valA9 = AI_MoveToNode_25();
    QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), valA9, ComputerObject_Setup);
    TaskType_Set("MARKER_NONE", 0xffffffff);
    TaskType_Set("MARKER_BOX", 0);
    TaskType_Set("MARKER_COLOR_NONE", 0xffffffff);
    TaskType_Set("MARKER_COLOR_RED", 0);
    TaskType_Set("MARKER_COLOR_YELLOW", 1);
    TaskType_Set("MARKER_COLOR_GREEN", 2);
    return TaskType_Set("MARKER_COLOR_BLUE", 4);
}
