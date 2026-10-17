// Original IGI.EXE function: Sys_ReadFileBlock_30 (VA 0x004BE950; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock_30.h"
int32_t Sys_ReadFileBlock_30(void* context, int32_t param_2)

{
    int32_t entity_1 = *(context + 0x1c) - 1;
    *(context + 0x18) -= 1;
    int32_t temp_2 = *(context + 0x28);
    *(context + 0x1c) = entity_1;
    *(temp_2 + (entity_1 << 2)) = 5;
    *(*(context + 0x24) + (*(context + 0x18) << 2)) = param_2;
    return param_2;
}
