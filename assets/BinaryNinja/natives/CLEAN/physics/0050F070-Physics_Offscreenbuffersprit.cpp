// IGI native provenance: Physics_Offscreenbuffersprit - 0x0050F070 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0050F070-Physics_Offscreenbuffersprit.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_Offscreenbuffersprit.h"
int32_t Physics_Offscreenbuffersprit(void* context)

{
    int32_t data_4 = g_bcaaa8;

    if (data_4)
    {
        int32_t temp_1 = *(context + 0x10);
        int32_t data_val = *(context + 0x12);
        long double fpu_val_7_1 = temp_1;
        int32_t item_88_1 = fpu_val_7_1 * *(context + 0x44);
        long double fpu_val_6_3 = data_val;
        int32_t item_88_2 = fpu_val_6_3 * *(context + 0x48);
        int32_t data_2 = fpu_val_7_1 * *(context + 0x64) - item_88_1;
        data_4 = fpu_val_6_3 * *(context + 0x68) - item_88_2;
        int32_t dest_2 = *(context + 0x50);
        int32_t item_88_6 = *(context + 0x4c);
        int32_t item_88_7 = g_bcaac0;
        int32_t* item_74_1 = g_bcaaa8 + ((g_bcaaa0 * dest_2 + item_88_6) << 2);
        int32_t item_88_8 = g_bcaac4;
        int32_t context_6 = g_bcaac8 + item_88_7;
        int64_t item_88_10 = g_bcaacc;
        int32_t context_8 = item_88_10 + item_88_8;

        if (item_88_6 < context_6 && dest_2 < context_8 && item_88_6 + data_2 >= item_88_7
            && dest_2 + data_4 >= item_88_8)
        {
            int32_t item_78_2;

            if (*(context + 0x58) == 0x3f800000 && *(context + 0x5c) == 0x3f800000)
                item_78_2 = 1;

            if (*(context + 0x58) != 0x3f800000 || *(context + 0x5c) != 0x3f800000
                    || *(context + 0x60) != 0x3f800000)
                item_78_2 = 0;

            if (!*(context + 0x40))
            {
                int32_t temp_7 = *(context + 0x16);

                if (temp_7 == 2)
                {
                    int32_t context_16 = *(context + 0x18) + ((*(context + 0x14) * item_88_2) & 0xfffffffe);
                    int32_t item_70_3 = context_16;

                    if (data_4 > 0)
                    {
                        int32_t item_7c_4 = dest_2;
                        int32_t item_80_6 = data_4;
                        bool flag_5_1;

                        do
                        {
                            if (dest_2 >= item_88_8 && dest_2 < context_8 && data_2 > 0)
                            {
                                int32_t temp_34 = item_88_1;
                                int32_t source_6 = item_88_6;
                                int32_t* dest_11 = item_74_1;
                                int32_t item_6c_3 = data_2;
                                int16_t* context_17 = context_16 + (temp_34 << 1);
                                bool flag_7_1;

                                do
                                {
                                    if (source_6 >= item_88_7 && source_6 < context_6)
                                    {
                                        temp_34 = *context_17;

                                        if (*(&temp_34 + 1) & 0x80)
                                        {
                                            int32_t data_46;

                                            if (!item_78_2)
                                            {
                                                data_46 = (((temp_34 >> 5 & 0x1f) * *(context + 0x5c))
                                                    | ((temp_34 >> 0xa & 0x1f) * *(context + 0x58))
                                                    << 8) << 8;
                                                temp_34 = (temp_34 & 0x1f) * *(context + 0x60);
                                            }
                                            else
                                            {
                                                int32_t temp_35 = temp_34 & 0xffff;
                                                data_46 = ((temp_35 & 0x7c00) << 3 | (temp_35 & 0x3e0))
                                                    << 3;
                                                temp_34 = temp_35 & 0x1f;
                                            }

                                            *dest_11 = (data_46 | temp_34) << 3;
                                        }
                                    }

                                    context_17 = &context_17[1];
                                    source_6 += 1;
                                    dest_11 = &dest_11[1];
                                    flag_7_1 = item_6c_3 != 1;
                                    item_6c_3 -= 1;
                                } while (flag_7_1);
                                dest_2 = item_7c_4;
                                context_16 = item_70_3;
                            }

                            item_74_1 = &item_74_1[g_bcaaa0];
                            dest_2 += 1;
                            data_4 = item_80_6 - 1;
                            flag_5_1 = item_80_6 != 1;
                            context_16 += *(context + 0x14) & 0xfffffffe;
                            item_7c_4 = dest_2;
                            item_70_3 = context_16;
                            item_80_6 = data_4;
                        } while (flag_5_1);
                    }
                }
                else if (temp_7 == 3)
                {
                    int32_t item_78_3 = *(context + 0x18) + ((*(context + 0x14) * item_88_2) & 0xfffffffc);

                    if (data_4 > 0)
                    {
                        int32_t item_70_2 = dest_2;
                        int32_t item_7c_3 = data_4;
                        int32_t data_39;
                        bool flag_6_1;

                        do
                        {
                            if (dest_2 >= item_88_8 && dest_2 < context_8 && data_2 > 0)
                            {
                                int32_t context_15 = item_88_6;
                                int32_t* source_4 = item_74_1;
                                int32_t* flagP19 = item_78_3 + (item_88_1 << 2);
                                int32_t item_6c_2 = data_2;
                                bool flag_8_1;

                                do
                                {
                                    if (context_15 >= item_88_7 && context_15 < context_6)
                                    {
                                        int32_t temp_15 = *flagP19;
                                        int32_t item_2c_1 = 0;
                                        long double fpu_val_7_18 = (temp_15 >> 0x18) * 0.00392156886f;
                                        long double f6_1 = 0.0f;
                                        fpu_val_7_18 - f6_1;

                                        if (!(*(&((fpu_val_7_18 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_18, f6_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_18 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x40))
                                        {
                                            int32_t item_4_1 = 0;
                                            int32_t item_1c_1 = 0;
                                            long double fpu_val_6_6 = 1.0f - fpu_val_7_18;
                                            int32_t item_c_1 = 0;
                                            int32_t data_28 = *source_4;
                                            int32_t item_24_1 = 0;
                                            int32_t item_14_1 = 0;
                                            float item_40_1 = (temp_15 >> 0x10) * *(context + 0x58)
                                                * fpu_val_7_18 * 0.00392156886f;
                                            item_88_10 = data_28 & 0xff;
                                            *(&item_88_10 + 4) = 0;
                                            float item_38_1 = (temp_15 >> 8) * *(context + 0x5c)
                                                * fpu_val_7_18 * 0.00392156886f;
                                            float item_5c_1 = (temp_15 & 0xff) * *(context + 0x60)
                                                * fpu_val_7_18 * 0.00392156886f;
                                            long double fpu_val_6_9 =
                                                (data_28 >> 0x10) * fpu_val_6_6 * 0.00392156886f
                                                + item_40_1;
                                            long double fpu_val_5_22 = 0.0f;
                                            fpu_val_5_22 - fpu_val_6_9;

                                            if (*(&((fpu_val_5_22 < fpu_val_6_9 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_5_22, fpu_val_6_9) ? 1 : 0) << 0xa
                                                | (fpu_val_5_22 == fpu_val_6_9 ? 1 : 0) << 0xe | 0x3000) + 1)
                                                & 0x41)
                                            {
                                                long double fpu_val_5_23 = 1.0f;
                                                fpu_val_5_23 - fpu_val_6_9;

                                                if (*(&((fpu_val_5_23 < fpu_val_6_9 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_5_23, fpu_val_6_9) ? 1 : 0)
                                                        << 0xa | (fpu_val_5_23 == fpu_val_6_9 ? 1 : 0) << 0xe
                                                        | 0x3000) + 1) & 1)
                                                    fpu_val_6_9 = 1.0f;
                                            }
                                            else
                                                fpu_val_6_9 = 0.0f;

                                            item_40_1 = fpu_val_6_9 * 255.0f;
                                            long double fpu_val_6_14 =
                                                (data_28 >> 8) * fpu_val_6_6 * 0.00392156886f
                                                + item_38_1;
                                            long double fpu_val_5_24 = 0.0f;
                                            fpu_val_5_24 - fpu_val_6_14;

                                            if (*(&((fpu_val_5_24 < fpu_val_6_14 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_5_24, fpu_val_6_14) ? 1 : 0) << 0xa
                                                | (fpu_val_5_24 == fpu_val_6_14 ? 1 : 0) << 0xe | 0x3000)
                                                + 1) & 0x41)
                                            {
                                                long double fpu_val_5_25 = 1.0f;
                                                fpu_val_5_25 - fpu_val_6_14;

                                                if (*(&((fpu_val_5_25 < fpu_val_6_14 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_5_25, fpu_val_6_14) ? 1 : 0)
                                                        << 0xa | (fpu_val_5_25 == fpu_val_6_14 ? 1 : 0) << 0xe
                                                        | 0x3000) + 1) & 1)
                                                    fpu_val_6_14 = 1.0f;
                                            }
                                            else
                                                fpu_val_6_14 = 0.0f;

                                            item_38_1 = fpu_val_6_14 * 255.0f;
                                            long double fpu_val_7_20 =
                                                item_88_10 * fpu_val_6_6 * 0.00392156886f + item_5c_1;
                                            long double fpu_val_6_18 = 0.0f;
                                            fpu_val_6_18 - fpu_val_7_20;

                                            if (*(&((fpu_val_6_18 < fpu_val_7_20 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_6_18, fpu_val_7_20) ? 1 : 0) << 0xa
                                                | (fpu_val_6_18 == fpu_val_7_20 ? 1 : 0) << 0xe | 0x3800)
                                                + 1) & 0x41)
                                            {
                                                long double fpu_val_6_19 = 1.0f;
                                                fpu_val_6_19 - fpu_val_7_20;

                                                if (*(&((fpu_val_6_19 < fpu_val_7_20 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_6_19, fpu_val_7_20) ? 1 : 0)
                                                        << 0xa | (fpu_val_6_19 == fpu_val_7_20 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1)
                                                    fpu_val_7_20 = 1.0f;
                                            }
                                            else
                                                fpu_val_7_20 = 0.0f;

                                            item_5c_1 = fpu_val_7_20 * 255.0f;
                                            *source_4 = (item_40_1 << 8 | item_38_1) << 8 | item_5c_1;
                                        }
                                    }

                                    context_15 += 1;
                                    flagP19 = &flagP19[1];
                                    source_4 = &source_4[1];
                                    flag_8_1 = item_6c_2 != 1;
                                    item_6c_2 -= 1;
                                } while (flag_8_1);
                                dest_2 = item_70_2;
                            }

                            item_74_1 = &item_74_1[g_bcaaa0];
                            dest_2 += 1;
                            item_70_2 = dest_2;
                            item_78_3 += *(context + 0x14) & 0xfffffffc;
                            data_39 = item_7c_3 - 1;
                            flag_6_1 = item_7c_3 != 1;
                            item_7c_3 = data_39;
                        } while (flag_6_1);
                        return data_39;
                    }
                }
                else
                {
                    Error_Show("
                        OffscreenBufferSprite_RenderSprite() : Texture type not supported.");

                    while (true)
                        /* nop */
                }
            }
            else
            {
                int32_t data_5 = *(context + 0x38);
                char* source_2 = *(context + 0x18);
                data_4 = data_val;
                char* item_70_1 = source_2;
                int32_t item_6c_1 = 0;

                if (data_4 > 0)
                {
                    int32_t data_6 = dest_2;
                    int32_t item_7c_2 = data_6;
                    bool flag_4_1;

                    do
                    {
                        if (data_6 >= item_88_8 && data_6 < context_8)
                        {
                            int32_t dest_3 = 0;

                            if (temp_1 > 0)
                            {
                                int32_t* context_12 = item_74_1;
                                void* flagP13 = item_88_6 - source_2;
                                void* item_60_2 = flagP13;

                                do
                                {
                                    void* data_7 = source_2 + flagP13;

                                    if (data_7 >= item_88_7 && data_7 < context_6)
                                    {
                                        int32_t data_9;

                                        if (!item_78_2)
                                        {
                                            int32_t temp_4 = data_5;
                                            int32_t data_10 = 0;
                                            data_10 = *source_2;
                                            temp_4 = *(temp_4 + (data_10 << 1));
                                            int32_t data_16 = (((temp_4 >> 5 & 0x3f) * *(context + 0x5c))
                                                | ((temp_4 >> 0xb) * *(context + 0x58)) << 9) << 7;
                                            data_9 =
                                                (data_16 | ((temp_4 & 0x1f) * *(context + 0x60))) << 3;
                                        }
                                        else
                                        {
                                            int32_t temp_3 = 0;
                                            temp_3 = *source_2;
                                            data_9 = 0;
                                            data_9 = *(data_5 + (temp_3 << 1));
                                        }

                                        flagP13 = item_60_2;
                                        *context_12 = data_9;
                                    }

                                    temp_1 = *(context + 0x10);
                                    dest_3 += 1;
                                    source_2 = &source_2[1];
                                    context_12 = &context_12[1];
                                } while (dest_3 < temp_1);

                                source_2 = item_70_1;
                                data_6 = item_7c_2;
                            }
                        }

                        item_74_1 = &item_74_1[g_bcaaa0];
                        source_2 = &source_2[*(context + 0x14)];
                        data_6 += 1;
                        flag_4_1 = item_6c_1 + 1 < *(context + 0x12);
                        item_70_1 = source_2;
                        item_6c_1 += 1;
                        item_7c_2 = data_6;
                    } while (flag_4_1);
                    return data_6;
                }
            }
        }
    }

    return data_4;
}
