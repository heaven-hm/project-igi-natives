// Original IGI.EXE function: Terrain_SampleHeightmap_8 (VA 0x005182B0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_SampleHeightmap_8.h"
int32_t Terrain_SampleHeightmap_8(int32_t* a1, float* a2, float* a3)

{
    long double x87_r7_1 = *a2 - g_bcabb8;
    float v_1c = g_bcabc0 - (x87_r7_1 + x87_r7_1);
    long double x87_r7_5 = a2[1] - g_bcabbc;
    float v_18 = g_bcabc4 - (x87_r7_5 + x87_r7_5);
    long double x87_r7_9 = *a2 - 16f;
    long double x87_r6_1 = g_bcabb8 + g_bcabc0;
    x87_r6_1 - x87_r7_9;
    int16_t result = (x87_r6_1 < x87_r7_9 ? 1 : 0) << 8
        | (FCMP_UO(x87_r6_1, x87_r7_9) ? 1 : 0) << 0xa | (x87_r6_1 == x87_r7_9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        long double x87_r7_11 = *a2 + 16f;
        long double f0_1 = g_bcabb8;
        x87_r7_11 - f0_1;
        result = (x87_r7_11 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            long double x87_r7_13 = a2[1] - 16f;
            long double x87_r6_3 = g_bcabbc + g_bcabc4;
            x87_r6_3 - x87_r7_13;
            result = (x87_r6_3 < x87_r7_13 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_3, x87_r7_13) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_13 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double x87_r7_15 = a2[1] + 16f;
                long double f1_1 = g_bcabbc;
                x87_r7_15 - f1_1;
                result = (x87_r7_15 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_15, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_15 == f1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    int32_t* i_1 = a1;

                    for (int32_t* i = *i_1; i; i = *i_1)
                        i_1 = i;

                    do
                    {
                        float v_14 = v_1c * i_1[2] + *a2;
                        float v_10_1 = v_18 * i_1[2] + a2[1];
                        float v_c = i_1[4] * *a3;
                        float v_8_1 = i_1[5] * a3[1];
                        float v_4_1 = i_1[6] * a3[2];
                        result = i_1[8](&v_c, &v_14, i_1);
                        i_1 = i_1[1];
                    } while (i_1);
                }
            }
        }
    }

    return result;
}
