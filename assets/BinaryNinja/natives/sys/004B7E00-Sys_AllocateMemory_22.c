// IGI native provenance: Sys_AllocateMemory_22 - 0x004B7E00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7E00-Sys_AllocateMemory_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_22.h"
int32_t Sys_AllocateMemory_22(int32_t* context)

{
    return Sys_CloseFileStream_21(*context);
}
