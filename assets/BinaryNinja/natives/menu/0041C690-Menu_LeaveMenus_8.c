// Original IGI.EXE function: Menu_LeaveMenus_8 (VA 0x0041C690; static CFG gate FAIL, CFG score 0.667).
#include "Menu_LeaveMenus_8.h"
int32_t Menu_LeaveMenus_8(int32_t a1, int32_t a2)

{
    void* tmpD2 = g_57bbb0;
    int32_t valA = *(tmpD2 + 0x1254);
    int32_t objC1 = 0;

    if (valA > 0)
    {
        int32_t* tmpD = tmpD2 + 0x54;

        do
        {
            if (*tmpD == a2)
                return valA;

            objC1 += 1;
            tmpD = &tmpD[0x12];
        } while (objC1 < valA);
    }

    *(tmpD2 + valA * 0x48 + 0x54) = a2;
    int32_t dstD1 = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC2 = ~i;
    int32_t srcS2;
    int32_t dstD4;
    dstD4 = memcpy(tmpD2 + valA * 0x48 + 0x58, dstD1 - objC2, objC2 & 0xfffffffc);
    memcpy(dstD4, srcS2, objC2 & 3);
    *(tmpD2 + 0x1254) += 1;
    return objC2;
}
