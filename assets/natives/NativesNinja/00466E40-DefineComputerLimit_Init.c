#include "00466E40-DefineComputerLimit_Init.h"
/* 0x00466e40 DefineComputerLimit_Init full linked: callers=1 callees=13 */
int32_t* sub_466e40()

{
    int32_t var_44 = 0;
    int16_t eax_1 = TaskType_Register("DefineComputerLimit", 0x40, sub_4c48c0(), 0);
    g_5bdc60 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_466f10);
    QTask_TriggerEvent(g_5bdc60, 2, sub_466f20);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5bdc60, eax_3, sub_466f30);
    int32_t eax_4 = sub_4f1a70();
    QTask_RemoveEventCallback(g_5bdc60, eax_4, sub_4d3710);
    g_5bdc5c = sub_4f1950(2);
    int32_t eax_6 = sub_4f1010();
    void var_40;
    void var_20;
    sub_4f1a80(g_5bdc5c, &var_40, &var_20, eax_6, 7, 0);
    int32_t eax_7 = sub_4f0f50();
    void var_8;
    return sub_4f1a80(g_5bdc5c, &var_40, &var_8, eax_7, 7, 0);
}
