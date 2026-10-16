#include "Sys_CloseFileStream_27.h"
int32_t Sys_CloseFileStream_27(int32_t* a1, int32_t a2)

{
    int32_t dstD = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    return Sys_CloseFileStream_4(a1, a2, ~i - 1);
}
