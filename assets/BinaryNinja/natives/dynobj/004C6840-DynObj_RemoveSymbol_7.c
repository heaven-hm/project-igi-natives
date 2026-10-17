// Original IGI.EXE function: DynObj_RemoveSymbol_7 (VA 0x004C6840; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RemoveSymbol_7.h"
void* DynObj_RemoveSymbol_7(void* context, void* param_2, int32_t param_3)

{
    void* result = param_2;
    void* entity_val = *(result + 0x54);

    if (entity_val)
        *(entity_val + 0x58) = *(result + 0x58);
    else if (param_3 != 0xffffffff)
        *(context + (param_3 << 2) + 0xd1c) = *(result + 0x58);
    else
        *(context + 0xd18) = *(result + 0x58);

    void* entity_3 = *(result + 0x58);

    if (entity_3)
    {
        result = *(result + 0x54);
        *(entity_3 + 0x54) = result;
    }

    return result;
}
