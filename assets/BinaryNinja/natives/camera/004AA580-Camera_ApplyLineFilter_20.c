// Original IGI.EXE function: Camera_ApplyLineFilter_20 (VA 0x004AA580; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_20.h"
char* Camera_ApplyLineFilter_20(char* a1, char* a2)

{
    char* dstD = a1;
    char* objC = a2;
    int32_t tmpD1;

    while (objC & 3)
    {
        tmpD1 = *objC;
        objC = &objC[1];

        if (!tmpD1)
            goto label_4aa668;

        *dstD = tmpD1;
        dstD = &dstD[1];
    }

    while (true)
    {
        int32_t valA1 = *objC;
        tmpD1 = *objC;
        objC = &objC[4];

        if ((valA1 ^ 0xffffffff ^ (0x7efefeff + valA1)) & 0x81010100)
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
                dstD[2] = 0;
                return a1;
            }

            if (!(tmpD1 & 0xff000000))
            {
                *dstD = tmpD1;
                return a1;
            }
        }

        *dstD = tmpD1;
        dstD = &dstD[4];
    }

label_4aa668:
    *dstD = tmpD1;
    return a1;
}
