// Original IGI.EXE function: Human_Cleanup (VA 0x0045F9D0; static CFG gate PASS, CFG score 1.000).
#include "Human_Cleanup.h"
int32_t Human_Cleanup(void* context, float param_2)

{
    int16_t result = AI_CheckHearing_19(context);

    if (!result)
    {
    label_45f9f6:
        result = *(context + 0xcf6);

        if (result)
        {
            *(context + 0x2e8) = 0xd;
            int32_t item_c_1 = 1;
            int32_t item_10_2 = FX_FragmentSimulate_14(context + 0x254, 0xd);
            void* item_18_1 = context;
            long double fp0_1 =
                Level_CheckQTaskID_5(param_2, context + 0x20, *(context + 0xa0) * 0.333333343f);
            long double f0_1 = 0.0f;
            fp0_1 - f0_1;
            result = (fp0_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0_1) ? 1 : 0) << 0xa
                | (fp0_1 == f0_1 ? 1 : 0) << 0xe | 0x3800;

            if (!(*(&result + 1) & 0x40))
            {
                long double fpu_val_7_4 = fp0_1 * *(context + 0x2cc);
                *(context + 0x2c8) = fpu_val_7_4 + *(context + 0x2c8);
                long double fpu_val_7_5 = fpu_val_7_4 + *(context + 0x254);
                *(context + 0x254) = fpu_val_7_5;
                long double f1 = *(context + 0x258);
                fpu_val_7_5 - f1;
                int32_t entity_3 = *(context + 0x2f4);
                result = (fpu_val_7_5 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f1) ? 1 : 0) << 0xa
                    | (fpu_val_7_5 == f1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 1))
                {
                    entity_3 |= 0x20000;
                    *(context + 0xcf5) = 1;
                }

                *(context + 0x2f4) = entity_3;
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
