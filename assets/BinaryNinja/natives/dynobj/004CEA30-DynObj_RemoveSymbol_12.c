// Original IGI.EXE function: DynObj_RemoveSymbol_12 (VA 0x004CEA30; static CFG gate PASS, CFG score 1.000).
#include "DynObj_RemoveSymbol_12.h"
int32_t* DynObj_RemoveSymbol_12(void* a1)

{
    int32_t* result = *(a1 + 0xdc8);

    if (!result)
    {
        int32_t v_8_1 = 0;
        result = Physics_ApplyImpulse_14(a1);
        *(a1 + 0xdc8) = 1;
    }

    return result;
}
