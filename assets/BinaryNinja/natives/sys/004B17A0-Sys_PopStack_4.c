// IGI native provenance: Sys_PopStack_4 - 0x004B17A0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B17A0-Sys_PopStack_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_4.h"
int32_t Sys_PopStack_4(int32_t* context)

{
    int32_t entity_val = *context;
    return (*(entity_val * 0x8c + &g_9436e0))(entity_val, context);
}
