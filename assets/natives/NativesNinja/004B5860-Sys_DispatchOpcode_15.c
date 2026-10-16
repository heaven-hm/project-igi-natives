#include "004B5860-Sys_DispatchOpcode_15.h"
/* 0x004b5860 Sys_DispatchOpcode_15 full linked: callers=4 callees=1 */
float sub_4b5860(float* a1, float a2, float a3, float a4, int32_t a5, float a6, float a7, float a8, int32_t a9, float a10, float a11, float a12, int32_t a13, int32_t a14) __location("eax")

{
    long double st0;
    bool c1;
    bool c2;
    st0 = __fcos(a10);
    float result = a2;
    float var_8 = st0;
    long double st0_1;
    bool c1_1;
    bool c2_1;
    st0_1 = __fsin(a10);
    float var_c = st0_1;

    if (result - 1 > 0)
    {
        float esi_1 = a8;
        float* eax = &a1[2];
        float edi_1 = a7;
        a1 = eax;
        float result_1 = result - 1;

        while (true)
        {
            long double x87_r7_5 = a11 * eax[-2];
            long double x87_r6_2 = a12 * eax[-1];
            a2 = a11 * *eax;
            long double x87_r5_4 = a12 * eax[1];
            a8 = x87_r5_4;
            long double x87_r4_1 = a10;
            long double temp1_1 = 0.0;
            x87_r4_1 - temp1_1;

            if (!(*(&((x87_r4_1 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_1, temp1_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == temp1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            {
                a7 = x87_r7_5 * var_c + x87_r6_2 * var_8;
                x87_r7_5 = -((x87_r6_2 * var_c - x87_r7_5 * var_8));
                x87_r6_2 = a7;
                x87_r5_4 = a2 * var_c + a8 * var_8;
                a2 = -((a8 * var_c - a2 * var_8));
            }

            int32_t var_48_1 = a13;
            int32_t var_4c_1 = a13;
            int32_t var_54_1 = a13;
            int32_t var_58_1 = a13;
            sub_4b5730(x87_r7_5 + a3, x87_r6_2 + a4, a5, a2 + a3, x87_r5_4 + a4, a5,
                a6, edi_1, esi_1, a6, edi_1, esi_1, a9, a13, a14);
            result = result_1 - 1;
            bool cond:1_1 = result_1 != 1;
            a1 = &a1[2];
            result_1 = result;

            if (!cond:1_1)
                break;

            eax = a1;
        }
    }

    return result;
}
