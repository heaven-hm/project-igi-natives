#include "gi_platform.h"
#include "004A6F6F-Camera_SetFieldOfView_10.h"
int32_t* Camera_SetFieldOfView_10(PSTR a1, char* a2, int32_t a3, int32_t* a4)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    int32_t srcS = g_936214;
    char* dstD = a2;
    int32_t v_c_1 = 0;
    int32_t v_8_1 = 0;
    char valA = *dstD;
    int32_t objC1;
    int32_t srcS1;

    if (valA == 0x61)
    {
        objC1 = 0x109;
    label_4a6fad: ;
        srcS1 = srcS | 2;
    label_4a6fb2: ;
        int32_t tmpD1 = 1;

        while (true)
        {
            valA = dstD[1];
            dstD = &dstD[1];

            if (!valA)
                break;

            if (!tmpD1)
                break;

            int32_t valA1 = valA;

            if (valA1 > 0x54)
            {
                if (valA1 == 0x62)
                {
                    if (!(*(&objC1 + 1) & 0xc0))
                    {
                        *(&objC1 + 1) |= 0x80;
                        continue;
                    }
                }
                else if (valA1 == 0x63)
                {
                    if (!v_c_1)
                    {
                        v_c_1 = 1;
                        srcS1 |= 0x4000;
                        continue;
                    }
                }
                else if (valA1 == 0x6e)
                {
                    if (!v_c_1)
                    {
                        v_c_1 = 1;
                        srcS1 &= 0xffffbfff;
                        continue;
                    }
                }
                else if (valA1 == 0x74 && !(*(&objC1 + 1) & 0xc0))
                {
                    *(&objC1 + 1) |= 0x40;
                    continue;
                }
            }
            else if (valA1 == 0x54)
            {
                if (!(0x1000 & objC1))
                {
                    objC1 |= 0x1000;
                    continue;
                }
            }
            else if (valA1 == 0x2b)
            {
                if (!(objC1 & 2))
                {
                    objC1 = (objC1 & 0xfffffffe) | 2;
                    srcS1 = (srcS1 & 0xfffffffc) | 0x80;
                    continue;
                }
            }
            else if (valA1 == 0x44)
            {
                if (!(objC1 & 0x40))
                {
                    objC1 |= 0x40;
                    continue;
                }
            }
            else if (valA1 == 0x52)
            {
                if (!v_8_1)
                {
                    v_8_1 = 1;
                    objC1 |= 0x10;
                    continue;
                }
            }
            else if (valA1 == 0x53 && !v_8_1)
            {
                v_8_1 = 1;
                objC1 |= 0x20;
                continue;
            }

            tmpD1 = 0;
        }

        int32_t v_20_1 = a3;
        int32_t valA3 = Camera_UpdateTransform_24(a1, objC1, 0xa4);

        if (valA3 >= 0)
        {
            g_936210 += 1;
            a4[3] = srcS1;
            a4[1] = 0;
            *a4 = 0;
            a4[2] = 0;
            a4[7] = 0;
            a4[4] = valA3;
            return a4;
        }
    }
    else
    {
        if (valA == 0x72)
        {
            objC1 = 0;
            srcS1 = srcS | 1;
            goto label_4a6fb2;
        }

        if (valA == 0x77)
        {
            objC1 = 0x301;
            goto label_4a6fad;
        }
    }
    return nullptr;
}
