#include "gi_platform.h"
#include "004ACC4D-Camera_ApplyLineFilter_26.h"
int32_t* Camera_ApplyLineFilter_26(int32_t* a1, int32_t* a2)

{
    int32_t objC;
    int32_t v_8 = objC;
    int32_t valA;
    valA = (*(int32_t*)(uintptr_t)(a2 + 6));
    int32_t objC3 = valA >> 4 & 0x7ff;
    int32_t tmpD1 = *a2;
    uint32_t ctxB = objC3;
    int32_t valA3 = a2[1] & 0xfffff;
    int32_t v_8_1 = 0x80000000;
    int32_t dstD1;

    if (ctxB)
    {
        dstD1 = ctxB == 0x7ff ? 0x7fff : objC3 + 0x3c00;

        goto label_4accc6;
    }

    int32_t* result;

    if (valA3 || tmpD1)
    {
        dstD1 = objC3 + 0x3c01;
        v_8_1 = 0;
    label_4accc6: ;
        result = a1;
        int32_t objC7 = tmpD1 >> 0x15 | valA3 << 0xb | v_8_1;
        result[1] = objC7;
        *result = tmpD1 << 0xb;

        while (!(0x80000000 & objC7))
        {
            int32_t tmpD3 = *result;
            int32_t ctxB3 = tmpD3 >> 0x1f | (objC7 * 2);
            *result = tmpD3 * 2;
            result[1] = ctxB3;
            dstD1 += 0xffff;
            objC7 = ctxB3;
        }

        result[2] = (valA & 0x8000) | dstD1;
    }
    else
    {
        result = a1;
        result[1] = 0;
        *result = 0;
        result[2] = 0;
    }

    return result;
}
