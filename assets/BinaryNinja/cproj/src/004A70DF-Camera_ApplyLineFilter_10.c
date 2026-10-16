#include "gi_platform.h"
#include "004A70DF-Camera_ApplyLineFilter_10.h"
int32_t* Camera_ApplyLineFilter_10()

{
    int32_t tmpD = g_c321e0;
    int32_t* result = nullptr;
    int32_t valA = 0;

    if (tmpD > 0)
    {
        int32_t* ctxB1 = g_c311dc;
        int32_t* dstD1 = ctxB1;

        while (true)
        {
            void* objC1 = *dstD1;

            if (!objC1)
            {
                int32_t dstD3 = valA << 2;
                *(dstD3 + g_c311dc) = Camera_ApplyHandiCam_20(0x20);
                int32_t* result_1 = *(dstD3 + g_c311dc);

                if (!result_1)
                    break;

                result = result_1;
            }
            else if (!(*(objC1 + 0xc) & 0x83))
                result = ctxB1[valA];
            else
            {
                valA += 1;
                dstD1 = &dstD1[1];

                if (valA >= tmpD)
                    break;

                continue;
            }

            if (!result)
                break;

            result[4] = 0xffffffff;
            result[1] = 0;
            result[3] = 0;
            result[2] = 0;
            *result = 0;
            result[7] = 0;
            break;
        }
    }

    return result;
}
