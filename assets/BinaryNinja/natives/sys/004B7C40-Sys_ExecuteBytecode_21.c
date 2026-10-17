// Original IGI.EXE function: Sys_ExecuteBytecode_21 (VA 0x004B7C40; static CFG gate FAIL, CFG score 0.667).
#include "Sys_ExecuteBytecode_21.h"
int32_t Sys_ExecuteBytecode_21(void* context)

{
    int32_t entity_1 = *(context + 6) << 1;
    memset(memset(*(context + 0xc), 0, entity_1 & 0xfffffffc), 0, entity_1 & 3);
    int32_t entity_6 = *(context + 4) * *(context + 6);
    memset(memset(context + 0x10, 0, entity_6 & 0xfffffffc), 0, entity_6 & 3);
    return 0;
}
