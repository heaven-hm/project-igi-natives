#include "0051FBA0-Terrain_BuildMipMaps_11.h"
/* 0x0051fba0 Terrain_BuildMipMaps_11 full linked: callers=2 callees=3 */
int32_t sub_51fba0(float a1, void* a2, int32_t a3)

{
    float esi = a1;
    long double x87_r7 = *(esi + 0x1a0);
    long double temp1 = *(esi + 0x1a8);
    x87_r7 - temp1;
    int16_t result = (x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
    label_51fbd1:
        int32_t ecx_1 = *(esi + 0x1a0);
        int32_t eax_1 = (ecx_1 + 1) & 0x80000001;

        if (eax_1 < 0)
            eax_1 = ((eax_1 - 1) | 0xfffffffe) + 1;

        long double x87_r7_3 = *(esi + 0x1a0) - ecx_1;
        long double x87_r6_2 = 1f - x87_r7_3;
        int32_t var_20_1 =
            x87_r6_2 * *(esi + (ecx_1 << 2) + 0x150) + x87_r7_3 * *(esi + (eax_1 << 2) + 0x150);
        a1 = x87_r6_2 * *(esi + (ecx_1 << 2) + 0x158) + x87_r7_3 * *(esi + (eax_1 << 2) + 0x158);
        void* ecx_3 = esi + ecx_1 * 0x18;
        a3 = x87_r6_2 * *(esi + (ecx_1 << 2) + 0x160) + x87_r7_3 * *(esi + (eax_1 << 2) + 0x160);
        void* eax_4 = esi + eax_1 * 0x18;
        double var_18 = x87_r6_2 * *(esi + ((ecx_1 * 3 + 0x1e) << 3))
            + x87_r7_3 * *(esi + ((eax_1 * 3 + 0x1e) << 3));
        double var_10_1 = x87_r7_3 * *(eax_4 + 0xf8) + x87_r6_2 * *(ecx_3 + 0xf8);
        double var_8_1 = x87_r7_3 * *(eax_4 + 0x100) + x87_r6_2 * *(ecx_3 + 0x100);
        sub_4b38e0(a2 + 0x70, var_20_1, a1, a3);
        long double x87_r7_7 = *(a2 + 0x9c);
        long double x87_r6_7 = *(a2 + 0xa0);
        x87_r6_7 - x87_r7_7;
        long double x87_r7_8;

        if (!(*(&((x87_r6_7 < x87_r7_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_7, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r6_7 == x87_r7_7 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_8 = *(a2 + 0xa0);
        else
            x87_r7_8 = *(a2 + 0x9c);

        long double x87_r6_8 = *(a2 + 0x98);
        x87_r6_8 - x87_r7_8;
        long double x87_r7_10;

        if (*(&((x87_r6_8 < x87_r7_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r7_8) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r7_8 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_11 = *(a2 + 0x9c);
            long double x87_r6_9 = *(a2 + 0xa0);
            x87_r6_9 - x87_r7_11;

            if (!(*(&((x87_r6_9 < x87_r7_11 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_9, x87_r7_11) ? 1 : 0) << 0xa
                    | (x87_r6_9 == x87_r7_11 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_10 = *(a2 + 0xa0);
            else
                x87_r7_10 = *(a2 + 0x9c);
        }
        else
            x87_r7_10 = *(a2 + 0x98);

        long double x87_r7_13 = sub_4d0950(*(a2 + 0x6c)) * x87_r7_10;
        result = sub_4c6940(*(a2 + 0x68), a2, &var_18, x87_r7_13);
        int32_t edx_5 = *(esi + 0x1a4);
        *(esi + 0x1a8) = *(esi + 0x1a0);
        *(esi + 0x1ac) = edx_5;
    }
    else
    {
        result = a3;

        if (result)
            goto label_51fbd1;
    }

    return result;
}
