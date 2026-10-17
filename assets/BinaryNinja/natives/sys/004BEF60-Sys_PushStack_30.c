// Original IGI.EXE function: Sys_PushStack_30 (VA 0x004BEF60; static CFG gate FAIL, CFG score 0.778).
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
