// IGI native provenance: Sys_FreeMemory_6 - 0x004B1CC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B1CC0-Sys_FreeMemory_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_FreeMemory_6.h"
int32_t Sys_FreeMemory_6(int32_t context, int32_t param_2)

{
    int32_t result = context * 0x23;
    *((result << 2) + &g_9436cc) = param_2;
    return result;
}
