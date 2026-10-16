#include "AI_MoveToNode_18.h"
float* AI_MoveToNode_18(float* a1)

{
    float* result_2 = a1[0x1db];
    __builtin_memset(&a1[0x1ca], 0, 0x40);
    float* result;

    if (result_2)
    {
    label_460d98:
        uint32_t valA4 = Level_SetMission_3();
        int32_t objC1 = 0;
        objC1 = result_2[7];
        result = valA4 * 0x180 + objC1;

        if (*((result << 2) + &g_a96ae0))
        {
            uint32_t valA8 = Level_SetMission_3();
            int32_t valA9 = 0;
            valA9 = result_2[7];
            float* result_1;
            (*(((valA8 * 0x180 + valA9) << 2) + &g_a96ae0))(result_2, &result_1);
            result = result_1;

            if (result)
            {
                long double x87_r7_2 = *result - *(a1 + 0x20);
                double v_40_1 = *(result + 8) - *(a1 + 0x28);
                double v_38_1 = *(result + 0x10) - *(a1 + 0x30);
                float* v_50;
                double* v_4c;
                long double x87_r6_18 = v_40_1
                    - (v_50[5] * v_38_1 + v_50[4] * v_40_1 + v_50[3] * x87_r7_2)
                    + v_4c[1];
                double v_28_2 = x87_r6_18;
                long double x87_r6_20 = v_38_1
                    - (v_50[8] * v_38_1 + v_50[7] * v_40_1 + v_50[6] * x87_r7_2)
                    + v_4c[2];
                double v_20_2 = x87_r6_20;
                a1[0x1ca] = x87_r7_2
                    - (v_50[2] * v_38_1 + v_50[1] * v_40_1 + *v_50 * x87_r7_2) + *v_4c;
                a1[0x1cb] = v_28_2;
                a1[0x1cc] = v_20_2;
                memcpy(&a1[0x1cd], v_50, 0x28);
                return Sys_Atan2UndefinedInOrig(v_50, &a1[0x1d7], &a1[0x1d8], &a1[0x1d9]);
            }
        }
    }
    else
    {
        result = AI_CheckSector_20(a1);
        result_2 = result;

        if (result_2)
            goto label_460d98;
    }

    return result;
}
