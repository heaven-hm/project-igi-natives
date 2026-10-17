// IGI native provenance: Sys_PushStack_21 - 0x004B7CF0 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B7CF0-Sys_PushStack_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_21.h"
int32_t Sys_PushStack_21(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t data_val = Sys_ReadFileBlock_3();
    int32_t* item_c = context;
    *context = data_val;
    return (*((g_a84a48 << 2) + &g_a94e84))(&item_c, item_c, param_3, param_2);
}
