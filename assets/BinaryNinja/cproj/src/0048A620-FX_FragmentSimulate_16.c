#include "gi_platform.h"
#include "0048A620-FX_FragmentSimulate_16.h"
int32_t FX_FragmentSimulate_16(int32_t* a1, int32_t a2)

{
    int32_t objC1 = a1[1] + a2;
    a1[1] = objC1;
    int32_t f0 = a1[4] * objC1 / *a1;
    int32_t i = 0;

    if (a1[5] > 0)
    {
        do
        {
            int32_t objC5;
            int32_t dstD2;

            if (f0 > 0)
                dstD2 = __memfill_u32(a1[6] + ((a1[4] * i) << 2), 0xff00, f0);
            i += 1;
        } while (i < a1[5]);
    }

    char v_28;
    __builtin_memset(&v_28, 0, 0x28);
    int32_t v_24 = Display_CreateSurface_4();
    int32_t valA9 = a1[4];
    int32_t v_8 = a1[6];
    int32_t v_10 = valA9;
    int32_t v_18 = a1[2];
    int32_t v_1c = valA9 << 2;
    int32_t v_14 = a1[3];
    int32_t v_c = a1[5];
    int32_t v_4 = 1;
    return Display_RestoreDevice_4(&v_28);
}
