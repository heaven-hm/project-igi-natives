// Original IGI.EXE function: Sys_InternalError_2 (VA 0x004BE8B0; static CFG gate PASS, CFG score 1.000).
#include "Sys_InternalError_2.h"
int32_t Sys_InternalError_2(int32_t* a1)

{
    char* valA1 = *a1 + a1[5];

    if (*valA1 == 4)
    {
        Sys_PushStack_29(a1, *(valA1 + 1));
        int32_t result = a1[5] + 3;
        a1[5] = result;
        return result;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
