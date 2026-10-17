// Original IGI.EXE function: DynObj_InsertHashItem_12 (VA 0x004CE5C0; static CFG gate PASS, CFG score 0.889).
#include "DynObj_InsertHashItem_12.h"
int16_t* DynObj_InsertHashItem_12(int32_t context, int32_t param_2)

{
    int16_t* result = *(context + (param_2 << 2) + 0x100);

    if (result != g_536148)
    {
        memset(context + param_2 * 0x1fc + 0x118, 0, 0x1fc);
        result = DynObj_FindSymbol_12(context, DynObj_InsertHashItem_9(context, param_2));
        *(context + (param_2 << 2) + 0x100) = g_536148;
    }

    return result;
}
