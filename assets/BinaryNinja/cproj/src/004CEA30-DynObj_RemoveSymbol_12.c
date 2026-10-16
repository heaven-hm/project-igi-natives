#include "gi_platform.h"
#include "004CEA30-DynObj_RemoveSymbol_12.h"
int32_t* DynObj_RemoveSymbol_12(void* a1)

{
    int32_t* result = (*(int32_t*)(uintptr_t)(a1 + 0xdc8));

    if (!result)
    {
        int32_t v_8_1 = 0;
        result = Physics_ApplyImpulse_14(a1);
        (*(int32_t*)(uintptr_t)(a1 + 0xdc8)) = 1;
    }

    return result;
}
