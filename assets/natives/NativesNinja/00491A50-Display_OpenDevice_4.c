#include "00491A50-Display_OpenDevice_4.h"
/* 0x00491a50 Display_OpenDevice_4 full linked: callers=4 callees=2 */
int32_t sub_491a50(int32_t a1)

{
    char result = g_5ca02d;

    if (result)
    {
        result = (*((sub_491e20() << 2) + &g_a94e84))(a1);
        g_c28b58 = 0xffffffff;
        sub_4b0f70();
        g_5ca02d = 0;
    }

    return result;
}
