#include "004C1800-DynObj_LookupHashItem_4.h"
/* 0x004c1800 DynObj_LookupHashItem_4 full linked: callers=17 callees=1 */
int32_t* sub_4c1800(int32_t a1)

{
    int32_t* result = Mem_Alloc((a1 << 2) + 8, 4);
    result[1] = a1;
    *result = 0;
    return result;
}
