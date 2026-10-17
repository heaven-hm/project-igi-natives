// IGI native provenance: Light_RenderLensflare_12 - 0x0052E180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052E180-Light_RenderLensflare_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Light_RenderLensflare_12.h"
void* Light_RenderLensflare_12(void* context, float* param_2, float param_3)

{
    int32_t* data_val = param_3;
    long double fpu7 = 0.0f;
    float entity_val = *data_val;
    long double fpu6 = 0.0f;
    float temp_val = data_val[1];
    float item_8 = fpu6;
    long double fpu5 = 0.0f;
    float item_4 = fpu5;
    float item_10_1 = data_val[2] * 0.100000001f;
    long double fpu_val_4_2 = entity_val;
    long double f0 = 0.0f;
    fpu_val_4_2 - f0;

    if (!(*(&((fpu_val_4_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_2, f0) ? 1 : 0) << 0xa
        | (fpu_val_4_2 == f0 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
    {
    label_52e1f6:
        long double fpu_val_4_5 = temp_val;
        long double fpu_val_3_1 = entity_val;
        long double fpu_val_2_1 = item_10_1;
        item_10_1 =
            1.0 / sqrtl(fpu_val_2_1 * fpu_val_2_1 + fpu_val_3_1 * fpu_val_3_1 + fpu_val_4_5 * fpu_val_4_5) * item_10_1;
    }
    else
    {
        long double fpu_val_4_3 = temp_val;
        long double f1_1 = 0.0f;
        fpu_val_4_3 - f1_1;

        if (!(*(&((fpu_val_4_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_3, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_4_3 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_52e1f6;

        long double fpu_val_4_4 = item_10_1;
        long double f2_1 = 0.0f;
        fpu_val_4_4 - f2_1;

        if (!(*(&((fpu_val_4_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_4, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_4_4 == f2_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            goto label_52e1f6;
    }

    int32_t i_2 = g_b041e8;

    if (i_2 > 0)
    {
        int32_t* temp_1 = g_b041e4;
        int32_t i_1 = i_2;
        int32_t i;

        do
        {
            long double fpu_val_4_10 = item_10_1;
            long double f3_1 = 0.0f;
            fpu_val_4_10 - f3_1;
            void* entity_3 = g_b041f0 * *temp_1 + g_b041e0;

            if (!(*(&((fpu_val_4_10 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_4_10, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_4_10 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
            {
                fpu7 = fpu7 + item_10_1 * *(entity_3 + 0xc);
                fpu6 = fpu6 + item_10_1 * *(entity_3 + 0x10);
                fpu5 = fpu5 + item_10_1 * *(entity_3 + 0x14);
            }

            temp_1 = &temp_1[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        item_4 = fpu5;
        item_8 = fpu6;
    }

    *param_2 = fpu7 + *(context + 0x4a54);
    param_2[1] = item_8 + *(context + 0x4a58);
    param_2[2] = item_4 + *(context + 0x4a5c);
    return context;
}
