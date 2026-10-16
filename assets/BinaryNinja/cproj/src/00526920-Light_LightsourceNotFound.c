#include "gi_platform.h"
#include "00526920-Light_LightsourceNotFound.h"
int32_t Light_LightsourceNotFound(int32_t a1)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    int32_t objC1 = g_a83d00;
    int32_t v_4 = 0;

    if (objC1 > 0)
    {
        int32_t* srcS1 = g_a83cfc;
        int32_t dstD1 = g_a83d08;
        int32_t ctxB1 = g_a83cf8;
        int32_t* tmpD1 = srcS1;
        bool cond_1_1;

        do
        {
            int32_t* valA3 = *tmpD1 * dstD1 + ctxB1;

            if (*valA3 == a1)
            {
                int32_t* tmpD2 = g_a83d0c;
                int32_t result = *(tmpD2 + valA3);
                g_a83d00 = objC1 - 1;

                if (result != objC1 - 1)
                {
                    int32_t dstD2 = srcS1[result];
                    int32_t objC5 = srcS1[objC1 - 1] * dstD1 + ctxB1;
                    int32_t tmpD3 = *(tmpD2 + objC5);
                    srcS1[result] = srcS1[tmpD3];
                    *(g_a83cfc + (tmpD3 << 2)) = dstD2;
                    *(g_a83d0c + objC5) = result;
                }

                return result;
            }

            tmpD1 = &tmpD1[1];
            cond_1_1 = v_4 + 1 < objC1;
            v_4 += 1;
        } while (cond_1_1);
    }

    Error_Show("Lightsource not found");

    while (true)
        /* nop */
}
