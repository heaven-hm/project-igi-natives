#include "Human_BaseDamage.h"
int32_t Human_BaseDamage(void* a1, int32_t* a2)

{
    AI_UpdateOrders_21(a1, &a2[2], *a2);
    int16_t result = AI_CheckHearing_19(a1);

    if (!result)
    {
    label_45f965:
        result = *(a1 + 0xcf6);

        if (result)
        {
            int32_t valA1 = FX_000011(a1, a2);
            *(a1 + 0x2e8) = valA1;
            FX_FragmentSimulate_14(a1 + 0x254, valA1);
            long double x87_r7_2 = (a1 + 0x254)[valA1 * 2 + 4] * a2[1];
            (a1 + 0x254)[valA1 * 2 + 3] = x87_r7_2 + (a1 + 0x254)[valA1 * 2 + 3];
            long double x87_r7_3 = x87_r7_2 + *(a1 + 0x254);
            *(a1 + 0x254) = x87_r7_3;
            long double f0_1 = *(a1 + 0x258);
            x87_r7_3 - f0_1;
            int32_t objC1 = *(a1 + 0x2f4);
            result = (x87_r7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
            {
                objC1 |= 0x20000;
                *(a1 + 0xcf5) = 1;
            }

            *(a1 + 0x2f4) = objC1;
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
