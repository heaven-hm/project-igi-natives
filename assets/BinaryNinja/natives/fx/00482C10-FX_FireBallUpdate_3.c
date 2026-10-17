// Original IGI.EXE function: FX_FireBallUpdate_3 (VA 0x00482C10; static CFG gate PASS, CFG score 1.000).
#include "FX_FireBallUpdate_3.h"
void* FX_FireBallUpdate_3(void* context)

{
    *(context + 0x110) = 0x44800000;
    *(context + 0x108) = 0;
    *(context + 0x10c) = 0;
    return context;
}
