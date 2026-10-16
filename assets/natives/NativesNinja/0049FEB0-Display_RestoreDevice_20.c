#include "0049FEB0-Display_RestoreDevice_20.h"
/* 0x0049feb0 Display_RestoreDevice_20 full linked: callers=0 callees=0 */
int32_t* sub_49feb0(float a1)

{
    int32_t* ebp = a1;
    char var_19 = 1;
    float eax = ebp[1];
    float* esi = *ebp;
    float var_14 = -(eax);
    long double x87_r7_2 = esi[2];
    long double temp0 = var_14;
    x87_r7_2 - temp0;

    if (!(*(&((x87_r7_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0) ? 1 : 0) << 0xa
            | (x87_r7_2 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
        var_19 = 0;

    float ecx = g_bcaddc;
    float edx = g_bcadcc;
    long double x87_r7_4 = eax + esi[2];
    long double temp1 = ecx;
    x87_r7_4 - temp1;

    if (!(*(&((x87_r7_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = esi[2] - eax;
        long double temp2_1 = edx;
        x87_r7_6 - temp2_1;

        if (*(&((x87_r7_6 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            char var_1d = 1;
            long double x87_r7_10 = (*esi - g_b46ce4 * esi[2]) * g_b817a4;
            long double x87_r6_3 = (*esi - g_b46d1c * esi[2]) * g_b46d20;
            a1 = x87_r6_3;
            float var_10 = (esi[1] - g_b816fc * esi[2]) * g_b46d18;
            float var_c = (esi[1] - g_b8179c * esi[2]) * g_b46ce8;
            long double temp3 = var_14;
            x87_r7_10 - temp3;

            if (!(*(&((x87_r7_10 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp3) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp3 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                var_1d = 0;

            long double temp4 = eax;
            x87_r6_3 - temp4;
            char var_1c = 1;

            if (*(&((x87_r6_3 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp4) ? 1 : 0) << 0xa
                    | (x87_r6_3 == temp4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                var_1c = 0;

            long double x87_r6_4 = var_10;
            long double temp5 = var_14;
            x87_r6_4 - temp5;
            char var_1b = 1;

            if (!(*(&((x87_r6_4 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp5) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                var_1b = 0;

            long double x87_r6_5 = var_c;
            long double temp6 = eax;
            x87_r6_5 - temp6;
            char var_1a = 1;
            int16_t eax_1 = (x87_r6_5 < temp6 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_5, temp6) ? 1 : 0) << 0xa | (x87_r6_5 == temp6 ? 1 : 0) << 0xe
                | 0x3800;

            if (*(&eax_1 + 1) & 0x41)
                var_1a = 0;

            int32_t* edi = ebp[2];

            if (edi)
            {
                long double temp7_1 = eax;
                x87_r7_10 - temp7_1;
                char ebx_1;

                ebx_1 = *(&((x87_r7_10 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_10, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r7_10 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_11 = a1;
                long double temp8_1 = var_14;
                x87_r7_11 - temp8_1;
                a1 = 1;

                if (!(*(&((x87_r7_11 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_11, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r7_11 == temp8_1 ? 1 : 0) << 0xe) + 1) & 1))
                    a1 = 0;

                long double x87_r7_12 = var_10;
                long double temp9_1 = eax;
                x87_r7_12 - temp9_1;
                char edx_1;

                edx_1 = *(&((x87_r7_12 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_12, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_12 == temp9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double x87_r7_13 = var_c;
                long double temp10_1 = var_14;
                x87_r7_13 - temp10_1;
                char ecx_1;

                ecx_1 = !(*(&((x87_r7_13 < temp10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_13, temp10_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp10_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double x87_r7_15 = eax + 409.600006f;
                long double temp11_1 = esi[2];
                x87_r7_15 - temp11_1;
                eax_1 = (x87_r7_15 < temp11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, temp11_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == temp11_1 ? 1 : 0) << 0xe;

                if (!(*(&eax_1 + 1) & 1))
                    eax_1 = 0;
                else
                    eax_1 = 1;

                int32_t eax_2;

                eax_2 = !ebx_1 || !a1 || !edx_1 || !ecx_1 || !eax_1 ? 0 : 1;

                *edi = eax_2;
                long double x87_r7_17 = esi[2] - eax;
                long double temp12_1 = ecx;
                x87_r7_17 - temp12_1;
                long double x87_r7_19;
                long double temp13_1;

                if (!(*(&((x87_r7_17 < temp12_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, temp12_1) ? 1 : 0) << 0xa
                    | (x87_r7_17 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    x87_r7_19 = eax + esi[2];
                    temp13_1 = edx;
                    x87_r7_19 - temp13_1;
                }

                if (*(&((x87_r7_17 < temp12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_17, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r7_17 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x41 || !(*(&(
                        (x87_r7_19 < temp13_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_19, temp13_1) ? 1 : 0) << 0xa
                        | (x87_r7_19 == temp13_1 ? 1 : 0) << 0xe) + 1) & 1))
                    *ebp[2] = 0;
                else
                {
                    int32_t* eax_4 = ebp[2];
                    *eax_4 &= 1;
                }
            }

            eax_1 = var_1d;

            if (!eax_1)
            {
                eax_1 = var_1c;

                if (!eax_1)
                {
                    eax_1 = var_1b;

                    if (!eax_1)
                    {
                        eax_1 = var_1a;

                        if (!eax_1)
                        {
                            eax_1 = var_19;

                            if (!eax_1)
                            {
                                ebp[3] = 0;
                                return 0;
                            }
                        }
                    }
                }
            }

            ebp[3] = 1;
            return 1;
        }
    }

    int32_t* result = ebp[2];

    if (result)
        *result = 0;

    ebp[3] = 1;
    return result;
}
