#include "0041AEA0-TextBox_Setup.h"
/* 0x0041aea0 TextBox_Setup full linked: callers=0 callees=7 */
int32_t TextBox_Setup(int32_t a1)

{
    int32_t esi = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(esi + 0x44)) - 8) * 0.125f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;

    a1 = *(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    if (*(esi + 0x21a0))
    {
        void* edx_1 = *(esi + 0x98);

        if (edx_1)
        {
            int32_t* ecx_3 = *(esi + 0x94);

            if (ecx_3)
            {
                char* eax_8 = *(esi + *(esi + 0x219c) * 0x108 + 0x1a0);

                if (eax_8)
                {
                    int32_t var_24_1 = *(esi + 0x2c) - 8;
                    int32_t var_2c_1 = 0x3f800000;
                    Menu_LeaveMenus_7((g_c28b44 >> 1) + *(esi + 0x20) - 0x13c,
                        (g_c28b48 >> 1) + *(esi + 0x24) - 0xec, *(esi + 0x28) - 8, eax_8, edx_1,
                        ecx_3, a1);
                }
            }
        }
    }

    Menu_DrawWidget_14(esi, 0.5f, a1, 0);
    return (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);
}
