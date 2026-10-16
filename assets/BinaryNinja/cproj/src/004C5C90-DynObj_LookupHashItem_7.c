#include "gi_platform.h"
#include "004C5C90-DynObj_LookupHashItem_7.h"
int32_t* DynObj_LookupHashItem_7(int32_t* a1 , int32_t a2, int32_t a3, int32_t a4)

{
    a1[0xe] = 0x8000;
    (*(int32_t*)(uintptr_t)(a1 + 0x3a)) = 0x8000;
    a1[0xc] = 0;
    a1[1] = a2;
    *a1 = a3;
    __builtin_memset(&a1[2], 0, 0x28);
    a1[0xd] = a4;
    a1[0xf] = 0;
    return a1;
}
