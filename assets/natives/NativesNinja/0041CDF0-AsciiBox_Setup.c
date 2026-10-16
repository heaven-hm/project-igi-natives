#include "0041CDF0-AsciiBox_Setup.h"
/* 0x0041cdf0 AsciiBox_Setup full linked: callers=0 callees=10 */
int32_t AsciiBox_Setup(int32_t a1)

{
    int32_t esi = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(esi + 0x44)) - 8) * 0.125f;
    long double temp2 = 0f;
    x87_r7_1 - temp2;

    a1 = *(&((x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    int32_t var_20 = 0;
    Menu_UpdateLanguage_10(*(esi + 0xf4), *(esi + 0x28) + *(esi + 0x20) - 0x13, *(esi + 0x24),
        *(esi + 0x2c), *(esi + 0xe4));
    (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);
    void* edi_3 = *(esi + 0xf4);
    int32_t eax_9 = sub_4e7530();
    int32_t ecx_3 = 0;
    ecx_3 = *(edi_3 + 0x1c);
    (*(((eax_9 * 0x180 + ecx_3) << 2) + &g_a96ae0))(edi_3);

    if (*(esi + 0xd4) && *(esi + 0xdc))
    {
        char* edi_4 = *(esi + 0xe0);
        int32_t temp0_1 = (*(esi + 0x2c) - 4) / *(esi + 0xec);
        *(esi + 0xec);
        int32_t ecx_5 = *(esi + 0xe4) - *(esi + 0xe8);
        int32_t ebx_2 = temp0_1;

        if (temp0_1 >= ecx_5)
            ebx_2 = ecx_5;

        int32_t ecx_6 = (g_c28b44 >> 1) + *(esi + 0x20) - 0x13c;
        int32_t ebp_1 = (g_c28b48 >> 1) + *(esi + 0x24) - 0xec;
        int32_t var_c_1 = ebp_1;

        if (ebx_2 > 0)
        {
            int32_t var_8_2 = ebx_2;
            bool cond:2_1;

            do
            {
                sub_4b6e90(*(esi + 0xd8), edi_4);
                *(*(esi + 0xd8) + 4) = ecx_6;
                *(*(esi + 0xd8) + 8) = var_c_1;
                *(*(esi + 0xd8) + 0x14) = 0x43000000;
                *(*(esi + 0xd8) + 0x18) = 0x43000000;
                *(*(esi + 0xd8) + 0x1c) = 0x43000000;
                void* eax_24 = *(esi + 0xd8);
                *(eax_24 + 0x24) |= 0x80000;
                *(*(esi + 0xd8) + 0x10) = a1;
                sub_4b6f50(*(esi + 0xd8));

                if (*edi_4)
                {
                    char i;

                    do
                    {
                        i = edi_4[1];
                        edi_4 = &edi_4[1];
                    } while (i);
                }

                edi_4 = &edi_4[1];
                ebp_1 += *(esi + 0xec);
                cond:2_1 = var_8_2 != 1;
                var_c_1 = ebp_1;
                var_8_2 -= 1;
            } while (cond:2_1);
        }
    }

    *(esi + 0x28) -= 0x14;
    Menu_DrawWidget_14(esi, 0.5f, a1, 0);
    int32_t result = *(esi + 0x28) + 0x14;
    *(esi + 0x28) = result;
    return result;
}
