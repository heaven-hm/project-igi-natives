#include "004BC2C0-Sys_CloseFileStream_27.h"
/* 0x004bc2c0 Sys_CloseFileStream_27 full linked: callers=31 callees=1 */
int32_t sub_4bc2c0(int32_t* a1, int32_t a2)

{
    int32_t edi = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    return sub_4b1700(a1, a2, ~i - 1);
}
