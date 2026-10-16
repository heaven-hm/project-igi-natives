#include "Camera_ApplyBandFilter_29.h"
int32_t Camera_ApplyBandFilter_29(char* a1, int32_t a2, int32_t a3)

{
    int32_t result = a2;
    int32_t* ctxB = a3;
    int32_t v_8 = 0x404e;
    *ctxB = 0;
    ctxB[1] = 0;
    ctxB[2] = 0;

    if (result > 0)
    {
        a3 = result;
        int32_t i;

        do
        {
            int32_t v_14 = *ctxB;
            int32_t v_10;
            int32_t* dstD1 = &v_10;
            int32_t* srcS2 = &ctxB[1];
            *dstD1 = *srcS2;
            dstD1[1] = srcS2[1];
            Camera_SetFieldOfView_29(ctxB);
            Camera_SetFieldOfView_29(ctxB);
            Camera_UpdateTransform_29(ctxB, &v_14);
            Camera_SetFieldOfView_29(ctxB);
            v_10 = 0;
            int32_t v_c_1 = 0;
            v_14 = *a1;
            result = Camera_UpdateTransform_29(ctxB, &v_14);
            a1 = &a1[1];
            i = a3;
            a3 -= 1;
        } while (i != 1);
    }

    while (!ctxB[2])
    {
        int32_t objC1 = ctxB[1];
        ctxB[2] = objC1 >> 0x10;
        int32_t valA4 = *ctxB;
        result = valA4 << 0x10;
        v_8 += 0xfff0;
        ctxB[1] = valA4 >> 0x10 | objC1 << 0x10;
        *ctxB = result;
    }

    while (!(ctxB[2] & 0x8000))
    {
        result = Camera_SetFieldOfView_29(ctxB);
        v_8 += 0xffff;
    }

    result = v_8;
    *(ctxB + 0xa) = result;
    return result;
}
