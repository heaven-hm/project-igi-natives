// IGI native provenance: Sys_ExecuteBytecode_3 - 0x004B0FD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B0FD0-Sys_ExecuteBytecode_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ExecuteBytecode_3.h"
int32_t Sys_ExecuteBytecode_3(int32_t context)

{
    int32_t entity_val = g_a94a64;
    int32_t data_val = g_942304 - 1;
    g_942304 = data_val;
    *((data_val << 2) + &g_942308) = entity_val;
    return Sys_FreeMemory_3(context);
}
