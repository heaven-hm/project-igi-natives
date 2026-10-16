#include "0048B780-FX_TrailUpdate_18.h"
/* 0x0048b780 FX_TrailUpdate_18 full linked: callers=4 callees=5 */
int32_t* sub_48b780(void* a1, void* a2, int32_t* a3, int32_t a4, int32_t a5)

{
    int32_t eax = a4 * 5;

    if (*(a2 + ((a5 + (eax << 2)) << 2) + 0x20) >= 0x19)
    {
        eax = 0;
        return eax;
    }

    int32_t eax_2;
    int32_t edx_1;
    edx_1 = HIGHD(*(a2 + 0x14));
    eax_2 = LOWD(*(a2 + 0x14));
    int32_t eax_6;
    int32_t edx_2;
    edx_2 = HIGHD(*(a2 + 0x18));
    eax_6 = LOWD(*(a2 + 0x18));
    int32_t var_68 = a5 - ((eax_6 - edx_2) >> 1);
    float var_30;
    sub_4f98a0(&var_30, a3, 1);
    double var_48;
    sub_4f9770(&var_48, a3);
    *(a1 + 0x3ec0) = 0;
    *(a1 + 0x3ec4) = 0;
    long double x87_r7_1 = (a4 - ((eax_2 - edx_1) >> 1)) * 8192f;
    *(a1 + 0x3eb0) = x87_r7_1;
    long double x87_r6_1 = var_68 * 8192f;
    var_68 = x87_r6_1;
    *(a1 + 0x3eb8) = x87_r6_1;
    long double x87_r6_3 = a3[9] * -4096f;
    x87_r7_1 - x87_r6_3;

    if (!(*(&((x87_r7_1 < x87_r6_3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, x87_r6_3) ? 1 : 0) << 0xa
        | (x87_r7_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double x87_r6_5 = a3[9] * 4096f;
        x87_r7_1 - x87_r6_5;

        if (!(*(&((x87_r7_1 < x87_r6_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, x87_r6_5) ? 1 : 0) << 0xa
                | (x87_r7_1 == x87_r6_5 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(a1 + 0x3eb0) = x87_r6_5;
    }
    else
        *(a1 + 0x3eb0) = x87_r6_3;

    long double x87_r7_6 = a3[9] * -4096f;
    long double temp1 = var_68;
    x87_r7_6 - temp1;

    if (*(&((x87_r7_6 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_9 = a3[9] * 4096f;
        long double temp2_1 = var_68;
        x87_r7_9 - temp2_1;

        if (*(&((x87_r7_9 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            *(a1 + 0x3eb8) = x87_r7_9;
    }
    else
        *(a1 + 0x3eb8) = x87_r7_6;

    int32_t* eax_11 = *(a1 + 0x3ea0);
    float var_2c;
    double var_60 = var_2c * *(a1 + 0x3eb8) + var_30 * *(a1 + 0x3eb0);
    float var_24;
    float var_20;
    double var_58 = var_20 * *(a1 + 0x3eb8) + var_24 * *(a1 + 0x3eb0);
    float var_18;
    float var_14;
    double var_50 = var_14 * *(a1 + 0x3eb8) + var_18 * *(a1 + 0x3eb0);
    long double x87_r7_20 = var_48;
    memcpy(a1 + 0x3eb0, &var_60, 0x18);
    *(a1 + 0x3eb0) = x87_r7_20 + *(a1 + 0x3eb0);
    double var_40;
    *(a1 + 0x3eb8) = var_40 + *(a1 + 0x3eb8);
    double var_38;
    *(a1 + 0x3ec0) = var_38 + *(a1 + 0x3ec0);

    if (eax_11)
    {
        sub_452c10(eax_11, *(a1 + 0x3ea4), *(a1 + 0x3ea8));
        *(a1 + 0x3ea0) = 0;
    }

    int32_t* eax_13 = sub_452c60(*(a1 + 0x3b6c), *a3, a4, a5);
    *(a1 + 0x3ea0) = eax_13;
    *(a1 + 0x3ea4) = a4;
    *(a1 + 0x3ea8) = a5;
    eax_13 = 1;
    return eax_13;
}
