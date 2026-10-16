#include "004CFC00-DynObj_CreateMagicObject_15.h"
/* 0x004cfc00 DynObj_CreateMagicObject_15 full linked: callers=1 callees=2 */
int32_t sub_4cfc00(int32_t a1)

{
    int32_t edi = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t result = ~i;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&g_a4edf8, edi - result, result & 0xfffffffc);
    memcpy(edi_2, esi_1, result & 3);
    return result;
}
