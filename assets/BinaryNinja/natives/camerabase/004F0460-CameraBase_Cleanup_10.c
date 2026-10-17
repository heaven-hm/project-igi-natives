// Original IGI.EXE function: CameraBase_Cleanup_10 (VA 0x004F0460; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Cleanup_10.h"
int32_t CameraBase_Cleanup_10(int32_t* a1, int32_t* a2)

{
    Script_TooFewParametersInLi(a2, 1);
    int32_t i = 0xffffffff;
    char* tmpD = *a1;
    char* dstD = tmpD;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD = &dstD[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    Sys_ResolveSymbol_23(a2[1], *a2, tmpD, ~i - 1);
    int32_t result = *a2 + 1;
    *a2 = result;
    return result;
}
