// Original IGI.EXE function: Terrain_CalculateNormals_9 (VA 0x00519BD0; static CFG gate PASS, CFG score 1.000).
#include "Terrain_CalculateNormals_9.h"
float Terrain_CalculateNormals_9(float context) {
    float source_val = context;

    if (Sys_PopStack_11(source_val + 0x78))
    {
        *(source_val + 0x38) = 0x3f800000;
        *(source_val + 0x3c) = 0;
        *(source_val + 0x40) = 0;
        *(source_val + 0x44) = 0;
        *(source_val + 0x48) = 0x3f800000;
        *(source_val + 0x4c) = 0;
        *(source_val + 0x50) = 0;
        *(source_val + 0x54) = 0;
        *(source_val + 0x58) = 0x3f800000;
        *(source_val + 0x5c) = 0;
        return 0;
    }

    long double fpu7 = *(source_val + 0x78);
    long double fpu5 = *(source_val + 0x80);
    float temp_val = *(source_val + 0x58);
    float entity_val = *(source_val + 0x4c);
    float item_38 = fpu5;
    long double fpu4 = *(source_val + 0x88);
    float item_34 = fpu4;
    float data_1 = *(source_val + 0x40);
    float item_18 = fpu5 * temp_val - fpu4 * entity_val;
    float item_24 = item_18;
    float item_14 = -((fpu7 * temp_val - fpu4 * data_1));
    float item_20 = item_14;
    float item_10 = fpu7 * entity_val - fpu5 * data_1;
    long double fpu_val_3_10 = item_18;
    long double f1 = 0.0f;
    fpu_val_3_10 - f1;
    float item_1c = item_10;
    float item_30_1;
    float item_2c_1;
    float result;

    if (!(*(&((fpu_val_3_10 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_3_10, f1) ? 1 : 0) << 0xa
        | (fpu_val_3_10 == f1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
    {
    label_519ec1:
        item_30_1 = item_14 * fpu4 - item_10 * fpu5;
        item_2c_1 = -((item_18 * fpu4 - item_10 * fpu7));
        result = item_18 * fpu5 - item_14 * fpu7;
    }
    else
    {
        long double fpu_val_3_11 = item_14;
        long double f2_1 = 0.0f;
        fpu_val_3_11 - f2_1;

        if (!(*(&((fpu_val_3_11 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_3_11, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_3_11 == f2_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
            goto label_519ec1;

        long double fpu_val_3_12 = item_10;
        long double f4_1 = 0.0f;
        fpu_val_3_12 - f4_1;

        if (!(*(&((fpu_val_3_12 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_3_12, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_3_12 == f4_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40))
            goto label_519ec1;

        long double fpu_val_5_2 = item_38;
        long double fpu_val_4_2 = item_34;
        long double fpu_val_3_13 = 0.0f;
        long double fpu_val_2_6 = 0.0f;
        long double fpu_val_1_3 = fpu_val_2_6 + fpu_val_3_13 + fpu7;
        long double f6_1 = 0.0f;
        fpu_val_1_3 - f6_1;

        context = !(*(&((fpu_val_1_3 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_3, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_1_3 == f6_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1) ? fpu_val_1_3 : -(fpu_val_1_3);

        long double f10_1 = 0.0f;
        fpu_val_1_3 - f10_1;
        float item_3c_1;

        item_3c_1 = !(*(&((fpu_val_1_3 < f10_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_1_3, f10_1) ? 1 : 0) << 0xa | (fpu_val_1_3 == f10_1 ? 1 : 0) << 0xe
            | 0x800) + 1) & 1) ? fpu_val_1_3 : -(fpu_val_1_3);

        long double f14_1 = 0.0f;
        fpu_val_1_3 - f14_1;

        if (*(&((fpu_val_1_3 < f14_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_3, f14_1) ? 1 : 0) << 0xa
                | (fpu_val_1_3 == f14_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            fpu_val_1_3 = -(fpu_val_1_3);

        long double fpu_val_0_5 = context;
        long double f16_1 = item_3c_1;
        fpu_val_0_5 - f16_1;
        float result_1;

        if (!(*(&((fpu_val_0_5 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_5, f16_1) ? 1 : 0) << 0xa
            | (fpu_val_0_5 == f16_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
        {
            long double fpu_val_0_7 = item_3c_1;
            fpu_val_0_7 - fpu_val_1_3;
            long double fpu_val_2_20 = fpu_val_3_13 - fpu_val_2_6;
            bool c1_2 = /* bool c1_2 = unknown  {fsub fp0, fp1} */;

            if (!(*(&((fpu_val_0_7 < fpu_val_1_3 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
                | (FCMP_UO(fpu_val_0_7, fpu_val_1_3) ? 1 : 0) << 0xa
                | (fpu_val_0_7 == fpu_val_1_3 ? 1 : 0) << 0xe | 0x1000) + 1) & 1))
            {
                long double fpu_val_3_26 = 0.0f;
                item_30_1 = fpu_val_2_20;
                item_2c_1 = -((fpu_val_4_2 - fpu_val_3_26));
                result_1 = fpu_val_5_2 - fpu_val_3_26;
            }
            else
            {
                long double fpu_val_3_23 = 0.0f;
                item_30_1 = fpu_val_2_20;
                item_2c_1 = -((fpu_val_4_2 - fpu_val_3_23));
                result_1 = fpu_val_5_2 - fpu_val_3_23;
            }
        }
        else
        {
            long double fpu_val_0_6 = context;
            fpu_val_0_6 - fpu_val_1_3;
            long double fpu_val_2_8 = fpu_val_3_13 - fpu_val_2_6;
            bool c1_1 = /* bool c1_1 = unknown  {fsub fp0, fp1} */;

            if (!(*(&((fpu_val_0_6 < fpu_val_1_3 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                | (FCMP_UO(fpu_val_0_6, fpu_val_1_3) ? 1 : 0) << 0xa
                | (fpu_val_0_6 == fpu_val_1_3 ? 1 : 0) << 0xe | 0x1000) + 1) & 1))
            {
                long double fpu_val_3_19 = 0.0f;
                item_30_1 = fpu_val_2_8;
                item_2c_1 = -((fpu_val_4_2 - fpu_val_3_19));
                result_1 = fpu_val_5_2 - fpu_val_3_19;
            }
            else
            {
                long double fpu_val_3_16 = 0.0f;
                item_30_1 = fpu_val_2_8;
                item_2c_1 = -((fpu_val_4_2 - fpu_val_3_16));
                result_1 = fpu_val_5_2 - fpu_val_3_16;
            }
        }

        result = result_1;
        item_24 = fpu_val_5_2 * result - fpu_val_4_2 * item_2c_1;
        item_20 = -((fpu7 * result - fpu_val_4_2 * item_30_1));
        item_1c = fpu7 * item_2c_1 - fpu_val_5_2 * item_30_1;
    }

    long double fpu_val_6_7 = item_30_1;
    long double f3 = 0.0f;
    fpu_val_6_7 - f3;

    if (!(*(&((fpu_val_6_7 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_7, f3) ? 1 : 0) << 0xa
        | (fpu_val_6_7 == f3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_519f28:
        long double fpu_val_6_10 = result;
        long double fpu_val_5_8 = item_2c_1;
        long double fpu_val_4_10 = item_30_1;
        long double fpu_val_6_12 =
            1.0 / sqrtl(fpu_val_4_10 * fpu_val_4_10 + fpu_val_5_8 * fpu_val_5_8 + fpu_val_6_10 * fpu_val_6_10);
        item_30_1 = item_30_1 * fpu_val_6_12;
        item_2c_1 = item_2c_1 * fpu_val_6_12;
        result = result * fpu_val_6_12;
    }
    else
    {
        long double fpu_val_6_8 = item_2c_1;
        long double f5_1 = 0.0f;
        fpu_val_6_8 - f5_1;

        if (!(*(&((fpu_val_6_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_6_8 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519f28;

        long double fpu_val_6_9 = result;
        long double f8_1 = 0.0f;
        fpu_val_6_9 - f8_1;

        if (!(*(&((fpu_val_6_9 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_9, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_6_9 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519f28;
    }

    long double fpu_val_6_14 = item_24;
    long double f7 = 0.0f;
    fpu_val_6_14 - f7;

    if (!(*(&((fpu_val_6_14 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_14, f7) ? 1 : 0) << 0xa
        | (fpu_val_6_14 == f7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_519fa5:
        long double fpu_val_6_17 = item_1c;
        long double fpu_val_5_16 = item_20;
        long double fpu_val_4_12 = item_24;
        long double fpu_val_6_19 =
            1.0 / sqrtl(fpu_val_4_12 * fpu_val_4_12 + fpu_val_5_16 * fpu_val_5_16 + fpu_val_6_17 * fpu_val_6_17);
        item_24 = item_24 * fpu_val_6_19;
        item_20 = item_20 * fpu_val_6_19;
        item_1c = item_1c * fpu_val_6_19;
    }
    else
    {
        long double fpu_val_6_15 = item_20;
        long double f9_1 = 0.0f;
        fpu_val_6_15 - f9_1;

        if (!(*(&((fpu_val_6_15 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_15, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_6_15 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519fa5;

        long double fpu_val_6_16 = item_1c;
        long double f12_1 = 0.0f;
        fpu_val_6_16 - f12_1;

        if (!(*(&((fpu_val_6_16 < f12_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_16, f12_1) ? 1 : 0) << 0xa
                | (fpu_val_6_16 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_519fa5;
    }

    long double f11 = 0.0f;
    fpu7 - f11;
    float item_14_6 = item_38;
    float item_10_6 = item_34;

    if (!(*(&((fpu7 < f11 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f11) ? 1 : 0) << 0xa
        | (fpu7 == f11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_51a02e:
        long double fpu_val_6_23 = item_10_6;
        long double fpu_val_5_24 = item_14_6;
        long double fpu_val_6_25 =
            1.0 / sqrtl(fpu7 * fpu7 + fpu_val_5_24 * fpu_val_5_24 + fpu_val_6_23 * fpu_val_6_23);
        fpu7 = fpu7 * fpu_val_6_25;
        item_14_6 = item_14_6 * fpu_val_6_25;
        item_10_6 = item_10_6 * fpu_val_6_25;
    }
    else
    {
        long double fpu_val_6_21 = item_14_6;
        long double f13_1 = 0.0f;
        fpu_val_6_21 - f13_1;

        if (!(*(&((fpu_val_6_21 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_21, f13_1) ? 1 : 0) << 0xa
                | (fpu_val_6_21 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a02e;

        long double fpu_val_6_22 = item_10_6;
        long double f15_1 = 0.0f;
        fpu_val_6_22 - f15_1;

        if (!(*(&((fpu_val_6_22 < f15_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_22, f15_1) ? 1 : 0) << 0xa
                | (fpu_val_6_22 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_51a02e;
    }

    *(source_val + 0x38) = item_24;
    *(source_val + 0x44) = item_20;
    *(source_val + 0x50) = item_1c;
    *(source_val + 0x48) = item_14_6;
    *(source_val + 0x54) = item_10_6;
    *(source_val + 0x40) = item_30_1;
    *(source_val + 0x3c) = fpu7;
    *(source_val + 0x4c) = item_2c_1;
    *(source_val + 0x58) = result;
    return result;
}
