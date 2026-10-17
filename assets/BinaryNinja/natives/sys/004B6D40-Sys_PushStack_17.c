// IGI native provenance: Sys_PushStack_17 - 0x004B6D40 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B6D40-Sys_PushStack_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_17.h"
int32_t Sys_PushStack_17(void* context)

{
    int32_t data_val = 0;
    data_val = *(context + 0x14);
    return *(*(context + 8) + data_val * 0x24 + 4) >> 0x10 & 1;
}
