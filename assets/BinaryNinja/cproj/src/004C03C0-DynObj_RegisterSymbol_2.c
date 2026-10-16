#include "gi_platform.h"
#include "004C03C0-DynObj_RegisterSymbol_2.h"
int32_t DynObj_RegisterSymbol_2(int32_t* a1)

{
    DynObj_FindSymbol_2(a1);
    Sys_ExecuteBytecode_2(*a1);
    *a1 = 0;
    return Sys_ExecuteBytecode_2(a1);
}
