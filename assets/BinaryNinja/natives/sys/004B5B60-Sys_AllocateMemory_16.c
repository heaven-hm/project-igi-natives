// IGI native provenance: Sys_AllocateMemory_16 - 0x004B5B60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5B60-Sys_AllocateMemory_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_16.h"
int32_t Sys_AllocateMemory_16(void* context)

{
    if (!Is_ResourceLoaded(context, nullptr))
        return Sys_DispatchOpcode_7(context);

    return 1;
}
