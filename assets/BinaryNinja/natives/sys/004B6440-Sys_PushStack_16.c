// Original IGI.EXE function: Sys_PushStack_16 (VA 0x004B6440; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_16.h"
int32_t Sys_PushStack_16(int32_t* context, void* param_2)

{
    void* source_val = param_2;

    if (!Is_ResourceLoaded(source_val, &param_2))
        return Sys_AllocateMemory_5(context, source_val);

    void* data_1 = param_2;
    *context = *(data_1 + 0x23c);
    context[1] = *(data_1 + 0x240);
    return 0;
}
