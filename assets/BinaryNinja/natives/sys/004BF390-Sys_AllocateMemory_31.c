// IGI native provenance: Sys_AllocateMemory_31 - 0x004BF390 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BF390-Sys_AllocateMemory_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_31.h"
int32_t Sys_AllocateMemory_31(int32_t* context)

{
    return *(*context + 0xc) + 1;
}
