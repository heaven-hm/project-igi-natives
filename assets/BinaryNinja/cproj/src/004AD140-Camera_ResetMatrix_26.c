#include "gi_platform.h"
#include "004AD140-Camera_ResetMatrix_26.h"
🌐  uint32_t __stdcall __aulldiv(int32_t a1, uint32_t a2, int32_t a3, uint32_t a4) __pure

{
    if (!a4)
        return COMBINE(COMBINE(0, a2) % a3, a1) / a3;

    uint32_t i = a4;
    int32_t ctxB1 = a3;
    uint32_t tmpD3 = a2;
    int32_t valA6 = a1;

    do
    {
        ctxB1 = RRCD(ctxB1, 1, i & 1);
        uint32_t f4_1 = tmpD3;
        tmpD3 u>>= 1;
        valA6 = RRCD(valA6, 1, f4_1 & 1);
        i u>>= 1;
    } while (i);

    uint32_t result = COMBINE(tmpD3, valA6) / ctxB1;
    int32_t valA8 = result * a4;
    int32_t valA10;
    int32_t tmpD4;
    tmpD4 = HIGHD(a3 * result);
    valA10 = LOWD(a3 * result);
    int32_t tmpD5 = tmpD4 + valA8;

    if (tmpD4 + valA8 >= tmpD4 && tmpD5 <= a2 && (tmpD5 < a2 || valA10 <= a1))
        return result;

    return result - 1;
}
