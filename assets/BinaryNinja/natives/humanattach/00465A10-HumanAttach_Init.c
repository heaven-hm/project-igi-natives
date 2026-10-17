// Original IGI.EXE function: HumanAttach_Init (VA 0x00465A10; static CFG gate PASS, CFG score 1.000).
#include "HumanAttach_Init.h"
int32_t HumanAttach_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("HumanAttach", 0x140, EditRigidObjAttachedToBone_OnEvent(), 0);
    g_5bdc48 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_465ac0);
    QTask_TriggerEvent(g_5bdc48, 1, sub_465ae0);
    int32_t data_3 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_5bdc48, data_3, HumanAttach_LoadParameters);
    int32_t data_4 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5bdc48, data_4, sub_45f920);
    int32_t data_5 = Level_CheckQTaskID_3();
    int32_t item_8_2 = data_5;
    data_5 = g_5bdc48;
    QTask_RemoveEventCallback(data_5, item_8_2, sub_45f920);
    int32_t data_6 = FX_TrailUpdate_12();
    return QTask_RemoveEventCallback(g_5bdc48, data_6, sub_465b80);
}
