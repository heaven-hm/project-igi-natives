// IGI native provenance: Sys_ReadFileBlock_20 - 0x004B7590 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7590-Sys_ReadFileBlock_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_20.h"
int32_t* Sys_ReadFileBlock_20(int32_t* context, int32_t param_2)

{
    for (int32_t* i = context; i; i = Sys_PopStack_19(i))
    {
        if (*i == param_2)
            return i;
    }

    return nullptr;
}
