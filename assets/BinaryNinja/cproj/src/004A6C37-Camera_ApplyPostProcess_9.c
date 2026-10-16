#include "gi_platform.h"
#include "004A6C37-Camera_ApplyPostProcess_9.h"
int32_t Camera_ApplyPostProcess_9(int32_t a1)

{
    int32_t i = 0;
    int32_t ctxB = 0;
    int32_t dstD = 0;

    if (g_c321e0 > 0)
    {
        do
        {
            int32_t* valA2 = *(g_c311dc + (i << 2));

            if (valA2)
            {
                char objC1 = valA2[3];

                if (objC1 & 0x83)
                {
                    if (a1 == 1)
                    {
                        if (Camera_ApplyBandFilter_9(valA2) != 0xffffffff)
                            ctxB += 1;
                    }
                    else if (!a1 && objC1 & 2)
                    {
                        int32_t valA4 = Camera_ApplyBandFilter_9(valA2);

                        if (valA4 == 0xffffffff)
                            dstD |= valA4;
                    }
                }
            }

            i += 1;
        } while (i < g_c321e0);
    }

    if (a1 == 1)
        return ctxB;

    return dstD;
}
