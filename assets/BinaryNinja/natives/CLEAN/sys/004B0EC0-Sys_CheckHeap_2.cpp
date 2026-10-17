// IGI native provenance: Sys_CheckHeap_2 - 0x004B0EC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0EC0-Sys_CheckHeap_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_2.h"
int32_t Sys_CheckHeap_2(int32_t context, int32_t param_2, int32_t param_3)

{
    int32_t result = param_2 + context * 0x82;
    *((result << 2) + &g_a950a4) = param_3;
    return result;
}
