#include "gi_platform.h"
#include "004B5AF0-Sys_ResolveSymbol_15.h"
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
