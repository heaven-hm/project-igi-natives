// IGI native provenance: Sys_ExecuteBytecode_4 - 0x004B1730 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B1730-Sys_ExecuteBytecode_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_4.h"
int32_t Sys_ExecuteBytecode_4(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t entity_val = *context;
    return (*(entity_val * 0x8c + &g_9436c8))(entity_val, context, param_2, param_3);
}
