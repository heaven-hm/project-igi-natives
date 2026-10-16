#include "Sys_ScriptStackOverflow.h"
int32_t Sys_ScriptStackOverflow()

{
    int32_t valA1 = g_a9659c;

    if (valA1 < 0x100)
    {
        g_a96598 = *((valA1 << 2) + &g_a965c0);
        g_a9659c = valA1 + 1;
        return valA1 + 1;
    }

    Error_Show("Script: Stack overflow.");

    while (true)
        /* nop */
}
