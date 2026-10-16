#include "004BE9D0-Sys_UnhandledOpcode.h"
/* 0x004be9d0 Sys_UnhandledOpcode full linked: callers=0 callees=2 */
int32_t sub_4be9d0(int32_t* a1)

{
    char* eax_1 = *a1 + a1[5];
    char ecx_1 = *eax_1;
    int32_t ecx_2;

    if (ecx_1 == 7)
        ecx_2 = 3;
    else if (ecx_1 == 0xb)
        ecx_2 = 4;
    else
    {
        Error_Show("Unhandled opcode.");

        while (true)
            /* nop */
    }

    sub_4bce40(a1, &eax_1[1], ecx_2);
    int32_t edx = a1[5];
    int32_t i = 0xffffffff;
    int32_t edi = *a1 + edx + 1;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    a1[5] = ~i - 1 + edx + 2;
    return 0;
}
