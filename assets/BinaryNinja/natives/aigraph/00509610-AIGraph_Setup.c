// Original IGI.EXE function: AIGraph_Setup (VA 0x00509610; static CFG gate PASS, CFG score 1.000).
#include "AIGraph_Setup.h"
int32_t AIGraph_Setup(void* context)

{
    void* data_val = *(context + 0xb8);

    if (data_val)
    {
        Sys_ExecuteBytecode_2(data_val);
        *(context + 0xb8) = 0;
    }

    return (*((Script_FormatString_21() << 2) + &g_a976e0))(context);
}
