#include "gi_platform.h"
#include "004BE9D0-Sys_UnhandledOpcode.h"
int32_t Sys_UnhandledOpcode(int32_t* a1)

{
    char* valA1 = *a1 + a1[5];
    char objC1 = *valA1;
    int32_t objC2;

    if (objC1 == 7)
        objC2 = 3;
    else if (objC1 == 0xb)
        objC2 = 4;
    else
    {
        Error_Show("Unhandled opcode.");

        while (true)
            /* nop */
    }

    Sys_ReadFileBlock_28(a1, &valA1[1], objC2);
    int32_t tmpD = a1[5];
    int32_t i = 0xffffffff;
    int32_t dstD = *a1 + tmpD + 1;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    a1[5] = ~i - 1 + tmpD + 2;
    return 0;
}
