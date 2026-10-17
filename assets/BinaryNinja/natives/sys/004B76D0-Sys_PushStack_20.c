// IGI native provenance: Sys_PushStack_20 - 0x004B76D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B76D0-Sys_PushStack_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_20.h"
int32_t Sys_PushStack_20(void* context)

{
    Sys_ExecuteBytecode_2(*(context + 0xc));
    *(context + 0xc) = 0;
    return Sys_ExecuteBytecode_2(context);
}
