#include "PictureBox_Setup.h"
int32_t PictureBox_Setup(int32_t a1)

{
    int32_t srcS = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(srcS + 0x44)) - 8) * 0.125f;
    long double f0 = 0f;
    x87_r7_1 - f0;

    a1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(srcS);
    int32_t flagP = a1;

    if (*(srcS + 0x958))
    {
        int32_t* ctxB1 = *(srcS + *(srcS + 0x954) * 0x48 + 0x98);

        if (ctxB1)
        {
            int32_t dstD3 = (g_c28b44 >> 1) + *(srcS + 0x20) - 0x13e;
            int32_t valA12 = (g_c28b48 >> 1) + *(srcS + 0x24) - 0xee;
            a1 = *(srcS + 0x2c) + valA12 - 4;
            float v_c_2 = *(srcS + 0x28) + dstD3 - 4;
            float v_8_2 = dstD3;
            float v_4_2 = valA12;
            Qsprite_Register4Az(ctxB1, v_8_2, v_4_2, v_c_2, v_4_2, v_8_2, a1, v_c_2,
                a1, 128f, 128f, 128f, 0x3f800000, flagP, 0, 0x80000, 0);
        }
    }

    return Menu_DrawWidget_14(srcS, 0.5f, flagP, 0);
}
