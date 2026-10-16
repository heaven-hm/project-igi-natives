#include "00497700-Display_SetGammaRamp_13.h"
/* 0x00497700 Display_SetGammaRamp_13 full linked: callers=3 callees=9 */
void sub_497700()

{
    sub_497ed0();
    int32_t* i_1 = g_684100;

    for (int32_t* i = *i_1; i; i = *i)
    {
        memcpy(0xbcaba0, i_1, 0x4c);
        int32_t eax_1 = i_1[2];

        if (eax_1 != 0xffffffff)
            sub_4b0fd0(eax_1);

        sub_497860(&i_1[3]);
        sub_497830(i_1[0x11] + i_1[0x10] * 0xc - 0xc);
        sub_497880(i_1[0x11], i_1[0x10]);

        if (i_1[2] != 0xffffffff)
            sub_4b0f90();

        i_1 = i;
    }

    g_684100 = &g_684104;
    g_684108 = &g_684100;
    g_684104 = 0;
    sub_497ed0();
}
