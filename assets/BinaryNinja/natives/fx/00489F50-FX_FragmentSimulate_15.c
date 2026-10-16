#include "FX_FragmentSimulate_15.h"
int32_t FX_FragmentSimulate_15(void* a1)

{
    int32_t result;
    result = 0;

    if (*((*(*(a1 + 0x4ec) + 0x70) + 4) + 1) & 1)
        result = 1;

    return result;
}
