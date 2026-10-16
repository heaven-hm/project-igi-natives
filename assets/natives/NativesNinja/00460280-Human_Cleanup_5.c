#include "00460280-Human_Cleanup_5.h"
/* 0x00460280 Human_Cleanup_5 full linked: callers=0 callees=7 */
double* sub_460280(float a1 @ 0x8)

{
    double* result = sub_46ab30();

    if (result)
    {
        result = sub_46ab30();

        if (result != 3)
        {
            float result_3;
            float result_4 = result_3;
            result = result_4 + 0x20;
            *(a1 + 0xc) = result;
            *(a1 + 0x10) = result_4 + 0x78;
            int32_t edx_1 = *(result_4 + 0xa0);
            *(a1 + 0x1c) = 1;
            *(a1 + 0x14) = edx_1;
            int32_t ecx_2 = *(result_4 + 0xfc);

            if (!ecx_2 || ecx_2 == 2)
                *(a1 + 0x20) = 3;
            else
                *(a1 + 0x20) = 0;

            if (*(result_4 + 0xcf6))
            {
                double* ecx_4 = *a1;
                float var_1c = *result - *ecx_4;
                float var_18_1 = result[1] - ecx_4[1];
                float var_14_1 = result[2] - ecx_4[2];
                float* eax = *(a1 + 4);
                float var_10 = var_14_1 * eax[6] + var_18_1 * eax[3] + var_1c * *eax;
                long double x87_r7_17 = var_14_1 * eax[8] + var_18_1 * eax[5];
                long double x87_r6_12 = var_1c * eax[2];
                float var_18_2 = var_14_1 * eax[7] + var_18_1 * eax[4] + var_1c * eax[1];
                var_1c = var_10;
                float var_14_2 = x87_r7_17 + x87_r6_12;
                result = sub_4d03d0(&var_1c, *(a1 + 0x14), 0);

                if (!result)
                {
                    double* result_1 = result;
                    double* result_2 = result;
                    result_3 = result;
                    float result_5 = result_4;
                    char eax_3 = sub_489610();
                    result = sub_4ce410(Level_StartMission_4(), *a1, *(a1 + 0xc), eax_3,
                        &var_10, 0xffffffff, 0xffffffff, &result_3);
                    long double x87_r7_19 = result_3;
                    long double temp0_1 = 0f;
                    x87_r7_19 - temp0_1;
                    result = (x87_r7_19 < temp0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_19, temp0_1) ? 1 : 0) << 0xa
                        | (x87_r7_19 == temp0_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        return sub_467f30(a1);
                }
            }
        }
    }

    return result;
}
