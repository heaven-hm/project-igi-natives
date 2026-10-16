#include "DynObj_LookupHashItem_2.h"
uint32_t DynObj_LookupHashItem_2(char* a1, int32_t a2)

{
    char* tmpD = a1;
    int32_t valA = 0;

    for (char i = *tmpD; i; i = *tmpD)
    {
        tmpD = &tmpD[1];
        valA = (valA << 5) + i;
    }

    return COMBINE(0, valA) % a2;
}
