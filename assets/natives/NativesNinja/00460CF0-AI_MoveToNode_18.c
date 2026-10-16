#include "00460CF0-AI_MoveToNode_18.h"
/* 0x00460cf0 AI_MoveToNode_18 full linked: callers=5 callees=6 */
float* sub_460cf0(float* a1)

{
    float* result_2 = a1[0x1db];
    __builtin_memset(&a1[0x1ca], 0, 0x40);
    float* result;

    if (result_2)
    {
    label_460d98:
        uint32_t eax_4 = Level_SetMission_3();
        int32_t ecx_1 = 0;
        ecx_1 = result_2[7];
        result = eax_4 * 0x180 + ecx_1;

        if (*((result << 2) + &g_a96ae0))
        {
            uint32_t eax_8 = Level_SetMission_3();
            int32_t eax_9 = 0;
            eax_9 = result_2[7];
            float* result_1;
            (*(((eax_8 * 0x180 + eax_9) << 2) + &g_a96ae0))(result_2, &result_1);
            result = result_1;

            if (result)
            {
                long double x87_r7_2 = *result - *(a1 + 0x20);
                double var_40_1 = *(result + 8) - *(a1 + 0x28);
                double var_38_1 = *(result + 0x10) - *(a1 + 0x30);
                float* var_50;
                double* var_4c;
                long double x87_r6_18 = var_40_1
                    - (var_50[5] * var_38_1 + var_50[4] * var_40_1 + var_50[3] * x87_r7_2)
                    + var_4c[1];
                double var_28_2 = x87_r6_18;
                long double x87_r6_20 = var_38_1
                    - (var_50[8] * var_38_1 + var_50[7] * var_40_1 + var_50[6] * x87_r7_2)
                    + var_4c[2];
                double var_20_2 = x87_r6_20;
                a1[0x1ca] = x87_r7_2
                    - (var_50[2] * var_38_1 + var_50[1] * var_40_1 + *var_50 * x87_r7_2) + *var_4c;
                a1[0x1cb] = var_28_2;
                a1[0x1cc] = var_20_2;
                memcpy(&a1[0x1cd], var_50, 0x28);
                return sub_4b3c50(var_50, &a1[0x1d7], &a1[0x1d8], &a1[0x1d9]);
            }
        }
    }
    else
    {
        result = sub_463680(a1);
        result_2 = result;

        if (result_2)
            goto label_460d98;
    }

    return result;
}
