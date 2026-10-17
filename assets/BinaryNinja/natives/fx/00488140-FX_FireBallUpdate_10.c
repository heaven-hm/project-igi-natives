// Original IGI.EXE function: FX_FireBallUpdate_10 (VA 0x00488140; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_10.h"
void* FX_FireBallUpdate_10(void* context)

{
    void* result = *(context + 0x7c);

    if (result)
        result = FX_FragmentSimulate_10(result);

    return result;
}
