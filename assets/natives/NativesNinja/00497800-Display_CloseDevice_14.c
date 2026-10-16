#include "00497800-Display_CloseDevice_14.h"
/* 0x00497800 Display_CloseDevice_14 full linked: callers=12 callees=0 */
int32_t sub_497800(int32_t a1)

{
    int32_t result = g_6e5b98;
    int32_t ecx = result + a1;
    int32_t edx_1 = g_6e5ba0;
    g_6e5b98 = ecx;

    if (ecx - 0x684118 > edx_1)
        g_6e5ba0 = ecx - 0x684118;

    return result;
}
