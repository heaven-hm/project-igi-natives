#include "DynObj_LookupHashItem_14.h"
int32_t* DynObj_LookupHashItem_14(int32_t* a1, int32_t a2)

{
    int32_t tmpD = 0;
    int32_t* result = *a1;
    int32_t* i = *result;

    while (i)
    {
        if (tmpD == a2)
            return result;

        result = i;
        i = *i;
        tmpD += 1;
    }

    return nullptr;
}
