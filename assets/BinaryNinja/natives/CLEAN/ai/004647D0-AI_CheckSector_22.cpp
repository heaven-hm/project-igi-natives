// IGI native provenance: AI_CheckSector_22 - 0x004647D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004647D0-AI_CheckSector_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_CheckSector_22.h"
int32_t AI_CheckSector_22(void* context)

{
    long double fpu7 = *(context + 0x1cc);
    long double f0 = *(context + 0x1d0);
    fpu7 - f0;
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
        long double fpu_val_7_1 = *(context + 0x1d8);
        long double f1_1 = *(context + 0x1dc);
        fpu_val_7_1 - f1_1;
        result = (fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x40)
        {
            result = 1;
            return result;
        }
    }

    result = 0;
    return result;
}
