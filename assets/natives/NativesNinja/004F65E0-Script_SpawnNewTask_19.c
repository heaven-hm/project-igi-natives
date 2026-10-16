#include "004F65E0-Script_SpawnNewTask_19.h"
/* 0x004f65e0 Script_SpawnNewTask_19 full linked: callers=1 callees=0 */
double* sub_4f65e0(void* a1, float a2)

{
    double* ebx = a2;
    void* var_10 = nullptr;
    double* result_2 = a1 + 0x68;
    a2 = *(a1 + 0x2c7c) * 0.5f;
    bool cond:0_1;

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
                long double x87_r7_4 = fabsl(*result - *ebx);
                long double x87_r6_5 = a2;
                x87_r6_5 - x87_r7_4;

                if (!(*(&((x87_r6_5 < x87_r7_4 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_5, x87_r7_4) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_6 = fabsl(result[1] - ebx[1]);
                    long double x87_r6_6 = a2;
                    x87_r6_6 - x87_r7_6;

                    if (!(*(&((x87_r6_6 < x87_r7_6 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_6, x87_r7_6) ? 1 : 0) << 0xa
                        | (x87_r6_6 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        long double x87_r7_8 = fabsl(result[2] - ebx[2]);
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
        cond:0_1 = var_10 + 1 < 7;
        var_10 += 1;
    } while (cond:0_1);
    return 0;
}
