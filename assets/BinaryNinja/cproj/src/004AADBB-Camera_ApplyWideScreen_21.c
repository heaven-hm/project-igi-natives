#include "gi_platform.h"
#include "004AADBB-Camera_ApplyWideScreen_21.h"
int32_t* Camera_ApplyWideScreen_21(int32_t* a1, int32_t* a2)

{
    int32_t* result = a1[4];
    int32_t* srcS1 = &a2[-1];
    uint32_t dstD2 = (a2 - a1[3]) >> 0xf;
    int32_t* objC5 = *srcS1 - 1;
    int32_t* v_8 = objC5;

    if (!(objC5 & 1))
    {
        int32_t tmpD1 = *(objC5 + srcS1);
        int32_t* ctxB1 = objC5 + srcS1;
        int32_t tmpD2 = srcS1[-1];
        a2 = ctxB1;

        if (!(tmpD1 & 1))
        {
            int32_t tmpD5 = (tmpD1 >> 4) - 1;

            if (tmpD5 > 0x3f)
                tmpD5 = 0x3f;

            int32_t* objC13;

            if (ctxB1[1] != ctxB1[2])
                objC13 = v_8;
            else
            {
                if (tmpD5 >= 0x20)
                {
                    uint32_t ctxB5 = ~(0x80000000 >> ((tmpD5 - 0x20) & 0x1f));
                    result[dstD2 + 0x31] &= ctxB5;
                    char f0_1 = *(tmpD5 + result + 4);
                    *(tmpD5 + result + 4) -= 1;

                    if (f0_1 == 1)
                        a1[1] &= ctxB5;
                }
                else
                {
                    uint32_t ctxB3 = ~(0x80000000 >> (tmpD5 & 0x1f));
                    result[dstD2 + 0x11] &= ctxB3;
                    char f1_1 = *(tmpD5 + result + 4);
                    *(tmpD5 + result + 4) -= 1;

                    if (f1_1 == 1)
                        *a1 &= ctxB3;
                }

                objC13 = v_8;
                ctxB1 = a2;
            }

            objC5 = objC13 + tmpD1;
            *(ctxB1[2] + 4) = ctxB1[1];
            v_8 = objC5;
            (*(int32_t*)(uintptr_t)(a2[1] + 8)) = a2[2];
        }

        int32_t tmpD11 = (objC5 >> 4) - 1;

        if (tmpD11 > 0x3f)
            tmpD11 = 0x3f;

        int32_t ctxB9 = tmpD2 & 1;
        int32_t* ctxB12;

        if (ctxB9)
            ctxB12 = a1;
        else
        {
            a2 = srcS1 - tmpD2;
            ctxB12 = (tmpD2 >> 4) - 1;

            if (ctxB12 > 0x3f)
                ctxB12 = 0x3f;

            int32_t* objC14 = objC5 + tmpD2;
            v_8 = objC14;
            tmpD11 = (objC14 >> 4) - 1;

            if (tmpD11 > 0x3f)
                tmpD11 = 0x3f;

            if (ctxB12 != tmpD11)
            {
                if (a2[1] == a2[2])
                {
                    if (ctxB12 >= 0x20)
                    {
                        uint32_t srcS7 = ~(0x80000000 >> ((ctxB12 - 0x20) & 0x1f));
                        result[dstD2 + 0x31] &= srcS7;
                        char f3_1 = *(ctxB12 + result + 4);
                        *(ctxB12 + result + 4) -= 1;

                        if (f3_1 == 1)
                            a1[1] &= srcS7;
                    }
                    else
                    {
                        uint32_t srcS5 = ~(0x80000000 >> (ctxB12 & 0x1f));
                        result[dstD2 + 0x11] &= srcS5;
                        char f4_1 = *(ctxB12 + result + 4);
                        *(ctxB12 + result + 4) -= 1;

                        if (f4_1 == 1)
                            *a1 &= srcS5;
                    }
                }

                (*(int32_t*)(uintptr_t)(a2[2] + 4)) = a2[1];
                (*(int32_t*)(uintptr_t)(a2[1] + 8)) = a2[2];
            }

            srcS1 = a2;
        }

        if (ctxB9 || ctxB12 != tmpD11)
        {
            void* objC25 = &result[dstD2 * 0x81 + 0x51 + tmpD11 * 2];
            srcS1[1] = result[dstD2 * 0x81 + 0x51 + tmpD11 * 2 + 1];
            srcS1[2] = objC25;
            *(objC25 + 4) = srcS1;
            *(srcS1[1] + 8) = srcS1;

            if (srcS1[1] == srcS1[2])
            {
                char objC28 = *(tmpD11 + result + 4);
                (*(int32_t*)(uintptr_t)(&a2 + 3)) = objC28;
                *(tmpD11 + result + 4) = objC28 + 1;

                if (tmpD11 >= 0x20)
                {
                    if (!(*(int32_t*)(uintptr_t)(&a2 + 3)))
                        a1[1] |= 0x80000000 >> ((tmpD11 - 0x20) & 0x1f);

                    result[dstD2 + 0x31] |= 0x80000000 >> ((tmpD11 - 0x20) & 0x1f);
                }
                else
                {
                    if (!(*(int32_t*)(uintptr_t)(&a2 + 3)))
                        *a1 |= 0x80000000 >> (tmpD11 & 0x1f);

                    result[dstD2 + 0x11] |= 0x80000000 >> (tmpD11 & 0x1f);
                }
            }
        }

        *srcS1 = v_8;
        *(v_8 + srcS1 - 4) = v_8;
        result = &result[dstD2 * 0x81 + 0x51];
        int32_t f2_1 = *result;
        *result -= 1;

        if (f2_1 == 1)
        {
            int32_t valA3 = g_c321f0;

            if (valA3)
            {
                VirtualFree((g_c321e8 << 0xf) + *(valA3 + 0xc), 0x8000, MEM_DECOMMIT);
                void* valA4 = g_c321f0;
                *(valA4 + 8) |= 0x80000000 >> (g_c321e8 & 0x1f);
                *(*(g_c321f0 + 0x10) + (g_c321e8 << 2) + 0xc4) = 0;
                void* valA8 = *(g_c321f0 + 0x10);
                *(valA8 + 0x43) -= 1;
                void* valA9 = g_c321f0;

                if (!*(*(valA9 + 0x10) + 0x43))
                {
                    *(valA9 + 4) &= 0xfffffffe;
                    valA9 = g_c321f0;
                }

                if (*(valA9 + 8) == 0xffffffff)
                {
                    VirtualFree(*(valA9 + 0xc), 0, MEM_RELEASE);
                    HeapFree(g_c32428, HEAP_NONE, *(g_c321f0 + 0x10));
                    char* valA14 = g_c321f0;
                    Camera_ApplyHandiCam_26(valA14, &valA14[0x14],
                        g_c321f4 * 0x14 - valA14 + g_c321f8 - 0x14);
                    g_c321f4 -= 1;

                    if (a1 > g_c321f0)
                        a1 -= 0x14;

                    g_c321ec = g_c321f8;
                }
            }

            result = a1;
            g_c321e8 = dstD2;
            g_c321f0 = result;
        }
    }

    return result;
}
