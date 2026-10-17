// Original IGI.EXE function: Camera_ApplyBandFilter_20 (VA 0x004AA590; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_20.h"
char* Camera_ApplyBandFilter_20(char* a1, char* a2)

{
    char* objC = a1;
    int32_t* dstD;

    while (objC & 3)
    {
        char valA1 = *objC;
        objC = &objC[1];

        if (!valA1)
        {
        label_4aa5df:
            dstD = &objC[0xffffffff];
            goto label_4aa5f1;
        }
    }

    while (true)
    {
        int32_t valA2 = *objC;
        objC = &objC[4];

        if ((valA2 ^ 0xffffffff ^ (0x7efefeff + valA2)) & 0x81010100)
        {
            int32_t valA5 = *(objC - 4);

            if (!valA5)
            {
                dstD = &objC[0xfffffffc];
                break;
            }

            if (!*(&valA5 + 1))
            {
                dstD = &objC[0xfffffffd];
                break;
            }

            if (!(valA5 & 0xff0000))
            {
                dstD = &objC[0xfffffffe];
                break;
            }

            if (!(valA5 & 0xff000000))
                goto label_4aa5df;
        }
    }

label_4aa5f1:
    char* objC1 = a2;
    int32_t tmpD1;

    while (objC1 & 3)
    {
        tmpD1 = *objC1;
        objC1 = &objC1[1];

        if (!tmpD1)
            goto label_4aa668;

        *dstD = tmpD1;
        dstD += 1;
    }

    while (true)
    {
        int32_t valA6 = *objC1;
        tmpD1 = *objC1;
        objC1 = &objC1[4];

        if ((valA6 ^ 0xffffffff ^ (0x7efefeff + valA6)) & 0x81010100)
        {
            if (!tmpD1)
                break;

            if (!*(&tmpD1 + 1))
            {
                *dstD = tmpD1;
                return a1;
            }

            if (!(tmpD1 & 0xff0000))
            {
                *dstD = tmpD1;
                *(dstD + 2) = 0;
                return a1;
            }

            if (!(tmpD1 & 0xff000000))
            {
                *dstD = tmpD1;
                return a1;
            }
        }

        *dstD = tmpD1;
        dstD = &dstD[1];
    }

label_4aa668:
    *dstD = tmpD1;
    return a1;
}
