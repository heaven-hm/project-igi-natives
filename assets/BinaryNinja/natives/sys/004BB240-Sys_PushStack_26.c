// Original IGI.EXE function: Sys_PushStack_26 (VA 0x004BB240; static CFG gate PASS, CFG score 1.000).
#include "Sys_PushStack_26.h"
int32_t Sys_PushStack_26(void* a1, int32_t* a2)

{
    do
    {
        int32_t valA;
        int32_t objC;
        int32_t tmpD;
        valA = DynObj_RegisterSymbol_3(valA, tmpD, objC, a1, a2);

        if (!valA)
            return 0;
    } while (*(a1 + 0x2c4) == 1);

    return 1;
}
