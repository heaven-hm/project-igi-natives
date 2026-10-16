#include "0043AD80-Radio_Init.h"
/* 0x0043ad80 Radio_Init full linked: callers=1 callees=24 */
int32_t* Radio_Init()

{
    int32_t var_2f8 = 0;
    int16_t eax_1 = TaskType_Register("Radio", 0x2e8, sub_481340(), 0);
    g_53c2e0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_43af20);
    QTask_TriggerEvent(g_53c2e0, 1, Radio_LoadParameters);
    QTask_TriggerEvent(g_53c2e0, 2, sub_43b110);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_53c2e0, eax_3, sub_43b160);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_2fc_1 = eax_4;
    eax_4 = g_53c2e0;
    QTask_RemoveEventCallback(eax_4, var_2fc_1, sub_43b170);
    int32_t eax_5 = sub_4f1210();
    QTask_TriggerEvent(g_53c2e0, eax_5, Radio_Setup);
    int32_t eax_6 = sub_4f1220();
    QTask_TriggerEvent(g_53c2e0, eax_6, Radio_Process);
    int32_t eax_7 = sub_467d90();
    int32_t var_2fc_4 = eax_7;
    eax_7 = g_53c2e0;
    QTask_RemoveEventCallback(eax_7, var_2fc_4, sub_443dc0);
    g_57bef8 = sub_4f1980(sub_481350(), 6);
    int32_t edi = 0;
    void var_54;
    void* ebx = &var_54;
    void var_2e8;

    for (char* i = &g_57befc; i < 0x57bf38; )
    {
        int32_t var_2f8_1 = edi;
        Game_DataSymbolLoad(i, "Radio sound %d");
        int32_t eax_10 = sub_4f0fd0();
        sub_4f1a80(g_57bef8, &var_2e8, ebx, eax_10, 7, 0);
        i = &i[0xf];
        edi += 1;
        ebx += 0x10;
    }

    int32_t eax_11 = sub_4f0fd0();
    void var_14;
    sub_4f1a80(g_57bef8, &var_2e8, &var_14, eax_11, 7, 0);
    int32_t eax_12 = sub_4f0fc0();
    void var_a4;
    return sub_4f1a80(g_57bef8, &var_2e8, &var_a4, eax_12, 7, 0);
}
