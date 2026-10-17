// Original IGI.EXE function: Particle2DDynCubeObjTask_Process (VA 0x004FD020; static CFG gate PASS, CFG score 1.000).
#include "Particle2DDynCubeObjTask_Process.h"
int32_t Particle2DDynCubeObjTask_Process(float context)

{
    float dest_val = context;
    float item_c = 0.0f;
    float item_8 = 0.0f;
    long double fpu7 = *(dest_val + 0xdc);
    long double f1 = 0.0f;
    fpu7 - f1;
    float item_4 = 0.0f;
    int32_t i_1 = 0;
    float item_10;
    float context_val;
    float flagP;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        flagP = *(dest_val + 0xd0);
        context_val = *(dest_val + 0xd4);
        item_10 = *(dest_val + 0xd8);
    }
    else
    {
        Script_ParseEnumInt32_30(dest_val, &item_c);
        long double fpu_val_7_2 = item_c + *(dest_val + 0xd0);
        float item_14_1 = item_8 + *(dest_val + 0xd4);
        long double fpu_val_6_4 = item_4 + *(dest_val + 0xd8);
        long double fpu_val_5_1 = item_14_1;
        fpu_val_5_1 - fpu_val_6_4;
        long double fpu_val_5_2;

        fpu_val_5_2 = *(&((fpu_val_5_1 < fpu_val_6_4 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_5_1, fpu_val_6_4) ? 1 : 0) << 0xa | (fpu_val_5_1 == fpu_val_6_4 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 0x41 ? fpu_val_6_4 : item_14_1;

        fpu_val_7_2 - fpu_val_5_2;
        long double fpu_val_5_4;

        if (*(&((fpu_val_7_2 < fpu_val_5_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, fpu_val_5_2) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == fpu_val_5_2 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double fpu_val_5_5 = item_14_1;
            fpu_val_5_5 - fpu_val_6_4;

            fpu_val_5_4 = *(&((fpu_val_5_5 < fpu_val_6_4 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_5, fpu_val_6_4) ? 1 : 0) << 0xa
                | (fpu_val_5_5 == fpu_val_6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? fpu_val_6_4 : item_14_1;
        }
        else
            fpu_val_5_4 = fpu_val_7_2;

        long double fpu_val_4_2 = 1.0f;
        fpu_val_4_2 - fpu_val_5_4;
        long double fpu_val_5_7;

        if (*(&((fpu_val_4_2 < fpu_val_5_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_2, fpu_val_5_4) ? 1 : 0) << 0xa
            | (fpu_val_4_2 == fpu_val_5_4 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
        {
            long double fpu_val_5_8 = item_14_1;
            fpu_val_5_8 - fpu_val_6_4;
            long double fpu_val_5_9;

            fpu_val_5_9 = *(&((fpu_val_5_8 < fpu_val_6_4 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_8, fpu_val_6_4) ? 1 : 0) << 0xa
                | (fpu_val_5_8 == fpu_val_6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? fpu_val_6_4 : item_14_1;

            fpu_val_7_2 - fpu_val_5_9;

            if (*(&((fpu_val_7_2 < fpu_val_5_9 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_2, fpu_val_5_9) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == fpu_val_5_9 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
            {
                long double fpu_val_5_11 = item_14_1;
                fpu_val_5_11 - fpu_val_6_4;

                fpu_val_5_7 = *(&((fpu_val_5_11 < fpu_val_6_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_11, fpu_val_6_4) ? 1 : 0) << 0xa
                    | (fpu_val_5_11 == fpu_val_6_4 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 ? fpu_val_6_4
                    : item_14_1;
            }
            else
                fpu_val_5_7 = fpu_val_7_2;
        }
        else
            fpu_val_5_7 = 1.0f;

        long double fpu_val_5_12 = fpu_val_5_7 * 0.00787401572f;
        flagP = fpu_val_7_2 / fpu_val_5_12;
        context_val = item_14_1 / fpu_val_5_12;
        item_10 = fpu_val_6_4 / fpu_val_5_12;
    }

    int32_t i = *(dest_val + 0xf0);

    if (i)
    {
        do
        {
            double* source_1 = *(*(dest_val + 0x6c) + (i_1 << 2));
            float item_48;
            Display_RestoreDevice_15(&item_48, &context, source_1);
            long double fpu_val_7_5 = context;
            long double f2_1 = 2048.0f;
            fpu_val_7_5 - f2_1;

            if (!(*(&((fpu_val_7_5 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_5, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_6 = context;
                long double f3_1 = *(dest_val + 0xe0);
                fpu_val_7_6 - f3_1;

                if (*(&((fpu_val_7_6 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_6, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    long double fpu_val_7_7 = *(dest_val + 0xe4);
                    long double f4_1 = 0.0f;
                    fpu_val_7_7 - f4_1;
                    float entity_2 = *(dest_val + 0xc0);
                    float item_20 = *(dest_val + 0xbc);

                    if (!(*(&((fpu_val_7_7 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_7, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_7 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        item_20 = item_20 * *(source_1 + 0x3c);
                        float item_1c_2 = entity_2 * *(source_1 + 0x3c);
                    }

                    float item_50;
                    Display_SetGammaRamp_15(&item_50, &item_20, context);
                    long double fpu_val_7_12 = item_50;
                    long double f5_1 = 0.5f;
                    fpu_val_7_12 - f5_1;

                    if (*(&((fpu_val_7_12 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_12, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_12 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                        item_50 = 0.5f;

                    float item_4c;
                    long double fpu_val_7_13 = item_4c;
                    long double f6_1 = 0.5f;
                    fpu_val_7_13 - f6_1;

                    if (*(&((fpu_val_7_13 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_13, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_13 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                        item_4c = 0.5f;

                    long double fpu_val_7_14 = *(source_1 + 0x2c);
                    long double f7_1 = 0.0f;
                    fpu_val_7_14 - f7_1;
                    float item_40_2;
                    float item_3c_2;
                    float item_38_2;
                    float item_34_2;
                    float item_30_2;
                    float item_2c_2;
                    float item_28_1;
                    long double fpu_val_7_21;
                    float item_44;

                    if (*(&((fpu_val_7_14 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_14, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_14 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        long double fpu_val_7_23 = item_48 - item_50;
                        item_30_2 = fpu_val_7_23;
                        long double fpu_val_6_34 = item_44 - item_4c;
                        item_2c_2 = fpu_val_6_34;
                        long double fpu_val_5_33 = item_48 + item_50;
                        item_38_2 = fpu_val_5_33;
                        item_34_2 = fpu_val_6_34;
                        item_28_1 = fpu_val_5_33;
                        item_40_2 = fpu_val_7_23;
                        fpu_val_7_21 = item_44 + item_4c;
                        item_3c_2 = fpu_val_7_21;
                    }
                    else
                    {
                        long double fpu_val_7_15 = source_1[7];
                        long double fp0_1;
                        bool c1_1;
                        bool c2_14;
                        fp0_1 = __fcos(fpu_val_7_15);
                        float item_60_1 = fp0_1;
                        long double fp0_2;
                        bool c1_2;
                        bool c2_15;
                        fp0_2 = __fsin(fpu_val_7_15);
                        long double fpu_val_6_9 = -(item_4c);
                        float item_54_1 = fpu_val_6_9 * fp0_2;
                        float item_68_1 = item_60_1 * item_50;
                        long double fpu_val_6_10 = fpu_val_6_9 * item_60_1;
                        float item_64_1 = -(fp0_2) * item_50;
                        long double fpu_val_7_17 = fp0_2 * item_4c;
                        long double fpu_val_6_15 = item_60_1 * item_4c;
                        item_30_2 = item_48 + item_54_1 - item_68_1;
                        item_2c_2 = item_44 + fpu_val_6_10 - item_64_1;
                        item_38_2 = item_48 + item_68_1 + item_54_1;
                        item_34_2 = item_44 + item_64_1 + fpu_val_6_10;
                        item_40_2 = item_48 + fpu_val_7_17 - item_68_1;
                        item_3c_2 = item_44 + fpu_val_6_15 - item_64_1;
                        item_28_1 = item_48 + fpu_val_7_17 + item_68_1;
                        fpu_val_7_21 = item_44 + fpu_val_6_15 + item_64_1;
                    }
                    int32_t data_11 = *(dest_val + 0xe8);
                    float item_24_2 = fpu_val_7_21;
                    float item_5c;

                    if (data_11)
                    {
                        if (!(data_11 & 0x80000))
                        {
                            item_5c = 1.0f;
                            flagP = *(dest_val + 0xd0) * source_1[6];
                            context_val = *(dest_val + 0xd4) * source_1[6];
                            item_10 = *(dest_val + 0xd8) * source_1[6];
                        }
                        else
                            item_5c = source_1[6];
                    }

                    int32_t* item_bc_1;
                    float item_b8_1;
                    float item_b4_1;
                    float item_b0_1;
                    float item_ac_1;
                    float item_a8_1;
                    float item_a4_1;
                    float item_a0_1;
                    float item_9c_1;
                    float item_98_1;
                    float item_94_1;
                    float item_90_1;
                    float item_8c_1;
                    float item_88_1;
                    int32_t item_84_3;
                    int32_t item_80_3;

                    if (!*(dest_val + 0xfc))
                    {
                        int32_t item_7c_5 = 0;
                        item_80_3 = data_11 | 0x1000000;
                        item_84_3 = 0;
                        item_88_1 = item_5c;
                        item_8c_1 = context;
                        item_90_1 = item_10;
                        item_94_1 = context_val;
                        item_98_1 = flagP;
                        item_9c_1 = item_24_2;
                        item_a0_1 = item_28_1;
                        item_a4_1 = item_3c_2;
                        item_a8_1 = item_40_2;
                        item_ac_1 = item_34_2;
                        item_b0_1 = item_38_2;
                        item_b4_1 = item_2c_2;
                        item_b8_1 = item_30_2;
                        item_bc_1 = *(dest_val + 0x80);
                    }
                    else
                    {
                        int32_t* entity_6 = *(dest_val + 0x80);
                        int32_t item_7c_4 = 0;
                        item_80_3 = data_11 | 0x1000000;
                        int32_t data_13 = 0;
                        data_13 = *(source_1[5] + entity_6[3] + 0x10);
                        item_84_3 = data_13 - 1;
                        item_88_1 = item_5c;
                        item_8c_1 = context;
                        item_90_1 = item_10;
                        item_94_1 = context_val;
                        item_98_1 = flagP;
                        item_9c_1 = item_24_2;
                        item_a0_1 = item_28_1;
                        item_a4_1 = item_3c_2;
                        item_a8_1 = item_40_2;
                        item_ac_1 = item_34_2;
                        item_b0_1 = item_38_2;
                        item_b4_1 = item_2c_2;
                        item_b8_1 = item_30_2;
                        item_bc_1 = entity_6;
                    }

                    Qsprite_Register4Az(item_bc_1, item_b8_1, item_b4_1, item_b0_1, item_ac_1, item_a8_1,
                        item_a4_1, item_a0_1, item_9c_1, item_98_1, item_94_1, item_90_1, item_8c_1,
                        item_88_1, item_84_3, item_80_3, 0);
                }
            }

            i = i_1 + 1;
            i_1 = i;
        } while (i < *(dest_val + 0xf0));
    }

    return i;
}
