#include "00475AC0-Mine_Init.h"
/* 0x00475ac0 Mine_Init full linked: callers=1 callees=21 */
void* sub_475ac0()

{
    int32_t var_254 = 0;
    int16_t eax_1 = TaskType_Register("Mine", 0x250, sub_481340(), 0);
    g_5be3a0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_475c10);
    QTask_TriggerEvent(g_5be3a0, 1, sub_475cc0);
    QTask_TriggerEvent(g_5be3a0, 2, sub_475d30);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_5be3a0, eax_3, sub_475d80);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_258_1 = eax_4;
    eax_4 = g_5be3a0;
    QTask_RemoveEventCallback(eax_4, var_258_1, sub_475d90);
    int32_t eax_5 = Level_LoadLevel_2();
    QTask_RemoveEventCallback(g_5be3a0, eax_5, sub_475df0);
    int32_t eax_6 = sub_467d90();
    QTask_RemoveEventCallback(g_5be3a0, eax_6, sub_475f30);
    g_5be3a8 = sub_4c1800(0x40);
    g_5be39c = sub_4f1980(sub_481350(), 2);
    int32_t eax_10 = sub_4f0f50();
    void var_250;
    void var_c;
    sub_4f1a80(g_5be39c, &var_250, &var_c, eax_10, 7, 0);
    int32_t eax_11 = sub_4f0f50();
    void var_10;
    sub_4f1a80(g_5be39c, &var_250, &var_10, eax_11, 7, 0);
    return TaskType_Set("TASKTYPE_MINE", *g_5be3a0);
}
