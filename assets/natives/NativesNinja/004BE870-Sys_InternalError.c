#include "004BE870-Sys_InternalError.h"
/* 0x004be870 Sys_InternalError full linked: callers=0 callees=2 */
int32_t sub_4be870(int32_t* a1)

{
    char* eax_1 = *a1 + a1[5];

    if (*eax_1 == 3)
    {
        sub_4bda00(a1, eax_1[1]);
        int32_t result = a1[5] + 2;
        a1[5] = result;
        return result;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
