// Original IGI.EXE function: Sys_InternalError_3 (VA 0x004BE8F0; static CFG gate PASS, CFG score 1.000).
#include "Sys_InternalError_3.h"
int32_t Sys_InternalError_3(int32_t* a1)

{
    int32_t tmpD = 0;
    char* valA1 = *a1 + a1[5];
    tmpD = *valA1;
    int32_t objC1 = *(valA1 + 1);

    if (tmpD == 2)
    {
        Sys_PushStack_29(a1, objC1);
        int32_t valA8 = a1[5] + 5;
        a1[5] = valA8;
        return valA8;
    }

    if (tmpD == 6)
    {
        Sys_ReadFileBlock_30(a1, objC1);
        int32_t valA6 = a1[5] + 5;
        a1[5] = valA6;
        return valA6;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
