#include "004C0750-DynObj_RemoveSymbol_2.h"
/* 0x004c0750 DynObj_RemoveSymbol_2 full linked: callers=1 callees=2 */
void* sub_4c0750(void* a1)

{
    void* result = a1;
    int32_t* i_1 = *(result + 8);

    for (int32_t* i = *i_1; i; i = *i)
    {
        sub_4af960(i_1);
        result = sub_4b0d10(i_1);
        i_1 = i;
    }

    return result;
}
