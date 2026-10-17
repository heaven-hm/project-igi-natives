// Original IGI.EXE function: FX_SmokeEmit_23 (VA 0x0048F140; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_23.h"
int32_t FX_SmokeEmit_23(int32_t context)

{
    g_5c8bfc = context;
    int32_t entity_1 = g_5c8c18;

    if (!entity_1)
        return context;

    return entity_1(context, g_5c8c1c);
}
