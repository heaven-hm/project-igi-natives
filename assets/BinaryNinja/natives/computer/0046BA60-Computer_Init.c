// Original IGI.EXE function: Computer_Init (VA 0x0046BA60; static CFG gate PASS, CFG score 1.000).
#include "Computer_Init.h"
int32_t Computer_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("Computer", 0x198, DynObj_LookupHashItem_5(), 0);
    g_5be2c4 = valA1;
    QTask_RemoveEventCallback(valA1, 0, Computer_LoadParameters);
    QTask_TriggerEvent(g_5be2c4, 1, Computer_Setup);
    QTask_TriggerEvent(g_5be2c4, 2, Computer_Process);
    int32_t valA3 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5be2c4, valA3, sub_45f920);
    int32_t valA4 = Level_LoadObjects_4();
    int32_t v_8_1 = valA4;
    valA4 = g_5be2c4;
    QTask_RemoveEventCallback(valA4, v_8_1, sub_45f920);
    int32_t valA5 = Level_CheckQTaskID_3();
    return QTask_RemoveEventCallback(g_5be2c4, valA5, sub_45f920);
}
