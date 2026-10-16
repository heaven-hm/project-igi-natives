#include "004BE8F0-Sys_InternalError_3.h"
/* 0x004be8f0 Sys_InternalError_3 full linked: callers=0 callees=3 */
int32_t sub_4be8f0(int32_t* a1)

{
    int32_t edx = 0;
    char* eax_1 = *a1 + a1[5];
    edx = *eax_1;
    int32_t ecx_1 = *(eax_1 + 1);

    if (edx == 2)
    {
        sub_4bda00(a1, ecx_1);
        int32_t eax_8 = a1[5] + 5;
        a1[5] = eax_8;
        return eax_8;
    }

    if (edx == 6)
    {
        sub_4be950(a1, ecx_1);
        int32_t eax_6 = a1[5] + 5;
        a1[5] = eax_6;
        return eax_6;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
