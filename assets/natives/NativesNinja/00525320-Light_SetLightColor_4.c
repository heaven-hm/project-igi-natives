#include "00525320-Light_SetLightColor_4.h"
/* 0x00525320 Light_SetLightColor_4 full linked: callers=2 callees=5 */
int32_t sub_525320(int32_t* a1)

{
    Qhash_Init(1);
    sub_4b2610(1);
    int16_t ecx_1 = a1[0xa];
    sub_4b2320(a1, 0, ecx_1 << 2, ecx_1, *(a1 + 0x2a), 3, 0, 0xa808003c);
    sub_4b2610(0xffffffff);
    /* tailcall */
    return Qhash_Reset();
}
