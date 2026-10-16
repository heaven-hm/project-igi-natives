#include "004CF050-DynObj_FindSymbol_14.h"
/* 0x004cf050 DynObj_FindSymbol_14 full linked: callers=2 callees=1 */
int32_t* sub_4cf050()

{
    int32_t* result;

    for (int32_t* i = &g_a443a0; i < &g_a4ec60; i = &i[0x12])
    {
        result = &i[5];

        if (result)
            result = sub_4ced50(i);
    }

    return result;
}
