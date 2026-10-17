// Original IGI.EXE function: Display_SyncVSync_6 (VA 0x00492230; static CFG gate FAIL, CFG score 0.667).
#include "Display_SyncVSync_6.h"
int32_t __stdcall Display_SyncVSync_6(void* a1 @ 0xc, void* a2)

{
    int32_t i = 4;
    int32_t* dstD = &g_534a00;
    int32_t* srcS = a1 + 0xc4;
    bool cond_1 = false;

    while (i)
    {
        int32_t f1_1 = *srcS;
        int32_t f2_1 = *dstD;
        cond_1 = f1_1 != f2_1;
        srcS = &srcS[1];
        dstD = &dstD[1];
        i -= 1;

        if (f1_1 != f2_1)
            break;
    }

    if (!cond_1)
        g_bcacf4 = 1;

    int32_t* srcS1 = a1 + 0xc4;
    int32_t i_1 = 4;
    int32_t* dstD1 = &g_5349e0;
    bool cond_3 = false;

    while (i_1)
    {
        int32_t f3_1 = *srcS1;
        int32_t f4_1 = *dstD1;
        cond_3 = f3_1 != f4_1;
        srcS1 = &srcS1[1];
        dstD1 = &dstD1[1];
        i_1 -= 1;

        if (f3_1 != f4_1)
            break;
    }

    if (!cond_3)
    {
        g_bcad74 = 1;
        g_bcacf4 = 1;
    label_49228e:
        memcpy(a2, a1, 0xec);
        g_5ca108 = *(a2 + 0x44) >> 8 & 1;

        if (g_bcad74)
            return 0;
    }
    else if (g_bcacf4)
        goto label_49228e;

    return 1;
}
