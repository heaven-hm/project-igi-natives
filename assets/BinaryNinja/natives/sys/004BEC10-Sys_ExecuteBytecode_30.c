// IGI native provenance: Sys_ExecuteBytecode_30 - 0x004BEC10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BEC10-Sys_ExecuteBytecode_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_30.h"
int32_t Sys_ExecuteBytecode_30(void* context, int32_t param_2)

{
    int32_t entity_1 = *(context + 0x1c) - 1;
    *(context + 0x18) -= 1;
    int32_t temp_2 = *(context + 0x28);
    *(context + 0x1c) = entity_1;
    *(temp_2 + (entity_1 << 2)) = 6;
    *(*(context + 0x24) + (*(context + 0x18) << 2)) = param_2;
    return param_2;
}
