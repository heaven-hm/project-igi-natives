#include "Config_RegisterOptions.h"
void* Config_RegisterOptions(void* a1)

{
    void* result = a1 + 0x1c;

    if (result && *(a1 + 4) >= 0x280 && *(a1 + 8) >= 0x1e0)
    {
        result = g_567c90;
        int32_t tmpD1 = 0;

        if (result > 0)
        {
            int32_t ctxB;
            int32_t v_8_1 = ctxB;
            int32_t dstD1 = 0;

            while (true)
            {
                char* srcS1 = dstD1 + &g_567c98;
                char* valA = a1 + 0x1c;
                int32_t valA2;

                while (true)
                {
                    char ctxB1 = *valA;
                    char f0_1 = *srcS1;
                    bool c_1 = ctxB1 < f0_1;

                    if (ctxB1 == f0_1)
                    {
                        if (!ctxB1)
                        {
                            valA2 = 0;
                            break;
                        }

                        ctxB1 = valA[1];
                        char f3_1 = srcS1[1];
                        c_1 = ctxB1 < f3_1;

                        if (ctxB1 == f3_1)
                        {
                            valA = &valA[2];
                            srcS1 = &srcS1[2];

                            if (ctxB1)
                                continue;

                            valA2 = 0;
                            break;
                        }
                    }

                    valA2 = valA - valA + 1;
                    break;
                }

                if (!valA2)
                {
                    int32_t valA3 = *(dstD1 + &g_568098);
                    *(dstD1 + valA3 * 0xc + 0x567d98) = *(a1 + 4);
                    *(dstD1 + valA3 * 0xc + 0x567d9c) = *(a1 + 8);
                    *(dstD1 + valA3 * 0xc + 0x567da0) = *(a1 + 0x10);
                    *(dstD1 + &g_568098) += 1;
                }

                result = g_567c90;
                tmpD1 += 1;
                dstD1 += 0x404;

                if (tmpD1 >= result)
                    break;
            }
        }
    }

    return result;
}
