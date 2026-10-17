// IGI native provenance: Sys_AllocateMemory_29 - 0x004BD3D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BD3D0-Sys_AllocateMemory_29.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_29.h"
int32_t Sys_AllocateMemory_29(int32_t context, int32_t param_2, int32_t param_3)

{
    *(((param_2 + context * 6) << 2) + &g_a96108) = param_3;
    return param_3;
}
