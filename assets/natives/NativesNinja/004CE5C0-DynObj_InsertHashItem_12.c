#include "004CE5C0-DynObj_InsertHashItem_12.h"
/* 0x004ce5c0 DynObj_InsertHashItem_12 full linked: callers=3 callees=3 */
int16_t* sub_4ce5c0(int32_t a1, int32_t a2)

{
    int16_t* result = *(a1 + (a2 << 2) + 0x100);

    if (result != g_536148)
    {
        __builtin_memset(a1 + a2 * 0x1fc + 0x118, 0, 0x1fc);
        result = sub_4ce530(a1, sub_4c7750(a1, a2));
        *(a1 + (a2 << 2) + 0x100) = g_536148;
    }

    return result;
}
