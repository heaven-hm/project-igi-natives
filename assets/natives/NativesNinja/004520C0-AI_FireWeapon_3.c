#include "004520C0-AI_FireWeapon_3.h"
/* 0x004520c0 AI_FireWeapon_3 full linked: callers=5 callees=2 */
int32_t sub_4520c0(double* a1, void* a2, double* a3, double* a4, char a5)

{
    double var_10 = *(a2 + 0x24) * 4096f;
    int16_t eax_1 = sub_4b3320(a4);

    if (!eax_1)
    {
        long double x87_r7_2 = *a4;
        long double temp0_1 = var_10;
        x87_r7_2 - temp0_1;
        long double x87_r7_4;
        long double temp2_1;

        if (*(&((x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            x87_r7_4 = -(var_10);
            temp2_1 = *a4;
            x87_r7_4 - temp2_1;
        }

        if (!(*(&((x87_r7_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&(
            (x87_r7_4 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_6 = var_10 / *a4;
            long double temp1_1 = 0.0;
            x87_r7_6 - temp1_1;

            if (*(&((x87_r7_6 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_6 = -(x87_r7_6);

            long double x87_r7_7 = x87_r7_6 * a4[1];
            long double temp3_1 = 0.0;
            x87_r7_7 - temp3_1;
            long double x87_r6_1 = x87_r7_7;

            if (*(&((x87_r7_7 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_1 = -(x87_r6_1);

            long double temp5_1 = var_10;
            x87_r6_1 - temp5_1;

            if (*(&((x87_r6_1 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp5_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_2 = *a4;
                long double temp8 = 0.0;
                x87_r6_2 - temp8;
                long double x87_r6_3 = var_10;

                if (*(&((x87_r6_2 < temp8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, temp8) ? 1 : 0) << 0xa
                        | (x87_r6_2 == temp8 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    x87_r6_3 = -(x87_r6_3);

                *a1 = x87_r6_3;
                a1[2] = 0;
                a1[1] = x87_r7_7;
                *(a1 + 0x14) = 0;

                if (!a5)
                {
                    *a1 = *a3 - x87_r6_3;
                    a1[1] = a3[1] - x87_r7_7;
                    a1[2] = a3[2];
                    *(a1 + 0x14) = *(a3 + 0x14);
                    return a1;
                }

                *a1 = x87_r6_3 + *a3;
                a1[1] = x87_r7_7 + a3[1];
                a1[2] = a3[2];
                *(a1 + 0x14) = *(a3 + 0x14);
                return a1;
            }
        }

        long double x87_r7_11 = var_10;
        long double temp4_1 = a4[1];
        x87_r7_11 - temp4_1;

        if (!(*(&((x87_r7_11 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_9 = -(x87_r7_11);
            long double temp7_1 = a4[1];
            x87_r6_9 - temp7_1;
            eax_1 = (x87_r6_9 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, temp7_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == temp7_1 ? 1 : 0) << 0xe | 0x3800;
        }

        if (*(&((x87_r7_11 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&eax_1 + 1) & 0x41))
        {
            long double x87_r6_11 = x87_r7_11 / a4[1];
            long double temp6_1 = 0.0;
            x87_r6_11 - temp6_1;

            if (*(&((x87_r6_11 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_11, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r6_11 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_11 = -(x87_r6_11);

            long double x87_r6_12 = x87_r6_11 * *a4;
            long double temp9_1 = 0.0;
            x87_r6_12 - temp9_1;
            double var_10_1 = x87_r6_12;
            bool c1_1 = /* bool c1_1 = unknown  {fst qword [esp+0x8], st0} */;
            long double x87_r5_5 = x87_r6_12;

            if (*(&((x87_r6_12 < temp9_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                    | (FCMP_UO(x87_r6_12, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r6_12 == temp9_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                x87_r5_5 = -(x87_r5_5);

            x87_r5_5 - x87_r7_11;
            eax_1 = (x87_r5_5 < x87_r7_11 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_5, x87_r7_11) ? 1 : 0) << 0xa
                | (x87_r5_5 == x87_r7_11 ? 1 : 0) << 0xe | 0x3000;

            if (*(&eax_1 + 1) & 0x41)
            {
                *a1 = x87_r6_12;
                long double x87_r6_13 = a4[1];
                long double temp10 = 0.0;
                x87_r6_13 - temp10;
                int16_t eax_4 = (x87_r6_13 < temp10 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_13, temp10) ? 1 : 0) << 0xa
                    | (x87_r6_13 == temp10 ? 1 : 0) << 0xe | 0x3800;

                if (*(&eax_4 + 1) & 1)
                    x87_r7_11 = -(x87_r7_11);

                eax_4 = a5;
                a1[1] = x87_r7_11;
                a1[2] = 0;
                *(a1 + 0x14) = 0;

                if (!eax_4)
                {
                    *a1 = *a3 - var_10_1;
                    a1[1] = a3[1] - x87_r7_11;
                    a1[2] = a3[2];
                    int32_t eax_8 = *(a3 + 0x14);
                    *(a1 + 0x14) = eax_8;
                    return eax_8;
                }

                *a1 = var_10_1 + *a3;
                a1[1] = x87_r7_11 + a3[1];
                a1[2] = a3[2];
                int32_t eax_6 = *(a3 + 0x14);
                *(a1 + 0x14) = eax_6;
                return eax_6;
            }
        }
    }

    memcpy(a1, a3, 0x18);
    return eax_1;
}
