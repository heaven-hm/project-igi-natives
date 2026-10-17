// Original IGI.EXE function: Camera_SetFieldOfView_5 (VA 0x004A54D0; static CFG gate PASS, CFG score 1.000).
#include "Camera_SetFieldOfView_5.h"
char* Camera_SetFieldOfView_5(int32_t a1, char a2)

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

    int32_t i_1 = -((i + 1));
    void* dstD1 = dstD - 1;

    while (i_1)
    {
        bool cond_1_1 = a2 != *dstD1;
        dstD1 -= 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    if (*(dstD1 + 1) == a2)
        return dstD1 + 1;

    return nullptr;
}
