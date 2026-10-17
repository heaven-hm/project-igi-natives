// Original IGI.EXE function: FX_SmokeEmit_14 (VA 0x00489E30; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_14.h"
int32_t* FX_SmokeEmit_14(void* a1)

{
    int32_t i = 0;
    *(a1 + 0x254) = 0;
    int32_t* dstD = a1 + 0x260;
    int32_t* result;

    do
    {
        result = FX_FragmentSimulate_14(a1 + 0x254, i);
        *dstD = 0;
        dstD[1] = *result;
        i += 1;
        dstD = &dstD[2];
    } while (i < 0x11);

    return result;
}
