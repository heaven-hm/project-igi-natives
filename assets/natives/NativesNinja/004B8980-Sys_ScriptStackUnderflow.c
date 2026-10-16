#include "004B8980-Sys_ScriptStackUnderflow.h"
/* 0x004b8980 Sys_ScriptStackUnderflow full linked: callers=2 callees=2 */
int32_t sub_4b8980(int32_t a1)

{
    int32_t eax_2 = g_a9659c;

    if (eax_2)
    {
        int32_t ecx = g_a96598;
        g_a9659c = eax_2 - 1;
        *(((eax_2 - 1) << 2) + &g_a965c0) = ecx;
        return sub_4b8970(a1);
    }

    Error_Show("Script: Stack underflow.");

    while (true)
        /* nop */
}
