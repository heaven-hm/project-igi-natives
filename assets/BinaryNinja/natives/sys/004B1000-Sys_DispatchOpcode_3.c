// Original IGI.EXE function: Sys_DispatchOpcode_3 (VA 0x004B1000; static CFG gate FAIL, CFG score 0.667).
#include "Sys_DispatchOpcode_3.h"
int32_t Sys_DispatchOpcode_3(int32_t a1, int32_t a2, int32_t a3)

{
    return (*(((a2 + a1 * 0x82) << 2) + &g_a950a4))(a3);
}
