// Original IGI.EXE function: Missile_OnEvent (VA 0x004298E0; static CFG gate PASS, CFG score 1.000).
#include "Missile_OnEvent.h"
int32_t Missile_OnEvent(int32_t* context )

{
    Sys_ResolveSymbol_23(context[1], context[2], *context, 0x10);
    int32_t result = context[2] + 1;
    context[2] = result;
    return result;
}
