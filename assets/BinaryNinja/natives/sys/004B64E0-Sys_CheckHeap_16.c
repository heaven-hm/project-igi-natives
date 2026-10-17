// IGI native provenance: Sys_CheckHeap_16 - 0x004B64E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B64E0-Sys_CheckHeap_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_16.h"
int32_t Sys_CheckHeap_16(void* context)

{
    return Is_ResourceLoaded(context, nullptr);
}
