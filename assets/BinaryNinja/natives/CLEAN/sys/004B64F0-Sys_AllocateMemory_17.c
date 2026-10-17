// IGI native provenance: Sys_AllocateMemory_17 - 0x004B64F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B64F0-Sys_AllocateMemory_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_17.h"
int32_t Sys_AllocateMemory_17(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, int32_t param_9)

{
    return Sys_FreeMemory_8(context[1] + param_2 * 0x24, *context, param_4, param_5, param_6, param_7, param_8, param_9, param_3);
}
