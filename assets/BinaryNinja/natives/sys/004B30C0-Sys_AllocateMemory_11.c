// IGI native provenance: Sys_AllocateMemory_11 - 0x004B30C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B30C0-Sys_AllocateMemory_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_11.h"
int32_t Sys_AllocateMemory_11(double* context, double param_2)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_OpenFileStream_11(context);
    long double fpu_val_7_1 = 1.0 / fp0;
    *context = fpu_val_7_1 * *context * param_2;
    context[1] = fpu_val_7_1 * context[1] * param_2;
    context[2] = fpu_val_7_1 * context[2] * param_2;
    return result;
}
