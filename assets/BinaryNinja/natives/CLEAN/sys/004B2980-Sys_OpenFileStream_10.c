// IGI native provenance: Sys_OpenFileStream_10 - 0x004B2980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B2980-Sys_OpenFileStream_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_OpenFileStream_10.h"
long double Sys_OpenFileStream_10(float* context, float* param_2)

{
    return context[1] * param_2[1] + *context * *param_2;
}
