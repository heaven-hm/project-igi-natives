#include "gi_platform.h"
#include "00505630-MenuItem_Init.h"
int32_t MenuItem_Init()

{
    g_54e71e = QTask_UnableToAllocateEvent(0);
    g_54e71d = QTask_UnableToAllocateEvent(0);
    g_54e71c = QTask_UnableToAllocateEvent(0);
    int32_t v_4 = 0;
    int16_t valA4 = TaskType_Register("MenuItem", 0x54, QTask_OpenEvent_2(), 0);
    g_54e720 = valA4;
    QTask_TriggerEvent(valA4, 1, sub_488700);
    int32_t valA5 = StatusScreen_GetEvent();
    int32_t v_8 = valA5;
    valA5 = g_54e720;
    QTask_TriggerEvent(valA5, v_8, sub_424280);
    int32_t valA6 = Physics_CalculateSplineLength_5();
    QTask_RemoveEventCallback(g_54e720, valA6, sub_505840);
    int32_t valA7 = Physics_InterpolateWaypoint_5();
    QTask_RemoveEventCallback(g_54e720, valA7, sub_5057c0);
    int32_t valA8 = EditRigidObjAttachedToBone_OnTick();
    int32_t v_8_3 = valA8;
    valA8 = g_54e720;
    QTask_RemoveEventCallback(valA8, v_8_3, sub_505850);
    int32_t valA9 = Physics_EvaluateAreaCriteria_5();
    return QTask_RemoveEventCallback(g_54e720, valA9, MenuItem_LoadParameters);
}
