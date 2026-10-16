#include "0049A3C0-PolyListDynCubeObj_LoadParameters.h"
/* 0x0049a3c0 PolyListDynCubeObj_LoadParameters full linked: callers=0 callees=1 */
void** sub_49a3c0(void* a1)

{
    void** result = *(a1 + 0x9c);

    if (result)
    {
        long double x87_r4_4 = g_bcab00 * (*(a1 + 0x30) - g_bcab18)
            + g_bcaafc * (*(a1 + 0x28) - g_bcab10)
            + g_bcaaf8 * (*(a1 + 0x20) - g_bcab08);
        result = sub_4b72e0(sub_49a390, 4, x87_r4_4);
        *result = a1;
    }

    return result;
}
