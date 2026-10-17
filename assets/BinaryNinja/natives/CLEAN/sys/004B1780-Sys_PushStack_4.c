// IGI native provenance: Sys_PushStack_4 - 0x004B1780 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B1780-Sys_PushStack_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_4.h"
int32_t Sys_PushStack_4(int32_t* context)

{
    int32_t entity_val = *context;
    return (*(entity_val * 0x8c + &g_9436d0))(entity_val, context);
}
