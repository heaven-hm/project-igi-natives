// IGI native provenance: Sys_AllocateMemory_24 - 0x004B8B00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8B00-Sys_AllocateMemory_24.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_24.h"
int32_t Sys_AllocateMemory_24(int32_t* context, int32_t param_2)

{
    int32_t result = 0;
    result = param_2 < *context;
    return result;
}
