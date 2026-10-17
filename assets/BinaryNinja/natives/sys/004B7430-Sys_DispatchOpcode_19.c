// Original IGI.EXE function: Sys_DispatchOpcode_19 (VA 0x004B7430; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_19.h"
int32_t Sys_DispatchOpcode_19(void* a1, int32_t a2)

{
    int32_t result = *(a1 + 8);
    *(a1 + 8) = result + 1;
    *(a1 + (result << 2) + 0x14) = a2;
    return result;
}
