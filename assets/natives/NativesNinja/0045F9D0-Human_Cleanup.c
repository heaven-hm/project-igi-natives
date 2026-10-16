#include "0045F9D0-Human_Cleanup.h"
/* 0x0045f9d0 Human_Cleanup full linked: callers=0 callees=4 */
int32_t sub_45f9d0(void* a1, float a2)

{
    int16_t result = sub_463150(a1);

    if (!result)
    {
    label_45f9f6:
        result = *(a1 + 0xcf6);

        if (result)
        {
            *(a1 + 0x2e8) = 0xd;
            int32_t var_c_1 = 1;
            int32_t var_10_2 = sub_489e10(a1 + 0x254, 0xd);
            void* var_18_1 = a1;
            long double st0_1 =
                Level_CheckQTaskID_5(a2, a1 + 0x20, *(a1 + 0xa0) * 0.333333343f);
            long double temp0_1 = 0f;
            st0_1 - temp0_1;
            result = (st0_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0_1) ? 1 : 0) << 0xa
                | (st0_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800;

            if (!(*(&result + 1) & 0x40))
            {
                long double x87_r7_4 = st0_1 * *(a1 + 0x2cc);
                *(a1 + 0x2c8) = x87_r7_4 + *(a1 + 0x2c8);
                long double x87_r7_5 = x87_r7_4 + *(a1 + 0x254);
                *(a1 + 0x254) = x87_r7_5;
                long double temp1 = *(a1 + 0x258);
                x87_r7_5 - temp1;
                int32_t ecx_3 = *(a1 + 0x2f4);
                result = (x87_r7_5 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == temp1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 1))
                {
                    ecx_3 |= 0x20000;
                    *(a1 + 0xcf5) = 1;
                }

                *(a1 + 0x2f4) = ecx_3;
            }
        }
    }
    else
    {
        result = Human_HitDamage();

        if (!result)
            goto label_45f9f6;
    }

    return result;
}
