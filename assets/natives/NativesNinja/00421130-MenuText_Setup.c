#include "00421130-MenuText_Setup.h"
/* 0x00421130 MenuText_Setup full linked: callers=0 callees=9 */
int32_t MenuText_Setup(int32_t a1)

{
    int32_t esi = a1;
    void* edi = *(esi + 0x114);
    int32_t eax_1 = Menu_FormatScreen_4(*(esi + 0x44));
    long double x87_r7_1 = (eax_1 - 8) * 0.125f;
    long double temp0 = 0f;
    x87_r7_1 - temp0;

    a1 = *(&((x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    int32_t result = (*(((Menu_PlayMusic_13() + sub_4e7530() * 0x180) << 2) + &g_a96ae0))(esi);

    if (edi)
    {
        int32_t result_1;

        if (eax_1 == 0x10)
            result_1 = 1;

        if (eax_1 != 0x10 || !*(esi + 0x4d))
            result_1 = 0;

        int32_t eax_9 = (*(esi + 0x118) & 0xf) * 3;
        float* var_c_1;
        float* ebx_1;
        float* ebp_3;
        long double x87_r7_11;

        if (!result_1)
        {
            int32_t eax_12 = eax_9 << 2;
            ebx_1 = eax_12 + 0x53b778;
            ebp_3 = eax_12 + 0x53b77c;
            *(edi + 0x14) = *(eax_12 + 0x53b778);
            *(edi + 0x18) = *ebp_3;
            x87_r7_11 = *(eax_12 + 0x53b780);
            var_c_1 = eax_12 + 0x53b780;
        }
        else
        {
            int32_t eax_10 = eax_9 << 2;
            ebx_1 = eax_10 + 0x53b778;
            ebp_3 = eax_10 + 0x53b77c;
            var_c_1 = eax_10 + 0x53b780;
            *(edi + 0x14) = *(eax_10 + 0x53b778) * 0.5f + 64f;
            *(edi + 0x18) = *ebp_3 * 0.5f + 64f;
            x87_r7_11 = *(eax_10 + 0x53b780) * 0.5f + 64f;
        }

        *(edi + 0x1c) = x87_r7_11;
        long double x87_r7_14 = a1;

        if (*(esi + 0x118) & 0x10)
            x87_r7_14 = x87_r7_14 * 0.5f;

        int32_t edx_2 = *(edi + 0x24);
        *(edi + 0x10) = x87_r7_14;
        *(edi + 0x24) = edx_2 | 0x80000;
        *(*(esi + 0x114) + 4) = (g_c28b44 >> 1) + *(esi + 0x20) - 320f;
        *(*(esi + 0x114) + 8) = (g_c28b48 >> 1) + *(esi + 0x24) - 240f;
        sub_4b6f50(*(esi + 0x114));
        result = result_1;

        if (result)
        {
            float var_10_1 =
                (g_c28b44 >> 1) + *(esi + 0x20) - 0x140 - *(esi + 0x28) * 0.400000006f;
            a1 = *(esi + 0x2c);
            int32_t ecx_5 = (g_c28b48 >> 1) + *(esi + 0x24) - 0xf0;
            int32_t var_30_1 = ecx_5;
            float var_8_2 = ecx_5 - a1 * 0.200000003f;
            float var_4_1 = *(esi + 0x28) * 1.79999995f + var_10_1;
            a1 = a1 * 1.39999998f + var_8_2;
            int32_t var_34_1 = ecx_5;
            int32_t var_38_1 = ecx_5;
            return sub_4b51f0(*(esi + 0x16c), var_10_1, var_8_2, var_4_1, var_8_2, var_10_1, a1,
                var_4_1, a1, *ebx_1 * 0.200000003f, *ebp_3 * 0.200000003f,
                *var_c_1 * 0.200000003f, 0, 8, 0);
        }
    }

    return result;
}
