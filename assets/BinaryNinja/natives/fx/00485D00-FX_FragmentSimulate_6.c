// Original IGI.EXE function: FX_FragmentSimulate_6 (VA 0x00485D00; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_6.h"
int32_t FX_FragmentSimulate_6(int32_t context, int32_t param_2)

{
    return **(context + param_2 * 0x102c + 0x20);
}
