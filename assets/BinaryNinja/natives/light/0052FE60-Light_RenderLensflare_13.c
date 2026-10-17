// IGI native provenance: Light_RenderLensflare_13 - 0x0052FE60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052FE60-Light_RenderLensflare_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_RenderLensflare_13.h"
uint32_t Light_RenderLensflare_13(void* context, double* param_2)

{
    int32_t item_20 = 0;
    uint32_t result = param_2[4] >> 1;
    uint32_t result_1 = result;
    long double fpu7 = result_1;
    double item_10 = fpu7 + param_2[1];
    double item_8 = *(context + 0x4a94);
    result_1 = fpu7 + *param_2 - *(context + 0x4870);
    float item_20_1 = item_10 - *(context + 0x4878);
    float item_1c = item_8 - *(context + 0x4880);
    long double fpu_val_6_8 = fabsl(result_1);
    fpu_val_6_8 - fpu7;
    result = (fpu_val_6_8 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, fpu7) ? 1 : 0) << 0xa
        | (fpu_val_6_8 == fpu7 ? 1 : 0) << 0xe | 0x3800;

    if (!(*(&result + 1) & 1))
    {
    label_52feec:
        long double fpu_val_7_3 = result_1;
        long double f0_1 = 0.0f;
        fpu_val_7_3 - f0_1;

        if (!(*(&((fpu_val_7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_52ff1f:
            long double fpu_val_7_6 = item_1c;
            long double fpu_val_6_11 = item_20_1;
            long double fpu_val_5_3 = result_1;
            long double fpu_val_7_8 =
                1.0 / sqrtl(fpu_val_5_3 * fpu_val_5_3 + fpu_val_6_11 * fpu_val_6_11 + fpu_val_7_6 * fpu_val_7_6);
            result_1 = result_1 * fpu_val_7_8;
            float item_20_2 = item_20_1 * fpu_val_7_8;
            float item_1c_1 = item_1c * fpu_val_7_8;
        }
        else
        {
            long double fpu_val_7_4 = item_20_1;
            long double f1_1 = 0.0f;
            fpu_val_7_4 - f1_1;

            if (!(*(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52ff1f;

            long double fpu_val_7_5 = item_1c;
            long double f3_1 = 0.0f;
            fpu_val_7_5 - f3_1;

            if (!(*(&((fpu_val_7_5 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_52ff1f;
        }

        long double fp0_1;
        fp0_1 = Sys_PushStack_10(&result_1, context + 0x4a48);
        long double fpu_val_7_11 = fabsl(fp0_1);
        long double f2_1 = 1.72787607f;
        fpu_val_7_11 - f2_1;
        result = (fpu_val_7_11 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f2_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            *(param_2 + 0x24) = 0;
            return result;
        }
    }
    else
    {
        long double fpu_val_6_10 = fabsl(item_20_1);
        fpu_val_6_10 - fpu7;
        result = (fpu_val_6_10 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_10, fpu7) ? 1 : 0) << 0xa
            | (fpu_val_6_10 == fpu7 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 1))
            goto label_52feec;
    }

    *(param_2 + 0x24) = 1;
    return result;
}
