// Original IGI.EXE function: HumanAttach_Init (VA 0x00465A10; static CFG gate PASS, CFG score 1.000).
#include "HumanAttach_Init.h"
int32_t HumanAttach_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("HumanAttach", 0x140, EditRigidObjAttachedToBone_OnEvent(), 0);
    g_5bdc48 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_465ac0);
    QTask_TriggerEvent(g_5bdc48, 1, sub_465ae0);
    int32_t valA3 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_5bdc48, valA3, HumanAttach_LoadParameters);
    int32_t valA4 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5bdc48, valA4, sub_45f920);
    int32_t valA5 = Level_CheckQTaskID_3();
    int32_t v_8_2 = valA5;
    valA5 = g_5bdc48;
    QTask_RemoveEventCallback(valA5, v_8_2, sub_45f920);
    int32_t valA6 = FX_TrailUpdate_12();
    return QTask_RemoveEventCallback(g_5bdc48, valA6, sub_465b80);
}
