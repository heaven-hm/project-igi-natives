#include "gi_platform.h"
#include "00460280-Human_Cleanup_5.h"
double* Human_Cleanup_5(float a1 )

{
    double* result = AI_SelectTarget_27();

    if (result)
    {
        result = AI_SelectTarget_27();

        if (result != 3)
        {
            float result_3;
            float result_4 = result_3;
            result = result_4 + 0x20;
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = result;
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = result_4 + 0x78;
            int32_t tmpD1 = *(result_4 + 0xa0);
            (*(int32_t*)(uintptr_t)(a1 + 0x1c)) = 1;
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = tmpD1;
            int32_t objC2 = *(result_4 + 0xfc);

            if (!objC2 || objC2 == 2)
                (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 3;
            else
                (*(int32_t*)(uintptr_t)(a1 + 0x20)) = 0;

            if (*(result_4 + 0xcf6))
            {
                double* objC4 = *a1;
                float v_1c = *result - *objC4;
                float v_18_1 = result[1] - objC4[1];
                float v_14_1 = result[2] - objC4[2];
                float* valA = (*(int32_t*)(uintptr_t)(a1 + 4));
                float v_10 = v_14_1 * valA[6] + v_18_1 * valA[3] + v_1c * *valA;
                long double x87_r7_17 = v_14_1 * valA[8] + v_18_1 * valA[5];
                long double x87_r6_12 = v_1c * valA[2];
                float v_18_2 = v_14_1 * valA[7] + v_18_1 * valA[4] + v_1c * valA[1];
                v_1c = v_10;
                float v_14_2 = x87_r7_17 + x87_r6_12;
                result = Render_DrawBoneMesh(&v_1c, (*(int32_t*)(uintptr_t)(a1 + 0x14)), 0);

                if (!result)
                {
                    double* result_1 = result;
                    double* result_2 = result;
                    result_3 = result;
                    float result_5 = result_4;
                    char valA3 = FX_TrailUpdate_12();
                    result = DynObj_RegisterSymbol_12(Level_StartMission_4(), *a1, (*(int32_t*)(uintptr_t)(a1 + 0xc)), valA3,
                        &v_10, 0xffffffff, 0xffffffff, &result_3);
                    long double x87_r7_19 = result_3;
                    long double f0_1 = 0.0f;
                    x87_r7_19 - f0_1;
                    result = (x87_r7_19 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_19, f0_1) ? 1 : 0) << 0xa
                        | (x87_r7_19 == f0_1 ? 1 : 0) << 0xe;

                    if (!(*(&result + 1) & 0x40))
                        return (AI_UpdateOrders_25(a1), 0);
                }
            }
        }
    }

    return result;
}
