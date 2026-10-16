#include "0048E430-FX_FragmentSimulate_20.h"
/* 0x0048e430 FX_FragmentSimulate_20 full linked: callers=0 callees=3 */
int32_t sub_48e430(void* a1, int32_t* a2, double* a3)

{
    double var_18[0x3];
    sub_4f9770(&var_18, a2);
    long double st0 = sub_4b32b0(a3, &var_18);
    long double x87_r6_1 = a3[3] * 4096.0;
    x87_r6_1 - st0;
    int16_t eax = (x87_r6_1 < st0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, st0) ? 1 : 0) << 0xa
        | (x87_r6_1 == st0 ? 1 : 0) << 0xe;

    if (*(&eax + 1) & 1)
    {
        eax = sub_48b260(a1, a2, 0, 0);

        if (eax)
        {
            int32_t eax_1 = *a2;
            a3[4] = eax_1;
            eax_1 = 1;
            return eax_1;
        }
    }

    eax = 0;
    return eax;
}
