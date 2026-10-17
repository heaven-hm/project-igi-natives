// IGI native provenance: Weapon_CycleFireMode - 0x004719D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004719D0-Weapon_CycleFireMode.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_CycleFireMode.h"
int32_t Weapon_CycleFireMode(float* context, int32_t* param_2)

{
    long double fpu7 = *context;
    long double f0 = 0.0f;
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        long double fpu_val_7_2 = *context - context[2];
        long double fpu_val_6_1 = 0.0f;
        fpu_val_6_1 - fpu_val_7_2;

        if (*(&((fpu_val_6_1 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_2) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double fpu_val_6_2 = 1.0f;
            fpu_val_6_2 - fpu_val_7_2;

            if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
                    | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                fpu_val_7_2 = 1.0f;
        }
        else
            fpu_val_7_2 = 0.0f;

        *context = fpu_val_7_2;
    }

    if (context[3] > 0)
    {
        int32_t result = context[3] - 1;
        context[3] = result;
        return result;
    }

    long double fp0 = Sys_AllocateMemory_14(param_2);
    long double f1 = *context;
    fp0 - f1;
    long double fpu_val_7_6;

    if (*(&((fp0 < f1 ? 1 : 0) << 8 | (FCMP_UO(fp0, f1) ? 1 : 0) << 0xa
            | (fp0 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
        fpu_val_7_6 = *context;
    else
        fpu_val_7_6 = Sys_AllocateMemory_14(param_2);

    *context = fpu_val_7_6;
    int32_t item_8 = (Sys_AllocateMemory_14(param_2) + 1.0f) * context[4] * 0.5f;
    context[3] = item_8;
    context[3] = item_8 - 1;
    return item_8 - 1;
}
