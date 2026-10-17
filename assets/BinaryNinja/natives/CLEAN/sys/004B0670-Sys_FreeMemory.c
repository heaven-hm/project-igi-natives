// IGI native provenance: Sys_FreeMemory - 0x004B0670 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0670-Sys_FreeMemory.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory.h"
int32_t Sys_FreeMemory(int32_t context, int32_t param_2, int32_t param_3)

{
    return *((param_3 << 8) + context + param_2);
}
