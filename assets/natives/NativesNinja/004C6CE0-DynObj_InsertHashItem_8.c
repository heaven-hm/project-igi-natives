#include "004C6CE0-DynObj_InsertHashItem_8.h"
/* 0x004c6ce0 DynObj_InsertHashItem_8 full linked: callers=3 callees=0 */
void* sub_4c6ce0(void* a1, void* a2)

{
    void* result = *(a2 + 0x58);

    if (a2 != *(a1 + 0x2c))
    {
        void* ecx_1 = *(a2 + 0x54);

        if (result)
            *(result + 0x54) = ecx_1;

        if (ecx_1)
            *(ecx_1 + 0x58) = result;
    }
    else
    {
        *(a1 + 0x2c) = result;

        if (result)
            *(result + 0x54) = 0;
    }

    return result;
}
