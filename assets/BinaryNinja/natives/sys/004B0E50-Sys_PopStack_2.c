// IGI native provenance: Sys_PopStack_2 - 0x004B0E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0E50-Sys_PopStack_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_2.h"
int32_t Sys_PopStack_2(int32_t context)

{
    *(context * 0x208 + &g_a952a4) = 0;
    return context;
}
