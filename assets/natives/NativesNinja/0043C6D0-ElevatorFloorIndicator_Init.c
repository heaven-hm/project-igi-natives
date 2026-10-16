#include "0043C6D0-ElevatorFloorIndicator_Init.h"
/* 0x0043c6d0 ElevatorFloorIndicator_Init full linked: callers=1 callees=30 */
int32_t* ElevatorFloorIndicator_Init()

{
    int32_t var_24c = 0;
    int16_t eax_1 = TaskType_Register("ElevatorFloorIndicator", 0x248, sub_4c48c0(), 0);
    g_57bf84 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, ElevatorFloorIndicator_LoadParameters);
    QTask_TriggerEvent(g_57bf84, 1, ElevatorFloorIndicator_Setup);
    QTask_TriggerEvent(g_57bf84, 2, ElevatorFloorIndicator_Process);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57bf84, eax_3, sub_43cb60);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_250_1 = eax_4;
    eax_4 = g_57bf84;
    QTask_RemoveEventCallback(eax_4, var_250_1, ElevatorFloorIndicator_Update);
    int32_t eax_5 = Level_LoadLevel_3();
    QTask_RemoveEventCallback(g_57bf84, eax_5, sub_4d3710);
    int32_t eax_6 = sub_4c5800();
    QTask_RemoveEventCallback(g_57bf84, eax_6, ElevatorFloorIndicator_Action);
    int32_t eax_7 = sub_47e6f0();
    int32_t var_250_4 = eax_7;
    eax_7 = g_57bf84;
    QTask_RemoveEventCallback(eax_7, var_250_4, 0);
    g_57bf88 = sub_4f1950(7);
    int32_t eax_9 = sub_4f1010();
    void var_248;
    void var_158;
    sub_4f1a80(g_57bf88, &var_248, &var_158, eax_9, 7, 0);
    int32_t eax_11 = sub_4f0f70();
    void var_140;
    sub_4f1a80(g_57bf88, &var_248, &var_140, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0fd0();
    void var_d8;
    sub_4f1a80(g_57bf88, &var_248, &var_d8, eax_13, 7, 0);
    int32_t eax_15 = sub_4f0fd0();
    void var_c8;
    sub_4f1a80(g_57bf88, &var_248, &var_c8, eax_15, 7, 0);
    int32_t eax_17 = sub_4f0fd0();
    void var_b8;
    sub_4f1a80(g_57bf88, &var_248, &var_b8, eax_17, 7, 0);
    int32_t eax_19 = sub_4f0fc0();
    void var_a4;
    sub_4f1a80(g_57bf88, &var_248, &var_a4, eax_19, 7, 0);
    int32_t eax_21 = sub_4f0fc0();
    void var_54;
    return sub_4f1a80(g_57bf88, &var_248, &var_54, eax_21, 7, 0);
}
