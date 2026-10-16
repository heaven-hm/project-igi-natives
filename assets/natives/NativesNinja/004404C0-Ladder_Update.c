#include "004404C0-Ladder_Update.h"
/* 0x004404c0 Ladder_Update full linked: callers=0 callees=4 */
int32_t sub_4404c0(double* a1, int32_t* a2)

{
    long double x87_r7_1 = *(a2 + 8) - a1[4];
    long double x87_r6_1 = *(a2 + 0x10) - a1[5];
    long double x87_r5_1 = *(a2 + 0x18) - a1[6];
    void* ebx = *a2;
    double var_38 = a1[0x11] * x87_r5_1 + *(a1 + 0x7c) * x87_r6_1 + a1[0xe] * x87_r7_1;
    long double x87_r7_2 =
        *(a1 + 0x8c) * x87_r5_1 + *(a1 + 0x74) * x87_r7_1 + a1[0x10] * x87_r6_1;
    long double temp0 = 0.0;
    x87_r7_2 - temp0;
    long double x87_r6_3 = x87_r7_2;

    if (*(&((x87_r7_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_3 = -(x87_r6_3);

    long double temp1 = *(a2 + 0x78);
    x87_r6_3 - temp1;

    if (*(&((x87_r6_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp1) ? 1 : 0) << 0xa
        | (x87_r6_3 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
    {
        long double x87_r6_4 = var_38;
        long double temp2_1 = -2867.1999999999998;
        x87_r6_4 - temp2_1;

        if (!(*(&((x87_r6_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r6_4 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            long double x87_r6_5 = var_38;
            long double temp4_1 = 2867.1999999999998;
            x87_r6_5 - temp4_1;

            if (*(&((x87_r6_5 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, temp4_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                int32_t ecx_1 = a2[0xc];
                long double temp5_1 = 0.0;
                x87_r7_2 - temp5_1;
                int32_t edx_1 = a2[0xf];
                int32_t var_44 = a2[9];
                int32_t var_40_1 = ecx_1;
                float ecx_2 = a1[0x10];
                float var_50 = *(a1 + 0x74);
                int32_t var_3c_1 = edx_1;
                float edx_2 = *(a1 + 0x8c);

                if (!(*(&((x87_r7_2 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_2, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    var_50 = -(var_50);
                    float var_4c_2 = -(ecx_2);
                    float var_48_2 = -(edx_2);
                }

                float var_54_1 = sub_4b2b30(&var_44, &var_50);
                double var_20[0x2];
                WeaponType_UpdateAnim(&var_20, a1, 1);
                double var_10;
                x87_r7_2 = var_10 + a1[6];
                long double x87_r6_6 = var_54_1;
                long double temp6_1 = 0.785398185f;
                x87_r6_6 - temp6_1;

                if (*(&((x87_r6_6 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_6, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r6_6 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                {
                    long double temp7_1 = *(a2 + 0x18);
                    x87_r7_2 - temp7_1;

                    if (!(*(&((x87_r7_2 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_2, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_2 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double x87_r7_11 = *(a2 + 0x18);
                        long double temp8_1 = a1[6];
                        x87_r7_11 - temp8_1;

                        if (!(*(&((x87_r7_11 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_11, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r7_11 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        {
                            a2[0x20] = a1;
                            a2[0x1c] = 0;
                            a2[0x1d] = 0;
                            *(ebx + 0xd7b) = 0;
                        }
                    }
                }
            }
        }
    }

    WeaponType_UpdateAnim(&var_38, a1, 1);
    long double x87_r7_14 = var_38 + a1[4];
    var_38 = x87_r7_14;
    double var_28;
    long double x87_r4_10 = *(a1 + 0x8c) * (*(a2 + 0x18) - (var_28 + a1[6]))
        + *(a1 + 0x74) * (*(a2 + 8) - x87_r7_14);
    double var_30;
    long double x87_r3_11 = a1[0x10] * (*(a2 + 0x10) - (var_30 + a1[5]));
    long double x87_r4_11 = x87_r4_10 + x87_r3_11;
    long double temp3 = 0.0;
    x87_r4_11 - temp3;
    int16_t result = (x87_r4_11 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_11, temp3) ? 1 : 0) << 0xa
        | (x87_r4_11 == temp3 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double x87_r0;
        long double x87_r1;
        long double x87_r2;
        result = Level_InitSprites_5(x87_r0, x87_r1, x87_r2, x87_r3_11, a2, a1, &var_38);

        if (result)
            *(ebx + 0xd7b) = 1;
    }

    return result;
}
