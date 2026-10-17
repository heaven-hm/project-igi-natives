// IGI native provenance: Sys_CheckHeap_17 - 0x004B6E30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6E30-Sys_CheckHeap_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CheckHeap_17.h"
int32_t Sys_CheckHeap_17(int32_t* context)

{
    int32_t* source_val = *(*context + 8);
    Sys_ReadFileBlock_17(source_val);
    Sys_ExecuteBytecode_2(source_val);
    return Sys_ExecuteBytecode_2(context);
}
