// Original IGI.EXE function: AI_FireWeapon_3 (VA 0x004520C0; static CFG gate FAIL, CFG score 0.833).
#include "AI_FireWeapon_3.h"
int32_t AI_FireWeapon_3(double* a1, void* a2, double* a3, double* a4, char a5)

{
    double v_10 = *(a2 + 0x24) * 4096f;
    int16_t valA1 = Sys_PopStack_11(a4);

    if (!valA1)
    {
        long double x87_r7_2 = *a4;
        long double f0_1 = v_10;
        x87_r7_2 - f0_1;
        long double x87_r7_4;
        long double f2_1;

        if (*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            x87_r7_4 = -(v_10);
            f2_1 = *a4;
            x87_r7_4 - f2_1;
        }

        if (!(*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&(
            (x87_r7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_6 = v_10 / *a4;
            long double f1_1 = 0.0;
            x87_r7_6 - f1_1;

            if (*(&((x87_r7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_6 = -(x87_r7_6);

            long double x87_r7_7 = x87_r7_6 * a4[1];
            long double f3_1 = 0.0;
            x87_r7_7 - f3_1;
            long double x87_r6_1 = x87_r7_7;

            if (*(&((x87_r7_7 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_1 = -(x87_r6_1);

            long double f5_1 = v_10;
            x87_r6_1 - f5_1;

            if (*(&((x87_r6_1 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f5_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_2 = *a4;
                long double f8 = 0.0;
                x87_r6_2 - f8;
                long double x87_r6_3 = v_10;

                if (*(&((x87_r6_2 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f8) ? 1 : 0) << 0xa
                        | (x87_r6_2 == f8 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
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

        long double x87_r7_11 = v_10;
        long double f4_1 = a4[1];
        x87_r7_11 - f4_1;

        if (!(*(&((x87_r7_11 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double x87_r6_9 = -(x87_r7_11);
            long double f7_1 = a4[1];
            x87_r6_9 - f7_1;
            valA1 = (x87_r6_9 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, f7_1) ? 1 : 0) << 0xa
                | (x87_r6_9 == f7_1 ? 1 : 0) << 0xe | 0x3800;
        }

        if (*(&((x87_r7_11 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f4_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&valA1 + 1) & 0x41))
        {
            long double x87_r6_11 = x87_r7_11 / a4[1];
            long double f6_1 = 0.0;
            x87_r6_11 - f6_1;

            if (*(&((x87_r6_11 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_11, f6_1) ? 1 : 0) << 0xa
                    | (x87_r6_11 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_11 = -(x87_r6_11);

            long double x87_r6_12 = x87_r6_11 * *a4;
            long double f9_1 = 0.0;
            x87_r6_12 - f9_1;
            double v_10_1 = x87_r6_12;
            bool c1_1 = /* bool c1_1 = unknown  {fst qword [esp+0x8], fp0} */;
            long double x87_r5_5 = x87_r6_12;

            if (*(&((x87_r6_12 < f9_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                    | (FCMP_UO(x87_r6_12, f9_1) ? 1 : 0) << 0xa
                    | (x87_r6_12 == f9_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                x87_r5_5 = -(x87_r5_5);

            x87_r5_5 - x87_r7_11;
            valA1 = (x87_r5_5 < x87_r7_11 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_5, x87_r7_11) ? 1 : 0) << 0xa
                | (x87_r5_5 == x87_r7_11 ? 1 : 0) << 0xe | 0x3000;

            if (*(&valA1 + 1) & 0x41)
            {
                *a1 = x87_r6_12;
                long double x87_r6_13 = a4[1];
                long double f10 = 0.0;
                x87_r6_13 - f10;
                int16_t valA4 = (x87_r6_13 < f10 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_13, f10) ? 1 : 0) << 0xa
                    | (x87_r6_13 == f10 ? 1 : 0) << 0xe | 0x3800;

                if (*(&valA4 + 1) & 1)
                    x87_r7_11 = -(x87_r7_11);

                valA4 = a5;
                a1[1] = x87_r7_11;
                a1[2] = 0;
                *(a1 + 0x14) = 0;

                if (!valA4)
                {
                    *a1 = *a3 - v_10_1;
                    a1[1] = a3[1] - x87_r7_11;
                    a1[2] = a3[2];
                    int32_t valA8 = *(a3 + 0x14);
                    *(a1 + 0x14) = valA8;
                    return valA8;
                }

                *a1 = v_10_1 + *a3;
                a1[1] = x87_r7_11 + a3[1];
                a1[2] = a3[2];
                int32_t valA6 = *(a3 + 0x14);
                *(a1 + 0x14) = valA6;
                return valA6;
            }
        }
    }

    memcpy(a1, a3, 0x18);
    return valA1;
}
