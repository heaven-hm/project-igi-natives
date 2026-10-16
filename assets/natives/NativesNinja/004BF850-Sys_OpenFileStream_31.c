#include "004BF850-Sys_OpenFileStream_31.h"
/* 0x004bf850 Sys_OpenFileStream_31 full linked: callers=1 callees=7 */
int32_t sub_4bf850(int32_t* a1, int32_t** a2)

{
    sub_4bf3a0(a1);
    int32_t* eax = Mem_Alloc(0x14, 4);
    __builtin_memset(eax, 0, 0x14);
    eax[1] = 0;
    *eax = 0;
    eax[2] = 4;
    *a2 = eax;

    if (sub_4bfc70(a1, &a1[2]) && *a1[7] == 0x28)
    {
        int32_t var_10_1 = 0;

        if (sub_4b9ca0(a1, &eax[3]) && sub_4bfc70(a1, &a1[2]) && sub_4bf1f0(a1, &eax[4]))
            return 1;
    }

    return 0;
}
