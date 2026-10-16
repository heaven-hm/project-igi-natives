#include "004F6290-Script_ParseEnumString_18.h"
/* 0x004f6290 Script_ParseEnumString_18 full linked: callers=10 callees=2 */
int32_t sub_4f6290(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9) __location("st0")

{
    int32_t var_28 = 0;
    long double x87_r7_2 = (a4 - a2) * 0.5;
    long double x87_r6_1 = a7 - a5;
    long double temp0 = 0.0;
    x87_r6_1 - temp0;

    if (*(&((x87_r6_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp0) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp0 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        a4 = 0;
        *(&a4 + 4) = 0;
    }
    else
    {
        long double x87_r5_2 = a6 - a5;
        a4 = (x87_r5_2 + x87_r5_2) / x87_r6_1 * (a3 - a1) * 0.5;
    }

    long double x87_r6_5 = a8 - a6;
    long double temp1 = 0.0;
    x87_r6_5 - temp1;

    if (*(&((x87_r6_5 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, temp1) ? 1 : 0) << 0xa
        | (x87_r6_5 == temp1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        a5 = 0;
        *(&a5 + 4) = 0;
    }
    else
    {
        long double x87_r5_7 = a7 - a6;
        a5 = (x87_r5_7 + x87_r5_7) / x87_r6_5 * x87_r7_2;
    }

    int32_t var_2c = *(&a5 + 4);
    int32_t var_34 = *(&a4 + 4);
    int32_t var_3c = *(&a3 + 4);
    double var_20[0x4];
    sub_518130(&var_20, a2, *(&a2 + 4), a3, a4, a5);
    long double x87_r7_6 = a7 - a6;
    long double temp2 = 0.0;
    x87_r7_6 - temp2;

    if (!(*(&((x87_r7_6 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp2) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        var_28 = (a9 - a6) / x87_r7_6;

    int32_t var_2c_1 = 0;
    return sub_518190(&var_20, var_28);
}
