// IGI native provenance: Sys_ReadFileBlock_11 - 0x004B3160 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B3160-Sys_ReadFileBlock_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_11.h"
long double Sys_ReadFileBlock_11(double* context)

{
    long double fpu7 = context[2];
    long double fpu6 = context[1];
    long double fpu5 = *context;
    return fpu5 * fpu5 + fpu6 * fpu6 + fpu7 * fpu7;
}
