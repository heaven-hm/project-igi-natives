#include "00465F50-DeathZone_Process.h"
/* 0x00465f50 DeathZone_Process full linked: callers=0 callees=8 */
int32_t sub_465f50(float a1, double** a2)

{
    int16_t eax = sub_4f45f0();
    int32_t ecx;
    ecx = *(*(a1 + 0x130) + 0x1c);
    int32_t result = TaskType_IsDerivedFrom(ecx, eax);

    if (result)
    {
        float* eax_2 = a2[1];
        long double x87_r7_1 = eax_2[2];
        double var_58;
        memcpy(&var_58, a1 + 0xf0, 0x18);
        double var_50;
        double var_48;
        double var_28 = x87_r7_1 * var_48 + eax_2[1] * var_50 + *eax_2 * var_58;
        double var_20_1 = eax_2[5] * var_48 + eax_2[4] * var_50 + eax_2[3] * var_58;
        double* eax_3 = *a2;
        double var_18_1 = eax_2[8] * var_48 + eax_2[7] * var_50 + eax_2[6] * var_58;
        long double x87_r7_13 = var_28;
        double var_40;
        memcpy(&var_40, &var_28, 0x18);
        var_40 = x87_r7_13 + *eax_3;
        double var_38;
        double var_38_1 = var_38 + eax_3[1];
        double var_30;
        double var_30_1 = var_30 + eax_3[2];
        long double x87_r7_19 = *(a1 + 0x9c);
        long double x87_r6_13 = *(a1 + 0xa0);
        x87_r6_13 - x87_r7_19;
        long double x87_r7_20;

        if (!(*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
                | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_20 = *(a1 + 0xa0);
        else
            x87_r7_20 = *(a1 + 0x9c);

        long double x87_r6_14 = *(a1 + 0x98);
        x87_r6_14 - x87_r7_20;
        long double x87_r7_22;

        if (*(&((x87_r6_14 < x87_r7_20 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_14, x87_r7_20) ? 1 : 0) << 0xa
            | (x87_r6_14 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_23 = *(a1 + 0x9c);
            long double x87_r6_15 = *(a1 + 0xa0);
            x87_r6_15 - x87_r7_23;

            if (!(*(&((x87_r6_15 < x87_r7_23 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_15, x87_r7_23) ? 1 : 0) << 0xa
                    | (x87_r6_15 == x87_r7_23 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_22 = *(a1 + 0xa0);
            else
                x87_r7_22 = *(a1 + 0x9c);
        }
        else
            x87_r7_22 = *(a1 + 0x98);

        float var_6c_2 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_22;
        double* var_70 = &var_40;
        sub_4c6940(Level_StartMission_4(), a1, var_70, var_6c_2);
        float* eax_6 = a2[1];
        var_28 = *eax_6 * *(a1 + 0x108) + *(a1 + 0x114) * eax_6[1] + eax_6[2] * *(a1 + 0x120);
        *(&var_28 + 4) =
            *eax_6 * *(a1 + 0x10c) + *(a1 + 0x118) * eax_6[1] + eax_6[2] * *(a1 + 0x124);
        var_20_1 =
            *eax_6 * *(a1 + 0x110) + *(a1 + 0x11c) * eax_6[1] + eax_6[2] * *(a1 + 0x128);
        *(&var_20_1 + 4) =
            eax_6[5] * *(a1 + 0x120) + eax_6[3] * *(a1 + 0x108) + eax_6[4] * *(a1 + 0x114);
        var_18_1 =
            eax_6[5] * *(a1 + 0x124) + eax_6[3] * *(a1 + 0x10c) + eax_6[4] * *(a1 + 0x118);
        *(&var_18_1 + 4) =
            eax_6[5] * *(a1 + 0x128) + eax_6[3] * *(a1 + 0x110) + eax_6[4] * *(a1 + 0x11c);
        float var_10_1 =
            eax_6[8] * *(a1 + 0x120) + eax_6[6] * *(a1 + 0x108) + eax_6[7] * *(a1 + 0x114);
        float var_c_1 =
            eax_6[8] * *(a1 + 0x124) + eax_6[6] * *(a1 + 0x10c) + eax_6[7] * *(a1 + 0x118);
        result = eax_6[9] + *(a1 + 0x12c) + 1;
        int32_t result_1 = result;
        float var_8_1 =
            eax_6[8] * *(a1 + 0x128) + eax_6[6] * *(a1 + 0x110) + eax_6[7] * *(a1 + 0x11c);
        memcpy(a1 + 0x70, &var_28, 0x28);
    }

    return result;
}
