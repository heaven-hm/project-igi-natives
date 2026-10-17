// IGI native provenance: DynObj_InsertHashItem_10 - 0x004CA010 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CA010-DynObj_InsertHashItem_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_InsertHashItem_10.h"
int32_t DynObj_InsertHashItem_10(int16_t* context, double* param_2, double* param_3, double* param_4, char param_5, int32_t* param_6, int32_t param_7, int32_t param_8, float* param_9)

{
    int32_t data_101 = g_ba2058;
    int32_t item_3b4;
    int32_t item_39c;
    float item_380;
    float item_37c;
    float item_374;
    int32_t context_1;
    int32_t flagP;
    double* source_val;

    if (!data_101)
    {
        context_1 = item_3b4;
        flagP = item_39c;
        source_val = param_2;
    }
    else
    {
        source_val = param_2;
        int32_t data_1 = data_101 * 0x30;
        item_380 = *(data_1 + 0xba2048) - *source_val;
        flagP = (&g_ba2058)[data_101 * 0xc];
        context_1 = *(data_1 + 0xba203c) + 3;
        item_37c = *(data_1 + 0xba2050) - source_val[1];
        item_374 = (&g_ba2040)[data_101 * 6];
        item_3b4 = context_1;
        item_39c = flagP;
    }

    float item_354 = 1.0f;
    g_a44398 += 1;
    int32_t temp_1 = context[3] + context[2];
    int32_t* dest_3 = context[1] + &context[4];
    uint32_t data_6 = param_7 & 4;
    int32_t* item_310 = &context[4];
    int32_t item_3ac = temp_1;
    uint32_t item_34c = data_6;

    if (data_6)
        item_354 = -1.0f;

    float item_378 = (0x40000000 >> (param_5 & 0x1f)) * 0.041666666666666664;
    float item_360 = *param_3 - *source_val;
    float item_35c = param_3[1] - source_val[1];
    long double fpu_val_7_12 = param_3[2] - source_val[2];
    float item_358;
    long double fpu_val_7_14;

    if (param_8)
    {
        item_358 = fpu_val_7_12 - 0.100000001f;
        fpu_val_7_14 = 268435456.0f;
    }
    else
    {
        item_358 = fpu_val_7_12 + 0.100000001f;
        fpu_val_7_14 = -268435456.0f;
    }

    void item_300;
    float* source_1 = &item_300;
    int32_t item_3b0 = 0;
    int32_t item_350 = param_7 & 1;
    int32_t item_3a4_3;
    bool flag_2_1;

    do
    {
        int32_t data_12 = *dest_3;
        item_3a4_3 = (data_12 >> 0xe & 0x3f) - 0x18;
        long double fpu_val_6_2 = ((data_12 >> 0x1a & 0x3f) - 0x18) * item_378;
        float item_394_2 = ((data_12 >> 0x14 & 0x3f) - 0x18) * item_378;
        float item_390_2 = item_3a4_3 * item_378;

        if (item_34c)
            fpu_val_6_2 = -(fpu_val_6_2);

        if (item_350)
        {
            float item_370_1 = item_394_2;

            if (!(param_7 & 2))
            {
                item_394_2 = fpu_val_6_2;
                fpu_val_6_2 = -(item_370_1);
            }
            else
            {
                item_394_2 = -(fpu_val_6_2);
                fpu_val_6_2 = item_370_1;
            }
        }
        else if (param_7 & 2)
        {
            fpu_val_6_2 = -(fpu_val_6_2);
            item_394_2 = -(item_394_2);
        }

        if (g_ba2058)
        {
            long double fpu_val_5_11 = (fpu_val_6_2 - item_380) * item_374;
            float item_3a8_1 = (item_394_2 - item_37c) * item_374;
            item_3a4_3 = fpu_val_5_11;
            int32_t data_21 = item_3a8_1;
            long double fpu_val_5_12 = fpu_val_5_11 - item_3a4_3;
            int32_t item_3a4_5 = data_21;
            int32_t entity_14 = (data_21 << (context_1 & 0x1f)) + data_21;
            context_1 = item_3b4;
            long double fpu_val_3_1 = *(entity_14 + item_3a4_3 + flagP);
            long double fpu_val_2_1 = *(entity_14 + item_3a4_3 + 1 + flagP);
            void* flagP4 = ((data_21 + 1) << (context_1 & 0x1f)) + data_21 + 1 + item_3a4_3 + 1;
            flagP = item_39c;
            float item_3a8_2 = *(flagP4 + flagP - 1);
            item_3a4_3 = *(flagP4 + flagP);
            temp_1 = item_3ac;
            long double fpu_val_3_2 = fpu_val_3_1 + (fpu_val_2_1 - fpu_val_3_1) * fpu_val_5_12;
            item_390_2 = (
                ((item_3a4_3 - item_3a8_2) * fpu_val_5_12 + item_3a8_2 - fpu_val_3_2) * (item_3a8_1 - data_21)
                + fpu_val_3_2 - 64.0f) * 256.0f + item_390_2;
        }

        *source_1 = fpu_val_6_2;
        dest_3 = &dest_3[1];
        source_1[1] = item_394_2;
        source_1[2] = item_390_2;
        source_1 = &source_1[3];
        flag_2_1 = item_3b0 + 1 < temp_1;
        item_3b0 += 1;
    } while (flag_2_1);
    int32_t item_370_2 = 0;
    int32_t data_27 = *context;

    if (data_27 > 0)
    {
        int32_t item_318 = data_27;
        int32_t saved_target;
        float item_348;
        float item_344;
        float item_340;
        bool flag_4_1;

        do
        {
            int32_t context_6 = 0;
            int24_t data_28 = *item_310;
            context_6 = *(&data_28 + 1);
            int32_t data_29 = 0;
            data_29 = *(&data_28 + 2);
            uint32_t dest_5 = data_28;
            item_310 = &item_310[1];
            uint32_t entity_22 = dest_5 * 3;
            long double fpu_val_6_5 = *(&item_300 + (entity_22 << 2));
            float item_3b4_1 = fpu_val_6_5;
            float data_31 = (&saved_target)[context_6 * 3 + 0x31];
            long double fpu_val_5_14 = data_31;
            fpu_val_5_14 - fpu_val_6_5;

            if (!(*(&((fpu_val_5_14 < fpu_val_6_5 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_14, fpu_val_6_5) ? 1 : 0) << 0xa
                | (fpu_val_5_14 == fpu_val_6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double fpu_val_5_15 = data_31;
                fpu_val_5_15 - fpu_val_6_5;

                if (!(*(&((fpu_val_5_15 < fpu_val_6_5 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_15, fpu_val_6_5) ? 1 : 0) << 0xa
                        | (fpu_val_5_15 == fpu_val_6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    item_3b4_1 = data_31;
            }
            else
                fpu_val_6_5 = data_31;

            float data_34 = (&saved_target)[data_29 * 3 + 0x31];
            long double fpu_val_5_16 = data_34;
            fpu_val_5_16 - fpu_val_6_5;

            if (!(*(&((fpu_val_5_16 < fpu_val_6_5 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_16, fpu_val_6_5) ? 1 : 0) << 0xa
                | (fpu_val_5_16 == fpu_val_6_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
            {
                long double fpu_val_5_17 = data_34;
                long double f0_1 = item_3b4_1;
                fpu_val_5_17 - f0_1;

                if (!(*(&((fpu_val_5_17 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_17, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_5_17 == f0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    item_3b4_1 = data_34;
            }
            else
                fpu_val_6_5 = data_34;

            long double fpu_val_6_8 = fpu_val_6_5 - 0.00999999978f;
            long double f1_1 = item_360;
            fpu_val_6_8 - f1_1;

            if (*(&((fpu_val_6_8 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_6_8 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_6_10 = item_3b4_1 + 0.00999999978f;
                long double f3_1 = item_360;
                fpu_val_6_10 - f3_1;

                if (!(*(&((fpu_val_6_10 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_10, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_10 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    float data_37 = (&saved_target)[entity_22 + 0x32];
                    float data_38 = (&saved_target)[context_6 * 3 + 0x32];
                    long double fpu_val_6_11 = data_37;
                    float data_39 = (&saved_target)[data_29 * 3 + 0x32];
                    long double fpu_val_5_18 = data_38;
                    long double f4_1 = data_37;
                    fpu_val_5_18 - f4_1;
                    float item_3b4_2 = data_37;

                    if (!(*(&((fpu_val_5_18 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_18, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_5_18 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    {
                        long double fpu_val_5_19 = data_38;
                        long double f6_1 = data_37;
                        fpu_val_5_19 - f6_1;

                        if (!(*(&((fpu_val_5_19 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_5_19, f6_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_19 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            item_3b4_2 = data_38;
                    }
                    else
                        fpu_val_6_11 = data_38;

                    long double fpu_val_5_20 = data_39;
                    fpu_val_5_20 - fpu_val_6_11;

                    if (!(*(&((fpu_val_5_20 < fpu_val_6_11 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_20, fpu_val_6_11) ? 1 : 0) << 0xa
                        | (fpu_val_5_20 == fpu_val_6_11 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    {
                        long double fpu_val_5_21 = data_39;
                        long double f7_1 = item_3b4_2;
                        fpu_val_5_21 - f7_1;

                        if (!(*(&((fpu_val_5_21 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_5_21, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_21 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                            item_3b4_2 = data_39;
                    }
                    else
                        fpu_val_6_11 = data_39;

                    long double fpu_val_6_14 = fpu_val_6_11 - 0.00999999978f;
                    long double f8_1 = item_35c;
                    fpu_val_6_14 - f8_1;

                    if (*(&((fpu_val_6_14 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_14, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_14 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    {
                        long double fpu_val_6_16 = item_3b4_2 + 0.00999999978f;
                        long double f9_1 = item_35c;
                        fpu_val_6_16 - f9_1;

                        if (!(*(&((fpu_val_6_16 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_16, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_16 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            long double fpu_val_6_17 = data_38;
                            long double f10_1 = data_37;
                            fpu_val_6_17 - f10_1;
                            long double fpu_val_6_18 = data_39;
                            float item_398_1;
                            float item_394_3;
                            float item_390_3;
                            float item_38c_1;
                            float item_388_1;
                            float item_384_1;
                            float item_304_1;
                            long double fpu_val_5_22;
                            long double fpu_val_6_20;
                            float data_54;

                            if (!(*(&((fpu_val_6_17 < f10_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_17, f10_1) ? 1 : 0) << 0xa
                                | (fpu_val_6_17 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                                long double f11_1 = data_38;
                                fpu_val_6_18 - f11_1;

                                if (!(*(&((fpu_val_6_18 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_18, f11_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_18 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    fpu_val_6_20 = (&saved_target)[context_6 * 3 + 0x31];
                                    item_38c_1 = (&saved_target)[entity_22 + 0x31];
                                    fpu_val_5_22 = data_38;
                                    item_384_1 = (&saved_target)[entity_22 + 0x33];
                                    item_388_1 = data_37;
                                    item_304_1 = (&saved_target)[context_6 * 3 + 0x33];
                                label_4ca623:
                                    item_398_1 = (&saved_target)[data_29 * 3 + 0x31];
                                    item_390_3 = (&saved_target)[data_29 * 3 + 0x33];
                                    item_394_3 = data_39;
                                }
                                else
                                {
                                    long double fpu_val_6_21 = data_39;
                                    long double f13_1 = data_37;
                                    fpu_val_6_21 - f13_1;
                                    item_398_1 = (&saved_target)[context_6 * 3 + 0x31];
                                    item_390_3 = (&saved_target)[context_6 * 3 + 0x33];
                                    item_394_3 = data_38;

                                    if (!(*(&((fpu_val_6_21 < f13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_21, f13_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_21 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        item_38c_1 = (&saved_target)[entity_22 + 0x31];
                                        item_384_1 = (&saved_target)[entity_22 + 0x33];
                                        data_54 = data_37;
                                    label_4ca54d:
                                        fpu_val_6_20 = (&saved_target)[data_29 * 3 + 0x31];
                                        fpu_val_5_22 = data_39;
                                        item_388_1 = data_54;
                                        item_304_1 = (&saved_target)[data_29 * 3 + 0x33];
                                    }
                                    else
                                    {
                                        fpu_val_6_20 = (&saved_target)[entity_22 + 0x31];
                                        item_38c_1 = (&saved_target)[data_29 * 3 + 0x31];
                                        fpu_val_5_22 = data_37;
                                        item_384_1 = (&saved_target)[data_29 * 3 + 0x33];
                                        item_388_1 = data_39;
                                        item_304_1 = (&saved_target)[entity_22 + 0x33];
                                    }
                                }
                            }
                            else
                            {
                                long double f12_1 = data_37;
                                fpu_val_6_18 - f12_1;

                                if (!(*(&((fpu_val_6_18 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_18, f12_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_18 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    fpu_val_6_20 = (&saved_target)[entity_22 + 0x31];
                                    item_38c_1 = (&saved_target)[context_6 * 3 + 0x31];
                                    fpu_val_5_22 = data_37;
                                    item_384_1 = (&saved_target)[context_6 * 3 + 0x33];
                                    item_388_1 = data_38;
                                    item_304_1 = (&saved_target)[entity_22 + 0x33];
                                    goto label_4ca623;
                                }

                                long double fpu_val_6_19 = data_39;
                                long double f14_1 = data_38;
                                fpu_val_6_19 - f14_1;
                                item_398_1 = (&saved_target)[entity_22 + 0x31];
                                item_390_3 = (&saved_target)[entity_22 + 0x33];
                                item_394_3 = data_37;

                                if (!(*(&((fpu_val_6_19 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_19, f14_1) ? 1 : 0) << 0xa
                                    | (fpu_val_6_19 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                {
                                    item_38c_1 = (&saved_target)[context_6 * 3 + 0x31];
                                    item_384_1 = (&saved_target)[context_6 * 3 + 0x33];
                                    data_54 = data_38;
                                    goto label_4ca54d;
                                }

                                fpu_val_6_20 = (&saved_target)[context_6 * 3 + 0x31];
                                item_38c_1 = (&saved_target)[data_29 * 3 + 0x31];
                                fpu_val_5_22 = data_38;
                                item_384_1 = (&saved_target)[data_29 * 3 + 0x33];
                                item_388_1 = data_39;
                                item_304_1 = (&saved_target)[context_6 * 3 + 0x33];
                            }
                            float item_3b4_3 = item_35c - item_388_1;
                            long double fpu_val_4_13 = item_3b4_3 / (item_394_3 - item_388_1);
                            float item_378_1 = (item_398_1 - item_38c_1) * fpu_val_4_13 + item_38c_1;
                            float item_374_2 = (item_390_3 - item_384_1) * fpu_val_4_13 + item_384_1;
                            long double fpu_val_4_15 = item_35c;
                            fpu_val_4_15 - fpu_val_5_22;
                            long double fpu_val_4_16;

                            if (*(&((fpu_val_4_15 < fpu_val_5_22 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_4_15, fpu_val_5_22) ? 1 : 0) << 0xa
                                | (fpu_val_4_15 == fpu_val_5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41)
                            {
                                fpu_val_4_16 = item_388_1;
                                fpu_val_4_16 - fpu_val_5_22;
                            }

                            long double fpu_val_5_28;
                            long double fpu_val_6_24;

                            if (!(*(&((fpu_val_4_15 < fpu_val_5_22 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_4_15, fpu_val_5_22) ? 1 : 0) << 0xa
                                | (fpu_val_4_15 == fpu_val_5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41) || *(
                                &((fpu_val_4_16 < fpu_val_5_22 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_4_16, fpu_val_5_22) ? 1 : 0) << 0xa
                                | (fpu_val_4_16 == fpu_val_5_22 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40)
                            {
                                float item_3b4_5 = (item_35c - fpu_val_5_22) / (item_394_3 - fpu_val_5_22);
                                fpu_val_6_24 = fpu_val_6_20 + (item_398_1 - fpu_val_6_20) * item_3b4_5;
                                fpu_val_5_28 = (item_390_3 - item_304_1) * item_3b4_5 + item_304_1;
                            }
                            else
                            {
                                float item_3b4_4 = item_3b4_3 / (fpu_val_5_22 - item_388_1);
                                fpu_val_6_24 = (fpu_val_6_20 - item_38c_1) * item_3b4_4 + item_38c_1;
                                fpu_val_5_28 = (item_304_1 - item_384_1) * item_3b4_4 + item_384_1;
                            }

                            long double fpu_val_5_37 = item_378_1 - 0.00999999978f;
                            long double f15_1 = item_360;
                            fpu_val_5_37 - f15_1;
                            long double fpu_val_5_39;
                            long double f17_1;

                            if (*(&((fpu_val_5_37 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_5_37, f15_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_37 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                            {
                                fpu_val_5_39 = fpu_val_6_24 + 0.00999999978f;
                                f17_1 = item_360;
                                fpu_val_5_39 - f17_1;
                            }

                            if (*(&((fpu_val_5_37 < f15_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_5_37, f15_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_37 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41 && !(*(
                                &((fpu_val_5_39 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_5_39, f17_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_39 == f17_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                            {
                            label_4ca74d:
                                long double fpu_val_6_25 = fpu_val_6_24 - item_378_1;
                                long double f19_1 = 0.0f;
                                fpu_val_6_25 - f19_1;
                                g_a4439c += 1;
                                float item_3a8_3 = item_374_2;

                                if (!(*(&((fpu_val_6_25 < f19_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_25, f19_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_25 == f19_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    item_3a8_3 =
                                        (item_360 - item_378_1) / fpu_val_6_25 * (fpu_val_5_28 - item_374_2)
                                        + item_374_2;

                                long double fpu_val_6_27 = item_3a8_3;
                                fpu_val_6_27 - fpu_val_7_14;
                                int16_t data_80 = (fpu_val_6_27 < fpu_val_7_14 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_27, fpu_val_7_14) ? 1 : 0) << 0xa
                                    | (fpu_val_6_27 == fpu_val_7_14 ? 1 : 0) << 0xe | 0x3800;

                                if (!param_8)
                                {
                                    if (!(*(&data_80 + 1) & 1))
                                    {
                                        long double fpu_val_6_40 = item_3a8_3;
                                        long double f20_1 = item_358;
                                        fpu_val_6_40 - f20_1;

                                        if (*(&((fpu_val_6_40 < f20_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_40, f20_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_40 == f20_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41)
                                        {
                                            long double fpu_val_7_29 = (&saved_target)[context_6 * 3 + 0x31]
                                                - (&saved_target)[entity_22 + 0x31];
                                            long double fpu_val_6_42 = (&saved_target)[context_6 * 3 + 0x32]
                                                - (&saved_target)[entity_22 + 0x32];
                                            long double fpu_val_5_58 = (&saved_target)[context_6 * 3 + 0x33]
                                                - (&saved_target)[entity_22 + 0x33];
                                            float item_324_2 = (&saved_target)[data_29 * 3 + 0x31]
                                                - (&saved_target)[entity_22 + 0x31];
                                            float item_320_2 = (&saved_target)[data_29 * 3 + 0x32]
                                                - (&saved_target)[entity_22 + 0x32];
                                            long double fpu_val_4_43 =
                                                (&saved_target)[data_29 * 3 + 0x33]
                                                - (&saved_target)[entity_22 + 0x33];
                                            float item_330_1 =
                                                fpu_val_4_43 * fpu_val_6_42 - item_320_2 * fpu_val_5_58;
                                            float entity_26 = item_330_1;
                                            float item_32c_1 =
                                                -((fpu_val_4_43 * fpu_val_7_29 - item_324_2 * fpu_val_5_58));
                                            float item_368_2 = item_32c_1;
                                            float item_328_1 =
                                                item_320_2 * fpu_val_7_29 - item_324_2 * fpu_val_6_42;
                                            long double fpu_val_7_31 = item_330_1;
                                            long double f22_1 = 0.0f;
                                            fpu_val_7_31 - f22_1;
                                            float item_364_2 = item_328_1;

                                            if (!(*(&((fpu_val_7_31 < f22_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_31, f22_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_31 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                            {
                                            label_4caa1b:
                                                long double fpu_val_7_34 = item_328_1;
                                                long double fpu_val_6_44 = item_32c_1;
                                                long double fpu_val_5_63 = item_330_1;
                                                long double fpu_val_7_36 = 1.0 / sqrtl(
                                                    fpu_val_5_63 * fpu_val_5_63 + fpu_val_6_44 * fpu_val_6_44
                                                    + fpu_val_7_34 * fpu_val_7_34);
                                                item_368_2 = item_368_2 * fpu_val_7_36;
                                                entity_26 = item_330_1 * fpu_val_7_36;
                                                item_364_2 = item_364_2 * fpu_val_7_36;
                                            }
                                            else
                                            {
                                                long double fpu_val_7_32 = item_32c_1;
                                                long double f24_1 = 0.0f;
                                                fpu_val_7_32 - f24_1;

                                                if (!(*(&((fpu_val_7_32 < f24_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_32, f24_1) ? 1 : 0)
                                                        << 0xa | (fpu_val_7_32 == f24_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x40))
                                                    goto label_4caa1b;

                                                long double fpu_val_7_33 = item_328_1;
                                                long double f26_1 = 0.0f;
                                                fpu_val_7_33 - f26_1;

                                                if (!(*(&((fpu_val_7_33 < f26_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_33, f26_1) ? 1 : 0)
                                                        << 0xa | (fpu_val_7_33 == f26_1 ? 1 : 0) << 0xe)
                                                        + 1) & 0x40))
                                                    goto label_4caa1b;
                                            }

                                            item_348 = entity_26;
                                            item_370_2 = 1;
                                            fpu_val_7_14 = item_3a8_3;
                                            item_34c = dest_5;
                                            item_3a4_3 = context_6;
                                            item_350 = data_29;
                                            item_344 = item_368_2;
                                            item_340 = item_364_2;
                                        }
                                    }
                                }
                                else if (*(&data_80 + 1) & 0x41)
                                {
                                    long double fpu_val_6_28 = item_3a8_3;
                                    long double f21_1 = item_358;
                                    fpu_val_6_28 - f21_1;

                                    if (!(*(&((fpu_val_6_28 < f21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_28, f21_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_28 == f21_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        long double fpu_val_7_18 = (&saved_target)[context_6 * 3 + 0x31]
                                            - (&saved_target)[entity_22 + 0x31];
                                        long double fpu_val_6_30 = (&saved_target)[context_6 * 3 + 0x32]
                                            - (&saved_target)[entity_22 + 0x32];
                                        long double fpu_val_5_50 = (&saved_target)[context_6 * 3 + 0x33]
                                            - (&saved_target)[entity_22 + 0x33];
                                        float item_324_1 = (&saved_target)[data_29 * 3 + 0x31]
                                            - (&saved_target)[entity_22 + 0x31];
                                        float item_320_1 = (&saved_target)[data_29 * 3 + 0x32]
                                            - (&saved_target)[entity_22 + 0x32];
                                        long double fpu_val_4_27 = (&saved_target)[data_29 * 3 + 0x33]
                                            - (&saved_target)[entity_22 + 0x33];
                                        float item_33c_1 =
                                            fpu_val_4_27 * fpu_val_6_30 - item_320_1 * fpu_val_5_50;
                                        float entity_24 = item_33c_1;
                                        float item_338_1 =
                                            -((fpu_val_4_27 * fpu_val_7_18 - item_324_1 * fpu_val_5_50));
                                        float item_368_1 = item_338_1;
                                        float item_334_1 =
                                            item_320_1 * fpu_val_7_18 - item_324_1 * fpu_val_6_30;
                                        long double fpu_val_7_20 = item_33c_1;
                                        long double f23_1 = 0.0f;
                                        fpu_val_7_20 - f23_1;
                                        float item_364_1 = item_334_1;

                                        if (!(*(&((fpu_val_7_20 < f23_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_20, f23_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_20 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                        {
                                        label_4ca898:
                                            long double fpu_val_7_23 = item_334_1;
                                            long double fpu_val_6_32 = item_338_1;
                                            long double fpu_val_5_55 = item_33c_1;
                                            long double fpu_val_7_25 = 1.0 / sqrtl(
                                                fpu_val_5_55 * fpu_val_5_55 + fpu_val_6_32 * fpu_val_6_32
                                                + fpu_val_7_23 * fpu_val_7_23);
                                            item_368_1 = item_368_1 * fpu_val_7_25;
                                            entity_24 = item_33c_1 * fpu_val_7_25;
                                            item_364_1 = item_364_1 * fpu_val_7_25;
                                        }
                                        else
                                        {
                                            long double fpu_val_7_21 = item_338_1;
                                            long double f25_1 = 0.0f;
                                            fpu_val_7_21 - f25_1;

                                            if (!(*(&((fpu_val_7_21 < f25_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_21, f25_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_21 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                                goto label_4ca898;

                                            long double fpu_val_7_22 = item_334_1;
                                            long double f27_1 = 0.0f;
                                            fpu_val_7_22 - f27_1;

                                            if (!(*(&((fpu_val_7_22 < f27_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_22, f27_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_22 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                                                goto label_4ca898;
                                        }

                                        item_348 = entity_24;
                                        item_370_2 = 1;
                                        fpu_val_7_14 = item_3a8_3;
                                        item_34c = dest_5;
                                        item_3a4_3 = context_6;
                                        item_350 = data_29;
                                        item_344 = item_368_1;
                                        item_340 = item_364_1;
                                    }
                                }
                            }
                            else
                            {
                                long double fpu_val_5_41 = item_378_1 + 0.00999999978f;
                                long double f16_1 = item_360;
                                fpu_val_5_41 - f16_1;

                                if (!(*(&((fpu_val_5_41 < f16_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_5_41, f16_1) ? 1 : 0) << 0xa
                                    | (fpu_val_5_41 == f16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                                {
                                    long double fpu_val_5_43 = fpu_val_6_24 - 0.00999999978f;
                                    long double f18_1 = item_360;
                                    fpu_val_5_43 - f18_1;

                                    if (*(&((fpu_val_5_43 < f18_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_5_43, f18_1) ? 1 : 0) << 0xa
                                            | (fpu_val_5_43 == f18_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                                        goto label_4ca74d;
                                }
                            }
                        }
                    }
                }
            }

            flag_4_1 = item_318 != 1;
            item_318 -= 1;
        } while (flag_4_1);

        if (item_370_2)
        {
            int32_t item_2fc[0xbf];
            long double fpu_val_6_56 = (*(&item_300 + item_3a4_3 * 0xc) - *(&item_300 + item_34c * 0xc))
                * (item_2fc[item_350 * 3] - (&saved_target)[item_34c * 3 + 0x32])
                - (*(&item_300 + item_350 * 0xc) - (&saved_target)[item_34c * 3 + 0x31])
                * (item_2fc[item_3a4_3 * 3] - (&saved_target)[item_34c * 3 + 0x32]);
            long double fpu_val_6_57 = fpu_val_6_56 * item_354;
            long double f5 = 0.0;
            fpu_val_6_57 - f5;

            if (!(*(&((fpu_val_6_57 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_57, f5) ? 1 : 0) << 0xa
                    | (fpu_val_6_57 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                *param_6 = param_8 ^ 1;
            else
                *param_6 = param_8;

            *param_9 = item_348 * item_354;
            param_9[1] = item_344 * item_354;
            param_9[2] = item_340 * item_354;
            *param_4 = item_360 + *param_2;
            param_4[1] = item_35c + param_2[1];
            param_4[2] = fpu_val_7_14 + param_2[2];
            return 1;
        }
    }

    return 0;
}
