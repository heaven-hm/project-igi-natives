#include "00496650-Display_CloseDevice_11.h"
/* 0x00496650 Display_CloseDevice_11 full linked: callers=9 callees=3 */
int32_t sub_496650(int32_t* a1)

{
    char result = g_6840e9;

    if (!result)
        return result;

    int32_t* eax = a1[4];
    (*(*eax + 8))(eax);

    if (a1[2] & 4)
    {
        int32_t* eax_1 = a1[5];
        (*(*eax_1 + 8))(eax_1);
    }

    int32_t* eax_2 = a1[6];

    if (eax_2)
    {
        sub_4b1690(eax_2);
        a1[6] = 0;
    }

    sub_4966b0(a1, &g_6840f4);
    return sub_495620(a1, &g_6840f8);
}
