// IGI native provenance: Sys_AllocateMemory_23 - 0x004B8830 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B8830-Sys_AllocateMemory_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_AllocateMemory_23.h"
int32_t Sys_AllocateMemory_23(int32_t context, int32_t param_2)

{
    int32_t item_18 = param_2;
    double item_10 = param_2;
    char* item_8 = &g_567c74;
    memcpy(context, &item_18, 0x18);
    return context;
}
