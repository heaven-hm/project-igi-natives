#include "004EC2C0-SoundSys_SetMasterVolume_16.h"
/* 0x004ec2c0 SoundSys_SetMasterVolume_16 full linked: callers=4 callees=2 */
float sub_4ec2c0(void* a1, int32_t a2, float a3, void* a4, float* a5, float a6) __location("eax")

{
    float* eax = a6;
    float var_20 = a5[7] * eax[2] + a5[1] * *eax + a5[4] * eax[1];
    long double x87_r7_10 = a5[8] * eax[2] + a5[2] * *eax;
    long double x87_r6_11 = a5[5] * eax[1];
    float var_3c = a5[6] * eax[2] + a5[3] * eax[1] + *a5 * *eax;
    float result_1 = x87_r7_10 + x87_r6_11;
    float result;
    long double st0;
    st0 = sub_4b2a10(&var_3c);
    a6 = st0 * st0 * a3;
    long double x87_r7_14 = a6;
    long double temp0 = 0f;
    x87_r7_14 - temp0;
    result = (x87_r7_14 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp0) ? 1 : 0) << 0xa
        | (x87_r7_14 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        long double x87_r7_15 = var_3c;
        long double temp1_1 = 0f;
        x87_r7_15 - temp1_1;
        result = result_1;
        float result_2 = result;
        float var_24_1 = var_3c;
        float var_20_1 = var_20;
        result = (x87_r7_15 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
        label_4ec3a9:
            long double x87_r7_18 = result_1;
            long double x87_r6_15 = var_20;
            long double x87_r5_1 = var_3c;
            long double x87_r7_20 =
                1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_15 * x87_r6_15 + x87_r7_18 * x87_r7_18);
            var_24_1 = var_3c * x87_r7_20;
            var_20_1 = var_20_1 * x87_r7_20;
            result_2 = result_2 * x87_r7_20;
        }
        else
        {
            long double x87_r7_16 = var_20;
            long double temp2_1 = 0f;
            x87_r7_16 - temp2_1;
            result = (x87_r7_16 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp2_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_4ec3a9;

            long double x87_r7_17 = result_1;
            long double temp3_1 = 0f;
            x87_r7_17 - temp3_1;
            result = (x87_r7_17 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_17, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp3_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x40))
                goto label_4ec3a9;
        }

        int32_t i_1 = a2;

        if (i_1 > 0)
        {
            int32_t* esi_1 = a1 + 0xc;
            int32_t i;

            do
            {
                long double x87_r7_22 = esi_1[-3];
                long double temp4_1 = 0f;
                x87_r7_22 - temp4_1;
                result = (x87_r7_22 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_22, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == temp4_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    int32_t var_c_1 = esi_1[1];
                    int32_t var_8_1 = esi_1[2];
                    int32_t var_4_1 = esi_1[3];
                    float edx_4 = *esi_1;
                    long double x87_r7_28 = (var_20_1 * esi_1[-1] + result_2 * *esi_1
                        + var_24_1 * esi_1[-2]) * esi_1[-3] * a6;
                    long double x87_r6_30 = esi_1[-1] * x87_r7_28;
                    float var_18 = esi_1[-2] * x87_r7_28;
                    float var_14_1 = x87_r6_30;
                    float var_10_1 = edx_4 * x87_r7_28;
                    result = sub_4ecf50(a4, &var_18);
                }

                esi_1 = &esi_1[7];
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
    }

    return result;
}
