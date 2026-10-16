#include "gi_platform.h"
#include "004169D0-Level_LoadObjects_6.h"
char* Level_LoadObjects_6(char* a1)

{
    int32_t ctxB = g_57bab8;
    int32_t flagP = 0;

    if (ctxB > 0)
    {
        char* result = &g_57b1a8;

        while (true)
        {
            char* srcS1 = a1;
            char* result_1 = result;
            int32_t objC2;

            while (true)
            {
                char valA1 = *result_1;
                char f0_1 = *srcS1;
                bool c_1 = valA1 < f0_1;

                if (valA1 == f0_1)
                {
                    if (!valA1)
                    {
                        objC2 = 0;
                        break;
                    }

                    valA1 = result_1[1];
                    char f3_1 = srcS1[1];
                    c_1 = valA1 < f3_1;

                    if (valA1 == f3_1)
                    {
                        result_1 = &result_1[2];
                        srcS1 = &srcS1[2];

                        if (valA1)
                            continue;

                        objC2 = 0;
                        break;
                    }
                }

                objC2 = result_1 - result_1 + 1;
                break;
            }

            if (!objC2)
                return result;

            flagP += 1;
            result = &result[0x30];

            if (flagP >= ctxB)
                break;
        }
    }

    char* dstD1 = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD1;
        dstD1 = &dstD1[1];
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC3 = ~i;
    int32_t srcS3;
    int32_t dstD4;
    dstD4 = memcpy(flagP * 0x30 + &g_57b1a8, dstD1 - objC3, objC3 & 0xfffffffc);
    memcpy(dstD4, srcS3, objC3 & 3);
    g_57bab8 = ctxB + 1;
    return flagP * 0x30 + &g_57b1a8;
}
