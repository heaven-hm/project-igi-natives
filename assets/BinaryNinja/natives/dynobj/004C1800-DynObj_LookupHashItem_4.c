#include "DynObj_LookupHashItem_4.h"
int32_t* Mem_Alloc8(int32_t a1)

{
    int32_t* result = Mem_Alloc((a1 << 2) + 8, 4);
    result[1] = a1;
    *result = 0;
    return result;
}
