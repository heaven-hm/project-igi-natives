// IGI native provenance: Sys_ExecuteBytecode_13 - 0x004B4570 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B4570-Sys_ExecuteBytecode_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_13.h"
long double Sys_ExecuteBytecode_13(float* context, float* param_2)

{
    return context[3] * param_2[3] + context[2] * param_2[2] + context[1] * param_2[1] + *context * *param_2;
}
