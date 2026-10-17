// Original IGI.EXE function: Sys_ResolveSymbol_15 (VA 0x004B5AF0; static CFG gate PASS, CFG score 1.000).
#include "Sys_ResolveSymbol_15.h"
int32_t Sys_ResolveSymbol_15(char* a1, char* a2)

{
    char* dstD = a2;
    char i = *dstD;

    if (!i)
    {
        *a1 = 0;
        return i;
    }

    char* srcS = a1;

    do
    {
        int32_t i_1 = i;
        int32_t objC;
        i = Camera_ApplyWideScreen_28(objC);
        *srcS = i;
        i = dstD[1];
        srcS = &srcS[1];
        dstD = &dstD[1];
    } while (i);

    *srcS = i;
    return i;
}
