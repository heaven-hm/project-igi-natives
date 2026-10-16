#include "00436B10-EnvironmentSound_Init.h"
/* 0x00436b10 EnvironmentSound_Init full linked: callers=1 callees=20 */
int32_t* EnvironmentSound_Init()

{
    int32_t var_60 = 0;
    int16_t eax_1 = TaskType_Register("EnvironmentSound", 0x5c, QTask_OpenEvent_2(), 0);
    g_57bdb0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_436c60);
    QTask_TriggerEvent(g_57bdb0, 1, EnvironmentSound_LoadParameters);
    QTask_TriggerEvent(g_57bdb0, 2, sub_4d3710);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_57bdb0, eax_3, sub_4374c0);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_64_1 = eax_4;
    eax_4 = g_57bdb0;
    QTask_RemoveEventCallback(eax_4, var_64_1, sub_4374d0);
    g_57bda8 = sub_4f1950(5);
    int32_t eax_6 = sub_4f1000();
    void var_5c;
    void var_3c;
    sub_4f1a80(g_57bda8, &var_5c, &var_3c, eax_6, 7, 0);
    int32_t eax_8 = sub_4f1000();
    void var_3b;
    sub_4f1a80(g_57bda8, &var_5c, &var_3b, eax_8, 7, 0);
    int32_t eax_10 = sub_4f1000();
    void var_3a;
    sub_4f1a80(g_57bda8, &var_5c, &var_3a, eax_10, 7, 0);
    int32_t eax_12 = sub_4f1000();
    void var_39;
    sub_4f1a80(g_57bda8, &var_5c, &var_39, eax_12, 7, 0);
    int32_t eax_14 = sub_4f0fd0();
    void var_38;
    return sub_4f1a80(g_57bda8, &var_5c, &var_38, eax_14, 7, 0);
}
