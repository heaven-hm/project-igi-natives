#include "004CF300-DynObj_LookupHashItem_14.h"
/* 0x004cf300 DynObj_LookupHashItem_14 full linked: callers=1 callees=0 */
int32_t* sub_4cf300(int32_t* a1, int32_t a2)

{
    int32_t edx = 0;
    int32_t* result = *a1;
    int32_t* i = *result;

    while (i)
    {
        if (edx == a2)
            return result;

        result = i;
        i = *i;
        edx += 1;
    }

    return nullptr;
}
