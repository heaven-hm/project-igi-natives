#include "00495620-Display_SetGammaRamp_8.h"
/* 0x00495620 Display_SetGammaRamp_8 full linked: callers=4 callees=0 */
int32_t* sub_495620(int32_t* a1, int32_t* a2)

{
    int32_t edx = *a2;
    a1[1] = 0;
    *a1 = edx;
    void* edx_1 = *a2;

    if (edx_1)
        *(edx_1 + 4) = a1;

    *a2 = a1;
    return a1;
}
