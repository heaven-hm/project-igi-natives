// IGI native provenance: Sys_PushStack_30 - 0x004BEF60 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004BEF60-Sys_PushStack_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_30.h"
int32_t* Sys_PushStack_30(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    void* data_val = Mem_Alloc(g_a969c4, 4);
    context[1] = data_val;
    int32_t entity_val = g_a969c4;
    memset(memset(data_val, 0, entity_val & 0xfffffffc), 0, entity_val & 3);
    int32_t entity_4 = context[1];
    context[7] = param_2;
    context[4] = param_3;
    *context = entity_4;
    context[2] = 0;
    context[3] = 0;
    context[5] = 0;
    context[6] = param_4;
    return context;
}
