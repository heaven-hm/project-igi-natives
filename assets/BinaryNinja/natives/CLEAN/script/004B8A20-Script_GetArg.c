// IGI native provenance: Script_GetArg - 0x004B8A20 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B8A20-Script_GetArg.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_GetArg.h"
int32_t Script_GetArg(float context, int32_t param_2)

{
    if (!*(context + 4))
        return Sys_ReadFileBlock_24(*(*(context + 8) + (param_2 << 2)));

    int32_t temp_val;
    return Sys_AllocateMemory_28(context, temp_val, param_2, context, param_2);
}
