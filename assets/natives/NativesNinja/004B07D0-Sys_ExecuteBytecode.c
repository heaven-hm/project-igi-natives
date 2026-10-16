#include "004B07D0-Sys_ExecuteBytecode.h"
/* 0x004b07d0 Sys_ExecuteBytecode full linked: callers=1 callees=1 */
int32_t sub_4b07d0(int32_t* a1, int32_t* a2, int32_t* a3, int32_t a4, int32_t* a5, int32_t a6, int32_t a7)

{
    int32_t edi = a4;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t i_1 = 0;

    if (~i - 1 > 0)
    {
        int32_t edi_1 = a7;

        do
        {
            if (sub_4b0270(&a7, a3, i_1 + a4, a5, a6, edi_1))
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
