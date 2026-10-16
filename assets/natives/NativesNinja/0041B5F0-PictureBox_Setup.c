#include "0041B5F0-PictureBox_Setup.h"
/* 0x0041b5f0 PictureBox_Setup full linked: callers=0 callees=7 */
int32_t PictureBox_Setup(int32_t a1)

{
    int32_t esi = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(esi + 0x44)) - 8) * 0.125f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;

    a1 = *(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);
    int32_t ebp = a1;

    if (*(esi + 0x958))
    {
        int32_t* ebx_1 = *(esi + *(esi + 0x954) * 0x48 + 0x98);

        if (ebx_1)
        {
            int32_t edi_3 = (g_c28b44 >> 1) + *(esi + 0x20) - 0x13e;
            int32_t eax_12 = (g_c28b48 >> 1) + *(esi + 0x24) - 0xee;
            a1 = *(esi + 0x2c) + eax_12 - 4;
            float var_c_2 = *(esi + 0x28) + edi_3 - 4;
            float var_8_2 = edi_3;
            float var_4_2 = eax_12;
            Qsprite_Register4Az(ebx_1, var_8_2, var_4_2, var_c_2, var_4_2, var_8_2, a1, var_c_2,
                a1, 128f, 128f, 128f, 0x3f800000, ebp, 0, 0x80000, 0);
        }
    }

    return Menu_DrawWidget_14(esi, 0.5f, ebp, 0);
}
