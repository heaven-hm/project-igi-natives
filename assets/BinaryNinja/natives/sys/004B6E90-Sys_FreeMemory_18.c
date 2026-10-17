// IGI native provenance: Sys_FreeMemory_18 - 0x004B6E90 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6E90-Sys_FreeMemory_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_18.h"
void* Sys_FreeMemory_18(int32_t* context, char* param_2)

{
    Sys_ExecuteBytecode_21(*context);
    return Sys_AllocateMemory_21(*context, param_2, 0, nullptr);
}
