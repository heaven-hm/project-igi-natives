// IGI native provenance: Sys_DispatchOpcode_8 - 0x004B2640 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B2640-Sys_DispatchOpcode_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_8.h"
int32_t __fastcall Sys_DispatchOpcode_8(int32_t context)

{
    int32_t result = context;
    int32_t entity_val = g_546fbc;
    result = 0;
    int32_t entity_1 = *((entity_val << 2) + &g_a94e84);

    if (!entity_1)
        return 0;

    entity_1(&result);
    return result;
}
