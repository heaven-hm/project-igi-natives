#include "004EA560-SoundDefGraph_Setup.h"
/* 0x004ea560 SoundDefGraph_Setup full linked: callers=0 callees=3 */
int32_t* sub_4ea560(void* a1, int32_t* a2)

{
    if (*(a1 + 0xd4) && a2[1])
        return a2;

    if (*(a1 + 0x2c) & 2)
    {
        double* eax_3 = sub_4ebde0(*a2);
        double var_8_1 = *(a1 + 0xd0) * 4096f;
        int32_t* eax_1;
        long double st0_1;
        st0_1 = sub_4b32f0(eax_3, a1 + 0x88);
        long double x87_r6_2 = var_8_1 * var_8_1;
        x87_r6_2 - st0_1;
        eax_1 = (x87_r6_2 < st0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, st0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe;

        if (*(&eax_1 + 1) & 1)
            return eax_1;
    }

    int32_t eax_4 = *(a1 + 0x184);

    if (eax_4 != *(a1 + 0x24))
    {
        int32_t edx_1 = *(a1 + 0x180);
        *(a1 + 0x24) = eax_4;
        *(a1 + 0x20) = edx_1;
        *(a1 + 0x28) = 0;
    }

    *(a1 + 0x2c) |= 0x10;
    return sub_4e6d60(a1 + 0x20);
}
