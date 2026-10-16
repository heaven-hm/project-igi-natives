#include "gi_platform.h"
#include "004F65E0-Script_SpawnNewTask_19.h"
double* Script_SpawnNewTask_19(void* a1, float a2)

{
    double* ctxB = a2;
    void* v_10 = nullptr;
    double* result_2 = a1 + 0x68;
    a2 = (*(int32_t*)(uintptr_t)(a1 + 0x2c7c)) * 0.5.0f;
    bool cond_0_1;

    do
    {
        int32_t i = 0;
        double* result_1 = result_2;

        do
        {
            int32_t j = 0;
            double* result = result_1;

            do
            {
                long double x87_r7_4 = fabsl(*result - *ctxB);
                long double x87_r6_5 = a2;
                x87_r6_5 - x87_r7_4;

                if (!(*(&((x87_r6_5 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_6 = fabsl(result[1] - ctxB[1]);
                    long double x87_r6_6 = a2;
                    x87_r6_6 - x87_r7_6;

                    if (!(*(&((x87_r6_6 < x87_r7_6 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_6, x87_r7_6) ? 1 : 0) << 0xa
                        | (x87_r6_6 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        long double x87_r7_8 = fabsl(result[2] - ctxB[2]);
                        long double x87_r6_7 = a2;
                        x87_r6_7 - x87_r7_8;

                        if (!(*(&((x87_r6_7 < x87_r7_8 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_7, x87_r7_8) ? 1 : 0) << 0xa
                                | (x87_r6_7 == x87_r7_8 ? 1 : 0) << 0xe) + 1) & 1))
                            return result;
                    }
                }

                j += 1;
                result = &result[4];
            } while (j < 7);

            i += 1;
            result_1 = &result_1[0x1c];
        } while (i < 7);

        result_2 = &result_2[0xc4];
        cond_0_1 = v_10 + 1 < 7;
        v_10 += 1;
    } while (cond_0_1);
    return 0;
}
