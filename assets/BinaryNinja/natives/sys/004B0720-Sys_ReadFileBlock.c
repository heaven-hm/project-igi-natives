// Original IGI.EXE function: Sys_ReadFileBlock (VA 0x004B0720; static CFG gate PASS, CFG score 1.000).
#include "Sys_ReadFileBlock.h"
int32_t Sys_ReadFileBlock(int32_t a1, int32_t* a2, int32_t* a3, int32_t* a4, int32_t* a5, int32_t* a6)

{
    int32_t objC = *a2;
    int32_t result;
    int32_t ctxB;

    if (objC <= 0)
    {
        ctxB = 0xffffffff;
        result = 0;
    }
    else
    {
        objC -= 1;
        int32_t tmpD1 = objC * 5;
        ctxB = *(a1 + (tmpD1 << 2) + 0xc);
        int32_t srcS1 = *(a1 + (tmpD1 << 2) + 8);
        int32_t dstD1 = *(a1 + (tmpD1 << 2) + 4);
        int32_t flagP1 = *(a1 + (tmpD1 << 2));
        void* valA1 = a1 + (tmpD1 << 2);
        int32_t tmpD2 = *(valA1 + 0x10);

        if (tmpD2)
        {
            *(valA1 + 0x10) = tmpD2 - 1;
            objC += 1;
            *(valA1 + 8) -= 1;
        }

        if (a4)
            *a4 = srcS1;

        if (a5)
            *a5 = dstD1;

        if (a6)
            *a6 = flagP1;

        result = 1;
    }

    *a2 = objC;

    if (a3)
        *a3 = ctxB;

    return result;
}
