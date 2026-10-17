// Original IGI.EXE function: FX_SmokeEmit_14 (VA 0x00489E30; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_14.h"
int32_t* FX_SmokeEmit_14(void* context)

{
    int32_t i = 0;
    *(context + 0x254) = 0;
    int32_t* dest_val = context + 0x260;
    int32_t* result;

    do
    {
        result = FX_FragmentSimulate_14(context + 0x254, i);
        *dest_val = 0;
        dest_val[1] = *result;
        i += 1;
        dest_val = &dest_val[2];
    } while (i < 0x11);

    return result;
}
