// IGI native provenance: Render_ShouldHaveAllocatedD - 0x004D14E0 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D14E0-Render_ShouldHaveAllocatedD.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_ShouldHaveAllocatedD.h"
int32_t Render_ShouldHaveAllocatedD(void* context)

{
    double* data_1 = *(g_a44344 + 0xdfc);
    int32_t item_5bc;

    if (!data_1)
        item_5bc = 0xe0000000;
    else
        item_5bc = *data_1;

    int16_t data_2 = g_c10380;
    void* context_val = context;
    void* item_5a8 = &g_b16d10;
    uint32_t data_3 = data_2;
    g_b12b80 = 0;
    int32_t data_4 = g_b16c6c;
    int32_t item_61c = 0;
    int32_t item_5d4 = 0;
    int32_t temp_val = *(context_val + 0xc);
    uint32_t entity_3 = data_2 - 1;
    int32_t* item_5ac = &g_b12c60;
    DynObj_ParseConfigFile_6();
    float entity_4 = g_bcab20;
    float temp_1 = g_bcab24;
    long double fp1;
    bool c1;
    fp1 = __fpatan(1, entity_4);
    int32_t i = 0;
    void item_448;
    memcpy(&item_448, &g_b12be0, 0x40);
    char* entity_5 = &g_548060;
    long double fp0;
    bool c1_1;
    bool c2;
    fp0 = __fcos(fp1);
    float item_5dc = 1.73210001f / fp0 * 1.07374182e+09.0f;
    long double fp1_1;
    bool c1_2;
    fp1_1 = __fpatan(1, temp_1);
    long double fp0_1;
    bool c1_3;
    bool c2_1;
    fp0_1 = __fcos(fp1_1);
    float item_5f8 = 1.73210001f / fp0_1 * 1.07374182e+09.0f;

    do
    {
        char temp_2 = *entity_5;
        entity_5 = &entity_5[4];
        char item_488[0x40];
        item_488[i] = temp_2;
        i += 1;
    } while (i < 0x40);

    long double fpu_val_7_12 = g_bcab08;
    float item_5a0 = g_bcab10;
    float item_59c = g_bcab18;
    float item_570;
    memcpy(&item_570, &g_bcaae0, 0x28);
    int32_t item_634_2 = fpu_val_7_12;
    int32_t data_7 = -((item_634_2 + g_b12bc0));
    int32_t item_634_3 = item_5a0;
    int32_t data_10 = -((g_b12bc4 + item_634_3));
    int32_t item_634_4 = item_59c;
    int32_t data_12 = -((item_634_4 + g_b12bc8));
    long double fpu_val_7_15 = data_7;
    long double fpu_val_6_4 = data_10;
    long double fpu5 = data_12;
    float item_56c;
    float item_568;
    float item_5a4 = item_568 * fpu5 + item_56c * fpu_val_6_4 + item_570 * fpu_val_7_15;
    int32_t item_634_5 = item_5a4;
    int32_t entity_9 = 0;
    float item_564;
    float item_560;
    float item_55c;
    float item_558;
    float item_554;
    float item_550;
    int32_t item_548;
    int32_t item_544;
    int32_t item_540;

    for (int32_t i_1 = 0; i_1 < 0x60; )
    {
        *(&item_548 + i_1) = 0xc0000000;

        if (entity_9 & 1)
            memcpy(&item_548 + i_1, "\x00\x00\x00\x40\x00\x00\x00\xc0", 8);

        if (entity_9 & 2)
            memcpy(&item_544 + i_1, "\x00\x00\x00\x40\x00\x00\x00\xc0", 8);

        if (entity_9 & 4)
            *(&item_540 + i_1) = 0x40000000;

        long double fpu_val_7_17 = *(&item_548 + i_1);
        long double fpu_val_6_8 = *(&item_544 + i_1);
        long double fpu_val_5_2 = *(&item_540 + i_1);
        i_1 += 0xc;
        entity_9 += 1;
        item_5a4 = fpu_val_5_2 * item_568 + fpu_val_6_8 * item_56c + fpu_val_7_17 * item_570;
        float item_5a0_2 = fpu_val_5_2 * item_55c + fpu_val_6_8 * item_560 + fpu_val_7_17 * item_564;
        void item_4f4;
        *(&item_4f4 + i_1) = item_5a4;
        void item_4f0;
        *(&item_4f0 + i_1) = item_5a0_2;
        void item_4ec;
        *(&item_4ec + i_1) = fpu_val_5_2 * item_550 + fpu_val_6_8 * item_554 + fpu_val_7_17 * item_558;
    }

    void* data_14 = *(context_val + 0xc);
    int32_t item_404 = 0;
    void* item_408;

    if (data_14)
    {
        char entity_10 = *(data_14 + 0x38) & 0xf0;
        item_408 = data_14 + 0x20;
        *(data_14 + 0x38) = entity_10;
        item_404 = 2;
    }

    int32_t entity_11 = 0xa;
    void* data_16 = nullptr;
    int32_t item_62c = 0xa;
    float* item_63c = &item_5a4;
    void* item_620 = nullptr;

    do
    {
        void* temp_6 = *(context_val + (*(0x54843a + entity_11) << 2) + 0x10);

        if (temp_6)
        {
            memcpy(data_16 + 0xa4ef38, temp_6, 0x40);
            *(temp_6 + 0xc) = *(data_16 + 0xa4ef60);
            *(temp_6 + 0x10) = *(data_16 + 0xa4ef5c);
            *(temp_6 + 0x14) = *(data_16 + 0xa4ef58);
            *(temp_6 + 0x18) = *(data_16 + 0xa4ef54);
            *(temp_6 + 0x1c) = *(data_16 + 0xa4ef50);
            *(temp_6 + 0x20) = *(data_16 + 0xa4ef4c);
            *(temp_6 + 0x24) = *(data_16 + 0xa4ef48);
            *(temp_6 + 0x28) = *(data_16 + 0xa4ef44);
            int32_t data_18 = 0;
            data_18 = *(temp_6 + 0x30);
            char entity_21 = ((((((data_18 >> 1 & 1) + ((data_18 & 1) << 1)) << 1) + (data_18 >> 2 & 1))
                << 1) + (data_18 >> 3 & 1)) << 1;
            context_val = context;
            entity_21 = ((((((entity_21 + (data_18 >> 4 & 1)) << 1) + (data_18 >> 5 & 1)) << 1)
                + (data_18 >> 6 & 1)) << 1) + (data_18 >> 7 & 1);
            data_16 = item_620;
            *(temp_6 + 0x30) = entity_21;
            entity_11 = item_62c;
            *(data_16 + 0xa5374c) = temp_6;
            item_404 |= 1 << (entity_11 & 0x1f);
            *item_63c = data_16 + 0xa53740;
        }

        entity_11 += 1;
        data_16 += 0x40;
        item_63c = &item_63c[1];
        item_62c = entity_11;
        item_620 = data_16;
    } while (entity_11 - 0xa < 5);

    int32_t item_4e8;
    int32_t item_604_1 = item_634_5 - item_4e8;
    int32_t item_614_1 = data_10 - item_544;
    int32_t item_610_1 = data_7 - item_548;
    int32_t* i_2 = &item_408;
    int32_t item_4e4;
    int32_t item_600_1 = item_55c * fpu5 + item_560 * fpu_val_6_4 + item_564 * fpu_val_7_15 - item_4e4;
    int32_t item_4e0;
    int32_t item_608_1 = item_550 * fpu5 + item_554 * fpu_val_6_4 + item_558 * fpu_val_7_15 - item_4e0;
    int32_t item_60c_1 = data_12 - item_540;
    int32_t context_19 = 0xffffffff;
    void** i_6 = &item_408;
    int32_t item_5e0 = 0;
    int32_t item_634_10;

    do
    {
        int32_t data_41 = i_2[1];
        int32_t temp_18 = data_41 >> 7 & 7;
        int32_t entity_27 = data_41 >> 0xa;
        int32_t saved_target;
        int32_t* dest_7 = &(&saved_target)[temp_18 * 3 + 0x58];
        int32_t item_624_1 = temp_18;
        int32_t* item_5fc_1 = dest_7;

        if (!(data_41 & 1))
        {
            data_41 |= 1;
            i_2[1] = data_41;
            int32_t item_638_1 = 0;
            int32_t item_5d8_1 = 0;
            void* item_57c;

            if (data_41 & 2)
            {
                void* entity_44 = *i_2;
                item_57c = entity_44;
                item_638_1 = data_41 >> 4 & 7;
                int32_t data_44 = 0;
                data_44 = *(entity_44 + 0x18);
                item_5d8_1 = data_44;
            }

            int32_t item_5cc_1 = 0;
            g_b12bb8 = 0;

            if (entity_27)
            {
                float* entity_45 = &item_5a4;
                int32_t item_63c_2 = 1;
                float* item_62c_2 = &item_5a4;
                int32_t item_620_1 = 5;
                bool flag_10_1;

                do
                {
                    if (entity_27 & item_63c_2)
                    {
                        float data_48 = *(*entity_45 + (temp_18 << 2) + 0xc);
                        *entity_45 = data_48;
                        int32_t entity_46 = 0;
                        entity_46 = *(data_48 + 0x30);
                        float item_628_1 = data_48;
                        item_5cc_1 |= entity_46;

                        if (*(data_48 + 0x38) & 0x80)
                        {
                            void* j = *(data_48 + 0x2c);

                            do
                            {
                                if (*(j + 0x5c) & 0x80)
                                {
                                    int32_t temp_30 = 0;
                                    temp_30 = *(j + 0x1c);
                                    (*((temp_30 << 2) + &g_a9c4e0))(j, *(j + 0x48));
                                    temp_18 = item_624_1;
                                    data_48 = item_628_1;
                                }

                                j = *(j + 0x58);
                            } while (j);
                        }

                        if (*(data_48 + 0x38) & 1)
                        {
                            void* j_1 = *(data_48 + 0x2c);

                            do
                            {
                                if (*(j_1 + 0x5c) & 1 && !*(j_1 + 0x60))
                                {
                                    *(g_b12c58 + 4) = j_1;
                                    **&g_b12c58 = 4;
                                    int32_t entity_52 = g_b12c20 + 1;
                                    g_b12c58 += 8;
                                    g_b12c20 = entity_52;
                                }

                                j_1 = *(j_1 + 0x58);
                            } while (j_1);
                        }

                        entity_45 = item_62c_2;
                    }

                    entity_45 = &entity_45[1];
                    item_63c_2 <<= 1;
                    flag_10_1 = item_620_1 != 1;
                    item_62c_2 = entity_45;
                    item_620_1 -= 1;
                } while (flag_10_1);
            }

            context_19 += 1;
            item_5e0 -= 1;
            int32_t item_5f0_1 = context_19;
            item_604_1 += *item_5fc_1 >> (context_19 & 0x1f);
            char entity_56 = context_19;
            item_5dc = item_5dc * 0.5f;
            item_608_1 += item_5fc_1[2] >> (entity_56 & 0x1f);
            item_600_1 += item_5fc_1[1] >> (entity_56 & 0x1f);
            item_610_1 += (&saved_target)[temp_18 * 3 + 0x40] >> (context_19 & 0x1f);
            item_5f8 = item_5f8 * 0.5f;
            item_614_1 += (&saved_target)[temp_18 * 3 + 0x41] >> (context_19 & 0x1f);
            item_60c_1 += (&saved_target)[temp_18 * 3 + 0x42] >> (context_19 & 0x1f);
            int32_t* temp_41 = &item_4e8;
            char* item_5c0_1 = &(&saved_target)[item_638_1 * 2 + 0x70];
            int32_t* item_5fc_2 = &item_4e8;

            if (g_b12bb8)
                item_5d8_1 = 0;

            int32_t* dest_27 = &item_548 - &item_4e8;
            int32_t item_620_2 = 0;
            int32_t item_63c_3 = 1;
            int32_t* item_62c_3 = 0xc;
            int32_t* item_624_3 = dest_27;

            do
            {
                int32_t entity_68 = *item_5c0_1;
                item_5c0_1 = &item_5c0_1[1];
                int32_t data_66 = 1 << (entity_68 & 0x1f);
                int32_t entity_70 = item_63c_3 & item_5cc_1;

                if (entity_70)
                    goto label_4d1e7c;

                if (item_5d8_1 & data_66)
                {
                    context_19 = item_5f0_1;
                label_4d1e7c:
                    long double fpu_val_7_28 = (temp_41[2] >> ((context_19 + 1) & 0x1f)) + item_608_1;
                    float item_638_2 = fpu_val_7_28;
                    long double fpu_val_6_16 = 64.0 - item_5f8;
                    fpu_val_6_16 - fpu_val_7_28;

                    if (*(&((fpu_val_6_16 < fpu_val_7_28 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_16, fpu_val_7_28) ? 1 : 0) << 0xa
                        | (fpu_val_6_16 == fpu_val_7_28 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        long double fpu_val_7_29 = (*temp_41 >> ((context_19 + 1) & 0x1f)) + item_604_1;
                        long double fpu_val_6_19 = item_638_2 * entity_4 + item_5dc;
                        fpu_val_7_29 - fpu_val_6_19;

                        if (*(&((fpu_val_7_29 < fpu_val_6_19 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_29, fpu_val_6_19) ? 1 : 0) << 0xa
                            | (fpu_val_7_29 == fpu_val_6_19 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                        {
                            long double fpu_val_6_20 = -(fpu_val_6_19);
                            fpu_val_7_29 - fpu_val_6_20;

                            if (!(*(&((fpu_val_7_29 < fpu_val_6_20 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_29, fpu_val_6_20) ? 1 : 0) << 0xa
                                | (fpu_val_7_29 == fpu_val_6_20 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                fpu_val_7_29 = (temp_41[1] >> ((context_19 + 1) & 0x1f)) + item_600_1;
                                fpu_val_6_19 = item_638_2 * temp_1 + item_5f8;
                                fpu_val_7_29 - fpu_val_6_19;

                                if (*(&((fpu_val_7_29 < fpu_val_6_19 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_29, fpu_val_6_19) ? 1 : 0) << 0xa
                                    | (fpu_val_7_29 == fpu_val_6_19 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                {
                                    long double fpu_val_6_24 = -(fpu_val_6_19);
                                    fpu_val_7_29 - fpu_val_6_24;

                                    if (!(*(&((fpu_val_7_29 < fpu_val_6_24 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_29, fpu_val_6_24) ? 1 : 0) << 0xa
                                        | (fpu_val_7_29 == fpu_val_6_24 ? 1 : 0) << 0xe) + 1) & 0x41))
                                    {
                                        int32_t context_25 = (*(dest_27 + temp_41 + 8)
                                            >> ((context_19 + 1) & 0x1f)) + item_60c_1;
                                        int32_t data_80 = 0x40000000 >> ((context_19 + 1) & 0x1f);

                                        if (data_80 + context_25 + item_634_4 >= item_5bc)
                                        {
                                            int32_t temp_44 = (*(dest_27 + temp_41 + 4)
                                                >> ((context_19 + 1) & 0x1f)) + item_614_1;
                                            int32_t source_9 = (*(dest_27 + temp_41)
                                                >> ((context_19 + 1) & 0x1f)) + item_610_1;
                                            item_634_10 = temp_44;
                                            int32_t data_84 = source_9;

                                            if (source_9 < 0)
                                                data_84 = -(data_84);

                                            if (temp_44 < 0)
                                                temp_44 = -(temp_44);

                                            if (temp_44 > data_84)
                                                data_84 = temp_44;

                                            int32_t entity_72 = context_25;

                                            if (context_25 < 0)
                                                entity_72 = -(entity_72);

                                            if (entity_72 > data_84)
                                                data_84 = entity_72;

                                            int32_t item_638_3 = 0;
                                            int32_t item_628_6 = 0;
                                            int32_t data_86 =
                                                (data_84 - data_80) >> ((item_5e0 + 0x19) & 0x1f);

                                            if (entity_70)
                                            {
                                                long double fpu_val_7_33 = data_86 * g_bcab20;
                                                long double f3_1 = 9600.0f;
                                                fpu_val_7_33 - f3_1;

                                                if (*(&((fpu_val_7_33 < f3_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_33, f3_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_33 == f3_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                {
                                                    int32_t dest_29 = 1;
                                                    float* entity_76 = &item_5a4;
                                                    int32_t item_5ec_2 = 5;
                                                    bool flag_21_1;

                                                    do
                                                    {
                                                        if (entity_27 & dest_29)
                                                        {
                                                            float data_89 = *entity_76;

                                                            if (*(data_89 + 0x30) & item_63c_3)
                                                            {
                                                                int32_t* temp_46 = item_62c_3;
                                                                void* data_90 = *(temp_46 + data_89);
                                                                temp_46 = *(data_90 + 0x3a);
                                                                temp_46 |= *(data_90 + 0x38);

                                                                if (temp_46 & 0x183)
                                                                {
                                                                    item_628_6 = 1;
                                                                    item_638_3 |= dest_29 << 0xa;
                                                                }
                                                            }
                                                        }

                                                        entity_76 = &entity_76[1];
                                                        dest_29 <<= 1;
                                                        flag_21_1 = item_5ec_2 != 1;
                                                        item_5ec_2 -= 1;
                                                    } while (flag_21_1);
                                                }
                                            }

                                            void* item_5b4;
                                            void* data_98;

                                            if (item_5d8_1 & data_66)
                                            {
                                                int32_t data_96 = 0;
                                                data_96 = *(item_57c + (entity_68 << 1));
                                                data_98 = (data_96 << 5) + temp_val;
                                                void* const temp_50 = nullptr;
                                                temp_50 = *(entity_68 + item_57c + 0x10);
                                                item_5b4 = data_98;
                                                int32_t entity_80 = *(temp_50 +
                                                    &(&saved_target)[item_638_1 * 2 + 0x80]);

                                                if (data_86 < data_4 && item_5f0_1 + 1 < 0x10)
                                                {
                                                    item_638_3 |= entity_80 << 4 | 2;
                                                    goto label_4d22bd;
                                                }

                                                if (item_5f0_1 + 1 > 6)
                                                {
                                                    int32_t source_10 = source_9 + item_634_2;
                                                    int32_t context_26 = context_25 + item_634_4;
                                                    int32_t dest_32 = item_634_10 + item_634_3;
                                                    int32_t data_110 = ((((context_26 >> 2 & 0x1ffc000)
                                                        ^ (source_10 & 0x1ffc000)) >> 3
                                                        ^ (dest_32 & 0x3ff800)) >> 5
                                                        ^ ((context_26 ^ dest_32 ^ source_10) & 0x1ffc0)) >> 6;
                                                    int32_t entity_89 = data_110 * 0x1c;
                                                    int32_t temp_63 = *(entity_89 + 0xb04350);

                                                    if (temp_63 != 0xffffffff)
                                                    {
                                                        while (entity_3 != temp_63
                                                            || *(entity_89 + &g_b04340) != source_10
                                                            || *(entity_89 + 0xb04344) != dest_32
                                                            || *(entity_89 + 0xb04348) != context_26)
                                                        {
                                                            data_110 = (data_110 + 1) & 0x7ff;
                                                            entity_89 = data_110 * 0x1c;
                                                            temp_63 = *(entity_89 + 0xb04350);

                                                            if (temp_63 == 0xffffffff)
                                                                break;
                                                        }
                                                    }

                                                    int32_t temp_64 = 1;

                                                    if (entity_3 == *(data_110 * 0x1c + 0xb04350))
                                                    {
                                                        int32_t entity_95 =
                                                            *(data_110 * 0x1c + &g_b04358);
                                                        *(data_110 * 0x1c + 0xb04350) = data_3;
                                                        temp_64 = 0;

                                                        if (!entity_95)
                                                        {
                                                            Error_Show("Should have allocated data "
                                                            "for cube existing previous frame");

                                                            while (true)
                                                                /* nop */
                                                        }
                                                        else
                                                        {
                                                            *item_5ac = entity_95;
                                                            item_5ac = &item_5ac[1];
                                                            item_5d4 += 1;
                                                        }
                                                    }
                                                    else if (*(data_110 * 0x1c + &g_b04358))
                                                    {
                                                        Error_Show("Should't have allocate hash data! ERROR!");

                                                        while (true)
                                                            /* nop */
                                                    }
                                                    else
                                                    {
                                                        *(data_110 * 0x1c + 0xb04354) = 3;
                                                        *(data_110 * 0x1c + 0xb0434c) = data_86;
                                                        *(data_110 * 0x1c + &g_b04340) = source_10;
                                                        *(data_110 * 0x1c + 0xb04344) = dest_32;
                                                        *(data_110 * 0x1c + 0xb04348) = context_26;
                                                        *(data_110 * 0x1c + 0xb04350) = data_3;
                                                    }

                                                    if (item_61c > 0xfff)
                                                        g_b12b80 += 1;
                                                    else if (temp_64)
                                                    {
                                                        int32_t temp_66 = g_ba5060;
                                                        *(item_5a8 - 4) =
                                                            data_110 * 0x1c + &g_b04340;
                                                        int32_t data_113 = g_b97d24;
                                                        *(item_5a8 - 8) = temp_66;
                                                        int32_t* entity_104;

                                                        if (!data_113)
                                                        {
                                                            entity_104 = item_5a8 - 0xc;
                                                            *entity_104 = g_ba2058 << 0x10 | 0xffff;
                                                        }
                                                        else
                                                        {
                                                            entity_104 = item_5a8 - 0xc;
                                                            *entity_104 =
                                                                *((data_113 << 2) + &g_b97b1c)
                                                                | g_ba2058 << 0x10;
                                                        }

                                                        *(entity_104 - 4) = *(item_5b4 + 0x1c);
                                                        *(entity_104 - 8) = entity_80;
                                                        *(entity_104 - 0xc) = item_5f0_1 + 1;
                                                        *(entity_104 - 0x14) = context_26;
                                                        *(entity_104 - 0x1c) = dest_32;
                                                        *(entity_104 - 0x24) = source_10;
                                                        item_5a8 = &entity_104[0xf];
                                                        item_61c += 1;
                                                    }
                                                }
                                            }

                                            if (!item_628_6)
                                            {
                                                temp_41 = item_5fc_2;
                                                i_2 = i_6;
                                            }
                                            else
                                            {
                                                data_98 = item_5b4;
                                            label_4d22bd:
                                                i_2 = &i_6[2];
                                                temp_41 = item_5fc_2;
                                                i_6 = i_2;
                                                i_2[1] = item_620_2 << 7 | item_638_3;
                                                *i_2 = data_98;
                                            }

                                            dest_27 = item_624_3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                temp_41 = &temp_41[3];
                context_19 = item_5f0_1;
                item_5fc_2 = temp_41;
                item_620_2 += 1;
                item_63c_3 <<= 1;
                item_62c_3 = &item_62c_3[1];
            } while (&item_62c_3[1] < 0x2c);
        }
        else
        {
            if (entity_27)
            {
                int32_t item_63c_1 = 1;
                float* item_618 = &item_5a4;
                int32_t item_62c_1 = 5;
                bool flag_8_1;

                do
                {
                    if (entity_27 & item_63c_1)
                    {
                        float data_27 = *item_618;
                        float item_624_2 = data_27;
                        bool flag_9_1 = !(*(data_27 + 0x38) & 0x100);
                        *item_618 = *(data_27 + 8);

                        if (!flag_9_1)
                        {
                            void* j_2 = *(data_27 + 0x2c);

                            do
                            {
                                if (*(j_2 + 0x5c) & 0x100)
                                {
                                    int32_t entity_31 = 0;
                                    entity_31 = *(j_2 + 0x1c);
                                    (*((entity_31 << 2) + &g_a9cae0))(j_2, *(j_2 + 0x48));
                                    data_27 = item_624_2;
                                }

                                j_2 = *(j_2 + 0x58);
                            } while (j_2);
                        }

                        if (*(data_27 + 0x38) & 2)
                        {
                            void* j_3 = *(data_27 + 0x2c);

                            do
                            {
                                if (*(j_3 + 0x5c) & 2 && !*(j_3 + 0x60))
                                {
                                    *(g_b12c58 + 4) = j_3;
                                    **&g_b12c58 = 5;
                                    g_b12c58 += 8;
                                    g_b12c20 += 1;
                                }

                                j_3 = *(j_3 + 0x58);
                            } while (j_3);
                        }

                        dest_7 = item_5fc_1;
                    }

                    item_63c_1 <<= 1;
                    flag_8_1 = item_62c_1 != 1;
                    item_618 = &item_618[1];
                    item_62c_1 -= 1;
                } while (flag_8_1);
            }

            long double fpu_val_7_20 = item_5dc;
            item_604_1 -= *dest_7 >> (context_19 & 0x1f);
            char entity_35 = context_19;
            item_5dc = fpu_val_7_20 + fpu_val_7_20;
            long double fpu_val_7_22 = item_5f8;
            item_600_1 -= dest_7[1] >> (entity_35 & 0x1f);
            item_5f8 = fpu_val_7_22 + fpu_val_7_22;
            item_608_1 -= dest_7[2] >> (entity_35 & 0x1f);
            item_610_1 -= (&saved_target)[temp_18 * 3 + 0x40] >> (context_19 & 0x1f);
            char entity_41 = context_19;
            item_614_1 -= (&saved_target)[temp_18 * 3 + 0x41] >> (entity_41 & 0x1f);
            context_19 -= 1;
            i_2 -= 8;
            item_60c_1 -= (&saved_target)[temp_18 * 3 + 0x42] >> (entity_41 & 0x1f);
            item_5e0 += 1;
            i_6 = i_2;
        }
    } while (i_2 >= &item_408);

    void* temp_75 = nullptr;

    for (int32_t i_3 = 0xa4ef38; i_3 < 0xa4f078; )
    {
        int32_t dest_33 = *(context + (*(temp_75 + 0x548444) << 2) + 0x10);

        if (dest_33)
            memcpy(dest_33, i_3, 0x40);

        i_3 += 0x40;
        temp_75 += 1;
    }

    g_b16ca4 = item_61c;
    int32_t* entity_118 = &g_b04358;
    int32_t temp_78 = data_3 & 0xffff0000;
    int32_t source_16 = data_3 & 0xffff;
    g_b16c9c = item_5d4;
    item_634_10 = temp_78;
    int32_t item_5e4_1 = source_16;
    int32_t i_5 = 0;
    int32_t* item_61c_1 = &g_b04358;
    int32_t i_4;

    do
    {
        int32_t data_127 = entity_118[-2];

        if ((temp_78 == (data_127 & 0xffff0000) && data_127 != source_16)
            || (data_127 & 0xffff) + 1 < source_16)
        {
            int32_t data_130 = *entity_118;

            if (data_130)
            {
                int32_t temp_79 = entity_118[-1];
                int32_t data_135;
                int32_t temp_80;

                if (!temp_79)
                {
                    int32_t* source_17 = g_b12b74;
                    temp_80 = *(source_17 + data_130);
                    int32_t data_132 = g_b12b68 - 1;
                    g_b12b68 = data_132;

                    if (temp_80 != data_132)
                    {
                        int32_t entity_119 = g_b12b64;
                        data_135 = *(entity_119 + (data_132 << 2)) * g_b12b70 + g_b12b60;
                        int32_t dest_39 = *(entity_119 + (temp_80 << 2));
                        int32_t source_18 = *(source_17 + data_135);
                        *(entity_119 + (temp_80 << 2)) = *(entity_119 + (source_18 << 2));
                        *(g_b12b64 + (source_18 << 2)) = dest_39;
                        *(g_b12b74 + data_135) = temp_80;
                        entity_118 = item_61c_1;
                    }
                }
                else if (temp_79 == 1)
                {
                    int32_t* source_19 = g_b12c54;
                    temp_80 = *(source_19 + data_130);
                    int32_t data_137 = g_b12c48 - 1;
                    g_b12c48 = data_137;

                    if (temp_80 != data_137)
                    {
                        int32_t entity_122 = g_b12c44;
                        data_135 = *(entity_122 + (data_137 << 2)) * g_b12c50 + g_b12c40;
                        int32_t dest_41 = *(entity_122 + (temp_80 << 2));
                        int32_t source_20 = *(source_19 + data_135);
                        *(entity_122 + (temp_80 << 2)) = *(entity_122 + (source_20 << 2));
                        *(g_b12c44 + (source_20 << 2)) = dest_41;
                        *(g_b12c54 + data_135) = temp_80;
                        entity_118 = item_61c_1;
                    }
                }
                else if (temp_79 != 2)
                {
                    Error_Show("Illegal alloc info");

                    while (true)
                        /* nop */
                }
                else
                {
                    int32_t* source_21 = g_b16cd4;
                    temp_80 = *(source_21 + data_130);
                    int32_t data_141 = g_b16cc8 - 1;
                    g_b16cc8 = data_141;

                    if (temp_80 != data_141)
                    {
                        int32_t entity_124 = g_b16cc4;
                        data_135 = *(entity_124 + (data_141 << 2)) * g_b16cd0 + g_b16cc0;
                        int32_t dest_43 = *(entity_124 + (temp_80 << 2));
                        int32_t source_22 = *(source_21 + data_135);
                        *(entity_124 + (temp_80 << 2)) = *(entity_124 + (source_22 << 2));
                        *(g_b16cc4 + (source_22 << 2)) = dest_43;
                        *(g_b16cd4 + data_135) = temp_80;
                        entity_118 = item_61c_1;
                    }
                }
                *entity_118 = 0;
            }

            source_16 = item_5e4_1;
            temp_78 = item_634_10;
            entity_118[-2] = 0xffffffff;
        }

        entity_118 = &entity_118[7];
        i_4 = i_5 + 1;
        item_61c_1 = entity_118;
        i_5 = i_4;
    } while (i_4 < 0x800);

    return i_4;
}
