#include "00497620-Display_ClearSurfaces_13.h"
/* 0x00497620 Display_ClearSurfaces_13 full linked: callers=6 callees=2 */
int32_t* sub_497620(int32_t* a1, int32_t a2)

{
    int32_t edx_1 = g_684110 + 1;
    memcpy(0xbcaba0, a1, 0x4c);
    g_684110 = edx_1;

    if (!a2)
        return a1;

    a1[1] = 0;
    *a1 = 0;
    return sub_4af8f0(&g_684100, a1);
}
