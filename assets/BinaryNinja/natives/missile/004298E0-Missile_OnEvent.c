// Original IGI.EXE function: Missile_OnEvent (VA 0x004298E0; static CFG gate PASS, CFG score 1.000).
#include "Missile_OnEvent.h"
int32_t Missile_OnEvent(int32_t* a1 @ 0x8)

{
    Sys_ResolveSymbol_23(a1[1], a1[2], *a1, 0x10);
    int32_t result = a1[2] + 1;
    a1[2] = result;
    return result;
}
