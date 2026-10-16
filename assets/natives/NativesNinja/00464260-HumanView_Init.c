#include "00464260-HumanView_Init.h"
/* 0x00464260 HumanView_Init full linked: callers=1 callees=21 */
int32_t sub_464260()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("HumanView", 0x328, sub_4d9610(), 0);
    g_5bdc40 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_4643a0);
    QTask_TriggerEvent(g_5bdc40, 1, sub_488700);
    QTask_TriggerEvent(g_5bdc40, 2, sub_464470);
    QTask_RemoveEventCallback(g_5bdc40, 4, sub_4644a0);
    int32_t eax_3 = sub_4cea20();
    int32_t var_8 = eax_3;
    eax_3 = g_5bdc40;
    QTask_RemoveEventCallback(eax_3, var_8, sub_464580);
    int32_t eax_4 = sub_4cea10();
    QTask_RemoveEventCallback(g_5bdc40, eax_4, sub_4645b0);
    QTask_RemoveEventCallback(g_5bdc40, 7, 0);
    int32_t eax_5 = Level_StartMission_2();
    int32_t var_8_2 = eax_5;
    eax_5 = g_5bdc40;
    QTask_RemoveEventCallback(eax_5, var_8_2, sub_45f920);
    int32_t eax_6 = Level_LoadObjects_4();
    QTask_RemoveEventCallback(g_5bdc40, eax_6, sub_45f920);
    int32_t eax_7 = Level_CheckQTaskID_3();
    QTask_RemoveEventCallback(g_5bdc40, eax_7, sub_45f920);
    int32_t eax_8 = sub_489610();
    int32_t var_8_5 = eax_8;
    eax_8 = g_5bdc40;
    QTask_RemoveEventCallback(eax_8, var_8_5, sub_465b80);
    int32_t eax_9 = sub_4e6610();
    return QTask_RemoveEventCallback(g_5bdc40, eax_9, sub_4645d0);
}
