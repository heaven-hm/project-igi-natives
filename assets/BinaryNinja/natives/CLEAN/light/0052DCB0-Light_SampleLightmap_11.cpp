// IGI native provenance: Light_SampleLightmap_11 - 0x0052DCB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052DCB0-Light_SampleLightmap_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_SampleLightmap_11.h"
long double Light_SampleLightmap_11(float context, float param_2, int32_t param_3)

{
    float data_1 = context;
    double* entity_val = param_2;
    long double fpu_val_7_2 = fabsl(*(data_1 + 0x4870) - *entity_val);
    context = fabsl(*(data_1 + 0x4878) - entity_val[1]);
    param_2 = fabsl(*(data_1 + 0x4880) - *(data_1 + 0x4a94));
    long double fpu_val_6_6 = context;
    long double f0 = param_2;
    fpu_val_6_6 - f0;
    long double fpu_val_6_7;

    fpu_val_6_7 = *(&((fpu_val_6_6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_6, f0) ? 1 : 0) << 0xa
        | (fpu_val_6_6 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? param_2 : context;

    fpu_val_7_2 - fpu_val_6_7;

    if (*(&((fpu_val_7_2 < fpu_val_6_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, fpu_val_6_7) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == fpu_val_6_7 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
    {
        long double fpu_val_7_4 = context;
        long double f1_1 = param_2;
        fpu_val_7_4 - f1_1;

        fpu_val_7_2 = *(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1)
            & 0x41 ? param_2 : context;
    }

    long double fpu_val_6_9 = param_3;
    long double result = (fpu_val_6_9 * 1.5f - fpu_val_7_2) / (fpu_val_6_9 * 0.5f);
    long double fpu_val_6_11 = 0.0f;
    fpu_val_6_11 - result;

    if (!(*(&((fpu_val_6_11 < result ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_11, result) ? 1 : 0) << 0xa
            | (fpu_val_6_11 == result ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        return 0.0f;

    long double fpu_val_6_12 = 1.0f;
    fpu_val_6_12 - result;

    if (!(*(&((fpu_val_6_12 < result ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, result) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == result ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return result;

    return 1.0f;
}
