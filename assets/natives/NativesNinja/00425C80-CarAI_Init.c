#include "00425C80-CarAI_Init.h"
/* 0x00425c80 CarAI_Init full linked: callers=1 callees=16 */
int32_t* CarAI_Init()

{
    int32_t var_88 = 0;
    int16_t eax_1 = TaskType_Register("CarAI", 0x84, QTask_OpenEvent_2(), 0);
    g_53ba50 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_425d90);
    QTask_TriggerEvent(g_53ba50, 1, CarAI_Run);
    QTask_TriggerEvent(g_53ba50, 2, sub_4d3710);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53ba50, eax_3, sub_426590);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_8c_1 = eax_4;
    eax_4 = g_53ba50;
    QTask_RemoveEventCallback(eax_4, var_8c_1, CarAI_Process);
    g_57bc74 = sub_4f1950(3);
    int32_t eax_6 = sub_4f0fa0();
    void var_84;
    void var_5c;
    sub_4f1a80(g_57bc74, &var_84, &var_5c, eax_6, 7, 0);
    int32_t eax_8 = sub_4f0fa0();
    void var_64;
    sub_4f1a80(g_57bc74, &var_84, &var_64, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0fa0();
    void var_60;
    return sub_4f1a80(g_57bc74, &var_84, &var_60, eax_10, 7, 0);
}
