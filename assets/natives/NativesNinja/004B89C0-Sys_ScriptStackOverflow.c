#include "004B89C0-Sys_ScriptStackOverflow.h"
/* 0x004b89c0 Sys_ScriptStackOverflow full linked: callers=2 callees=1 */
int32_t sub_4b89c0()

{
    int32_t eax_1 = g_a9659c;

    if (eax_1 < 0x100)
    {
        g_a96598 = *((eax_1 << 2) + &g_a965c0);
        g_a9659c = eax_1 + 1;
        return eax_1 + 1;
    }

    Error_Show("Script: Stack overflow.");

    while (true)
        /* nop */
}
