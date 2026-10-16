#include "0051EB40-FlatSky_Update.h"
/* 0x0051eb40 FlatSky_Update full linked: callers=0 callees=3 */
int32_t sub_51eb40(void* a1)

{
    int32_t ecx_1 = Display_SetBackgroundColourFn(*(a1 + 0x78) * 255f, *(a1 + 0x7c) * 255f,
        *(a1 + 0x80) * 255f);

    if (*(a1 + 0xc8))
    {
        *(a1 + 0xb0) = *(a1 + 0xbc);
        *(a1 + 0xb4) = *(a1 + 0xc0);
        *(a1 + 0xb8) = *(a1 + 0xc4);
        *(a1 + 0x98) = *(a1 + 0xa4);
        *(a1 + 0x9c) = *(a1 + 0xa8);
        ecx_1 = *(a1 + 0xac);
        *(a1 + 0xa0) = ecx_1;
    }

    int32_t var_10_1 = ecx_1;
    sub_52d350(*(a1 + 0x84), *(a1 + 0x88) * 3.14159274f * 0.00555555569f);
    return sub_52d2b0(*(a1 + 0x84), a1 + 0x8c, a1 + 0xa4, a1 + 0x98, a1 + 0xbc,
        a1 + 0xb0);
}
