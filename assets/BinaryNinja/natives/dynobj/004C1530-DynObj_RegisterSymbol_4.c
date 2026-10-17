// Original IGI.EXE function: DynObj_RegisterSymbol_4 (VA 0x004C1530; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RegisterSymbol_4.h"
int32_t DynObj_RegisterSymbol_4(void* context, int32_t param_2)

{
    if (param_2 < *(context + 8))
    {
        int32_t entity_1 = *(*(context + 0x10) + (param_2 << 2));

        if (entity_1 < *(context + 0xc))
            return *(context + 0x14) + entity_1;
    }

    return 0;
}
