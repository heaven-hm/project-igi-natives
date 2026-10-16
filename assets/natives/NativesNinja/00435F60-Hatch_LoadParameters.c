#include "00435F60-Hatch_LoadParameters.h"
/* 0x00435f60 Hatch_LoadParameters full linked: callers=0 callees=4 */
int32_t Hatch_LoadParameters(void* a1, float a2)

{
    int32_t* edi = a2;
    float* eax = edi[1];
    long double x87_r6_7 =
        eax[5] * *(a1 + 0x100) + eax[4] * *(a1 + 0xf8) + eax[3] * *(a1 + 0xf0);
    double* eax_1 = *edi;
    long double x87_r6_11 =
        eax[8] * *(a1 + 0x100) + eax[7] * *(a1 + 0xf8) + eax[6] * *(a1 + 0xf0);
    double var_18 =
        eax[2] * *(a1 + 0x100) + eax[1] * *(a1 + 0xf8) + *eax * *(a1 + 0xf0) + *eax_1;
    double var_10 = x87_r6_7 + eax_1[1];
    double var_8 = x87_r6_11 + eax_1[2];
    long double x87_r7_9 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_9;
    long double x87_r7_10;

    if (!(*(&((x87_r6_12 < x87_r7_9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_9) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_10 = *(a1 + 0xa0);
    else
        x87_r7_10 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_10;
    long double x87_r7_12;

    if (*(&((x87_r6_13 < x87_r7_10 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_10) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_13 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_13;

        if (!(*(&((x87_r6_14 < x87_r7_13 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_13) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_13 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_12 = *(a1 + 0xa0);
        else
            x87_r7_12 = *(a1 + 0x9c);
    }
    else
        x87_r7_12 = *(a1 + 0x98);

    float var_3c_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_12;
    sub_4c6940(Level_StartMission_4(), a1, &var_18, var_3c_1);
    return Vehicle_UpdateCockpit_4(a1, edi[1]);
}
