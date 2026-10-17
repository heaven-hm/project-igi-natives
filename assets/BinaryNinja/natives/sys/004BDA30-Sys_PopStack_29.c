// Original IGI.EXE function: Sys_PopStack_29 (VA 0x004BDA30; static CFG gate PASS, CFG score 1.000).
#include "Sys_PopStack_29.h"
void* Sys_PopStack_29(void* context, float param_2)

{
    int32_t entity_1 = *(context + 0x1c) - 1;
    *(context + 0x18) -= 1;
    int32_t temp_2 = *(context + 0x28);
    *(context + 0x1c) = entity_1;
    *(temp_2 + (entity_1 << 2)) = 2;
    *(*(context + 0x24) + (*(context + 0x18) << 2)) = param_2;
    return context;
}
