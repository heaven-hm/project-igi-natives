// Original IGI.EXE function: DynObj_LinkDynamicCube_7 (VA 0x004C67E0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_7.h"
int32_t DynObj_LinkDynamicCube_7(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    int32_t valA3 = (a1 ^ a4) | (a2 ^ a5) | (a3 ^ a6);

    if (!valA3)
        return 0x2000;

    int32_t eflags;
    int32_t valA5;
    valA5 = __bsr_gprv_memv(valA3);
    int32_t result = 1 << (valA5 & 0x1f);

    if (result < 0x2000)
        return 0x2000;

    if (result <= 0x40000000)
        return result;

    return 0x40000000;
}
