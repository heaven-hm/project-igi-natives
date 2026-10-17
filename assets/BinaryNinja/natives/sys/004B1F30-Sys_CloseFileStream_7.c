// Original IGI.EXE function: Sys_CloseFileStream_7 (VA 0x004B1F30; static CFG gate PASS, CFG score 1.000).
#include "Sys_CloseFileStream_7.h"
int32_t Sys_CloseFileStream_7(int32_t a1, int32_t a2 @ 0xc)

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

    int32_t objC = ~i;
    char* objC1 = objC - 1;

    if (objC - 1 < 0)
        return a1;

    char* srcS = &objC1[a2];

    while (true)
    {
        char tmpD1 = *srcS;

        if (tmpD1 == 0x2e)
        {
            objC1[a1] = 0;
            objC1 -= 1;
            break;
        }

        if (tmpD1 == 0x2f)
            break;

        if (tmpD1 == 0x5c)
            break;

        if (tmpD1 == 0x3a)
            break;

        *(a1 - a2 + srcS) = tmpD1;
        objC1 -= 1;
        srcS -= 1;

        if (objC1 < 0)
            return a1;
    }

    if (objC1 >= 0)
    {
        char* tmpD2 = &objC1[a1];
        void* i_2 = &objC1[1];
        void* i_1;

        do
        {
            *tmpD2 = *(a2 - a1 + tmpD2);
            tmpD2 -= 1;
            i_1 = i_2;
            i_2 -= 1;
        } while (i_1 != 1);
    }

    return a1;
}
