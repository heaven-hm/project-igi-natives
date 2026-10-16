#include "004B1E90-Sys_OpenFileStream_7.h"
/* 0x004b1e90 Sys_OpenFileStream_7 full linked: callers=6 callees=1 */
char* sub_4b1e90(char* a1, int32_t a2, int32_t a3)

{
    int32_t edi = a3;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    char* ecx_1 = ecx - 1;

    if (ecx != 1)
    {
        while (ecx_1[a3] != 0x2e)
        {
            char* temp1_1 = ecx_1;
            ecx_1 -= 1;

            if (temp1_1 == 1)
                break;
        }
    }

    char* result = &ecx_1[a3];

    if (!a1)
        return result;

    sub_4a5500(a1, result, a2 - 1);
    a1[a2 - 1] = 0;
    return result;
}
