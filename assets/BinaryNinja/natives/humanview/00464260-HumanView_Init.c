#include "HumanView_Init.h"
int32_t HumanView_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("HumanView", 0x328, Render_DrawRigidMesh_12(), 0);
    g_5bdc40 = valA1;
    QTask_RemoveEventCallback(valA1, 0, sub_4643a0);
    QTask_TriggerEvent(g_5bdc40, 1, sub_488700);
    QTask_TriggerEvent(g_5bdc40, 2, HumanView_LoadParameters);
    QTask_RemoveEventCallback(g_5bdc40, 4, HumanView_Setup);
    int32_t valA3 = DynObj_LinkDynamicCube_12();
    int32_t v_8 = valA3;
    valA3 = g_5bdc40;
    QTask_RemoveEventCallback(valA3, v_8, HumanView_Process);
    int32_t valA4 = DynObj_UpdateDynTree_12();
    QTask_RemoveEventCallback(g_5bdc40, valA4, sub_4645b0);
    QTask_RemoveEventCallback(g_5bdc40, 7, 0);
    int32_t valA5 = Level_StartMission_2();
    int32_t v_8_2 = valA5;
    valA5 = g_5bdc40;
    QTask_RemoveEventCallback(valA5, v_8_2, sub_45f920);
    int32_t valA6 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5bdc40, valA6, sub_45f920);
    int32_t valA7 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5bdc40, valA7, sub_45f920);
    int32_t valA8 = FX_TrailUpdate_12();
    int32_t v_8_5 = valA8;
    valA8 = g_5bdc40;
    QTask_RemoveEventCallback(valA8, v_8_5, sub_465b80);
    int32_t valA9 = SoundSys_SetFrequency_5();
    return QTask_RemoveEventCallback(g_5bdc40, valA9, sub_4645d0);
}
