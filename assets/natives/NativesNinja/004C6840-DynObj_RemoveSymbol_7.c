#include "004C6840-DynObj_RemoveSymbol_7.h"
/* 0x004c6840 DynObj_RemoveSymbol_7 full linked: callers=15 callees=0 */
void* sub_4c6840(void* a1, void* a2, int32_t a3)

{
    void* result = a2;
    void* ecx = *(result + 0x54);

    if (ecx)
        *(ecx + 0x58) = *(result + 0x58);
    else if (a3 != 0xffffffff)
        *(a1 + (a3 << 2) + 0xd1c) = *(result + 0x58);
    else
        *(a1 + 0xd18) = *(result + 0x58);

    void* ecx_3 = *(result + 0x58);

    if (ecx_3)
    {
        result = *(result + 0x54);
        *(ecx_3 + 0x54) = result;
    }

    return result;
}
