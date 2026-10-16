#include "004C1530-DynObj_RegisterSymbol_4.h"
/* 0x004c1530 DynObj_RegisterSymbol_4 full linked: callers=2 callees=0 */
int32_t sub_4c1530(void* a1, int32_t a2)

{
    if (a2 < *(a1 + 8))
    {
        int32_t ecx_1 = *(*(a1 + 0x10) + (a2 << 2));

        if (ecx_1 < *(a1 + 0xc))
            return *(a1 + 0x14) + ecx_1;
    }

    return 0;
}
