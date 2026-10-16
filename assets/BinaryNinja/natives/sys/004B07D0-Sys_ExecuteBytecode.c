#include "Sys_ExecuteBytecode.h"
int32_t Sys_ExecuteBytecode(int32_t* a1, int32_t* a2, int32_t* a3, int32_t a4, int32_t* a5, int32_t a6, int32_t a7)

{
    int32_t dstD = a4;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t i_1 = 0;

    if (~i - 1 > 0)
    {
        int32_t dstD1 = a7;

        do
        {
            if (Sys_AllocateMemory(&a7, a3, i_1 + a4, a5, a6, dstD1))
            {
                if (a1)
                    *a1 = i_1;

                if (a2)
                    *a2 = a7;

                return 1;
            }

            i_1 += 1;
        } while (i_1 < ~i - 1);
    }

    return 0;
}
