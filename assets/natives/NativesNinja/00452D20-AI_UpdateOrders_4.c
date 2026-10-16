#include "00452D20-AI_UpdateOrders_4.h"
/* 0x00452d20 AI_UpdateOrders_4 full linked: callers=3 callees=8 */
int32_t* sub_452d20(int32_t* a1, int32_t* a2, double* a3, void* a4, int32_t a5, double* a6)

{
    void* eax = sub_4f9720(a4, a5);
    int32_t* result = sub_452be0(*(a4 + 0x50), a5);

    if (!result)
    {
        result = g_58a9e8;

        if (*result)
        {
            sub_4af960(result);
            result[1] = 0;
            *result = 0;
            sub_4af8f0(&g_57d768, result);
            int32_t ecx_1 = *(a4 + 0x50);
            result[3] = a5;
            result[2] = ecx_1;
            result[4] = 0;
            result[5] = *(eax + 0x28) * 0.5f;
            result[6] = *(eax + 0x28) * 0.5f;
        }

        if (!*result || !result)
            return 0;
    }

    result[4] += 1;
    double var_58;
    sub_4f9770(&var_58, eax);
    double var_70 = *a6 - var_58;
    double var_50;
    double var_68 = a6[1] - var_50;
    double var_48;
    double var_60 = a6[2] - var_48;
    float var_28;
    sub_4f98a0(&var_28, eax, 1);
    float var_1c;
    float var_10;
    double var_40 = var_10 * var_60 + var_1c * var_68 + var_28 * var_70;
    float var_24;
    float var_18;
    float var_c;
    double var_38 = var_c * var_60 + var_18 * var_68 + var_24 * var_70;
    float var_20;
    float var_14;
    float var_8;
    double var_30 = var_8 * var_60 + var_14 * var_68 + var_20 * var_70;
    long double x87_r7_24 = var_40 * 0.0001220703125;
    memcpy(&var_70, &var_40, 0x18);
    double var_68_1 = var_68 * 0.0001220703125;
    double var_60_1 = var_60 * 0.0001220703125;
    var_70 = result[5] * 0.5 + x87_r7_24;
    double var_68_2 = result[6] * 0.5 + var_68_1;
    long double x87_r7_29 = var_70;
    long double temp0 = 0.0;
    x87_r7_29 - temp0;

    if (!(*(&((x87_r7_29 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_29, temp0) ? 1 : 0) << 0xa
        | (x87_r7_29 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_30 = result[5];
        long double x87_r6_19 = var_70;
        x87_r6_19 - x87_r7_30;

        if (!(*(&((x87_r6_19 < x87_r7_30 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_19, x87_r7_30) ? 1 : 0) << 0xa
                | (x87_r6_19 == x87_r7_30 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            var_70 = x87_r7_30;
    }
    else
    {
        var_70 = 0;
        *(&var_70 + 4) = 0;
    }

    long double x87_r7_32 = var_68_2;
    long double temp1 = 0.0;
    x87_r7_32 - temp1;

    if (!(*(&((x87_r7_32 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_32, temp1) ? 1 : 0) << 0xa
        | (x87_r7_32 == temp1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_33 = result[6];
        long double x87_r6_20 = var_68_2;
        x87_r6_20 - x87_r7_33;

        if (!(*(&((x87_r6_20 < x87_r7_33 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_20, x87_r7_33) ? 1 : 0) << 0xa
                | (x87_r6_20 == x87_r7_33 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            var_68_2 = x87_r7_33;
    }
    else
    {
        var_68_2 = 0;
        *(&var_68_2 + 4) = 0;
    }

    int32_t var_78_3 = var_68_2;
    int32_t var_78_4 = var_70;
    sub_452b80(result, var_78_4, var_78_3, 1);

    if (a1)
        *a1 = var_78_4;

    if (a2)
        *a2 = var_78_3;

    if (a3)
    {
        long double x87_r7_40 = (var_70 - result[5] * 0.5) * 8192.0;
        long double x87_r6_25 = (var_68_2 - result[6] * 0.5) * 8192.0;
        var_40 = var_20 * var_60_1 + var_24 * x87_r6_25 + var_28 * x87_r7_40;
        double var_38_1 = var_14 * var_60_1 + var_18 * x87_r6_25 + var_1c * x87_r7_40;
        *a3 = var_40 + var_58;
        a3[1] = var_38_1 + var_50;
        a3[2] = var_8 * var_60_1 + var_c * x87_r6_25 + var_10 * x87_r7_40 + var_48;
    }

    return result;
}
