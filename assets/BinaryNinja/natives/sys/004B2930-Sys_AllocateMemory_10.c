// IGI native provenance: Sys_AllocateMemory_10 - 0x004B2930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B2930-Sys_AllocateMemory_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_10.h"
long double Sys_AllocateMemory_10(float* context)

{
    long double fpu7 = context[1];
    long double fpu6 = *context;
    return sqrtl(fpu6 * fpu6 + fpu7 * fpu7);
}
