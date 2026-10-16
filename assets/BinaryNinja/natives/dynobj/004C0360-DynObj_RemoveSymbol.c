#include "DynObj_RemoveSymbol.h"
int32_t* DynObj_RemoveSymbol(int32_t a1)

{
    int32_t* result = Mem_Alloc(8, 4);
    int32_t i_1 = a1;
    result[1] = i_1;
    *result = Mem_Alloc(i_1 * 0xc, 4);

    if (i_1 <= 0)
        return result;

    int32_t valA3 = 0;
    int32_t i;

    do
    {
        int32_t* objC2 = *result + valA3;
        *objC2 = &objC2[1];
        void* objC4 = *result + valA3;
        valA3 += 0xc;
        i = i_1;
        i_1 -= 1;
        *(objC4 + 8) = objC4;
        *(*result + valA3 - 8) = 0;
    } while (i != 1);
    return result;
}
