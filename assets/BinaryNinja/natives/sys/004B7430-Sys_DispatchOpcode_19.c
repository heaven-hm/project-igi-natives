// Original IGI.EXE function: Sys_DispatchOpcode_19 (VA 0x004B7430; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_19.h"
int32_t Sys_DispatchOpcode_19(void* context, int32_t param_2)

{
    int32_t result = *(context + 8);
    *(context + 8) = result + 1;
    *(context + (result << 2) + 0x14) = param_2;
    return result;
}
