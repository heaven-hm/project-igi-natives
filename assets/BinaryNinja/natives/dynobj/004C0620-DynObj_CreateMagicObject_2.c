#include "DynObj_CreateMagicObject_2.h"
int32_t DynObj_CreateMagicObject_2(int32_t* a1, int32_t* a2, char* a3)

{
    if (!DynObj_InsertHashItem_2(a1, &a3, a3))
    {
        if (a2)
            *a2 = 0;

        return 0;
    }

    char* objC = a3;

    if (a2)
        *a2 = *(objC + 0xc);

    return *(objC + 8);
}
