#include "Camera_UpdateViewCone_10.h"
char* Camera_UpdateViewCone_10(double* a1, char* a2, int32_t a3)

{
    int32_t ctxB;
    int32_t* srcS;

    if (!g_9361c4)
    {
        int32_t objC;
        int32_t v_14_1 = objC;
        int32_t v_18_1 = objC;
        v_18_1 = *a1;
        Camera_SetFieldOfView_26();
        ctxB = a3;
        srcS = &g_936238;
        void* valA5 = nullptr;
        valA5 = g_936238 == 0x2d;
        Camera_UpdateTransform_26(valA5 + a2, g_93623c + ctxB, &g_936238);
    }
    else
    {
        int32_t valA = g_9361c8;
        ctxB = a3;
        srcS = g_9361c0;

        if (valA == ctxB)
        {
            void* objC1 = nullptr;
            objC1 = *srcS == 0x2d;
            char* objC3 = objC1 + valA + a2;
            *objC3 = 0x30;
            objC3[1] = 0;
        }
    }

    char* dstD = a2;

    if (*srcS == 0x2d)
    {
        *a2 = 0x2d;
        dstD = &a2[1];
    }

    int32_t valA7 = srcS[1];
    char* dstD1;

    if (valA7 > 0)
        dstD1 = &dstD[valA7];
    else
    {
        Camera_ApplyBandFilter_11(dstD, 1);
        *dstD = 0x30;
        dstD1 = &dstD[1];
    }

    if (ctxB > 0)
    {
        Camera_ApplyBandFilter_11(dstD1, 1);
        *dstD1 = g_544280;
        int32_t srcS1 = srcS[1];

        if (srcS1 < 0)
        {
            if (!g_9361c4)
            {
                int32_t srcS2 = -(srcS1);

                if (ctxB >= srcS2)
                    ctxB = srcS2;
            }
            else
                ctxB = -(srcS1);

            Camera_ApplyBandFilter_11(&dstD1[1], ctxB);
            Camera_ApplyBandFilter_26(&dstD1[1], 0x30, ctxB);
        }
    }

    return a2;
}
