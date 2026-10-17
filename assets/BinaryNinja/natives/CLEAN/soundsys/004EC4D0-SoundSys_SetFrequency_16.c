// IGI native provenance: SoundSys_SetFrequency_16 - 0x004EC4D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EC4D0-SoundSys_SetFrequency_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_SetFrequency_16.h"
int32_t* SoundSys_SetFrequency_16(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, float param_6, float param_7, float param_8)

{
    long double fpu7 = param_6;
    long double f0 = 0.0f;
    fpu7 - f0;
    float item_c = param_6;
    float item_8 = param_7;
    float item_4 = param_8;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_4ec51e:
        long double fpu_val_7_3 = param_8;
        long double fpu_val_6_1 = param_7;
        long double fpu_val_5_1 = param_6;
        long double fpu_val_7_5 =
            1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_3 * fpu_val_7_3);
        item_c = param_6 * fpu_val_7_5;
        item_8 = param_7 * fpu_val_7_5;
        item_4 = param_8 * fpu_val_7_5;
    }
    else
    {
        long double fpu_val_7_1 = param_7;
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;

        if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4ec51e;

        long double fpu_val_7_2 = param_8;
        long double f2_1 = 0.0f;
        fpu_val_7_2 - f2_1;

        if (!(*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_4ec51e;
    }

    context[1] = item_c;
    context[2] = item_8;
    context[3] = item_4;
    context[4] = param_3;
    context[5] = param_4;
    context[6] = param_5;
    *context = param_2;
    return context;
}
