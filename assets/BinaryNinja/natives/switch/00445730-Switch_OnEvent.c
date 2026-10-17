// IGI native provenance: Switch_OnEvent - 0x00445730 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00445730-Switch_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Switch_OnEvent.h"
int32_t Switch_OnEvent(double* context, void* param_2)

{
    int16_t result;
    result = *(context + 0x1c2);

    if (!result)
    {
        double item_30;
        WeaponType_UpdateAnim(&item_30, context, 0);
        long double fpu_val_7_2 = item_30 + context[4];
        item_30 = fpu_val_7_2;
        double item_18_1 = *(param_2 + 8) - fpu_val_7_2;
        double item_28;
        double item_10_1 = *(param_2 + 0x10) - (item_28 + context[5]);
        double item_20;
        double item_8_1 = *(param_2 + 0x18) - (item_20 + context[6]);
        long double fpu_val_7_11 =
            context[0x11] * item_8_1 + *(context + 0x7c) * item_10_1 + context[0xe] * item_18_1;
        long double fpu_val_6_14 =
            *(context + 0x8c) * item_8_1 + context[0x10] * item_10_1 + *(context + 0x74) * item_18_1;
        long double f0_1 = 0.0;
        fpu_val_6_14 - f0_1;
        result = (fpu_val_6_14 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_14, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_6_14 == f0_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            long double f1_1 = 0.0;
            fpu_val_7_11 - f1_1;

            if (*(&((fpu_val_7_11 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_11, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_11 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                fpu_val_7_11 = -(fpu_val_7_11);

            long double f2_1 = 3072.0;
            fpu_val_7_11 - f2_1;
            result = (fpu_val_7_11 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_11, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_11 == f2_1 ? 1 : 0) << 0xe;
            long double fpu0;
            long double fpu1;
            long double fpu2;
            long double fpu3;

            if (*(&result + 1) & 1)
                return Level_InitSprites_5(fpu0, fpu1, fpu2, fpu3, param_2, context, &item_30);
        }
    }

    return result;
}
