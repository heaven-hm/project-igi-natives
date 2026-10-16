#include "004452F0-Switch_Update.h"
/* 0x004452f0 Switch_Update full linked: callers=0 callees=9 */
float* sub_4452f0(float a1)

{
    sub_4c48d0(a1, sub_4cec10(a1 + 0x170));
    long double x87_r7 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    long double x87_r7_6 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_3;
    sub_4c6940(*(a1 + 0x68), a1, a1 + 0xf0, x87_r7_6);
    double* eax_5 = sub_4c3440(a1);
    sub_4dcf00(*(a1 + 0x68), a1, eax_5);
    char edx_2 = *(a1 + 0x1c0);
    memcpy(a1 + 0x70, a1 + 0x108, 0x28);
    *(a1 + 0x1c1) = edx_2;
    sub_4f1400(a1 + 0x1d0, a1);
    return sub_4453e0(a1);
}
