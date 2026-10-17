// Original IGI.EXE function: Sys_DispatchOpcode_17 (VA 0x004B6D20; static CFG gate PASS, CFG score 1.000).
#include "Sys_DispatchOpcode_17.h"
int32_t Sys_DispatchOpcode_17(void* context)

{
    int32_t data_val = 0;
    data_val = *(context + 0x14);
    return *(*(context + 8) + data_val * 0x24 + 0x10);
}
