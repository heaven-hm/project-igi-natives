// IGI native provenance: FX_DebrisSpawn_3 - 0x00483100 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00483100-FX_DebrisSpawn_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_DebrisSpawn_3.h"
float* FX_DebrisSpawn_3(float* context, double* param_2, double* param_3)

{
    double item_24 = *param_3 - *param_2;
    long double fpu_val_7_3 = param_3[1] - param_2[1];
    double item_1c = fpu_val_7_3;
    double item_14 = param_3[2] - param_2[2];
    long double fpu_val_6_2 = item_24;
    long double f0 = 0.0;
    fpu_val_6_2 - f0;
    long double f1_1;

    if (*(&((fpu_val_6_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f0) ? 1 : 0) << 0xa
        | (fpu_val_6_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        f1_1 = 0.0;
        fpu_val_7_3 - f1_1;
    }

    long double fpu_val_7_4;

    if (!(*(&((fpu_val_6_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f0) ? 1 : 0) << 0xa
        | (fpu_val_6_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
        (fpu_val_7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1_1) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        Sys_FreeMemory_11(&item_24);
        fpu_val_7_4 = item_14;
    }
    else
    {
        fpu_val_7_4 = 0.0;
        item_24 = 0;
        *(&item_24 + 4) = 0;
        item_1c = 0;
        *(&item_1c + 4) = 0x3ff00000;
    }

    float item_c = item_24;
    float item_8 = item_1c;
    long double fpu_val_6_5 = 0.0f;
    float item_30 = item_8 - fpu_val_6_5;
    float item_3c = item_30;
    float item_2c = -((item_c - fpu_val_6_5));
    long double fpu_val_6_7 = item_30;
    long double f2 = 0.0f;
    fpu_val_6_7 - f2;
    float item_38 = item_2c;
    long double fpu_val_6_13;

    if (!(*(&((fpu_val_6_7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_7, f2) ? 1 : 0) << 0xa
        | (fpu_val_6_7 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_483201:
        long double fpu_val_6_10 = 0.0f;
        long double fpu_val_5_5 = item_2c;
        long double fpu_val_4_1 = item_30;
        long double fpu_val_6_12 =
            1.0 / sqrtl(fpu_val_4_1 * fpu_val_4_1 + fpu_val_5_5 * fpu_val_5_5 + fpu_val_6_10 * fpu_val_6_10);
        item_3c = item_30 * fpu_val_6_12;
        item_38 = item_38 * fpu_val_6_12;
        fpu_val_6_13 = fpu_val_6_12 * 0.0f;
    }
    else
    {
        long double fpu_val_6_8 = item_2c;
        long double f3_1 = 0.0f;
        fpu_val_6_8 - f3_1;

        if (!(*(&((fpu_val_6_8 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_6_8 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_483201;

        long double fpu_val_6_9 = 0.0f;
        long double f5_1 = 0.0f;
        fpu_val_6_9 - f5_1;

        if (!(*(&((fpu_val_6_9 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_9, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_6_9 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_483201;

        fpu_val_6_13 = 0.0f;
    }

    float item_30_1 = item_38 * fpu_val_7_4 - fpu_val_6_13 * item_8;
    item_24 = item_30_1;
    float item_2c_1 = -((item_3c * fpu_val_7_4 - fpu_val_6_13 * item_c));
    *(&item_24 + 4) = item_2c_1;
    float item_28 = item_3c * item_8 - item_38 * item_c;
    long double fpu_val_5_21 = item_30_1;
    long double f4 = 0.0f;
    fpu_val_5_21 - f4;
    item_1c = item_28;

    if (!(*(&((fpu_val_5_21 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_21, f4) ? 1 : 0) << 0xa
        | (fpu_val_5_21 == f4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_4832d0:
        long double fpu_val_5_24 = item_28;
        long double fpu_val_4_9 = item_2c_1;
        long double fpu_val_3_6 = item_30_1;
        long double fpu_val_5_26 =
            1.0 / sqrtl(fpu_val_3_6 * fpu_val_3_6 + fpu_val_4_9 * fpu_val_4_9 + fpu_val_5_24 * fpu_val_5_24);
        item_24 = item_30_1 * fpu_val_5_26;
        *(&item_24 + 4) = *(&item_24 + 4) * fpu_val_5_26;
        item_1c = item_1c * fpu_val_5_26;
    }
    else
    {
        long double fpu_val_5_22 = item_2c_1;
        long double f6_1 = 0.0f;
        fpu_val_5_22 - f6_1;

        if (!(*(&((fpu_val_5_22 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_22, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_5_22 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4832d0;

        long double fpu_val_5_23 = item_28;
        long double f7_1 = 0.0f;
        fpu_val_5_23 - f7_1;

        if (!(*(&((fpu_val_5_23 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_23, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_5_23 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_4832d0;
    }

    *context = item_3c;
    context[3] = item_38;
    context[6] = fpu_val_6_13;
    context[1] = item_c;
    int32_t temp_3 = item_24;
    context[7] = fpu_val_7_4;
    context[4] = item_8;
    int32_t entity_5 = *(&item_24 + 4);
    context[2] = temp_3;
    context[5] = entity_5;
    context[8] = item_1c;
    return context;
}
