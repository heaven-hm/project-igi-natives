#include "Camera_ResetMatrix_22.h"
int32_t Camera_ResetMatrix_22()

{
    int32_t result = 0xffffffff;
    int32_t dstD = 0;
    int32_t srcS = 0;

    for (int32_t* i = &g_c32440; i < &g_c32540; )
    {
        int32_t* valA1 = *i;

        if (!valA1)
        {
            int32_t* valA5 = Camera_ApplyHandiCam_20(0x100);

            if (!valA5)
                break;

            g_c32540 += 0x20;
            void* j = &valA5[0x40];
            (&g_c32440)[dstD] = valA5;

            for (; valA5 < j; j = (&g_c32440)[dstD] + 0x100)
            {
                valA5[1] = 0;
                *valA5 = 0xffffffff;
                *(valA5 + 5) = 0xa;
                valA5 = &valA5[2];
            }

            return dstD << 5;
        }

        while (true)
        {
            if (valA1 >= &valA1[0x40])
                goto label_4abce8;

            if (!(valA1[1] & 1))
                break;

            valA1 = &valA1[2];
        }

        *valA1 = 0xffffffff;
        result = ((valA1 - *i) >> 3) + srcS;

        if (result != 0xffffffff)
            break;

    label_4abce8:
        i = &i[1];
        dstD += 1;
        srcS += 0x20;
    }

    return result;
}
