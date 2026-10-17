// Original IGI.EXE function: HumanView_Init (VA 0x00464260; static CFG gate PASS, CFG score 1.000).
#include "HumanView_Init.h"
int32_t HumanView_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("HumanView", 0x328, Render_DrawRigidMesh_12(), 0);
    g_5bdc40 = data_1;
    QTask_RemoveEventCallback(data_1, 0, sub_4643a0);
    QTask_TriggerEvent(g_5bdc40, 1, sub_488700);
    QTask_TriggerEvent(g_5bdc40, 2, HumanView_LoadParameters);
    QTask_RemoveEventCallback(g_5bdc40, 4, HumanView_Setup);
    int32_t data_3 = DynObj_LinkDynamicCube_12();
    int32_t item_8 = data_3;
    data_3 = g_5bdc40;
    QTask_RemoveEventCallback(data_3, item_8, HumanView_Process);
    int32_t data_4 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_5bdc40, data_4, sub_4645b0);
    QTask_RemoveEventCallback(g_5bdc40, 7, 0);
    int32_t data_5 = Level_StartMission_2();
    int32_t item_8_2 = data_5;
    data_5 = g_5bdc40;
    QTask_RemoveEventCallback(data_5, item_8_2, sub_45f920);
    int32_t data_6 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5bdc40, data_6, sub_45f920);
    int32_t data_7 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5bdc40, data_7, sub_45f920);
    int32_t data_8 = FX_TrailUpdate_12();
    int32_t item_8_5 = data_8;
    data_8 = g_5bdc40;
    QTask_RemoveEventCallback(data_8, item_8_5, sub_465b80);
    int32_t data_9 = SoundSys_SetFrequency_5();
    return QTask_RemoveEventCallback(g_5bdc40, data_9, sub_4645d0);
}
