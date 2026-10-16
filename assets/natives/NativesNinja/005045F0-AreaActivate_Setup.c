#include "005045F0-AreaActivate_Setup.h"
/* 0x005045f0 AreaActivate_Setup full linked: callers=0 callees=4 */
int32_t sub_5045f0(void* a1)

{
    long double x87_r7 = -1.7976931348623157e+308;
    double var_28 = x87_r7;
    int32_t eax = *(a1 + 0xb0);
    int32_t var_50 = 0xffffffff;
    int32_t var_4c = 0x7fefffff;
    int32_t var_48 = 0xffffffff;
    int32_t var_44 = 0x7fefffff;
    int32_t result_1 = 0xffffffff;
    int32_t var_3c = 0x7fefffff;
    int32_t var_38 = 0xffffffff;
    int32_t var_34 = 0xffefffff;
    int32_t result_2 = 0xffffffff;
    int32_t var_2c = 0xffefffff;
    *(a1 + 0xac) = 0;

    if (eax)
    {
        x87_r7 = var_28;
        *(a1 + 0xac) = sub_4b8770(eax);
    }

    *(a1 + 0x90) = *(a1 + 0x9c);
    *(a1 + 0x94) = *(a1 + 0xa0);
    *(a1 + 0x98) = *(a1 + 0xa4);
    float var_78 = *(a1 + 0x90) * 0.5f;
    long double x87_r6_3 = *(a1 + 0x94) * 0.5f;
    *(a1 + 0x90) = var_78;
    int32_t i = 0;
    float var_74 = x87_r6_3;
    long double x87_r6_5 = *(a1 + 0x98) * 0.5f;
    *(a1 + 0x94) = var_74;
    float var_70 = x87_r6_5;
    *(a1 + 0x98) = var_70;
    int32_t result;

    do
    {
        long double x87_r6_7 = var_78 * (1 - ((i & 1) << 1));
        result = i >> 1 & 2;
        long double x87_r5_5 = (1 - (i & 2)) * var_74;
        double var_60_2 = x87_r5_5;
        long double x87_r4_2 = (1 - result) * var_70;
        double var_58_2 = x87_r4_2;
        double var_20 =
            *(a1 + 0x6c) * x87_r5_5 + *(a1 + 0x70) * x87_r4_2 + *(a1 + 0x68) * x87_r6_7;
        double var_18_1 =
            *(a1 + 0x78) * x87_r5_5 + *(a1 + 0x7c) * x87_r4_2 + *(a1 + 0x74) * x87_r6_7;
        double var_10_1 =
            *(a1 + 0x84) * x87_r5_5 + *(a1 + 0x88) * x87_r4_2 + *(a1 + 0x80) * x87_r6_7;
        void var_68;
        memcpy(&var_68, &var_20, 0x18);
        long double x87_r6_10 = var_20 + *(a1 + 0x50);
        long double x87_r5_8 = var_60_2 + *(a1 + 0x58);
        double var_60_3 = x87_r5_8;
        double var_58_3 = var_58_2 + *(a1 + 0x60);
        long double x87_r4_6 = var_50;
        x87_r4_6 - x87_r6_10;
        result = (x87_r4_6 < x87_r6_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_6, x87_r6_10) ? 1 : 0) << 0xa
            | (x87_r4_6 == x87_r6_10 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 1))
            var_50 = x87_r6_10;

        long double x87_r4_8 = var_48;
        x87_r4_8 - x87_r5_8;
        result = (x87_r4_8 < x87_r5_8 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_8, x87_r5_8) ? 1 : 0) << 0xa
            | (x87_r4_8 == x87_r5_8 ? 1 : 0) << 0xe | 0x2800;

        if (!(*(&result + 1) & 1))
            var_48 = x87_r5_8;

        long double x87_r5_10 = result_1;
        long double temp0_1 = var_58_3;
        x87_r5_10 - temp0_1;
        result = (x87_r5_10 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_10, temp0_1) ? 1 : 0) << 0xa
            | (x87_r5_10 == temp0_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 1))
        {
            result = var_58_3;
            result_1 = result;
            int32_t var_3c_1 = *(&var_58_3 + 4);
        }

        long double x87_r5_11 = var_38;
        x87_r5_11 - x87_r6_10;
        result = (x87_r5_11 < x87_r6_10 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_11, x87_r6_10) ? 1 : 0) << 0xa
            | (x87_r5_11 == x87_r6_10 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 0x41)
            var_38 = x87_r6_10;

        long double x87_r6_12 = result_2;
        long double temp1_1 = var_60_3;
        x87_r6_12 - temp1_1;
        result = (x87_r6_12 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, temp1_1) ? 1 : 0) << 0xa
            | (x87_r6_12 == temp1_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
        {
            result = var_60_3;
            result_2 = result;
            int32_t var_2c_1 = *(&var_60_3 + 4);
        }

        long double temp2_1 = var_58_3;
        x87_r7 - temp2_1;
        result = (x87_r7 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7 == temp2_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 0x41)
            x87_r7 = var_58_3;

        i += 1;
    } while (i < 8);

    double var_28_1 = x87_r7;
    memcpy(a1 + 0x20, &var_50, 0x18);
    memcpy(a1 + 0x38, &var_38, 0x18);
    return result;
}
