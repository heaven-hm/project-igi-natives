// IGI native provenance: Sys_PushStack_19 - 0x004B7450 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7450-Sys_PushStack_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_19.h"
int32_t Sys_PushStack_19(int32_t context, int32_t param_2)

{
    *(context + (param_2 << 2) + 0x14) = 0;
    return param_2;
}
