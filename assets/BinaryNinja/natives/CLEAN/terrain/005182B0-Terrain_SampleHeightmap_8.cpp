// IGI native provenance: Terrain_SampleHeightmap_8 - 0x005182B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005182B0-Terrain_SampleHeightmap_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_SampleHeightmap_8.h"
int32_t Terrain_SampleHeightmap_8(int32_t* context, float* param_2, float* param_3)

{
    long double fpu_val_7_1 = *param_2 - g_bcabb8;
    float item_1c = g_bcabc0 - (fpu_val_7_1 + fpu_val_7_1);
    long double fpu_val_7_5 = param_2[1] - g_bcabbc;
    float item_18 = g_bcabc4 - (fpu_val_7_5 + fpu_val_7_5);
    long double fpu_val_7_9 = *param_2 - 16.0f;
    long double fpu_val_6_1 = g_bcabb8 + g_bcabc0;
    fpu_val_6_1 - fpu_val_7_9;
    int16_t result = (fpu_val_6_1 < fpu_val_7_9 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_6_1, fpu_val_7_9) ? 1 : 0) << 0xa | (fpu_val_6_1 == fpu_val_7_9 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        long double fpu_val_7_11 = *param_2 + 16.0f;
        long double f0_1 = g_bcabb8;
        fpu_val_7_11 - f0_1;
        result = (fpu_val_7_11 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            long double fpu_val_7_13 = param_2[1] - 16.0f;
            long double fpu_val_6_3 = g_bcabbc + g_bcabc4;
            fpu_val_6_3 - fpu_val_7_13;
            result = (fpu_val_6_3 < fpu_val_7_13 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_3, fpu_val_7_13) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == fpu_val_7_13 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 0x41))
            {
                long double fpu_val_7_15 = param_2[1] + 16.0f;
                long double f1_1 = g_bcabbc;
                fpu_val_7_15 - f1_1;
                result = (fpu_val_7_15 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_15, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_15 == f1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    int32_t* i_1 = context;

                    for (int32_t* i = *i_1; i; i = *i_1)
                        i_1 = i;

                    do
                    {
                        float item_14 = item_1c * i_1[2] + *param_2;
                        float item_10_1 = item_18 * i_1[2] + param_2[1];
                        float item_c = i_1[4] * *param_3;
                        float item_8_1 = i_1[5] * param_3[1];
                        float item_4_1 = i_1[6] * param_3[2];
                        result = i_1[8](&item_c, &item_14, i_1);
                        i_1 = i_1[1];
                    } while (i_1);
                }
            }
        }
    }

    return result;
}
