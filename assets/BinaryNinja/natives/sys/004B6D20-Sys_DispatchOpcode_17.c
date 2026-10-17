// Original IGI.EXE function: Sys_DispatchOpcode_17 (VA 0x004B6D20; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_17.h"
int32_t Sys_DispatchOpcode_17(void* a1)

{
    int32_t valA = 0;
    valA = *(a1 + 0x14);
    return *(*(a1 + 8) + valA * 0x24 + 0x10);
}
