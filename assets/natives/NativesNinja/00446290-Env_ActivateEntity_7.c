#include "00446290-Env_ActivateEntity_7.h"
/* 0x00446290 Env_ActivateEntity_7 full linked: callers=3 callees=3 */
int32_t sub_446290(float a1)

{
    long double x87_r7_2 = *(a1 + 0x108) * *(a1 + 0x138) * 4096f;
    long double x87_r6_2 = *(a1 + 0x10c) * *(a1 + 0x138) * 4096f;
    double var_28 = *(a1 + 0x120) * x87_r6_2 + *(a1 + 0x11c) * x87_r7_2;
    long double x87_r5_8 = *(a1 + 0x12c) * x87_r6_2 + *(a1 + 0x128) * x87_r7_2;
    double var_18 = *(a1 + 0x114) * x87_r6_2 + *(a1 + 0x110) * x87_r7_2 + *(a1 + 0xf0);
    double var_10 = var_28 + *(a1 + 0xf8);
    double var_8 = x87_r5_8 + *(a1 + 0x100);
    long double x87_r7_5 = *(a1 + 0x9c);
    long double x87_r6_8 = *(a1 + 0xa0);
    x87_r6_8 - x87_r7_5;
    long double x87_r7_6;

    if (!(*(&((x87_r6_8 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_6 = *(a1 + 0xa0);
    else
        x87_r7_6 = *(a1 + 0x9c);

    long double x87_r6_9 = *(a1 + 0x98);
    x87_r6_9 - x87_r7_6;
    long double x87_r7_8;

    if (*(&((x87_r6_9 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_9 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_9 = *(a1 + 0x9c);
        long double x87_r6_10 = *(a1 + 0xa0);
        x87_r6_10 - x87_r7_9;

        if (!(*(&((x87_r6_10 < x87_r7_9 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_10, x87_r7_9) ? 1 : 0) << 0xa
                | (x87_r6_10 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_8 = *(a1 + 0xa0);
        else
            x87_r7_8 = *(a1 + 0x9c);
    }
    else
        x87_r7_8 = *(a1 + 0x98);

    float var_38_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_8;
    return sub_4c6940(Level_StartMission_4(), a1, &var_18, var_38_1);
}
