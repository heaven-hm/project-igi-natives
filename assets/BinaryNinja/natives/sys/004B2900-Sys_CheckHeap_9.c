// IGI native provenance: Sys_CheckHeap_9 - 0x004B2900 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B2900-Sys_CheckHeap_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_9.h"
int32_t Sys_CheckHeap_9(float* context)

{
    int32_t result;
    long double fp0;
    fp0 = Sys_AllocateMemory_10(context);
    long double fpu_val_7_1 = 1.0 / fp0;
    *context = *context * fpu_val_7_1;
    context[1] = context[1] * fpu_val_7_1;
    return result;
}
