// IGI native provenance: Sys_PopStack_22 - 0x004B8060 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B8060-Sys_PopStack_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PopStack_22.h"
int32_t Sys_PopStack_22(int32_t context, int32_t param_2)

{
    int32_t item_8 = param_2;
    int32_t item_18 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    memcpy(context, &item_18, 0x18);
    return context;
}
