// IGI native provenance: Door_Cleanup_2 - 0x00446470 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00446470-Door_Cleanup_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Door_Cleanup_2.h"
int32_t Door_Cleanup_2(void* context, double* param_2)

{
    long double fp0 = Sys_PushStack_11(param_2, context + 0x20);
    long double fpu6 = param_2[3];
    long double f0 = 0.0;
    fpu6 - f0;
    int16_t result = (fpu6 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f0) ? 1 : 0) << 0xa
        | (fpu6 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
        long double f1_1 = param_2[3];
        fp0 - f1_1;
        result = (fp0 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fp0, f1_1) ? 1 : 0) << 0xa
            | (fp0 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            return result;
    }

    param_2[3] = fp0;
    param_2[4] = context;
    return result;
}
