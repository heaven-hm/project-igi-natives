#include "0045DB70-HumanPlayerInput_Init.h"
/* 0x0045db70 HumanPlayerInput_Init full linked: callers=1 callees=18 */
int32_t* sub_45db70()

{
    int32_t var_1e8 = 0;
    int16_t eax_1 = TaskType_Register("HumanPlayerInput", 0x1e4, QTask_OpenEvent_2(), 0);
    g_5bdac4 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_45dcb0);
    QTask_TriggerEvent(g_5bdac4, 1, sub_45dcf0);
    QTask_TriggerEvent(g_5bdac4, 2, sub_45de20);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5bdac4, eax_3, sub_45df40);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_1ec_1 = eax_4;
    eax_4 = g_5bdac4;
    QTask_RemoveEventCallback(eax_4, var_1ec_1, sub_45df50);
    g_5bdac8 = sub_4f1950(4);
    int32_t eax_6 = sub_4f1000();
    void var_1e4;
    void var_164;
    sub_4f1a80(g_5bdac8, &var_1e4, &var_164, eax_6, 7, 0);
    int32_t eax_8 = sub_4f1000();
    void var_163;
    sub_4f1a80(g_5bdac8, &var_1e4, &var_163, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0ff0();
    void var_162;
    sub_4f1a80(g_5bdac8, &var_1e4, &var_162, eax_10, 7, 0);
    int32_t eax_12 = sub_4f0fc0();
    void var_50;
    return sub_4f1a80(g_5bdac8, &var_1e4, &var_50, eax_12, 7, 0);
}
