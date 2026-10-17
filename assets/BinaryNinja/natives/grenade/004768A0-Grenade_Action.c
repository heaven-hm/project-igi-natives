// Original IGI.EXE function: Grenade_Action (VA 0x004768A0; static CFG gate PASS, CFG score 1.000).
#include "Grenade_Action.h"
int32_t* Grenade_Action(int32_t* a1 @ 0x8)

{
    void* valA1 = *(a1[1] + 0x6e0);

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        *(a1[1] + 0x6e0) = 0;
    }

    int32_t* valA2 = Script_FormatString_31(*a1, "Grenade - Explosion falloff (meters)");
    int32_t* ctxB = valA2;

    if (!ctxB)
        ctxB = Script_CallNativeHandler_31(*a1, "Grenade - Explosion falloff (meters)", valA2);

    int32_t* dstD = Script_FormatString_31(*a1, "Grenade - Explosion radius (meters)");

    if (!dstD)
        dstD = Script_CallNativeHandler_31(*a1, "Grenade - Explosion radius (meters)", 0x40a00000);

    int32_t* valA8 = Script_FormatString_31(*a1, "Grenade - Explosion damage factor");

    if (!valA8)
        valA8 = Script_CallNativeHandler_31(*a1, "Grenade - Explosion damage factor", 0x3f800000);

    int32_t tmpD2 = ctxB[0x49];
    int32_t objC4 = dstD[0x49];
    int32_t tmpD3 = valA8[0x49];
    *(a1[1] + 0x6e0) = Mem_Alloc(0xc, 4);
    int32_t* result = *(a1[1] + 0x6e0);
    *result = tmpD3;
    result[1] = objC4;
    result[2] = tmpD2;
    return result;
}
