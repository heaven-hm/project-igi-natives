// IGI native provenance: Sys_FreeMemory_20 - 0x004B7570 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7570-Sys_FreeMemory_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_20.h"
int32_t Sys_FreeMemory_20(void* context)

{
    if (!context)
        return 0;

    return *(context + 0x10);
}
