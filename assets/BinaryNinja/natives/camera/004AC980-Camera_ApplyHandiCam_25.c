#include "Camera_ApplyHandiCam_25.h"
int32_t Camera_ApplyHandiCam_25(int16_t* a1, int32_t* a2, int32_t* a3)

{
    uint32_t objC = a1[5];
    int16_t* objC1 = objC & 0x8000;
    int32_t v_10 = *(a1 + 6);
    int32_t objC3 = *(a1 + 2);
    int32_t ctxB2 = (objC & 0x7fff) - 0x3fff;
    uint32_t v_8 = *a1 << 0x10;
    int32_t result;
    int32_t srcS1;

    if (ctxB2 != 0xffffc001)
    {
        void v_1c;
        Camera_UpdateTransform_25(&v_1c, &v_10);

        if (Camera_ResetMatrix_24(&v_10, a3[2]))
            ctxB2 += 1;

        int32_t valA5 = a3[1];

        if (ctxB2 >= valA5 - a3[2])
        {
            if (ctxB2 <= valA5)
            {
                Camera_UpdateTransform_25(&v_10, &v_1c);
                Camera_ApplyBandFilter_25(&v_10, valA5 - ctxB2);
                Camera_ResetMatrix_24(&v_10, a3[2]);
                Camera_ApplyBandFilter_25(&v_10, a3[3] + 1);
                goto label_4aca62;
            }

            if (ctxB2 < *a3)
            {
                int32_t v_2c_7 = a3[3];
                int32_t srcS4 = a3[5];
                *(&v_10 + 3) &= 0x7f;
                srcS1 = srcS4 + ctxB2;
                Camera_ApplyBandFilter_25(&v_10, v_2c_7);
                result = 0;
            }
            else
            {
                Camera_SetFieldOfView_25(&v_10);
                int32_t v_30_3 = a3[3];
                *(&v_10 + 3) |= 0x80;
                Camera_ApplyBandFilter_25(&v_10, v_30_3);
                srcS1 = a3[5] + *a3;
                result = 1;
            }
        }
        else
        {
            Camera_SetFieldOfView_25(&v_10);
        label_4aca62:
            srcS1 = 0;
            result = 2;
        }
    }
    else
    {
        srcS1 = 0;

        if (Camera_ApplyLineFilter_25(&v_10))
            result = 0;
        else
        {
            Camera_SetFieldOfView_25(&v_10);
            result = 2;
        }
    }

    int32_t dstD1 = a3[4];
    int32_t objC12 = -(objC1);
    int32_t srcS7 = srcS1 << ((0x1f - a3[3]) & 0x1f) | ((objC12 - objC12) & 0x80000000) | v_10;

    if (dstD1 == 0x40)
    {
        a2[1] = srcS7;
        *a2 = objC3;
    }
    else if (dstD1 == 0x20)
        *a2 = srcS7;

    return result;
}
