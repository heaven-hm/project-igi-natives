#include "Camera_ApplyLineFilter_21.h"
int32_t Camera_ApplyLineFilter_21(void* a1, void* a2, int32_t a3)

{
    int32_t i = a3;

    if (i)
    {
        int32_t i_2 = i;
        void* dstD1 = a1;
        void* srcS1 = dstD1;

        while (i)
        {
            bool cond_0_1 = 0 != *dstD1;
            dstD1 += 1;
            i -= 1;

            if (!cond_0_1)
                break;
        }

        int32_t i_1 = -(i) + i_2;
        void* dstD2 = srcS1;
        void* srcS2 = a2;

        while (i_1)
        {
            bool cond_1_1 = *srcS2 == *dstD2;
            srcS2 += 1;
            dstD2 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        char valA1 = *(srcS2 - 1);
        i = 0;
        char f0_1 = *(dstD2 - 1);

        if (valA1 > f0_1)
            return ~i;

        if (valA1 != f0_1)
            return ~0xfffffffe;
    }

    return i;
}
