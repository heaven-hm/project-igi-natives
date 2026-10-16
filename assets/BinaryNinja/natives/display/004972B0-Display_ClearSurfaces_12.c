#include "Display_ClearSurfaces_12.h"
int32_t Display_ClearSurfaces_12(int32_t a1)

{
    int32_t srcS = a1;
    int32_t f0 = *(*(srcS + 0xc) + 0x1c) / g_limit_b;
    int32_t* valA4 = *(srcS + 0x10);
    (*(*valA4 + 0x10))(valA4, &a1, 0);
    void* objC1 = *(srcS + 0xc);
    int32_t valA7;
    int32_t tmpD2;
    tmpD2 = HIGHD(*(objC1 + 0x18) * *(objC1 + 0x16));
    valA7 = LOWD(*(objC1 + 0x18) * *(objC1 + 0x16));
    int32_t f0_1 = a1 / ((valA7 + (tmpD2 & 7)) >> 3);
    int32_t result = *(srcS + 0x3c);
    *(srcS + 0x20) = f0_1;

    if (result == 1 && g_c28c5c > *(srcS + 0x2c))
    {
        *(srcS + 0x3c) = 2;
        result = 0;
        return result;
    }

    if (result && result != 1)
    {
    label_49732b:
        result = 0;
        return result;
    }

    int32_t ctxB2 = *(srcS + 0x28);
    int32_t tmpD11;

    if (f0_1 <= ctxB2)
        tmpD11 = ctxB2 - f0_1;
    else
    {
        int32_t valA14;
        int32_t tmpD7;
        tmpD7 = HIGHD(0x10624dd3 * *(objC1 + 0x1c) * 0xfa0);
        valA14 = LOWD(0x10624dd3 * *(objC1 + 0x1c) * 0xfa0);
        int32_t tmpD8 = tmpD7 >> 6;
        tmpD11 = tmpD8 + (tmpD8 >> 0x1f) - f0_1 + ctxB2;
    }

    result = (*(srcS + 0x34) - tmpD11) / f0;

    for (int32_t i = result; i > 0; i -= 1)
    {
        Display_RestoreDevice_11(srcS, f0);
        result = *(srcS + 0x3c);

        if (result == 0xffffffff)
            goto label_49732b;
    }

    result = 1;
    return result;
}
