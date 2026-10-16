#include "0044C130-AmbientArea_Init.h"
/* 0x0044c130 AmbientArea_Init full linked: callers=1 callees=23 */
int32_t* sub_44c130()

{
    g_57c73c = sub_4ceba0("johan");
    int32_t var_214 = 0;
    int16_t eax_2 = TaskType_Register("AmbientArea", 0x210, sub_5034d0(), 0);
    g_57c734 = eax_2;
    QTask_RemoveEventCallback(eax_2, 0, sub_44c2c0);
    QTask_TriggerEvent(g_57c734, 1, sub_44c370);
    QTask_TriggerEvent(g_57c734, 2, sub_44c700);
    int32_t eax_4 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57c734, eax_4, sub_44c730);
    int32_t eax_5 = sub_4f1a70();
    int32_t var_218_1 = eax_5;
    eax_5 = g_57c734;
    QTask_RemoveEventCallback(eax_5, var_218_1, sub_44c740);
    g_57c738 = sub_4f1950(6);
    int32_t eax_7 = sub_4f1010();
    void var_210;
    void var_1f0;
    sub_4f1a80(g_57c738, &var_210, &var_1f0, eax_7, 7, 0);
    int32_t eax_9 = sub_4f0f70();
    void var_1c0;
    sub_4f1a80(g_57c738, &var_210, &var_1c0, eax_9, 7, 0);
    int32_t eax_11 = sub_4f0f90();
    void var_1d8;
    sub_4f1a80(g_57c738, &var_210, &var_1d8, eax_11, 7, 0);
    int32_t eax_13 = sub_4f0f80();
    void var_190;
    sub_4f1a80(g_57c738, &var_210, &var_190, eax_13, 7, 0);
    int32_t eax_15 = sub_4f0f80();
    void var_188;
    sub_4f1a80(g_57c738, &var_210, &var_188, eax_15, 7, 0);
    int32_t eax_17 = sub_4f0ff0();
    void var_17c;
    return sub_4f1a80(g_57c738, &var_210, &var_17c, eax_17, 7, 0);
}
