#include "0046BA60-Computer_Init.h"
/* 0x0046ba60 Computer_Init full linked: callers=1 callees=11 */
int32_t sub_46ba60()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("Computer", 0x198, sub_4c48c0(), 0);
    g_5be2c4 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_46bb10);
    QTask_TriggerEvent(g_5be2c4, 1, sub_46bd50);
    QTask_TriggerEvent(g_5be2c4, 2, sub_46bf80);
    int32_t eax_3 = Level_StartMission_2();
    QTask_RemoveEventCallback(g_5be2c4, eax_3, sub_45f920);
    int32_t eax_4 = Level_LoadObjects_4();
    int32_t var_8_1 = eax_4;
    eax_4 = g_5be2c4;
    QTask_RemoveEventCallback(eax_4, var_8_1, sub_45f920);
    int32_t eax_5 = Level_CheckQTaskID_3();
    return QTask_RemoveEventCallback(g_5be2c4, eax_5, sub_45f920);
}
