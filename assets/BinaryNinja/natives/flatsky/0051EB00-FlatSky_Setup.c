// Original IGI.EXE function: FlatSky_Setup (VA 0x0051EB00; static CFG gate PASS, CFG score 1.000).
#include "FlatSky_Setup.h"
void* FlatSky_Setup(void* a1)

{
    Light_CalculateAttenuation_9(*(a1 + 0x84));
    return DynObj_RemoveSymbol_7(*(a1 + 0x68), a1, 0xffffffff);
}
