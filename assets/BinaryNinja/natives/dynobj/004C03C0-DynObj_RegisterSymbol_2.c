// Original IGI.EXE function: DynObj_RegisterSymbol_2 (VA 0x004C03C0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RegisterSymbol_2.h"
int32_t DynObj_RegisterSymbol_2(int32_t* a1)

{
    DynObj_FindSymbol_2(a1);
    Sys_ExecuteBytecode_2(*a1);
    *a1 = 0;
    return Sys_ExecuteBytecode_2(a1);
}
