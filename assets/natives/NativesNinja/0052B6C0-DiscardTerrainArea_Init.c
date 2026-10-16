#include "0052B6C0-DiscardTerrainArea_Init.h"
/* 0x0052b6c0 DiscardTerrainArea_Init full linked: callers=1 callees=18 */
int32_t* sub_52b6c0()

{
    int32_t var_7c = 0;
    int16_t eax_1 = TaskType_Register("DiscardTerrainArea", 0x78, sub_4c48c0(), 0);
    g_a84540 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_52b7f0);
    QTask_RemoveEventCallback(g_a84540, 7, sub_52be70);
    QTask_TriggerEvent(g_a84540, 2, sub_4d3710);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_a84540, eax_3, sub_52be60);
    int32_t eax_4 = sub_4f1a70();
    int32_t var_80_1 = eax_4;
    eax_4 = g_a84540;
    QTask_RemoveEventCallback(eax_4, var_80_1, sub_52b840);
    g_a84544 = sub_4f1950(4);
    int32_t eax_6 = sub_4f1010();
    void var_78;
    void var_58;
    sub_4f1a80(g_a84544, &var_78, &var_58, eax_6, 7, 0);
    int32_t eax_8 = sub_4f0fa0();
    void var_10;
    sub_4f1a80(g_a84544, &var_78, &var_10, eax_8, 7, 0);
    int32_t eax_10 = sub_4f0fa0();
    void var_c;
    sub_4f1a80(g_a84544, &var_78, &var_c, eax_10, 7, 0);
    int32_t eax_12 = sub_4f1000();
    void var_8;
    return sub_4f1a80(g_a84544, &var_78, &var_8, eax_12, 7, 0);
}
