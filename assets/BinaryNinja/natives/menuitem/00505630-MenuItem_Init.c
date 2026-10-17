// Original IGI.EXE function: MenuItem_Init (VA 0x00505630; static CFG gate PASS, CFG score 1.000).
#include "MenuItem_Init.h"
int32_t MenuItem_Init()

{
    g_54e71e = QTask_UnableToAllocateEvent(0);
    g_54e71d = QTask_UnableToAllocateEvent(0);
    g_54e71c = QTask_UnableToAllocateEvent(0);
    int32_t item_4 = 0;
    int16_t data_4 = TaskType_Register("MenuItem", 0x54, QTask_OpenEvent_2(), 0);
    g_54e720 = data_4;
    QTask_TriggerEvent(data_4, 1, sub_488700);
    int32_t data_5 = StatusScreen_GetEvent();
    int32_t item_8 = data_5;
    data_5 = g_54e720;
    QTask_TriggerEvent(data_5, item_8, sub_424280);
    int32_t data_6 = Physics_CalculateSplineLength_5();
    QTask_RemoveEventCallback(g_54e720, data_6, sub_505840);
    int32_t data_7 = Physics_InterpolateWaypoint_5();
    QTask_RemoveEventCallback(g_54e720, data_7, sub_5057c0);
    int32_t data_8 = EditRigidObjAttachedToBone_OnTick();
    int32_t item_8_3 = data_8;
    data_8 = g_54e720;
    QTask_RemoveEventCallback(data_8, item_8_3, sub_505850);
    int32_t data_9 = Physics_EvaluateAreaCriteria_5();
    return QTask_RemoveEventCallback(g_54e720, data_9, MenuItem_LoadParameters);
}
