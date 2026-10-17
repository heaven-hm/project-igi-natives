// Original IGI.EXE function: FX_SmokeEmit_6 (VA 0x00485D20; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_6.h"
int32_t FX_SmokeEmit_6(int32_t a1, int32_t a2)

{
    void* valA = FX_FragmentSimulate_6(a1, a2);

    if (valA)
    {
        void* objC1 = g_bc2360;

        if (!objC1)
            *(valA + 0x1cc) = 0;
        else
            *(valA + 0x1cc) = *(objC1 + 0x68);

        *(valA + 0x1d6) = 1;
        *(valA + 0x1d0) = 0;
    }

    int32_t tmpD = a2 * 0x40b;
    void* srcS1 = a1 + (tmpD << 2);
    Qtask_UpdateList(*(a1 + (tmpD << 2) + 0x20));
    *(srcS1 + 0x20) = 0;
    *(srcS1 + 0x40) = 0;
    int32_t* srcS2 = srcS1 + 0x30;
    int32_t i_1 = 3;
    int32_t result;
    int32_t i;

    do
    {
        result = Sys_ReadFileBlock_18(*srcS2);
        *srcS2 = 0;
        srcS2 = &srcS2[1];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
