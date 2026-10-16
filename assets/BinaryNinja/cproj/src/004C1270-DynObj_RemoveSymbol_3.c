#include "gi_platform.h"
#include "004C1270-DynObj_RemoveSymbol_3.h"
int32_t DynObj_RemoveSymbol_3(float a1, int32_t* a2)

{
    int32_t* srcS = a1;
    double v_30 = (*(int32_t*)(uintptr_t)(*a2 + srcS[2] + 1));
    char v_20;
    Game_DataSymbolLoad(&v_20, "%f\r\n");
    void* dstD = &v_20;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    Sys_CloseFileStream_4(*srcS, &v_20, ~i - 1);
    int32_t result = srcS[2] + 5;
    srcS[2] = result;
    return result;
}
