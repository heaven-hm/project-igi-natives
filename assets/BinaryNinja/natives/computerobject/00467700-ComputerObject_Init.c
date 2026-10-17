// IGI native provenance: ComputerObject_Init - 0x00467700 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00467700-ComputerObject_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ComputerObject_Init.h"
void* ComputerObject_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ComputerObject", 0x24, QTask_OpenEvent_2(), 0);
    g_53f580 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4678f0);
    QTask_TriggerEvent(g_53f580, 2, sub_467960);
    int32_t data_3 = StatusScreen_GetEvent();
    QTask_TriggerEvent(g_53f580, data_3, ComputerObject_LoadParameters);
    g_53f582 = AI_CheckHearing_25();
    g_53f583 = AI_FireWeapon_25();
    g_53f584 = AI_MoveToNode_25();
    int32_t data_7 = AI_CheckHearing_25();
    QTask_RemoveEventCallback(Script_ExecuteLevelScript_16(), data_7, sub_467c60);
    int32_t data_9 = AI_MoveToNode_25();
    QTask_RemoveEventCallback(DynObj_LookupHashItem_5(), data_9, ComputerObject_Setup);
    TaskType_Set("MARKER_NONE", 0xffffffff);
    TaskType_Set("MARKER_BOX", 0);
    TaskType_Set("MARKER_COLOR_NONE", 0xffffffff);
    TaskType_Set("MARKER_COLOR_RED", 0);
    TaskType_Set("MARKER_COLOR_YELLOW", 1);
    TaskType_Set("MARKER_COLOR_GREEN", 2);
    return TaskType_Set("MARKER_COLOR_BLUE", 4);
}
