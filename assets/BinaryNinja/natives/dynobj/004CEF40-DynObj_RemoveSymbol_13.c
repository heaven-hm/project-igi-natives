#include "DynObj_RemoveSymbol_13.h"
int32_t* DynObj_RemoveSymbol_13()

{
    Sys_ResolveSymbol_2(g_54820c);
    Sys_ResolveSymbol_2(g_548208);
    Sys_ResolveSymbol_2(g_548204);
    Sys_ResolveSymbol_2(g_548200);
    int32_t* result = g_a4ec68;

    for (int32_t* i = result[1]; i; i = i[1])
    {
        DynObj_RegisterSymbol_15(result);
        result = i;
    }

    return result;
}
