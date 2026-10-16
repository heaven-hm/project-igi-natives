#include "gi_platform.h"
#include "004AB733-Camera_ApplyLineFilter_22.h"
void Camera_ApplyLineFilter_22(int32_t a1)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t* srcS = g_5446b4;

    do
    {
        if (srcS[4] != 0xffffffff)
        {
            int32_t v_8_1 = 0;
            int32_t* dstD1 = &srcS[0x804];
            BOOL valA;

            for (int32_t j = 0x3ff000; j >= 0; )
            {
                if (*dstD1 == 0xf0 && VirtualFree(j + srcS[4], 0x1000, MEM_DECOMMIT))
                {
                    *dstD1 = 0xffffffff;
                    g_936200 -= 1;
                    valA = srcS[3];

                    if (!valA || valA > dstD1)
                        srcS[3] = dstD1;

                    v_8_1 += 1;
                    int32_t f0_1 = a1;
                    a1 -= 1;

                    if (f0_1 == 1)
                        break;
                }

                j -= 0x1000;
                dstD1 -= 8;
            }

            int32_t* objC1 = srcS;
            srcS = srcS[1];

            if (v_8_1 && objC1[6] == 0xffffffff)
            {
                valA = &objC1[8];
                int32_t tmpD1 = 1;

                while (*valA == 0xffffffff)
                {
                    tmpD1 += 1;
                    valA += 8;

                    if (tmpD1 >= 0x400)
                        break;
                }

                if (tmpD1 == 0x400)
                    Camera_SetFieldOfView_22(objC1);
            }
        }

        if (srcS == g_5446b4)
            break;
    } while (a1 > 0);
}
