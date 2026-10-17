// Original IGI.EXE function: FX_SmokeEmit_4 (VA 0x00483D40; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_4.h"
void* FX_SmokeEmit_4(void* context)

{
    *(context + 0x110) = 0x44800000;
    *(context + 0x114) = 0x46200000;
    *(context + 0x108) = 0;
    *(context + 0x10c) = 0;
    *(context + 0x124) = 1;
    return context;
}
