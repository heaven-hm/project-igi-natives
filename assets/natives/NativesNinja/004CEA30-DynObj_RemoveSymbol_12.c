#include "004CEA30-DynObj_RemoveSymbol_12.h"
/* 0x004cea30 DynObj_RemoveSymbol_12 full linked: callers=6 callees=1 */
int32_t* sub_4cea30(void* a1)

{
    int32_t* result = *(a1 + 0xdc8);

    if (!result)
    {
        int32_t var_8_1 = 0;
        result = sub_50fae0(a1);
        *(a1 + 0xdc8) = 1;
    }

    return result;
}
