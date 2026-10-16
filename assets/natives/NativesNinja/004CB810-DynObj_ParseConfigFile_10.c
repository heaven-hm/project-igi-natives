#include "004CB810-DynObj_ParseConfigFile_10.h"
/* 0x004cb810 DynObj_ParseConfigFile_10 full linked: callers=1 callees=3 */
int32_t sub_4cb810(float a1, double* a2)

{
    double* esi;

    if (g_b97d20)
        esi = a2;
    else
    {
        sub_4c5810();
        esi = a2;
        sub_4ce390(a1, 0xd, 0, esi, 0x20000000);
    }

    int32_t var_10 = 0;
    int32_t eax_1 = g_b97df8 - 1;
    int32_t var_14 = eax_1;

    if (eax_1 >= 0)
    {
        int32_t* var_18_1 = (eax_1 << 2) + &g_b97da0;

        while (true)
        {
            int32_t edx_2 = *var_18_1;
            char ebp_1 = *(edx_2 * 0x30 + 0xba508c);
            int32_t edi_1 = *(edx_2 * 0x30 + 0xba50a8);
            long double x87_r7_3 = (*esi - *(edx_2 * 0x30 + 0xba5098)) * *(edx_2 * 0x30 + 0xba5090);
            a1 = (esi[1] - *(edx_2 * 0x30 + 0xba50a0)) * *(edx_2 * 0x30 + 0xba5090);
            int32_t var_8_1 = x87_r7_3;
            uint32_t esi_1 = a1;
            long double x87_r7_4 = x87_r7_3 - var_8_1;
            uint32_t edi_2 = edi_1 + (esi_1 << (ebp_1 & 0x1f));
            long double x87_r6_7 = a1 - esi_1;
            a1 = *((var_8_1 >> 3) + edi_2) >> (var_8_1 & 7) & 1;
            int32_t edi_4 = (var_8_1 + 1) >> 3;
            long double x87_r5_1 = a1;
            char ecx_2 = (var_8_1 + 1) & 7;
            a1 = ecx_2;
            int32_t esi_4 = ((esi_1 + 1) << (ebp_1 & 0x1f)) + edi_1;
            uint32_t var_8_2 = *(edi_4 + esi_4) >> (a1 & 0x1f) & 1;
            a1 = *((var_8_1 >> 3) + esi_4) >> (var_8_1 & 7) & 1;
            long double x87_r5_2 =
                x87_r5_1 + ((*(edi_4 + edi_2) >> (ecx_2 & 0x1f) & 1) - x87_r5_1) * x87_r7_4;
            long double x87_r4_10 =
                ((var_8_2 - a1) * x87_r7_4 + a1 - x87_r5_2) * x87_r6_7 + x87_r5_2;
            long double temp0_1 = 0.300000012f;
            x87_r4_10 - temp0_1;
            bool c1;

            if (!(*(&((x87_r4_10 < temp0_1 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
                | (FCMP_UO(x87_r4_10, temp0_1) ? 1 : 0) << 0xa
                | (x87_r4_10 == temp0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                int32_t ecx_6 = 0;
                ecx_6 = *(edx_2 * 0x30 + 0xba5080);
                var_10 = ecx_6;
                break;
            }

            bool cond:4_1 = var_14 - 1 >= 0;
            var_14 -= 1;
            var_18_1 -= 4;

            if (!cond:4_1)
                break;

            esi = a2;
        }
    }

    if (!g_b97d20)
        sub_4c5810();

    int32_t result = 0;
    result = *(var_10 * 0x384 + &g_c28fe0);
    return result;
}
