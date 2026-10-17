// IGI native provenance: Sys_OpenFileStream_11 - 0x004B3130 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B3130-Sys_OpenFileStream_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_11.h"
long double Sys_OpenFileStream_11(double* context)

{
    long double fpu7 = context[2];
    long double fpu6 = context[1];
    long double fpu5 = *context;
    return sqrtl(fpu5 * fpu5 + fpu6 * fpu6 + fpu7 * fpu7);
}
