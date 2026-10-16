#include "gi_platform.h"
#include "00424CE0-Cursor_LoadParameters.h"
int32_t Cursor_LoadParameters(void* a1)

{
    int32_t valA5;
    void* srcS;
    int32_t dstD2;

    if (FX_FragmentSimulate_23())
    {
        long double x87_r7_1 = g_bc20f8;
        srcS = a1;
        int32_t objC2 = (*(int32_t*)(uintptr_t)(srcS + 0x28));
        (*(int32_t*)(uintptr_t)(srcS + 0x24)) += g_bc20f4 * 320.0f;
        bool cond_0_1 = (*(int32_t*)(uintptr_t)(srcS + 0x24)) >= 0;
        (*(int32_t*)(uintptr_t)(srcS + 0x28)) = objC2 + x87_r7_1 * 240.0f;
        int32_t valA10;

        if (cond_0_1)
        {
            int32_t dstD3 = (*(int32_t*)(uintptr_t)(srcS + 0x24));

            if (g_c28b44 - 1 >= dstD3)
                valA10 = dstD3;
            else
                valA10 = g_c28b44 - 1;
        }
        else
            valA10 = 0;

        (*(int32_t*)(uintptr_t)(srcS + 0x24)) = valA10;

        if ((*(int32_t*)(uintptr_t)(srcS + 0x28)) >= 0)
        {
            dstD2 = (*(int32_t*)(uintptr_t)(srcS + 0x28));

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
        (*(int32_t*)(uintptr_t)(srcS + 0x24)) = valA1;
        (*(int32_t*)(uintptr_t)(srcS + 0x28)) = g_57bc5c;
        int32_t valA2;

        if (valA1 >= 0)
        {
            int32_t dstD1 = (*(int32_t*)(uintptr_t)(srcS + 0x24));

            if (g_c28b44 - 1 >= dstD1)
                valA2 = dstD1;
            else
                valA2 = g_c28b44 - 1;
        }
        else
            valA2 = 0;

        (*(int32_t*)(uintptr_t)(srcS + 0x24)) = valA2;

        if ((*(int32_t*)(uintptr_t)(srcS + 0x28)) >= 0)
        {
            dstD2 = (*(int32_t*)(uintptr_t)(srcS + 0x28));

            if (g_c28b48 - 1 >= dstD2)
                valA5 = dstD2;
            else
                valA5 = g_c28b48 - 1;
        }
        else
            valA5 = 0;
    }
    int32_t tmpD6 = (*(int32_t*)(uintptr_t)(srcS + 0x3c));
    (*(int32_t*)(uintptr_t)(srcS + 0x28)) = valA5;
    (*(int32_t*)(uintptr_t)(srcS + 0x38)) = tmpD6;
    int32_t result = *g_c28f8c & 1;
    (*(int32_t*)(uintptr_t)(srcS + 0x3c)) = result;
    return result;
}
