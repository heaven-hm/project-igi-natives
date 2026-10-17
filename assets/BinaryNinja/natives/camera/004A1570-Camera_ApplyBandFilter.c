// Original IGI.EXE function: Camera_ApplyBandFilter (VA 0x004A1570; static CFG gate FAIL, CFG score 0.788).
#include "Camera_ApplyBandFilter.h"
int32_t* Camera_ApplyBandFilter(void* context, int32_t* param_2)

{
    float data_val = g_bcadc0;
    int32_t* data_1 = *(context + 0xec);

    if (data_1 == 1)
    {
        data_1 = *(context + 0x6c);

        if (data_1)
        {
            void* entity_1 = *data_1;

            if (entity_1)
            {
                void* source_1 = *(*(entity_1 + 0xc) + 0xc);
                float item_34 = *(context + 0x20) - g_bcab08;
                void* data_3 = *(*(*data_1 + 0xc) + 0xc);
                long double fpu_val_7_10 = *(data_3 + 0x38) * *(context + 0x78)
                    + *(data_3 + 0x34) * *(context + 0x74) + *(context + 0x70) * *(data_3 + 0x30);
                long double fpu_val_6_8 = *(context + 0x84) * *(data_3 + 0x38)
                    + *(context + 0x7c) * *(data_3 + 0x30) + *(data_3 + 0x34) * *(context + 0x80);
                long double fpu_val_6_12 = *(data_3 + 0x34) * *(context + 0x8c)
                    + *(context + 0x88) * *(data_3 + 0x30) + *(data_3 + 0x38) * *(context + 0x90);
                long double fpu_val_7_11 = fpu_val_7_10 + item_34;
                long double fpu_val_6_14 = fpu_val_6_8 + *(context + 0x28) - g_bcab10;
                long double fpu_val_5_10 = fpu_val_6_12 + *(context + 0x30) - g_bcab18;
                long double fpu_val_4_6 = g_bcaaf4 * fpu_val_5_10;
                long double fpu_val_3_6 = g_bcaaf0 * fpu_val_6_14;
                item_34 =
                    g_bcaae8 * fpu_val_5_10 + g_bcaae4 * fpu_val_6_14 + g_bcaae0 * fpu_val_7_11;
                float item_84 = fpu_val_4_6 + fpu_val_3_6 + g_bcaaec * fpu_val_7_11;
                float item_80_1 =
                    g_bcab00 * fpu_val_5_10 + g_bcaafc * fpu_val_6_14 + g_bcaaf8 * fpu_val_7_11;
                long double fpu_val_7_13 = *(context + 0x98);
                long double fpu_val_6_16 = *(context + 0x9c);
                float item_30_2 = item_84;
                fpu_val_6_16 - fpu_val_7_13;
                long double fpu_val_7_14;

                if (!(*(&((fpu_val_6_16 < fpu_val_7_13 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_16, fpu_val_7_13) ? 1 : 0) << 0xa
                        | (fpu_val_6_16 == fpu_val_7_13 ? 1 : 0) << 0xe) + 1) & 1))
                    fpu_val_7_14 = *(context + 0x9c);
                else
                    fpu_val_7_14 = *(context + 0x98);

                long double fpu_val_6_17 = *(context + 0xa0);
                fpu_val_7_14 - fpu_val_6_17;
                long double fpu_val_7_17;

                if (*(&((fpu_val_7_14 < fpu_val_6_17 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_14, fpu_val_6_17) ? 1 : 0) << 0xa
                        | (fpu_val_7_14 == fpu_val_6_17 ? 1 : 0) << 0xe) + 1) & 0x41)
                    fpu_val_7_17 = *(context + 0xa0);
                else
                {
                    long double fpu_val_7_16 = *(context + 0x98);
                    long double fpu_val_6_19 = *(context + 0x9c);
                    fpu_val_6_19 - fpu_val_7_16;

                    if (!(*(&((fpu_val_6_19 < fpu_val_7_16 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_19, fpu_val_7_16) ? 1 : 0) << 0xa
                            | (fpu_val_6_19 == fpu_val_7_16 ? 1 : 0) << 0xe) + 1) & 1))
                        fpu_val_7_17 = *(context + 0x9c);
                    else
                        fpu_val_7_17 = *(context + 0x98);
                }

                float item_9c_1 = fpu_val_7_17 * *(source_1 + 0x3c);
                data_1 = Render_DrawBoneMesh(&item_34, item_9c_1, 0);

                if (!data_1)
                {
                    long double fpu_val_7_20 = item_80_1 - item_9c_1;
                    data_1 = param_2;
                    long double f1_1 = data_1[2];
                    fpu_val_7_20 - f1_1;
                    data_1 = (fpu_val_7_20 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_20, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_20 == f1_1 ? 1 : 0) << 0xe | 0x3800;

                    if (*(&data_1 + 1) & 0x41)
                    {
                        data_1 = *(source_1 + 0x20);
                        void item_10c;
                        void item_f0;
                        void item_d4;
                        float item_a0;
                        float item_70;
                        float item_6c;
                        float item_68;
                        float item_5c;
                        float item_50;

                        if (!data_1)
                        {
                            long double fpu_val_6_22 = *(context + 0x20) - g_bcab08;
                            long double fpu_val_5_13 = *(context + 0x28) - g_bcab10;
                            long double fpu_val_4_14 = *(context + 0x30) - g_bcab18;
                            void* data_6 = *(source_1 + 0x24);
                            long double fpu_val_3_15 =
                                fpu_val_4_14 * g_bcaae8 + fpu_val_5_13 * g_bcaae4;
                            long double fpu_val_2_4 = fpu_val_6_22 * g_bcaae0;
                            item_a0 = param_2[2];
                            float item_7c_1 = fpu_val_3_15 + fpu_val_2_4;
                            float item_78_2 = fpu_val_4_14 * g_bcaaf4 + fpu_val_5_13 * g_bcaaf0
                                + fpu_val_6_22 * g_bcaaec;
                            float item_74_2 = fpu_val_4_14 * g_bcab00 + fpu_val_5_13 * g_bcaafc
                                + fpu_val_6_22 * g_bcaaf8;
                            float item_28 = g_bcaae4 * *(context + 0x7c)
                                + g_bcaae0 * *(context + 0x70) + g_bcaae8 * *(context + 0x88);
                            float item_24_1 = g_bcaae4 * *(context + 0x80)
                                + g_bcaae8 * *(context + 0x8c) + g_bcaae0 * *(context + 0x74);
                            float item_20_1 = g_bcaae4 * *(context + 0x84)
                                + g_bcaae8 * *(context + 0x90) + g_bcaae0 * *(context + 0x78);
                            float item_1c_1 = g_bcaaf0 * *(context + 0x7c)
                                + g_bcaaec * *(context + 0x70) + g_bcaaf4 * *(context + 0x88);
                            int32_t item_4_1 = *(context + 0x94) + g_bcab04 + 1;
                            float item_18_1 = g_bcaaf0 * *(context + 0x80)
                                + g_bcaaf4 * *(context + 0x8c) + g_bcaaec * *(context + 0x74);
                            float item_14_1 = g_bcaaf0 * *(context + 0x84)
                                + g_bcaaf4 * *(context + 0x90) + g_bcaaec * *(context + 0x78);
                            float item_10_1 = g_bcaafc * *(context + 0x7c)
                                + g_bcaaf8 * *(context + 0x70) + g_bcab00 * *(context + 0x88);
                            float item_c_1 = g_bcaafc * *(context + 0x80)
                                + g_bcab00 * *(context + 0x8c) + g_bcaaf8 * *(context + 0x74);
                            float item_8_1 = g_bcaafc * *(context + 0x84)
                                + g_bcab00 * *(context + 0x90) + g_bcaaf8 * *(context + 0x78);
                            long double fpu_val_6_62 = item_28 * *(context + 0x98);
                            memcpy(&item_5c, &item_28, 0x28);
                            item_5c = fpu_val_6_62;
                            float item_58;
                            float item_58_1 = item_58 * *(context + 0x9c);
                            float item_54;
                            float item_54_1 = item_54 * *(context + 0xa0);
                            item_50 = item_50 * *(context + 0x98);
                            float item_4c;
                            float item_4c_1 = item_4c * *(context + 0x9c);
                            float item_48;
                            float item_48_1 = item_48 * *(context + 0xa0);
                            float item_44;
                            float item_44_1 = item_44 * *(context + 0x98);
                            float item_40;
                            float item_40_1 = item_40 * *(context + 0x9c);
                            float* flagP1 = *(data_6 + 0x10);
                            void* item_9c_2 = nullptr;
                            float item_3c;
                            float item_3c_1 = item_3c * *(context + 0xa0);

                            if (*(data_6 + 0xc) > 0)
                            {
                                int32_t* temp_5 = &g_7af200;
                                bool flag_4_1;

                                do
                                {
                                    float item_88_2 =
                                        item_5c * *flagP1 + item_54_1 * flagP1[2] + item_58_1 * flagP1[1];
                                    float item_94_1 = item_88_2;
                                    item_84 =
                                        item_50 * *flagP1 + item_48_1 * flagP1[2] + item_4c_1 * flagP1[1];
                                    float item_94_2 = item_88_2 + item_7c_1;
                                    float item_90_2 = item_84 + item_78_2;
                                    long double fpu_val_6_96 = item_44_1 * *flagP1 + item_3c_1 * flagP1[2]
                                        + item_40_1 * flagP1[1] + item_74_2;
                                    float item_8c_2 = fpu_val_6_96;
                                    long double f6_1 = data_val;
                                    fpu_val_6_96 - f6_1;
                                    int32_t data_14;

                                    if (*(&((fpu_val_6_96 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_96, f6_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_96 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        data_14 = 0x10;
                                    else
                                    {
                                        long double fpu_val_6_98 = 1.0f / item_8c_2;
                                        item_68 = fpu_val_6_98;
                                        long double fpu_val_6_101 =
                                            fpu_val_6_98 * item_94_2 * g_bcab28 + g_bcab30;
                                        item_70 = fpu_val_6_101;
                                        long double fpu_val_5_69 =
                                            g_bcab2c * item_68 * item_90_2 + g_bcab34;
                                        item_6c = fpu_val_5_69;
                                        long double f7_1 = g_bcabd0;
                                        fpu_val_6_101 - f7_1;
                                        int32_t dest_1;

                                        dest_1 = !(*(&((fpu_val_6_101 < f7_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_101, f7_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_101 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1)
                                            & 1) ? 0 : 1;

                                        long double f12_1 = g_bcabd4;
                                        fpu_val_5_69 - f12_1;
                                        int32_t source_2;

                                        source_2 = !(*(&((fpu_val_5_69 < f12_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_5_69, f12_1) ? 1 : 0) << 0xa
                                            | (fpu_val_5_69 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1)
                                            & 1) ? 0 : 1;

                                        long double f17_1 = g_bcabd8;
                                        fpu_val_6_101 - f17_1;
                                        int32_t entity_10;

                                        entity_10 = *(&((fpu_val_6_101 < f17_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_101, f17_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_101 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        long double fpu_val_6_102 = item_6c;
                                        long double f22_1 = g_bcabdc;
                                        fpu_val_6_102 - f22_1;

                                        data_14 = *(&((fpu_val_6_102 < f22_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_102, f22_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_102 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? (entity_10 << 1 | source_2) << 1 | dest_1
                                            : ((2 | entity_10) << 1 | source_2) << 1 | dest_1;
                                    }

                                    temp_5[-6] = item_94_2;
                                    *temp_5 = data_14;
                                    temp_5[-5] = item_90_2;
                                    temp_5[-4] = item_8c_2;
                                    temp_5[-3] = item_70;
                                    temp_5[-2] = item_6c;
                                    temp_5[-1] = item_68;

                                    if (!data_14)
                                    {
                                        long double fpu_val_6_103 = item_8c_2;
                                        long double f11_1 = item_a0;
                                        fpu_val_6_103 - f11_1;

                                        if (*(&((fpu_val_6_103 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_6_103, f11_1) ? 1 : 0) << 0xa
                                                | (fpu_val_6_103 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            item_a0 = item_8c_2;
                                    }

                                    flagP1 = &flagP1[8];
                                    temp_5 = &temp_5[7];
                                    flag_4_1 = item_9c_2 + 1 < *(data_6 + 0xc);
                                    item_9c_2 += 1;
                                } while (flag_4_1);
                            }

                            long double f4_1 = param_2[2];
                            fpu_val_7_20 - f4_1;

                            if (*(&((fpu_val_7_20 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_20, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_20 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                void* data_24 = *(data_6 + 0x14);
                                void* item_9c_3 = data_24;

                                if (data_24)
                                {
                                    void* source_10 = data_24;

                                    while (true)
                                    {
                                        int32_t entity_14 = 0;
                                        entity_14 = *(source_10 + 0xc);
                                        int16_t* flagP2 = source_10 + 0x1c;
                                        int32_t i_2 = 0;

                                        if (entity_14 / 3 > 0)
                                        {
                                            int32_t entity_27;
                                            int32_t i;

                                            do
                                            {
                                                int32_t data_26 = 0;
                                                int32_t entity_17 = 0;
                                                data_26 = *(source_10 + 0x12);
                                                entity_17 = *flagP2;
                                                int32_t entity_18 = entity_17 + data_26;
                                                int32_t entity_19 = 0;
                                                entity_19 = flagP2[1];
                                                int32_t entity_20 = entity_19 + data_26;
                                                int32_t entity_21 = 0;
                                                entity_21 = flagP2[2];
                                                int32_t entity_22 = entity_21 + data_26;
                                                int32_t data_29 = *(entity_18 * 0x1c + &g_7af200);
                                                int32_t entity_25 = *(entity_22 * 0x1c + &g_7af200);

                                                if (data_29 | *(entity_20 * 0x1c + &g_7af200)
                                                    | entity_25 && !(entity_25 & data_29
                                                    & *(entity_20 * 0x1c + &g_7af200)))
                                                {
                                                    long double fpu_val_7_21 =
                                                        *(entity_18 * 0x1c + 0x7af1f0);
                                                    long double f16_1 = item_a0;
                                                    fpu_val_7_21 - f16_1;

                                                    if (*(&((fpu_val_7_21 < f16_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_21, f16_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_7_21 == f16_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1)
                                                    {
                                                    label_4a1d1e:
                                                        float item_b4_2 = data_val;
                                                        float* item_b8_2 = &item_a0;
                                                        memcpy(&item_d4,
                                                            entity_22 * 0x1c + &g_7af1e8, 0x1c);
                                                        memcpy(&item_f0,
                                                            entity_20 * 0x1c + &g_7af1e8, 0x1c);
                                                        memcpy(&item_10c,
                                                            entity_18 * 0x1c + &g_7af1e8, 0x1c);
                                                        Camera_SetFieldOfView();
                                                    }
                                                    else
                                                    {
                                                        long double fpu_val_7_22 =
                                                            *(entity_20 * 0x1c + 0x7af1f0);
                                                        long double f20_1 = item_a0;
                                                        fpu_val_7_22 - f20_1;

                                                        if (*(&((fpu_val_7_22 < f20_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(fpu_val_7_22, f20_1) ? 1
                                                                : 0) << 0xa
                                                                | (fpu_val_7_22 == f20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            goto label_4a1d1e;

                                                        long double fpu_val_7_23 =
                                                            *(entity_22 * 0x1c + 0x7af1f0);
                                                        long double f21_1 = item_a0;
                                                        fpu_val_7_23 - f21_1;

                                                        if (*(&((fpu_val_7_23 < f21_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(fpu_val_7_23, f21_1) ? 1
                                                                : 0) << 0xa
                                                                | (fpu_val_7_23 == f21_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1)
                                                            goto label_4a1d1e;
                                                    }
                                                }

                                                source_10 = item_9c_3;
                                                entity_27 = 0;
                                                entity_27 = *(source_10 + 0xc);
                                                i = i_2 + 1;
                                                flagP2 = &flagP2[3];
                                                i_2 = i;
                                            } while (i < entity_27 / 3);
                                        }

                                        int16_t data_32 = *(source_10 + 0xe);

                                        if (data_32 == 0xffff)
                                            break;

                                        source_10 = source_10 + data_32 + 0x1c;
                                        item_9c_3 = source_10;
                                    }
                                }
                            }

                            data_1 = param_2;
                            data_1[2] = item_a0;
                        }
                        else if (data_1 == 3)
                        {
                            long double fpu_val_6_105 = *(context + 0x20) - g_bcab08;
                            long double fpu_val_5_71 = *(context + 0x28) - g_bcab10;
                            long double fpu_val_4_20 = *(context + 0x30) - g_bcab18;
                            void* source_16 = *(source_1 + 0x24);
                            void* item_64_1 = source_16;
                            long double fpu_val_3_23 =
                                fpu_val_4_20 * g_bcaae8 + fpu_val_5_71 * g_bcaae4;
                            long double fpu_val_2_12 = fpu_val_6_105 * g_bcaae0;
                            item_a0 = param_2[2];
                            float item_7c_2 = fpu_val_3_23 + fpu_val_2_12;
                            float item_78_4 = fpu_val_4_20 * g_bcaaf4 + fpu_val_5_71 * g_bcaaf0
                                + fpu_val_6_105 * g_bcaaec;
                            float item_74_3 = fpu_val_4_20 * g_bcab00 + fpu_val_5_71 * g_bcaafc
                                + fpu_val_6_105 * g_bcaaf8;
                            item_5c = g_bcaae4 * *(context + 0x7c) + g_bcaae0 * *(context + 0x70)
                                + g_bcaae8 * *(context + 0x88);
                            float item_58_2 = g_bcaae4 * *(context + 0x80)
                                + g_bcaae8 * *(context + 0x8c) + g_bcaae0 * *(context + 0x74);
                            float item_54_2 = g_bcaae4 * *(context + 0x84)
                                + g_bcaae8 * *(context + 0x90) + g_bcaae0 * *(context + 0x78);
                            item_50 = g_bcaaf0 * *(context + 0x7c) + g_bcaaec * *(context + 0x70)
                                + g_bcaaf4 * *(context + 0x88);
                            float* flagP3 = *(source_16 + 0x14);
                            int32_t item_98_2 = 0;
                            int32_t item_38_1 = *(context + 0x94) + g_bcab04 + 1;
                            float item_4c_2 = g_bcaaf0 * *(context + 0x80)
                                + g_bcaaf4 * *(context + 0x8c) + g_bcaaec * *(context + 0x74);
                            float item_48_2 = g_bcaaf0 * *(context + 0x84)
                                + g_bcaaf4 * *(context + 0x90) + g_bcaaec * *(context + 0x78);
                            float item_44_2 = g_bcaafc * *(context + 0x7c)
                                + g_bcaaf8 * *(context + 0x70) + g_bcab00 * *(context + 0x88);
                            float item_40_2 = g_bcaafc * *(context + 0x80)
                                + g_bcab00 * *(context + 0x8c) + g_bcaaf8 * *(context + 0x74);
                            float item_3c_2 = g_bcaafc * *(context + 0x84)
                                + g_bcab00 * *(context + 0x90) + g_bcaaf8 * *(context + 0x78);

                            if (*(source_16 + 0x10) > 0)
                            {
                                int32_t* temp_17 = &g_8ad080;
                                bool flag_5_1;

                                do
                                {
                                    float item_88_3 =
                                        item_54_2 * flagP3[2] + item_58_2 * flagP3[1] + item_5c * *flagP3;
                                    float item_94_3 = item_88_3;
                                    item_84 =
                                        item_48_2 * flagP3[2] + item_4c_2 * flagP3[1] + item_50 * *flagP3;
                                    float item_94_4 = item_88_3 + item_7c_2;
                                    float item_90_4 = item_84 + item_78_4;
                                    long double fpu_val_6_161 = item_3c_2 * flagP3[2]
                                        + item_40_2 * flagP3[1] + item_44_2 * *flagP3 + item_74_3;
                                    float item_8c_4 = fpu_val_6_161;
                                    long double f3_1 = data_val;
                                    fpu_val_6_161 - f3_1;
                                    int32_t data_45;

                                    if (*(&((fpu_val_6_161 < f3_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_161, f3_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_161 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        data_45 = 0x10;
                                    else
                                    {
                                        long double fpu_val_6_163 = 1.0f / item_8c_4;
                                        item_68 = fpu_val_6_163;
                                        long double fpu_val_6_166 =
                                            fpu_val_6_163 * item_94_4 * g_bcab28 + g_bcab30;
                                        item_70 = fpu_val_6_166;
                                        long double fpu_val_5_127 =
                                            item_68 * item_90_4 * g_bcab2c + g_bcab34;
                                        item_6c = fpu_val_5_127;
                                        long double f5_1 = g_bcabd0;
                                        fpu_val_6_166 - f5_1;
                                        int32_t source_17;

                                        source_17 = !(*(&((fpu_val_6_166 < f5_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_166, f5_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_166 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1)
                                            & 1) ? 0 : 1;

                                        long double f9_1 = g_bcabd4;
                                        fpu_val_5_127 - f9_1;
                                        int32_t dest_8;

                                        dest_8 = !(*(&((fpu_val_5_127 < f9_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_5_127, f9_1) ? 1 : 0) << 0xa
                                            | (fpu_val_5_127 == f9_1 ? 1 : 0) << 0xe | 0x3000) + 1)
                                            & 1) ? 0 : 1;

                                        long double f14_1 = g_bcabd8;
                                        fpu_val_6_166 - f14_1;
                                        int32_t entity_33;

                                        entity_33 = *(&((fpu_val_6_166 < f14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_166, f14_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_166 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        long double fpu_val_6_167 = item_6c;
                                        long double f19_1 = g_bcabdc;
                                        fpu_val_6_167 - f19_1;
                                        int32_t data_39;

                                        data_39 = *(&((fpu_val_6_167 < f19_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_167, f19_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_167 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 ? 0 : 1;

                                        data_45 =
                                            (((data_39 * 2) | entity_33) << 1 | dest_8) << 1 | source_17;
                                        source_16 = item_64_1;
                                    }

                                    temp_17[-6] = item_94_4;
                                    *temp_17 = data_45;
                                    temp_17[-5] = item_90_4;
                                    temp_17[-4] = item_8c_4;
                                    temp_17[-3] = item_70;
                                    temp_17[-2] = item_6c;
                                    temp_17[-1] = item_68;

                                    if (!data_45)
                                    {
                                        long double fpu_val_6_168 = item_8c_4;
                                        long double f8_1 = item_a0;
                                        fpu_val_6_168 - f8_1;

                                        if (*(&((fpu_val_6_168 < f8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_6_168, f8_1) ? 1 : 0) << 0xa
                                                | (fpu_val_6_168 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            item_a0 = item_8c_4;
                                    }

                                    flagP3 = &flagP3[0xa];
                                    temp_17 = &temp_17[7];
                                    flag_5_1 = item_98_2 + 1 < *(source_16 + 0x10);
                                    item_98_2 += 1;
                                } while (flag_5_1);
                            }

                            long double f2_1 = param_2[2];
                            fpu_val_7_20 - f2_1;

                            if (*(&((fpu_val_7_20 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_20, f2_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_20 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                            {
                                void* data_50 = *(source_16 + 0x1c);
                                void* item_9c_4 = data_50;

                                if (data_50)
                                {
                                    void* dest_15 = data_50;

                                    while (true)
                                    {
                                        int32_t entity_38 = 0;
                                        entity_38 = *(dest_15 + 0xc);
                                        int16_t* flagP4 = dest_15 + 0x20;
                                        int32_t item_98_3 = 0;

                                        if (entity_38 / 3 > 0)
                                        {
                                            bool flag_6_1;

                                            do
                                            {
                                                int32_t data_54 = 0;
                                                int32_t entity_39 = 0;
                                                data_54 = *(dest_15 + 0x14);
                                                entity_39 = *flagP4;
                                                int32_t entity_40 = entity_39 + data_54;
                                                int32_t entity_41 = 0;
                                                entity_41 = flagP4[1];
                                                int32_t entity_42 = entity_41 + data_54;
                                                int32_t entity_43 = 0;
                                                entity_43 = flagP4[2];
                                                int32_t entity_44 = entity_43 + data_54;
                                                item_84 = entity_42 * 0x1c + &g_8ad068;
                                                int32_t data_57 = *(entity_40 * 0x1c + &g_8ad080);
                                                int32_t entity_48 = *(entity_44 * 0x1c + &g_8ad080);

                                                if (data_57 | *(entity_42 * 0x1c + &g_8ad080)
                                                    | entity_48)
                                                {
                                                    float source_25 = item_84;

                                                    if (!(entity_48 & data_57 & *(source_25 + 0x18)))
                                                    {
                                                        long double fpu_val_7_24 =
                                                            *(entity_40 * 0x1c + 0x8ad070);
                                                        long double f13_1 = item_a0;
                                                        fpu_val_7_24 - f13_1;

                                                        if (*(&((fpu_val_7_24 < f13_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_7_24, f13_1) ? 1
                                                            : 0) << 0xa
                                                            | (fpu_val_7_24 == f13_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1)
                                                        {
                                                        label_4a2297:
                                                            float item_b4_3 = data_val;
                                                            float* item_b8_3 = &item_a0;
                                                            memcpy(&item_d4,
                                                                entity_44 * 0x1c + &g_8ad068, 0x1c);
                                                            memcpy(&item_f0, item_84, 0x1c);
                                                            memcpy(&item_10c,
                                                                entity_40 * 0x1c + &g_8ad068, 0x1c);
                                                            Camera_SetFieldOfView();
                                                            dest_15 = item_9c_4;
                                                        }
                                                        else
                                                        {
                                                            long double fpu_val_7_25 = *(source_25 + 8);
                                                            long double f15_1 = item_a0;
                                                            fpu_val_7_25 - f15_1;

                                                            if (*(&(
                                                                    (fpu_val_7_25 < f15_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(fpu_val_7_25, f15_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (fpu_val_7_25 == f15_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                goto label_4a2297;

                                                            long double fpu_val_7_26 =
                                                                *(entity_44 * 0x1c + 0x8ad070);
                                                            long double f18_1 = item_a0;
                                                            fpu_val_7_26 - f18_1;

                                                            if (*(&(
                                                                    (fpu_val_7_26 < f18_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(fpu_val_7_26, f18_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (fpu_val_7_26 == f18_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1)
                                                                goto label_4a2297;
                                                        }
                                                    }
                                                }

                                                int32_t entity_50 = 0;
                                                entity_50 = *(dest_15 + 0xc);
                                                flagP4 = &flagP4[3];
                                                flag_6_1 = item_98_3 + 1 < entity_50 / 3;
                                                item_98_3 += 1;
                                            } while (flag_6_1);
                                        }

                                        int16_t data_62 = *(dest_15 + 0xe);

                                        if (data_62 == 0xffff)
                                            break;

                                        dest_15 = dest_15 + data_62 + 0x20;
                                        item_9c_4 = dest_15;
                                    }
                                }
                            }

                            data_1 = param_2;
                            data_1[2] = item_a0;
                        }
                        void* context_1 = *(context + 0xe8);

                        if (context_1)
                        {
                            int32_t* i_1 = *(context_1 + 8);

                            if (*i_1 && i_1)
                            {
                                int32_t entity_53 = g_afa7e0;
                                int32_t data_70;

                                do
                                {
                                    int32_t* temp_26 = *i_1;
                                    void* data_67;

                                    if (!temp_26)
                                        data_67 = nullptr;
                                    else
                                    {
                                        int32_t data_64 = *temp_26;
                                        int32_t data_65 = -(data_64);
                                        data_67 = (data_65 - data_65) & temp_26;
                                    }

                                    *((entity_53 << 2) + &g_afa6e0) = data_67;
                                    g_afa7e0 = entity_53 + 1;
                                    uint32_t data_69 = Render_DrawSplineMesh_4();
                                    int32_t temp_27 = 0;
                                    temp_27 = i_1[7];
                                    data_70 = *(((data_69 * 0x180 + temp_27) << 2) + &g_a96ae0);

                                    if (data_70)
                                        data_70 = data_70(i_1, param_2);

                                    entity_53 = g_afa7e0 - 1;
                                    g_afa7e0 = entity_53;
                                    i_1 = *((entity_53 << 2) + &g_afa6e0);
                                } while (i_1);

                                return data_70;
                            }
                        }
                    }
                }
            }
        }
    }

    return data_1;
}
