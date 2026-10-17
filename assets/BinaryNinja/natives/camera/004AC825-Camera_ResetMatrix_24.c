// Original IGI.EXE function: Camera_ResetMatrix_24 (VA 0x004AC825; static CFG gate PASS, CFG score 0.889).
#include "Camera_ResetMatrix_24.h"
int32_t Camera_ResetMatrix_24(int32_t a1, int32_t* a2)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t v_c = objC;
    void* dstD = a2 - 1;
    int32_t result = 0;
    int32_t f0 = (dstD + 1) / 0x20;
    int32_t valA5;
    int32_t tmpD1;
    tmpD1 = HIGHD(dstD + 1);
    valA5 = LOWD(dstD + 1);
    int32_t* valA7 = a1 + (f0 << 2);

    if (*valA7 & 1 << ((0x1f - COMBINE(tmpD1, valA5) % 0x20) & 0x1f) && !Camera_ApplyPostProcess_24(a1, dstD + 2))
        result = Camera_UpdateViewCone_24(a1, dstD);

    *valA7 &= 0xffffffff << ((0x1f - COMBINE(tmpD1, valA5) % 0x20) & 0x1f);

    if (f0 + 1 < 3)
        __builtin_memset(a1 + ((f0 + 1) << 2), 0, (3 - (f0 + 1)) << 2);

    return result;
}
