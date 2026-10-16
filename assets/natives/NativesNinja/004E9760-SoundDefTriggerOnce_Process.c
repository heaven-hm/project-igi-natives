#include "004E9760-SoundDefTriggerOnce_Process.h"
/* 0x004e9760 SoundDefTriggerOnce_Process full linked: callers=0 callees=3 */
int32_t* sub_4e9760(void* a1, int32_t* a2)

{
    int32_t* result = a2;

    if ((!*(a1 + 0xe2) || !result[1]) && *(a1 + 0x123))
    {
        if (!(*(a1 + 0x2c) & 2))
        {
        label_4e97ce:
            int32_t eax_3 = *(a1 + 0x134);

            if (eax_3 != *(a1 + 0x24))
            {
                int32_t edx_1 = *(a1 + 0x130);
                *(a1 + 0x24) = eax_3;
                *(a1 + 0x20) = edx_1;
                *(a1 + 0x28) = 0;
                *(a1 + 0x128) = 0;
            }

            eax_3 = *(a1 + 0xe0);
            char temp0_1 = eax_3;
            eax_3 = -(eax_3);
            *(a1 + 0x2c) = ((eax_3 - eax_3) & 0x10) | (*(a1 + 0x2c) & 0xffffffef);
            return sub_4e6d60(a1 + 0x20);
        }

        double* eax_2 = sub_4ebde0(*result);
        double var_8_1 = *(a1 + 0xcc) * 4096f;
        long double st0_1;
        st0_1 = sub_4b32f0(eax_2, a1 + 0x88);
        long double x87_r6_2 = var_8_1 * var_8_1;
        x87_r6_2 - st0_1;
        result = (x87_r6_2 < st0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, st0_1) ? 1 : 0) << 0xa
            | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 1))
            goto label_4e97ce;
    }

    return result;
}
