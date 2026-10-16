#include "0048A620-FX_FragmentSimulate_16.h"
/* 0x0048a620 FX_FragmentSimulate_16 full linked: callers=15 callees=3 */
int32_t sub_48a620(int32_t* a1, int32_t a2)

{
    int32_t ecx_1 = a1[1] + a2;
    a1[1] = ecx_1;
    int32_t temp0 = a1[4] * ecx_1 / *a1;
    int32_t i = 0;

    if (a1[5] > 0)
    {
        do
        {
            int32_t ecx_5;
            int32_t edi_2;

            if (temp0 > 0)
                edi_2 = __memfill_u32(a1[6] + ((a1[4] * i) << 2), 0xff00, temp0);
            i += 1;
        } while (i < a1[5]);
    }

    void var_28;
    __builtin_memset(&var_28, 0, 0x28);
    int32_t var_24 = sub_491dc0();
    int32_t eax_9 = a1[4];
    int32_t var_8 = a1[6];
    int32_t var_10 = eax_9;
    int32_t var_18 = a1[2];
    int32_t var_1c = eax_9 << 2;
    int32_t var_14 = a1[3];
    int32_t var_c = a1[5];
    int32_t var_4 = 1;
    return sub_491d70(&var_28);
}
