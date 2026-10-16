#include "0043F3D0-Wire_Process.h"
/* 0x0043f3d0 Wire_Process full linked: callers=0 callees=8 */
int32_t Wire_Process(float a1)

{
    double var_58 = *(a1 + 0x108) - *(a1 + 0xf0);
    double var_50 = *(a1 + 0x110) - *(a1 + 0xf8);
    double var_48 = *(a1 + 0x118) - *(a1 + 0x100);
    double var_6c = sub_4b3130(&var_58);
    sub_4b3100(&var_58);
    float var_64 = var_58;
    float var_60 = var_50;
    float var_5c = var_48;
    float var_28[0xa];
    WeaponType_SetCategory(&var_28, &var_64);
    memcpy(a1 + 0x70, &var_28, 0x28);
    *(a1 + 0x9c) = var_6c * 0.000244140625;
    sub_4c48d0(a1, sub_4cec10(a1 + 0x120));
    double var_38 = *(a1 + 0xf8) + *(a1 + 0x110);
    double var_30 = *(a1 + 0x100) + *(a1 + 0x118);
    double var_40 = (*(a1 + 0x108) + *(a1 + 0xf0)) * 0.5;
    double var_38_1 = var_38 * 0.5;
    double var_30_1 = var_30 * 0.5;
    long double x87_r7_19 = *(a1 + 0x9c);
    long double x87_r6_4 = *(a1 + 0xa0);
    x87_r6_4 - x87_r7_19;
    long double x87_r7_20;

    if (!(*(&((x87_r6_4 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, x87_r7_19) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r7_19 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_20 = *(a1 + 0xa0);
    else
        x87_r7_20 = *(a1 + 0x9c);

    long double x87_r6_5 = *(a1 + 0x98);
    x87_r6_5 - x87_r7_20;
    long double x87_r7_22;

    if (*(&((x87_r6_5 < x87_r7_20 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, x87_r7_20) ? 1 : 0) << 0xa
        | (x87_r6_5 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_23 = *(a1 + 0x9c);
        long double x87_r6_6 = *(a1 + 0xa0);
        x87_r6_6 - x87_r7_23;

        if (!(*(&((x87_r6_6 < x87_r7_23 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_6, x87_r7_23) ? 1 : 0) << 0xa
                | (x87_r6_6 == x87_r7_23 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_22 = *(a1 + 0xa0);
        else
            x87_r7_22 = *(a1 + 0x9c);
    }
    else
        x87_r7_22 = *(a1 + 0x98);

    long double x87_r7_25 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_22;
    return sub_4c6940(*(a1 + 0x68), a1, &var_40, x87_r7_25);
}
