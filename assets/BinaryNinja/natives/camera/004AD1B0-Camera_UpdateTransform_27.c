#include "Camera_UpdateTransform_27.h"
🌐  uint32_t __stdcall __aullrem(int32_t a1, uint32_t a2, int32_t a3, uint32_t a4) __pure

{
    uint32_t result;

    if (a4)
    {
        uint32_t i = a4;
        int32_t ctxB1 = a3;
        uint32_t tmpD4 = a2;
        int32_t valA4 = a1;

        do
        {
            ctxB1 = RRCD(ctxB1, 1, i & 1);
            uint32_t f4_1 = tmpD4;
            tmpD4 u>>= 1;
            valA4 = RRCD(valA4, 1, f4_1 & 1);
            i u>>= 1;
        } while (i);

        uint32_t f0_3 = COMBINE(tmpD4, valA4) / ctxB1;
        int32_t valA6 = f0_3 * a4;
        int32_t valA8;
        int32_t tmpD5;
        tmpD5 = HIGHD(f0_3 * a3);
        valA8 = LOWD(f0_3 * a3);
        int32_t tmpD6 = tmpD5 + valA6;

        if (tmpD5 + valA6 < tmpD5 || tmpD6 > a2)
            valA8 -= a3;
        else if (tmpD6 >= a2 && valA8 > a1)
            valA8 -= a3;

        result = -((valA8 - a1));
    }
    else
        result = COMBINE(COMBINE(0, a2) % a3, a1) % a3;

    return result;
}
