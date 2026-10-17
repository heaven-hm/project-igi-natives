// Original IGI.EXE function: Sys_DispatchOpcode_3 (VA 0x004B1000; static CFG gate FAIL, CFG score 0.667).
#include "Sys_DispatchOpcode_3.h"
int32_t Sys_DispatchOpcode_3(int32_t context, int32_t param_2, int32_t param_3)

{
    return (*(((param_2 + context * 0x82) << 2) + &g_a950a4))(param_3);
}
