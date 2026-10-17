// Original IGI.EXE function: AIGraph_Setup (VA 0x00509610; static CFG gate PASS, CFG score 1.000).
#include "AIGraph_Setup.h"
int32_t AIGraph_Setup(void* a1)

{
    void* valA = *(a1 + 0xb8);

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        *(a1 + 0xb8) = 0;
    }

    return (*((Script_FormatString_21() << 2) + &g_a976e0))(a1);
}
