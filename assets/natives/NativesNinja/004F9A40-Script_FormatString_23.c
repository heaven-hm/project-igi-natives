#include "004F9A40-Script_FormatString_23.h"
/* 0x004f9a40 Script_FormatString_23 full linked: callers=9 callees=3 */
int32_t sub_4f9a40(double* a1, void* a2, double a3, char a4)

{
    double var_40;
    sub_4f9770(&var_40, a2);
    double* eax = a1;
    double var_58 = *eax - var_40;
    double var_38;
    double var_50 = eax[1] - var_38;
    long double x87_r7_4 = eax[2];
    eax = a4;
    double var_30;
    long double x87_r7_5 = x87_r7_4 - var_30;

    if (eax)
    {
        long double temp0_1 = 0.0;
        x87_r7_5 - temp0_1;
        eax = (x87_r7_5 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp0_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&eax + 1) & 1)
            x87_r7_5 = -(x87_r7_5);

        long double temp1_1 = 4096.0;
        x87_r7_5 - temp1_1;
        eax = (x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&eax + 1) & 0x41))
        {
            eax = 0;
            return eax;
        }
    }

    int32_t var_48 = 0;
    int32_t var_44 = 0;
    int16_t eax_1 = sub_4b3320(&var_58);

    if (!eax_1)
    {
        float var_28;
        sub_4f98a0(&var_28, a2, 1);
        float var_1c;
        float var_10;
        long double x87_r7_10 = var_10 * var_48 + var_1c * var_50 + var_28 * var_58;
        float var_24;
        float var_18;
        float var_c;
        double var_38_1 = var_c * var_48 + var_18 * var_50 + var_24 * var_58;
        long double x87_r6_10 = *(a2 + 0x24) + a3;
        a3 = x87_r6_10 * -4096.0;
        long double temp2_1 = a3;
        x87_r7_10 - temp2_1;
        eax_1 = (x87_r7_10 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&eax_1 + 1) & 1))
        {
            double var_60_1 = x87_r6_10 * 4096.0;
            long double temp3_1 = var_60_1;
            x87_r7_10 - temp3_1;
            eax_1 = (x87_r7_10 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp3_1 ? 1 : 0) << 0xe;

            if (*(&eax_1 + 1) & 0x41)
            {
                long double x87_r7_11 = var_38_1;
                long double temp4_1 = a3;
                x87_r7_11 - temp4_1;
                eax_1 = (x87_r7_11 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp4_1 ? 1 : 0) << 0xe;

                if (!(*(&eax_1 + 1) & 1))
                {
                    long double x87_r7_12 = var_38_1;
                    long double temp5_1 = var_60_1;
                    x87_r7_12 - temp5_1;
                    eax_1 = (x87_r7_12 < temp5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_12, temp5_1) ? 1 : 0) << 0xa
                        | (x87_r7_12 == temp5_1 ? 1 : 0) << 0xe;

                    if (*(&eax_1 + 1) & 0x41)
                    {
                        eax_1 = 1;
                        return eax_1;
                    }
                }
            }
        }
    }

    eax_1 = 0;
    return eax_1;
}
