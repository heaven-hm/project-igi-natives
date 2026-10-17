// IGI native provenance: Sys_PushStack_18 - 0x004B7030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7030-Sys_PushStack_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_18.h"
int32_t Heap_FreeEntry(int32_t* context)

{
    Sys_ReadFileBlock_17(context);
    return Sys_ExecuteBytecode_2(context);
}
