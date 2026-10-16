#include "Camera_UpdateViewCone_29.h"
void Camera_UpdateViewCone_29(int32_t a1, int32_t a2, int32_t a3)

{
    int32_t ctxB = 0x546a98;

    if (!a2)
        return;

    if (a2 < 0)
    {
        a2 = -(a2);
        ctxB = 0x546bf8;
    }

    if (!a3)
        *a1 = 0;

    while (a2)
    {
        int32_t valA2 = a2;
        ctxB += 0x54;
        a2 s>>= 3;
        int32_t valA = valA2 & 7;

        if (valA)
        {
            int32_t valA3 = valA * 3;
            int32_t* srcS1 = ctxB + (valA3 << 2);

            if (*(ctxB + (valA3 << 2)) >= 0x8000)
            {
                int32_t v_10 = *srcS1;
                void v_c;
                int32_t* dstD1 = &v_c;
                int32_t* srcS2 = &srcS1[1];
                *dstD1 = *srcS2;
                dstD1[1] = srcS2[1];
                *(&v_10 + 2) -= 1;
                srcS1 = &v_10;
            }

            Camera_ApplyPostProcess_29(a1, srcS1);
        }
    }
}
