// IGI native provenance: AI_TakeCover_30 - 0x0046F9D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046F9D0-AI_TakeCover_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_TakeCover_30.h"
int32_t AI_TakeCover_30(void* context)

{
    void* entity_val = *(context + 0x1b8);
    long double fpu7 = *(context + 0x1bc);
    long double fpu6 = *(entity_val + 0x24);
    fpu6 - fpu7;

    if (*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
        | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_2 = *(context + 0x1bc);
        long double fpu_val_6_1 = *(entity_val + 0x20);
        fpu_val_6_1 - fpu_val_7_2;

        if (*(&((fpu_val_6_1 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_2) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_2 ? 1 : 0) << 0xe) + 1) & 1)
            *(context + 0x1bc) = *(entity_val + 0x20);
    }
    else
        *(context + 0x1bc) = *(entity_val + 0x24);

    long double fpu_val_7_3 = *(entity_val + 0x28);
    long double f0 = 6.2831853071795889;
    fpu_val_7_3 - f0;
    int16_t result = (fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double fpu_val_7_5 = -(*(entity_val + 0x28));
        long double fpu_val_6_2 = *(context + 0x1c0);
        fpu_val_6_2 - fpu_val_7_5;
        result = (fpu_val_6_2 < fpu_val_7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_5) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_5 ? 1 : 0) << 0xe | 0x3800;

        if (*(&result + 1) & 1)
            *(context + 0x1c0) = fpu_val_7_5;
        else
        {
            long double fpu_val_7_7 = *(context + 0x1c0);
            long double fpu_val_6_3 = *(entity_val + 0x28);
            fpu_val_6_3 - fpu_val_7_7;
            result = (fpu_val_6_3 < fpu_val_7_7 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_3, fpu_val_7_7) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == fpu_val_7_7 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
                *(context + 0x1c0) = *(entity_val + 0x28);
        }
    }

    return result;
}
