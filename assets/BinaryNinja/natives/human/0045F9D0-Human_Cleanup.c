#include "Human_Cleanup.h"
int32_t Human_Cleanup(void* a1, float a2)

{
    int16_t result = AI_CheckHearing_19(a1);

    if (!result)
    {
    label_45f9f6:
        result = *(a1 + 0xcf6);

        if (result)
        {
            *(a1 + 0x2e8) = 0xd;
            int32_t v_c_1 = 1;
            int32_t v_10_2 = FX_FragmentSimulate_14(a1 + 0x254, 0xd);
            void* v_18_1 = a1;
            long double fp0_1 =
                Level_CheckQTaskID_5(a2, a1 + 0x20, *(a1 + 0xa0) * 0.333333343f);
            long double f0_1 = 0f;
            fp0_1 - f0_1;
            result = (fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe | 0x3800;

            if (!(*(&result + 1) & 0x40))
            {
                long double x87_r7_4 = fp0_1 * *(a1 + 0x2cc);
                *(a1 + 0x2c8) = x87_r7_4 + *(a1 + 0x2c8);
                long double x87_r7_5 = x87_r7_4 + *(a1 + 0x254);
                *(a1 + 0x254) = x87_r7_5;
                long double f1 = *(a1 + 0x258);
                x87_r7_5 - f1;
                int32_t objC3 = *(a1 + 0x2f4);
                result = (x87_r7_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1) ? 1 : 0) << 0xa
                    | (x87_r7_5 == f1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 1))
                {
                    objC3 |= 0x20000;
                    *(a1 + 0xcf5) = 1;
                }

                *(a1 + 0x2f4) = objC3;
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
