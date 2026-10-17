// IGI native provenance: Human_Cleanup_3 - 0x0045FCD0 - CFG score 80.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0045FCD0-Human_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_Cleanup_3.h"
int32_t Human_Cleanup_3(void* context, void* param_2)

{
    void* flagP = *(context + 0x4ec);
    AI_FireWeapon_23(param_2, flagP);
    AI_TakeCover_23(param_2 + 0x18, *(context + 0x4ec));
    *(param_2 + 0x40) = *(flagP + 0x1e4);
    memcpy(param_2 + 0x44, context + 0x78, 0x28);
    int32_t result = *(flagP + 0x1e8);
    *(param_2 + 0x6c) = result;
    *(param_2 + 0x70) = *(context + 0x4f0);
    result = *(flagP + 0x13a);

    if (result)
    {
        memcpy(param_2, flagP + 0x140, 0x18);
        memcpy(param_2 + 0x18, flagP + 0x158, 0x28);
        *(param_2 + 0x70) = 4;
    }

    long double fpu7 = *(context + 0x1fc);
    long double f0 = 0.0f;
    fpu7 - f0;
    result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        long double fpu_val_7_1 = *(context + 0x15c);
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;
        result = (fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
            *(context + 0x4f4) ^= 1;
    }

    result = *(context + 0x4f4);

    if (result)
        *(param_2 + 0x70) = 2;

    return result;
}
