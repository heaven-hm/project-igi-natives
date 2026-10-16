#include "004FD020-Particle2DDynCubeObjTask_Process.h"
/* 0x004fd020 Particle2DDynCubeObjTask_Process full linked: callers=0 callees=4 */
int32_t sub_4fd020(float a1)

{
    float edi = a1;
    float var_c = 0f;
    float var_8 = 0f;
    long double x87_r7 = *(edi + 0xdc);
    long double temp1 = 0f;
    x87_r7 - temp1;
    float var_4 = 0f;
    int32_t i_1 = 0;
    float var_10;
    float ebx;
    float ebp;

    if (*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
        | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        ebp = *(edi + 0xd0);
        ebx = *(edi + 0xd4);
        var_10 = *(edi + 0xd8);
    }
    else
    {
        sub_4fd4e0(edi, &var_c);
        long double x87_r7_2 = var_c + *(edi + 0xd0);
        float var_14_1 = var_8 + *(edi + 0xd4);
        long double x87_r6_4 = var_4 + *(edi + 0xd8);
        long double x87_r5_1 = var_14_1;
        x87_r5_1 - x87_r6_4;
        long double x87_r5_2;

        x87_r5_2 = *(&((x87_r5_1 < x87_r6_4 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_1, x87_r6_4) ? 1 : 0) << 0xa | (x87_r5_1 == x87_r6_4 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 0x41 ? x87_r6_4 : var_14_1;

        x87_r7_2 - x87_r5_2;
        long double x87_r5_4;

        if (*(&((x87_r7_2 < x87_r5_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, x87_r5_2) ? 1 : 0) << 0xa
            | (x87_r7_2 == x87_r5_2 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double x87_r5_5 = var_14_1;
            x87_r5_5 - x87_r6_4;

            x87_r5_4 = *(&((x87_r5_5 < x87_r6_4 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_5, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r5_5 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? x87_r6_4 : var_14_1;
        }
        else
            x87_r5_4 = x87_r7_2;

        long double x87_r4_2 = 1f;
        x87_r4_2 - x87_r5_4;
        long double x87_r5_7;

        if (*(&((x87_r4_2 < x87_r5_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r4_2, x87_r5_4) ? 1 : 0) << 0xa
            | (x87_r4_2 == x87_r5_4 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double x87_r5_8 = var_14_1;
            x87_r5_8 - x87_r6_4;
            long double x87_r5_9;

            x87_r5_9 = *(&((x87_r5_8 < x87_r6_4 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_8, x87_r6_4) ? 1 : 0) << 0xa
                | (x87_r5_8 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? x87_r6_4 : var_14_1;

            x87_r7_2 - x87_r5_9;

            if (*(&((x87_r7_2 < x87_r5_9 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_2, x87_r5_9) ? 1 : 0) << 0xa
                | (x87_r7_2 == x87_r5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
            {
                long double x87_r5_11 = var_14_1;
                x87_r5_11 - x87_r6_4;

                x87_r5_7 = *(&((x87_r5_11 < x87_r6_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_11, x87_r6_4) ? 1 : 0) << 0xa
                    | (x87_r5_11 == x87_r6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? x87_r6_4
                    : var_14_1;
            }
            else
                x87_r5_7 = x87_r7_2;
        }
        else
            x87_r5_7 = 1f;

        long double x87_r5_12 = x87_r5_7 * 0.00787401572f;
        ebp = x87_r7_2 / x87_r5_12;
        ebx = var_14_1 / x87_r5_12;
        var_10 = x87_r6_4 / x87_r5_12;
    }

    int32_t i = *(edi + 0xf0);

    if (i)
    {
        do
        {
            double* esi_1 = *(*(edi + 0x6c) + (i_1 << 2));
            float var_48;
            sub_497f20(&var_48, &a1, esi_1);
            long double x87_r7_5 = a1;
            long double temp2_1 = 2048f;
            x87_r7_5 - temp2_1;

            if (!(*(&((x87_r7_5 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_6 = a1;
                long double temp3_1 = *(edi + 0xe0);
                x87_r7_6 - temp3_1;

                if (*(&((x87_r7_6 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    long double x87_r7_7 = *(edi + 0xe4);
                    long double temp4_1 = 0f;
                    x87_r7_7 - temp4_1;
                    float ecx_2 = *(edi + 0xc0);
                    float var_20 = *(edi + 0xbc);

                    if (!(*(&((x87_r7_7 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_7, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        var_20 = var_20 * *(esi_1 + 0x3c);
                        float var_1c_2 = ecx_2 * *(esi_1 + 0x3c);
                    }

                    float var_50;
                    sub_498040(&var_50, &var_20, a1);
                    long double x87_r7_12 = var_50;
                    long double temp5_1 = 0.5f;
                    x87_r7_12 - temp5_1;

                    if (*(&((x87_r7_12 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1)
                        var_50 = 0.5f;

                    float var_4c;
                    long double x87_r7_13 = var_4c;
                    long double temp6_1 = 0.5f;
                    x87_r7_13 - temp6_1;

                    if (*(&((x87_r7_13 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_13, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_13 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1)
                        var_4c = 0.5f;

                    long double x87_r7_14 = *(esi_1 + 0x2c);
                    long double temp7_1 = 0f;
                    x87_r7_14 - temp7_1;
                    float var_40_2;
                    float var_3c_2;
                    float var_38_2;
                    float var_34_2;
                    float var_30_2;
                    float var_2c_2;
                    float var_28_1;
                    long double x87_r7_21;
                    float var_44;

                    if (*(&((x87_r7_14 < temp7_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_14, temp7_1) ? 1 : 0) << 0xa
                        | (x87_r7_14 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        long double x87_r7_23 = var_48 - var_50;
                        var_30_2 = x87_r7_23;
                        long double x87_r6_34 = var_44 - var_4c;
                        var_2c_2 = x87_r6_34;
                        long double x87_r5_33 = var_48 + var_50;
                        var_38_2 = x87_r5_33;
                        var_34_2 = x87_r6_34;
                        var_28_1 = x87_r5_33;
                        var_40_2 = x87_r7_23;
                        x87_r7_21 = var_44 + var_4c;
                        var_3c_2 = x87_r7_21;
                    }
                    else
                    {
                        long double x87_r7_15 = esi_1[7];
                        long double st0_1;
                        bool c1_1;
                        bool c2_14;
                        st0_1 = __fcos(x87_r7_15);
                        float var_60_1 = st0_1;
                        long double st0_2;
                        bool c1_2;
                        bool c2_15;
                        st0_2 = __fsin(x87_r7_15);
                        long double x87_r6_9 = -(var_4c);
                        float var_54_1 = x87_r6_9 * st0_2;
                        float var_68_1 = var_60_1 * var_50;
                        long double x87_r6_10 = x87_r6_9 * var_60_1;
                        float var_64_1 = -(st0_2) * var_50;
                        long double x87_r7_17 = st0_2 * var_4c;
                        long double x87_r6_15 = var_60_1 * var_4c;
                        var_30_2 = var_48 + var_54_1 - var_68_1;
                        var_2c_2 = var_44 + x87_r6_10 - var_64_1;
                        var_38_2 = var_48 + var_68_1 + var_54_1;
                        var_34_2 = var_44 + var_64_1 + x87_r6_10;
                        var_40_2 = var_48 + x87_r7_17 - var_68_1;
                        var_3c_2 = var_44 + x87_r6_15 - var_64_1;
                        var_28_1 = var_48 + x87_r7_17 + var_68_1;
                        x87_r7_21 = var_44 + x87_r6_15 + var_64_1;
                    }
                    int32_t eax_11 = *(edi + 0xe8);
                    float var_24_2 = x87_r7_21;
                    float var_5c;

                    if (eax_11)
                    {
                        if (!(eax_11 & 0x80000))
                        {
                            var_5c = 1f;
                            ebp = *(edi + 0xd0) * esi_1[6];
                            ebx = *(edi + 0xd4) * esi_1[6];
                            var_10 = *(edi + 0xd8) * esi_1[6];
                        }
                        else
                            var_5c = esi_1[6];
                    }

                    int32_t* var_bc_1;
                    float var_b8_1;
                    float var_b4_1;
                    float var_b0_1;
                    float var_ac_1;
                    float var_a8_1;
                    float var_a4_1;
                    float var_a0_1;
                    float var_9c_1;
                    float var_98_1;
                    float var_94_1;
                    float var_90_1;
                    float var_8c_1;
                    float var_88_1;
                    int32_t var_84_3;
                    int32_t var_80_3;

                    if (!*(edi + 0xfc))
                    {
                        int32_t var_7c_5 = 0;
                        var_80_3 = eax_11 | 0x1000000;
                        var_84_3 = 0;
                        var_88_1 = var_5c;
                        var_8c_1 = a1;
                        var_90_1 = var_10;
                        var_94_1 = ebx;
                        var_98_1 = ebp;
                        var_9c_1 = var_24_2;
                        var_a0_1 = var_28_1;
                        var_a4_1 = var_3c_2;
                        var_a8_1 = var_40_2;
                        var_ac_1 = var_34_2;
                        var_b0_1 = var_38_2;
                        var_b4_1 = var_2c_2;
                        var_b8_1 = var_30_2;
                        var_bc_1 = *(edi + 0x80);
                    }
                    else
                    {
                        int32_t* ecx_6 = *(edi + 0x80);
                        int32_t var_7c_4 = 0;
                        var_80_3 = eax_11 | 0x1000000;
                        int32_t eax_13 = 0;
                        eax_13 = *(esi_1[5] + ecx_6[3] + 0x10);
                        var_84_3 = eax_13 - 1;
                        var_88_1 = var_5c;
                        var_8c_1 = a1;
                        var_90_1 = var_10;
                        var_94_1 = ebx;
                        var_98_1 = ebp;
                        var_9c_1 = var_24_2;
                        var_a0_1 = var_28_1;
                        var_a4_1 = var_3c_2;
                        var_a8_1 = var_40_2;
                        var_ac_1 = var_34_2;
                        var_b0_1 = var_38_2;
                        var_b4_1 = var_2c_2;
                        var_b8_1 = var_30_2;
                        var_bc_1 = ecx_6;
                    }

                    Qsprite_Register4Az(var_bc_1, var_b8_1, var_b4_1, var_b0_1, var_ac_1, var_a8_1,
                        var_a4_1, var_a0_1, var_9c_1, var_98_1, var_94_1, var_90_1, var_8c_1,
                        var_88_1, var_84_3, var_80_3, 0);
                }
            }

            i = i_1 + 1;
            i_1 = i;
        } while (i < *(edi + 0xf0));
    }

    return i;
}
