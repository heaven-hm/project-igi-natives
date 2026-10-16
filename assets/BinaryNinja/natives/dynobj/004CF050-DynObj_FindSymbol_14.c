#include "DynObj_FindSymbol_14.h"
int32_t* DynObj_FindSymbol_14()

{
    int32_t* result;

    for (int32_t* i = &g_a443a0; i < &g_a4ec60; i = &i[0x12])
    {
        result = &i[5];

        if (result)
            result = DynObj_Johan_2(i);
    }

    return result;
}
