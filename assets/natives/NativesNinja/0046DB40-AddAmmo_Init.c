#include "0046DB40-AddAmmo_Init.h"
/* 0x0046db40 AddAmmo_Init full linked: callers=1 callees=15 */
int32_t* sub_46db40()

{
    int32_t var_4c = 0;
    int16_t eax_1 = TaskType_Register("AddAmmo", 0x48, QTask_OpenEvent_2(), 0);
    g_5be30c = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_46dc20);
    QTask_TriggerEvent(g_5be30c, 1, sub_46dc40);
    QTask_TriggerEvent(g_5be30c, 2, sub_4d3710);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5be30c, eax_3, sub_46dca0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_50_1 = eax_4;
    eax_4 = g_5be30c;
    QTask_RemoveEventCallback(eax_4, var_50_1, sub_46dcb0);
    g_5be310 = sub_4f1950(2);
    int32_t eax_6 = sub_4f1e20();
    void var_48;
    void var_24;
    sub_4f1a80(g_5be310, &var_48, &var_24, eax_6, 7, 0x5c10f0);
    int32_t eax_8 = sub_4f0fb0();
    void var_4;
    return sub_4f1a80(g_5be310, &var_48, &var_4, eax_8, 7, 0);
}
