#include "0040E740-HumanPlayer_CheckGround_7.h"
/* 0x0040e740 HumanPlayer_CheckGround_7 full linked: callers=0 callees=4 */
int16_t HumanPlayer_CheckGround_7(void* a1, float a2)

{
    float ebx = a2;
    float var_28;
    sub_465880(&var_28, *(ebx + 0x4ec));
    long double x87_r7 = 0f;
    int16_t eax_1 = *(a1 + 8);
    float var_48 = 0f;
    float var_44 = 0f;
    float var_24;
    float var_18;
    float var_c;

    if (eax_1 & 0x80)
    {
        x87_r7 = var_24;
        var_48 = var_18;
        var_44 = var_c;
    }

    float var_38;

    if (*(&eax_1 + 1) & 1)
    {
        var_38 = -(var_c);
        x87_r7 = x87_r7 + -(var_24);
        var_48 = -(var_18) + var_48;
        var_44 = var_38 + var_44;
    }

    float var_1c;
    float var_10;

    if (eax_1 & 0x40)
    {
        x87_r7 = x87_r7 + var_28;
        var_48 = var_1c + var_48;
        var_44 = var_10 + var_44;
    }

    if (eax_1 & 0x20)
    {
        var_38 = -(var_10);
        x87_r7 = x87_r7 + -(var_28);
        var_48 = -(var_1c) + var_48;
        var_44 = var_38 + var_44;
    }

    long double x87_r6_17;

    x87_r6_17 = !(*(&eax_1 + 1) & 0x70) ? 1f : 10f;

    long double temp1 = 0f;
    x87_r7 - temp1;

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        long double x87_r5_10 = var_48;
        long double temp3_1 = 0f;
        x87_r5_10 - temp3_1;

        if (*(&((x87_r5_10 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_10, temp3_1) ? 1 : 0) << 0xa
            | (x87_r5_10 == temp3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double x87_r5_11 = var_44;
            long double temp4_1 = 0f;
            x87_r5_11 - temp4_1;
            int16_t result = (x87_r5_11 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_11, temp4_1) ? 1 : 0) << 0xa
                | (x87_r5_11 == temp4_1 ? 1 : 0) << 0xe | 0x3000;

            if (*(&result + 1) & 0x40)
                return result;
        }
    }

    long double temp2 = 0f;
    x87_r7 - temp2;
    double var_40;
    memcpy(&var_40, ebx + 0x20, 0x18);

    if (!(*(&((x87_r7 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp2) ? 1 : 0) << 0xa
        | (x87_r7 == temp2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_40e8af:
        long double x87_r5_15 = var_44;
        long double x87_r4_1 = var_48;
        long double x87_r5_17 =
            1.0 / sqrtl(x87_r7 * x87_r7 + x87_r4_1 * x87_r4_1 + x87_r5_15 * x87_r5_15);
        x87_r7 = x87_r7 * x87_r5_17;
        var_48 = var_48 * x87_r5_17;
        var_44 = var_44 * x87_r5_17;
    }
    else
    {
        long double x87_r5_13 = var_48;
        long double temp5_1 = 0f;
        x87_r5_13 - temp5_1;

        if (!(*(&((x87_r5_13 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_13, temp5_1) ? 1 : 0) << 0xa
                | (x87_r5_13 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_40e8af;

        long double x87_r5_14 = var_44;
        long double temp6_1 = 0f;
        x87_r5_14 - temp6_1;

        if (!(*(&((x87_r5_14 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_14, temp6_1) ? 1 : 0) << 0xa
                | (x87_r5_14 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_40e8af;
    }

    long double x87_r6_18 = x87_r6_17 * 1638.4000000000001;
    float eax_2 = *(ebx + 0xa0);
    a2 = x87_r6_18;
    var_40 = x87_r7 * x87_r6_18 + var_40;
    var_38 = a2 * var_48 + var_38;
    double var_30;
    double var_30_1 = a2 * var_44 + var_30;
    return sub_4c6940(Level_StartMission_4(), ebx, &var_40, eax_2);
}
