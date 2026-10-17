// Original IGI.EXE function: Dirlight_Setup (VA 0x005271E0; static CFG gate PASS, CFG score 1.000).
#include "Dirlight_Setup.h"
int32_t Dirlight_Setup(void* a1)

{
    int32_t valA = *(a1 + 0x48);

    if (valA)
        Render_ComputeNormals_13(valA);

    int32_t* srcS = g_ba1e14;
    int32_t objC = *(*(a1 + 0x60) + srcS);
    int32_t valA3 = g_ba1e08 - 1;
    g_ba1e08 = valA3;

    if (objC != valA3)
    {
        int32_t tmpD1 = g_ba1e04;
        int32_t valA6 = *(tmpD1 + (valA3 << 2)) * g_ba1e10 + g_ba1e00;
        int32_t dstD2 = *(tmpD1 + (objC << 2));
        int32_t srcS1 = *(srcS + valA6);
        *(tmpD1 + (objC << 2)) = *(tmpD1 + (srcS1 << 2));
        *(g_ba1e04 + (srcS1 << 2)) = dstD2;
        *(g_ba1e14 + valA6) = objC;
    }

    return Light_LightsourceNotFound(a1);
}
