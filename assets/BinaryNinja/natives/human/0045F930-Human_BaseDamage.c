// IGI native provenance: Human_BaseDamage - 0x0045F930 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045F930-Human_BaseDamage.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Human_BaseDamage.h"
int32_t Human_BaseDamage(void* context, int32_t* param_2)

{
    AI_UpdateOrders_21(context, &param_2[2], *param_2);
    int16_t result = AI_CheckHearing_19(context);

    if (!result)
    {
    label_45f965:
        result = *(context + 0xcf6);

        if (result)
        {
            int32_t data_1 = FX_000011(context, param_2);
            *(context + 0x2e8) = data_1;
            FX_FragmentSimulate_14(context + 0x254, data_1);
            long double fpu_val_7_2 = (context + 0x254)[data_1 * 2 + 4] * param_2[1];
            (context + 0x254)[data_1 * 2 + 3] = fpu_val_7_2 + (context + 0x254)[data_1 * 2 + 3];
            long double fpu_val_7_3 = fpu_val_7_2 + *(context + 0x254);
            *(context + 0x254) = fpu_val_7_3;
            long double f0_1 = *(context + 0x258);
            fpu_val_7_3 - f0_1;
            int32_t entity_1 = *(context + 0x2f4);
            result = (fpu_val_7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f0_1 ? 1 : 0) << 0xe;

            if (!(*(&result + 1) & 1))
            {
                entity_1 |= 0x20000;
                *(context + 0xcf5) = 1;
            }

            *(context + 0x2f4) = entity_1;
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
