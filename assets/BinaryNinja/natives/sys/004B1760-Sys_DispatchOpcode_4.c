// Original IGI.EXE function: Sys_DispatchOpcode_4 (VA 0x004B1760; static CFG gate FAIL, CFG score 0.667).
#include "Sys_DispatchOpcode_4.h"
int32_t Sys_DispatchOpcode_4(int32_t* context)

{
    int32_t entity_val = *context;
    return (*(entity_val * 0x8c + &g_9436d4))(entity_val, context);
}
