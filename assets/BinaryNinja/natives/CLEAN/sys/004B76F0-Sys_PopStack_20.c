// IGI native provenance: Sys_PopStack_20 - 0x004B76F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B76F0-Sys_PopStack_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_20.h"
int32_t Sys_PopStack_20(void* context, int32_t param_2, int32_t param_3, char param_4)

{
    *(*(context + 4) * param_3 + context + param_2 + 0x10) = param_4;
    return param_2;
}
