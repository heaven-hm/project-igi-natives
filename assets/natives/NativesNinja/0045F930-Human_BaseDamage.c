#include "0045F930-Human_BaseDamage.h"
/* 0x0045f930 Human_BaseDamage full linked: callers=0 callees=5 */
int32_t sub_45f930(void* a1, int32_t* a2)

{
    sub_463ad0(a1, &a2[2], *a2);
    int16_t result = sub_463150(a1);

    if (!result)
    {
    label_45f965:
        result = *(a1 + 0xcf6);

        if (result)
        {
            int32_t eax_1 = sub_489c60(a1, a2);
            *(a1 + 0x2e8) = eax_1;
            sub_489e10(a1 + 0x254, eax_1);
            long double x87_r7_2 = (a1 + 0x254)[eax_1 * 2 + 4] * a2[1];
            (a1 + 0x254)[eax_1 * 2 + 3] = x87_r7_2 + (a1 + 0x254)[eax_1 * 2 + 3];
            long double x87_r7_3 = x87_r7_2 + *(a1 + 0x254);
            *(a1 + 0x254) = x87_r7_3;
            long double temp0_1 = *(a1 + 0x258);
            x87_r7_3 - temp0_1;
            int32_t ecx_1 = *(a1 + 0x2f4);
            result = (x87_r7_3 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
            {
                ecx_1 |= 0x20000;
                *(a1 + 0xcf5) = 1;
            }

            *(a1 + 0x2f4) = ecx_1;
        }
    }
    else
    {
        result = Human_HitDamage();

        if (!result)
            goto label_45f965;
    }

    return result;
}
