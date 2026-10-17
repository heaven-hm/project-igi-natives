// Original IGI.EXE function: FX_TrailUpdate_3 (VA 0x00483360; static CFG gate PASS, CFG score 1.000).
#include "FX_TrailUpdate_3.h"
void* FX_TrailUpdate_3(void* a1)

{
    *(a1 + 0x110) = 0x44800000;
    *(a1 + 0x114) = 0x46200000;
    *(a1 + 0x108) = 0;
    *(a1 + 0x10c) = 0;
    return a1;
}
