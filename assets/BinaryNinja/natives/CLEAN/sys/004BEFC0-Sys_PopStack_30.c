// IGI native provenance: Sys_PopStack_30 - 0x004BEFC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BEFC0-Sys_PopStack_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_30.h"
int32_t Sys_PopStack_30(void* context)

{
    int32_t result = Sys_ExecuteBytecode_2(*(context + 4));
    *(context + 4) = 0;
    return result;
}
