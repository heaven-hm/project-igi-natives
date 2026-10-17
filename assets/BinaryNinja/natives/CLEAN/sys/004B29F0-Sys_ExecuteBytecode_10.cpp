// IGI native provenance: Sys_ExecuteBytecode_10 - 0x004B29F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B29F0-Sys_ExecuteBytecode_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_10.h"
long double Sys_ExecuteBytecode_10(double* context, double* param_2)

{
    return context[1] * param_2[1] + *context * *param_2;
}
