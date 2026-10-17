// IGI native provenance: Sys_FreeMemory_14 - 0x004B47C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B47C0-Sys_FreeMemory_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_14.h"
uint32_t Sys_FreeMemory_14(int32_t* context, int32_t param_2)

{
    return COMBINE(0, Sys_CheckHeap_13(context)) % param_2;
}
