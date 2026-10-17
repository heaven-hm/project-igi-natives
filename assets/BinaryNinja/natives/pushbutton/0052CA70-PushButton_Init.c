// Original IGI.EXE function: PushButton_Init (VA 0x0052CA70; static CFG gate PASS, CFG score 1.000).
#include "PushButton_Init.h"
int32_t PushButton_Init()

{
    int32_t v_4 = 0;
    g_54f718 = TaskType_Register("PushButton", 0x7c, Physics_SimulateRigidBody_5(), 0);
    int32_t valA2 = StatusScreen_GetEvent();
    int32_t v_8 = valA2;
    valA2 = g_54f718;
    QTask_TriggerEvent(valA2, v_8, sub_52cad0);
    int32_t valA3 = EditRigidObjAttachedToBone_Action();
    return QTask_RemoveEventCallback(g_54f718, valA3, PushButton_LoadParameters);
}
