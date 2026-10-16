#include "004BE8B0-Sys_InternalError_2.h"
/* 0x004be8b0 Sys_InternalError_2 full linked: callers=0 callees=2 */
int32_t sub_4be8b0(int32_t* a1)

{
    char* eax_1 = *a1 + a1[5];

    if (*eax_1 == 4)
    {
        sub_4bda00(a1, *(eax_1 + 1));
        int32_t result = a1[5] + 3;
        a1[5] = result;
        return result;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
