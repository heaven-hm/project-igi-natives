// Original IGI.EXE function: CameraBase_Cleanup_7 (VA 0x004F0380; static CFG gate PASS, CFG score 1.000).
#include "CameraBase_Cleanup_7.h"
int32_t* CameraBase_Cleanup_7(int32_t a1, int32_t* a2)

{
    int32_t dstD = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    *a2 = ~i;
    return a2;
}
