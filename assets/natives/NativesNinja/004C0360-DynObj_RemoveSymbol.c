#include "004C0360-DynObj_RemoveSymbol.h"
/* 0x004c0360 DynObj_RemoveSymbol full linked: callers=2 callees=2 */
int32_t* sub_4c0360(int32_t a1)

{
    int32_t* result = Mem_Alloc(8, 4);
    int32_t i_1 = a1;
    result[1] = i_1;
    *result = Mem_Alloc(i_1 * 0xc, 4);

    if (i_1 <= 0)
        return result;

    int32_t eax_3 = 0;
    int32_t i;

    do
    {
        int32_t* ecx_2 = *result + eax_3;
        *ecx_2 = &ecx_2[1];
        void* ecx_4 = *result + eax_3;
        eax_3 += 0xc;
        i = i_1;
        i_1 -= 1;
        *(ecx_4 + 8) = ecx_4;
        *(*result + eax_3 - 8) = 0;
    } while (i != 1);
    return result;
}
