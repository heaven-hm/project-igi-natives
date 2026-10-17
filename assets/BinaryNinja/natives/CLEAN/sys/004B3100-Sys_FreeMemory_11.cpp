// IGI native provenance: Sys_FreeMemory_11 - 0x004B3100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B3100-Sys_FreeMemory_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_11.h"
int32_t Sys_FreeMemory_11(double* context)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_OpenFileStream_11(context);
    long double fpu_val_7_1 = 1.0 / fp0;
    *context = fpu_val_7_1 * *context;
    context[1] = fpu_val_7_1 * context[1];
    context[2] = fpu_val_7_1 * context[2];
    return result;
}
