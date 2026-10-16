#include "0051ECB0-MipMapControl_Init.h"
/* 0x0051ecb0 MipMapControl_Init full linked: callers=1 callees=19 */
int32_t* sub_51ecb0()

{
    int32_t var_34 = 0;
    int16_t eax_1 = TaskType_Register("MipMapControl", 0x30, QTask_OpenEvent_2(), 0);
    g_54eee0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 0, sub_51ee80);
    int32_t eax_2 = sub_4f1a70();
    int32_t var_38 = eax_2;
    eax_2 = g_54eee0;
    QTask_RemoveEventCallback(eax_2, var_38, sub_51ee10);
    int32_t eax_3 = sub_4f1a60();
    QTask_RemoveEventCallback(g_54eee0, eax_3, sub_51eeb0);
    g_a83790 = sub_4f1950(4);
    int32_t eax_5 = sub_4f1000();
    void var_30;
    void var_4;
    sub_4f1a80(g_a83790, &var_30, &var_4, eax_5, 7, 0);
    g_a8378c = 2;
    g_a83788 = 0;
    TaskType_Set("GR_MIPMAP_DISABLE", 0);
    TaskType_Set("GR_MIPMAP_NEAREST", 1);
    TaskType_Set("GR_MIPMAP_NEAREST_DITHER", 2);
    int32_t eax_6 = sub_4f0fa0();
    void var_8;
    sub_4f1a80(g_a83790, &var_30, &var_8, eax_6, 7, &g_a83788);
    g_a8379c = 0x40f80000;
    g_a83798 = 0xc1000000;
    int32_t eax_7 = sub_4f0f50();
    void var_10;
    sub_4f1a80(g_a83790, &var_30, &var_10, eax_7, 7, &g_a83798);
    int32_t eax_8 = sub_4f0f50();
    void var_c;
    return sub_4f1a80(g_a83790, &var_30, &var_c, eax_8, 7, &g_a83798);
}
