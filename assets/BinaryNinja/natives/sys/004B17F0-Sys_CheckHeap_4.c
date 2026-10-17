// Original IGI.EXE function: Sys_CheckHeap_4 (VA 0x004B17F0; static CFG gate FAIL, CFG score 0.667).
#include "Sys_CheckHeap_4.h"
int32_t Sys_CheckHeap_4(int32_t* context, int32_t param_2)

{
    int32_t entity_val = *context;
    return (*(entity_val * 0x8c + &g_9436e4))(entity_val, context, param_2);
}
