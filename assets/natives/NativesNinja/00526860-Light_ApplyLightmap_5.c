#include "00526860-Light_ApplyLightmap_5.h"
/* 0x00526860 Light_ApplyLightmap_5 full linked: callers=1 callees=10 */
uint32_t sub_526860()

{
    sub_521040();
    sub_4b0d10(g_a83b28);
    g_a83b28 = 0;
    sub_4975f0(0xa83980);
    QTask_InitContext(g_a83b44);
    QTask_InitContext(g_a8397c);
    QTask_InitContext(g_a83a18);
    sub_4b0b70(&g_a83cf8);
    sub_4b0b70(&g_a83a00);
    sub_4c1830(g_a83b3c);
    return QTask_CloseEvent_2(g_54f040);
}
