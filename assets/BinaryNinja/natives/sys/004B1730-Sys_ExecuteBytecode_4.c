// Original IGI.EXE function: Sys_ExecuteBytecode_4 (VA 0x004B1730; static CFG gate FAIL, CFG score 0.667).
#include "Sys_ExecuteBytecode_4.h"
int32_t Sys_ExecuteBytecode_4(int32_t* context, int32_t param_2, int32_t param_3)

{
    int32_t entity_val = *context;
    return (*(entity_val * 0x8c + &g_9436c8))(entity_val, context, param_2, param_3);
}
