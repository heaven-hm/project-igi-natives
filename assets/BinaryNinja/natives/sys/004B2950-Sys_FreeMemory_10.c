// IGI native provenance: Sys_FreeMemory_10 - 0x004B2950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B2950-Sys_FreeMemory_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_10.h"
long double Sys_FreeMemory_10(float* context, float* param_2)

{
    long double fpu_val_7_1 = *context - *param_2;
    long double fpu_val_6_1 = context[1] - param_2[1];
    return sqrtl(fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_1 * fpu_val_7_1);
}
