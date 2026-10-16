#include "0050FAE0-Physics_ApplyImpulse_14.h"
/* 0x0050fae0 Physics_ApplyImpulse_14 full linked: callers=2 callees=9 */
int32_t* sub_50fae0(void* a1)

{
    int32_t* i_2 = g_b041e8;

    if (i_2)
    {
        long double x87_r7_1 = 0f;
        long double x87_r6_2 = g_a7da20 * 255f;
        long double x87_r5_2 = g_a7da24 * 255f;
        long double x87_r4_2 = g_a7da28 * 255f;
        int32_t* eax_1 = **&g_b041e4 * g_b041f0 + g_b041e0 + 0xc;
        void var_400;
        void* esi_1 = &var_400;
        int32_t i_3 = 0x100;
        float ecx_3 = *eax_1;
        float edx_2 = eax_1[1];
        float eax_2 = eax_1[2];
        int32_t i;

        do
        {
            int32_t eax_3 = ecx_3 * x87_r7_1 + x87_r6_2;
            int32_t edx_3 = edx_2 * x87_r7_1 + x87_r5_2;
            int32_t ecx_4 = eax_2 * x87_r7_1 + x87_r4_2;

            if (eax_3 > 0xff)
                eax_3 = 0xff;

            if (edx_3 > 0xff)
                edx_3 = 0xff;

            if (ecx_4 > 0xff)
                ecx_4 = 0xff;

            esi_1 += 4;
            i = i_3;
            i_3 -= 1;
            *(esi_1 - 4) = (eax_3 << 8 | edx_3) << 8 | ecx_4;
            x87_r7_1 = x87_r7_1 + 1f;
        } while (i != 1);

        if (*(a1 + 0xdf4))
        {
            Qhash_Init(1);
            sub_4b7d30(*(a1 + 0xdf4));
            sub_4b7cf0(*(a1 + 0xdf4), &var_400, 1);
            Qhash_Reset();
        }

        Qhash_Init(1);
        sub_4c6160(a1);
        Qhash_Reset();
        sub_4d2a20();
        int32_t edi_1 = 0;
        float* ebx_1 = &g_c310a0;

        for (int32_t i_1 = 0x19; i_1 > 0xfffffffa; )
        {
            long double x87_r7_5 = (1 << (i_1 & 0x1f)) * g_b16c6c;
            long double x87_r7_10 = (
                sub_499ff0(x87_r7_5 + x87_r7_5 + (0x40000000 >> (edi_1 & 0x1f))) - 130f) * g_a7da18;
            long double x87_r6_4 = 0f;
            x87_r6_4 - x87_r7_10;

            if (*(&((x87_r6_4 < x87_r7_10 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_4, x87_r7_10) ? 1 : 0) << 0xa
                | (x87_r6_4 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_5 = 255f;
                x87_r6_5 - x87_r7_10;

                if (*(&((x87_r6_5 < x87_r7_10 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_5, x87_r7_10) ? 1 : 0) << 0xa
                        | (x87_r6_5 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_10 = 255f;
            }
            else
                x87_r7_10 = 0f;

            *ebx_1 = x87_r7_10;
            edi_1 += 1;
            i_1 -= 1;
            ebx_1 = &ebx_1[2];
        }

        long double x87_r7_14 = g_c310a0 - g_c310a8;
        i_2 = &g_c310a8;
        g_c310a4 = x87_r7_14 + x87_r7_14;

        do
        {
            long double x87_r7_17 = i_2[-2] - *i_2;
            i_2 = &i_2[2];
            i_2[-1] = x87_r7_17;
        } while (i_2 < 0xc31198);
    }

    return i_2;
}
