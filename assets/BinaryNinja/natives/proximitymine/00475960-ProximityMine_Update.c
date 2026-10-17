// Original IGI.EXE function: ProximityMine_Update (VA 0x00475960; static CFG gate PASS, CFG score 1.000).
#include "ProximityMine_Update.h"
int32_t* ProximityMine_Update(int32_t* a1 @ 0x8)

{
    void* valA1 = *(a1[1] + 0x6e4);

    if (valA1)
    {
        Sys_ExecuteBytecode_2(valA1);
        *(a1[1] + 0x6e4) = 0;
    }

    int32_t* flagP = Script_FormatString_31(*a1, "Proximitymine - Time before arming (seconds)");

    if (!flagP)
        flagP = Script_CallNativeHandler_31(*a1, "Proximitymine - Time before arming (seconds)", 0x40000000);

    int32_t* ctxB = Script_FormatString_31(*a1, "Proximitymine - Countdown time (seconds)");

    if (!ctxB)
        ctxB = Script_CallNativeHandler_31(*a1, "Proximitymine - Countdown time (seconds)", 0x3f000000);

    int32_t* dstD = Script_FormatString_31(*a1, "Proximitymine - Activate radius (meters)");

    if (!dstD)
        dstD = Script_CallNativeHandler_31(*a1, "Proximitymine - Activate radius (meters)", 0x3fc00000);

    int32_t* valA10 = Script_FormatString_31(*a1, "Proximitymine - Explosion radius (meters)");

    if (!valA10)
        valA10 = Script_CallNativeHandler_31(*a1, "Proximitymine - Explosion radius (meters)", 0x40400000);

    int32_t objC4 = flagP[0x49];
    int32_t tmpD3 = ctxB[0x49];
    int32_t objC5 = dstD[0x49];
    int32_t tmpD4 = valA10[0x49];
    *(a1[1] + 0x6e4) = Mem_Alloc(0x10, 4);
    int32_t* result = *(a1[1] + 0x6e4);
    *result = objC4;
    result[1] = tmpD3;
    result[2] = objC5;
    result[3] = tmpD4;
    return result;
}
