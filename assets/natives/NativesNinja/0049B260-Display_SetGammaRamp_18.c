#include "0049B260-Display_SetGammaRamp_18.h"
/* 0x0049b260 Display_SetGammaRamp_18 full linked: callers=1 callees=6 */
int32_t sub_49b260()

{
    sub_4b7450(g_bcade8, g_72057c);
    sub_4b7450(g_bcad7c, g_7205a4);
    int32_t edx_1 = g_bcadac;
    sub_4b7450(edx_1, g_7205a8);
    sub_4b7450(g_bcadc4, g_7205a0);
    edx_1 = g_543c64;
    QTask_CloseEvent_2(edx_1);
    return sub_4978e0(g_c311bc);
}
