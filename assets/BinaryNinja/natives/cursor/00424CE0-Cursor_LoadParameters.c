// Original IGI.EXE function: Cursor_LoadParameters (VA 0x00424CE0; static CFG gate PASS, CFG score 1.000).
#include "Cursor_LoadParameters.h"
int32_t Cursor_LoadParameters(void* a1)

{
    int32_t valA5;
    void* srcS;
    int32_t dstD2;

    if (FX_FragmentSimulate_23())
    {
        long double x87_r7_1 = g_bc20f8;
        srcS = a1;
        int32_t objC2 = *(srcS + 0x28);
        *(srcS + 0x24) += g_bc20f4 * 320f;
        bool cond_0_1 = *(srcS + 0x24) >= 0;
        *(srcS + 0x28) = objC2 + x87_r7_1 * 240f;
        int32_t valA10;

        if (cond_0_1)
        {
            int32_t dstD3 = *(srcS + 0x24);

            if (g_c28b44 - 1 >= dstD3)
                valA10 = dstD3;
            else
                valA10 = g_c28b44 - 1;
        }
        else
            valA10 = 0;

        *(srcS + 0x24) = valA10;

        if (*(srcS + 0x28) >= 0)
        {
            dstD2 = *(srcS + 0x28);

            if (g_c28b48 - 1 >= dstD2)
                valA5 = dstD2;
            else
                valA5 = g_c28b48 - 1;
        }
        else
            valA5 = 0;
    }
    else
    {
        srcS = a1;
        int32_t valA1 = g_57bc58;
        *(srcS + 0x24) = valA1;
        *(srcS + 0x28) = g_57bc5c;
        int32_t valA2;

        if (valA1 >= 0)
        {
            int32_t dstD1 = *(srcS + 0x24);

            if (g_c28b44 - 1 >= dstD1)
                valA2 = dstD1;
            else
                valA2 = g_c28b44 - 1;
        }
        else
            valA2 = 0;

        *(srcS + 0x24) = valA2;

        if (*(srcS + 0x28) >= 0)
        {
            dstD2 = *(srcS + 0x28);

            if (g_c28b48 - 1 >= dstD2)
                valA5 = dstD2;
            else
                valA5 = g_c28b48 - 1;
        }
        else
            valA5 = 0;
    }
    int32_t tmpD6 = *(srcS + 0x3c);
    *(srcS + 0x28) = valA5;
    *(srcS + 0x38) = tmpD6;
    int32_t result = *g_c28f8c & 1;
    *(srcS + 0x3c) = result;
    return result;
}
