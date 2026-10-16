#include "00491CC0-Display_SetDisplayMode_4.h"
/* 0x00491cc0 Display_SetDisplayMode_4 full linked: callers=2 callees=1 */
int32_t sub_491cc0()

{
    char result = g_5ca02d;

    if (result)
        result = (*((sub_491e40() << 2) + &g_a94e84))(0);

    g_c10380 += 1;
    return result;
}
