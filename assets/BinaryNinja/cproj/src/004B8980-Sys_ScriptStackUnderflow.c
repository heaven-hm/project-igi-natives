#include "gi_platform.h"
#include "004B8980-Sys_ScriptStackUnderflow.h"
int32_t Sys_ScriptStackUnderflow(int32_t a1)

{
    int32_t valA2 = g_a9659c;

    if (valA2)
    {
        int32_t objC = g_a96598;
        g_a9659c = valA2 - 1;
        *(((valA2 - 1) << 2) + &g_a965c0) = objC;
        return Sys_ExecuteBytecode_23(a1);
    }

    Error_Show("Script: Stack underflow.");

    while (true)
        /* nop */
}
