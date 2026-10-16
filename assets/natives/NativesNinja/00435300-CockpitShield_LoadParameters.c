#include "00435300-CockpitShield_LoadParameters.h"
/* 0x00435300 CockpitShield_LoadParameters full linked: callers=0 callees=5 */
int32_t CockpitShield_LoadParameters(void* a1, float a2)

{
    int32_t* ebp = a2;
    float* eax = ebp[1];
    double var_18 = eax[2] * *(a1 + 0x100) + eax[1] * *(a1 + 0xf8) + *eax * *(a1 + 0xf0);
    double var_10 = eax[5] * *(a1 + 0x100) + eax[4] * *(a1 + 0xf8) + eax[3] * *(a1 + 0xf0);
    double* eax_1 = *ebp;
    double var_8 = eax[8] * *(a1 + 0x100) + eax[7] * *(a1 + 0xf8) + eax[6] * *(a1 + 0xf0);
    long double x87_r7_12 = var_18;
    double var_30;
    memcpy(&var_30, &var_18, 0x18);
    var_30 = x87_r7_12 + *eax_1;
    double var_28;
    double var_28_1 = var_28 + eax_1[1];
    double var_20;
    double var_20_1 = var_20 + eax_1[2];
    long double x87_r7_18 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_18;
    long double x87_r7_19;

    if (!(*(&((x87_r6_12 < x87_r7_18 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_18) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_19 = *(a1 + 0xa0);
    else
        x87_r7_19 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_19;
    long double x87_r7_21;

    if (*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_22 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_22;

        if (!(*(&((x87_r6_14 < x87_r7_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_22 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_21 = *(a1 + 0xa0);
        else
            x87_r7_21 = *(a1 + 0x9c);
    }
    else
        x87_r7_21 = *(a1 + 0x98);

    float var_44_1 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_21;
    double* var_48 = &var_30;
    sub_4c6940(Level_StartMission_4(), a1, var_48, var_44_1);
    return Vehicle_UpdateCockpit_4(a1, ebp[1]);
}
