// IGI native provenance: Sys_PopStack_9 - 0x004B2840 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B2840-Sys_PopStack_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_9.h"
int32_t Sys_PopStack_9(double context) {
    long double fpu7 = context;
    long double f0 = -1.0;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        return Terrain_CalculateNormals_3(-1.0);

    long double fpu_val_7_3 = context;
    long double f1 = 1.0;
    fpu_val_7_3 - f1;

    if (!(*(&((fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        context = 0;
        *(&context + 4) = 0x3ff00000;
    }

    return Terrain_CalculateNormals_3(context);
}
