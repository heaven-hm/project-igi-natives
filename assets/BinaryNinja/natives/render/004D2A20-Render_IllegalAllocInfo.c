// Original IGI.EXE function: Render_IllegalAllocInfo (VA 0x004D2A20; static CFG gate PASS, CFG score 1.000).
#include "Render_IllegalAllocInfo.h"
int32_t Render_IllegalAllocInfo()

{
    int32_t objC;
    int32_t v_4 = objC;
    int32_t i_1 = 0;
    int32_t* ctxB = &g_b04358;
    int32_t i;

    do
    {
        int32_t* valA1 = *ctxB;

        if (valA1)
        {
            int32_t objC1 = ctxB[-1];
            int32_t valA6;
            int32_t tmpD1;

            if (!objC1)
            {
                int32_t* srcS1 = g_b12b74;
                tmpD1 = *(valA1 + srcS1);
                int32_t valA3 = g_b12b68 - 1;
                g_b12b68 = valA3;

                if (tmpD1 != valA3)
                {
                    int32_t objC2 = g_b12b64;
                    valA6 = *(objC2 + (valA3 << 2)) * g_b12b70 + g_b12b60;
                    int32_t dstD2 = *(objC2 + (tmpD1 << 2));
                    int32_t srcS2 = *(srcS1 + valA6);
                    *(objC2 + (tmpD1 << 2)) = *(objC2 + (srcS2 << 2));
                    *(g_b12b64 + (srcS2 << 2)) = dstD2;
                    *(g_b12b74 + valA6) = tmpD1;
                }
            }
            else if (objC1 == 1)
            {
                int32_t* srcS3 = g_b12c54;
                tmpD1 = *(valA1 + srcS3);
                int32_t valA8 = g_b12c48 - 1;
                g_b12c48 = valA8;

                if (tmpD1 != valA8)
                {
                    int32_t objC5 = g_b12c44;
                    valA6 = *(objC5 + (valA8 << 2)) * g_b12c50 + g_b12c40;
                    int32_t dstD4 = *(objC5 + (tmpD1 << 2));
                    int32_t srcS4 = *(srcS3 + valA6);
                    *(objC5 + (tmpD1 << 2)) = *(objC5 + (srcS4 << 2));
                    *(g_b12c44 + (srcS4 << 2)) = dstD4;
                    *(g_b12c54 + valA6) = tmpD1;
                }
            }
            else if (objC1 != 2)
            {
                Error_Show("Illegal alloc info");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t* srcS5 = g_b16cd4;
                tmpD1 = *(valA1 + srcS5);
                int32_t valA12 = g_b16cc8 - 1;
                g_b16cc8 = valA12;

                if (tmpD1 != valA12)
                {
                    int32_t objC7 = g_b16cc4;
                    valA6 = *(objC7 + (valA12 << 2)) * g_b16cd0 + g_b16cc0;
                    int32_t dstD6 = *(objC7 + (tmpD1 << 2));
                    int32_t srcS6 = *(srcS5 + valA6);
                    *(objC7 + (tmpD1 << 2)) = *(objC7 + (srcS6 << 2));
                    *(g_b16cc4 + (srcS6 << 2)) = dstD6;
                    *(g_b16cd4 + valA6) = tmpD1;
                }
            }
            *ctxB = 0;
            *ctxB = 0;
        }

        ctxB[-2] = 0xffffffff;
        i = i_1 + 1;
        ctxB = &ctxB[7];
        i_1 = i;
    } while (i < 0x800);

    return i;
}
