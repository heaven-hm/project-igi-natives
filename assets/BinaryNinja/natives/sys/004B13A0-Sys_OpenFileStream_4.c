// Original IGI.EXE function: Sys_OpenFileStream_4 (VA 0x004B13A0; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_4.h"
int32_t Sys_OpenFileStream_4(char* a1)

{
    int32_t ctxB;
    int32_t v_4 = ctxB;
    int32_t flagP = 0;
    char* dstD = &g_942330;
    int32_t valA3;

    while (true)
    {
        valA3 = *(dstD + 0x90);

        if (valA3)
        {
            char* srcS1 = a1;
            char* valA1 = dstD;

            while (true)
            {
                char ctxB1 = *valA1;
                char f0_1 = *srcS1;
                bool c_1 = ctxB1 < f0_1;

                if (ctxB1 == f0_1)
                {
                    if (!ctxB1)
                    {
                        valA3 = 0;
                        break;
                    }

                    ctxB1 = valA1[1];
                    char f3_1 = srcS1[1];
                    c_1 = ctxB1 < f3_1;

                    if (ctxB1 == f3_1)
                    {
                        valA1 = &valA1[2];
                        srcS1 = &srcS1[2];

                        if (ctxB1)
                            continue;

                        valA3 = 0;
                        break;
                    }
                }

                valA3 = valA1 - valA1 + 1;
                break;
            }

            if (!valA3)
            {
                int32_t valA4 = flagP * 9;
                *(((flagP + (valA4 << 2)) << 2) + &g_9423c0) = 0;
                return valA4;
            }
        }

        dstD = &dstD[0x94];
        flagP += 1;

        if (dstD >= &g_9435b0)
            break;
    }

    return valA3;
}
