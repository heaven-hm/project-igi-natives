#include "DynObj_InsertHashItem_12.h"
int16_t* DynObj_InsertHashItem_12(int32_t a1, int32_t a2)

{
    int16_t* result = *(a1 + (a2 << 2) + 0x100);

    if (result != g_536148)
    {
        __builtin_memset(a1 + a2 * 0x1fc + 0x118, 0, 0x1fc);
        result = DynObj_FindSymbol_12(a1, DynObj_InsertHashItem_9(a1, a2));
        *(a1 + (a2 << 2) + 0x100) = g_536148;
    }

    return result;
}
