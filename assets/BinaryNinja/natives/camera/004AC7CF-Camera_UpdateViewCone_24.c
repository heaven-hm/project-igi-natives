#include "Camera_UpdateViewCone_24.h"
int32_t Camera_UpdateViewCone_24(int32_t a1, int32_t a2)

{
    int32_t f0 = a2 / 0x20;
    int32_t* dstD = a1 + (f0 << 2);
    int32_t i = Camera_ResetMatrix_28(*dstD, 1 << ((0x1f - a2 % 0x20) & 0x1f), dstD);
    int32_t srcS1 = f0 - 1;

    if (f0 - 1 >= 0)
    {
        int32_t* dstD1 = a1 + (srcS1 << 2);

        while (i)
        {
            i = Camera_ResetMatrix_28(*dstD1, 1, dstD1);
            srcS1 -= 1;
            dstD1 -= 4;

            if (srcS1 < 0)
                break;
        }
    }

    return i;
}
