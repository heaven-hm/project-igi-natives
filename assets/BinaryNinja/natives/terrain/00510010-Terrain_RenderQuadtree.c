// Original IGI.EXE function: Terrain_RenderQuadtree (VA 0x00510010; static CFG gate FAIL, CFG score 0.667).
#include "Terrain_RenderQuadtree.h"
int32_t Terrain_RenderQuadtree()

{
    int32_t flagP;
    int32_t item_4 = flagP;
    int32_t data_val = g_54eba0;
    int32_t* item_c30 = &item_4;
    int32_t result = g_b16ca4;
    int32_t item_b84 = g_54eba4;
    void* flagP1 = &g_b16ce0;
    int32_t item_a90 = 0;
    int32_t item_b48 = 0xffffffff;
    void* item_b98 = &g_b16ce0;
    int32_t result_2 = result;
    g_c31090 += result;
    int32_t result_1 = 0;

    if (result > 0)
    {
        do
        {
            int32_t temp_1 = *(flagP1 + 0x18);
            int24_t context_1 = *(flagP1 + 0x24);
            int32_t temp_2 = *(flagP1 + 0x1c);
            double item_b24;
            memcpy(&item_b24, flagP1, 0x18);
            void* data_1 = *(flagP1 + 0x2c);
            int32_t temp_3 = temp_2 & 1;
            int32_t entity_1 = 0;
            entity_1 = *(&context_1 + 2);
            uint32_t context_2 = context_1;
            int32_t temp_5 = g_b12b68;
            int32_t item_c20_1 = entity_1;

            if (temp_5 <= g_b12b6c - 3)
            {
                int32_t entity_16 = *(g_b12b64 + (temp_5 << 2)) * g_b12b70 + g_b12b60;
                *(g_b12b74 + entity_16) = temp_5;
                g_b12b68 += 1;
                *(data_1 + 0x18) = entity_16;
                *(data_1 + 0x14) = 0;
            label_5101bf:
                int32_t entity_17 = g_b16c9c;
                int16_t* source_9 = *(flagP1 + 0x20);
                *((entity_17 << 2) + &g_b12c60) = *(data_1 + 0x18);
                g_b16c9c = entity_17 + 1;
                void* temp_17 = *(data_1 + 0x18);
                int32_t* data_3 = source_9[1] + &source_9[4];
                int32_t* item_bc8_1 = data_3;
                int32_t item_bd8_2 = 0;
                float item_b5c;
                float item_b44;
                int32_t item_afc;
                float item_af8;
                float item_af4;

                if (context_2 != 0xffff)
                {
                    item_bd8_2 = 1;
                    uint32_t data_5 = context_2 * 0x30;
                    item_b44 = *(data_5 + 0xba80b0) * 0.00390625f;
                    item_af4 = *(data_5 + 0xba80b8);
                    item_af8 = *(data_5 + 0xba80c0);
                    item_afc = *(data_5 + 0xba80c8);
                    item_b5c = *(data_5 + 0xba80b4) * 0.00390625f;
                }

                void* item_bbc;
                char item_ba8;
                float item_ba0;
                float item_b50;
                float item_b4c;

                if (temp_1 < 0xe)
                    item_c20_1 = 0;
                else if (entity_1)
                {
                    int32_t entity_21 = entity_1 * 0x30;
                    item_b50 = *(entity_21 + 0xba2048);
                    item_bbc = (&g_ba2058)[entity_1 * 0xc];
                    item_b4c = *(entity_21 + 0xba2050);
                    item_ba0 = (&g_ba2040)[entity_1 * 6];
                    item_ba8 = *(entity_21 + 0xba203c) + 3;
                }

                int32_t context_3 = *(flagP1 + 0x28);

                if (item_b48 != context_3)
                {
                    item_b48 = context_3;
                    void item_ad8;
                    void* data_9 = &item_ad8;
                    int32_t item_bc0_1 = 4;
                    bool flag_6_1;

                    do
                    {
                        uint32_t entity_27 = context_3;
                        context_3 s>>= 8;
                        int32_t* data_15;

                        if (!entity_27)
                        {
                            data_15 = data_9 - 0x18;
                            *data_15 = 0;
                        }
                        else
                        {
                            uint32_t entity_29 = entity_27 * 0x30;
                            *(data_9 - 4) = *(entity_29 + 0xba5050);
                            long double fpu_val_7_9 = *(entity_29 + 0xba5070);
                            *(data_9 - 8) = *(entity_29 + 0xba5078);
                            int32_t dest_4 = *(entity_29 + 0xba5060);
                            *(data_9 - 0xc) = fpu_val_7_9;
                            *(data_9 - 0x10) = *(entity_29 + 0xba5068);
                            int32_t entity_31 = *(entity_29 + 0xba505c);
                            *(data_9 - 0x14) = dest_4;
                            data_15 = data_9 - 0x18;
                            *data_15 = entity_31;
                        }

                        data_9 = &data_15[0xc];
                        flag_6_1 = item_bc0_1 != 1;
                        item_bc0_1 -= 1;
                    } while (flag_6_1);
                }

                int32_t entity_34 = source_9[2];
                int32_t context_5 = source_9[3] + entity_34;
                int32_t data_18 = context_5 * 0x14 - (entity_34 << 3);
                memcpy(temp_17, flagP1, 0x18);
                *(temp_17 + 0x18) = entity_34 << 0x10 | context_5;
                *(temp_17 + 0x1c) = temp_1;
                void* dest_6 = item_bbc;
                void* data_23 = temp_17 + 0x30;
                int32_t flagP3 = temp_2 & 4;
                int32_t item_be0_1 = 0;
                int32_t item_c04_1 = flagP3;
                double item_be8_1 = 1 << ((0x1b - temp_1) & 0x1f);
                double item_b1c;
                double item_b14;

                while (true)
                {
                    int32_t entity_38 = *item_bc8_1;
                    int32_t item_c14_2 = (entity_38 >> 0xe & 0x3f) - 0x18;
                    int32_t temp_28 = (entity_38 >> 0x1a & 0x3f) - 0x18;
                    int32_t item_c1c_1 = temp_28;
                    int32_t item_c24_1 = (entity_38 >> 0x14 & 0x3f) - 0x18;

                    if (flagP3)
                    {
                        temp_28 = -(temp_28);
                        item_c1c_1 = temp_28;
                    }

                    char entity_43 = temp_2;

                    if (!temp_3)
                    {
                        if (entity_43 & 2)
                        {
                            item_c1c_1 = -(temp_28);
                            item_c24_1 = -(((entity_38 >> 0x14 & 0x3f) - 0x18));
                        }

                        dest_6 = item_bbc;
                    }
                    else if (!(entity_43 & 2))
                    {
                        item_c1c_1 = -(((entity_38 >> 0x14 & 0x3f) - 0x18));
                        item_c24_1 = temp_28;
                    }
                    else
                    {
                        item_c1c_1 = (entity_38 >> 0x14 & 0x3f) - 0x18;
                        item_c24_1 = -(temp_28);
                    }

                    long double fpu_val_7_15 = item_c1c_1 * item_be8_1 / data_val + item_b24;
                    long double fpu_val_6_4 = item_c24_1 * item_be8_1 / data_val + item_b1c;
                    long double fpu_val_5_4 = item_c14_2 * item_be8_1 / data_val + item_b14;
                    long double fpu_val_4_1 = 0.0f;

                    if (item_c20_1)
                    {
                        long double fpu_val_3_3 = (fpu_val_7_15 - item_b50) * item_ba0;
                        float item_c24_2 = (fpu_val_6_4 - item_b4c) * item_ba0;
                        item_c14_2 = fpu_val_3_3;
                        item_c1c_1 = item_c24_2;
                        long double fpu_val_3_4 = fpu_val_3_3 - item_c14_2;
                        int32_t entity_46 = item_c1c_1 + (item_c1c_1 << (item_ba8 & 0x1f));
                        long double fpu_val_1_1 = *(dest_6 + entity_46 + item_c14_2);
                        int32_t flagP11 =
                            ((item_c1c_1 + 1) << (item_ba8 & 0x1f)) + item_c1c_1 + 1 + item_c14_2 + 1;
                        float item_c24_3 = *(dest_6 + flagP11 - 1);
                        float item_c1c_4 =
                            (*(entity_46 + item_c14_2 + 1 + dest_6) - fpu_val_1_1) * fpu_val_3_4 + fpu_val_1_1;
                        float item_c24_4 = ((fpu_val_3_4 * (*(dest_6 + flagP11) - item_c24_3) + item_c24_3
                            - item_c1c_4) * (item_c24_2 - item_c1c_1) + item_c1c_4 - 64.0) * 256.0f;

                        if (temp_1 <= 0xe)
                            fpu_val_4_1 = item_c24_4;
                        else
                            fpu_val_5_4 = fpu_val_5_4 + item_c24_4;
                    }

                    *(data_23 - 4) = fpu_val_4_1;
                    *(data_23 - 8) = fpu_val_5_4;
                    item_bc8_1 = &item_bc8_1[1];
                    *(data_23 - 0xc) = fpu_val_6_4;
                    int32_t entity_54 = item_be0_1 + 1;
                    item_be0_1 = entity_54;
                    *(data_23 - 0x10) = fpu_val_7_15;
                    data_23 += 0x10;

                    if (entity_54 >= entity_34)
                        break;

                    flagP3 = item_c04_1;
                }

                if (context_5 != entity_34)
                {
                    int32_t entity_71;

                    do
                    {
                        int32_t entity_55 = *item_bc8_1;
                        *(data_23 - 4) = entity_55 & 0x3f;
                        int32_t item_c14_8 = (entity_55 >> 0xe & 0x3f) - 0x18;
                        int32_t temp_47 = (entity_55 >> 0x1a & 0x3f) - 0x18;
                        int32_t item_c24_5 = (entity_55 >> 0x14 & 0x3f) - 0x18;
                        int32_t item_c1c_5 = temp_47;

                        if (item_c04_1)
                        {
                            temp_47 = -(temp_47);
                            item_c1c_5 = temp_47;
                        }

                        char entity_61 = temp_2;

                        if (!temp_3)
                        {
                            if (entity_61 & 2)
                            {
                                item_c1c_5 = -(temp_47);
                                item_c24_5 = -(((entity_55 >> 0x14 & 0x3f) - 0x18));
                            }

                            dest_6 = item_bbc;
                        }
                        else if (!(entity_61 & 2))
                        {
                            item_c1c_5 = -(((entity_55 >> 0x14 & 0x3f) - 0x18));
                            item_c24_5 = temp_47;
                        }
                        else
                        {
                            item_c1c_5 = (entity_55 >> 0x14 & 0x3f) - 0x18;
                            item_c24_5 = -(temp_47);
                        }

                        long double fpu_val_7_19 = item_c1c_5 * item_be8_1 / data_val + item_b24;
                        long double fpu_val_6_8 = item_c24_5 * item_be8_1 / data_val + item_b1c;
                        long double fpu_val_5_8 = item_c14_8 * item_be8_1 / data_val + item_b14;

                        if (item_c20_1)
                        {
                            long double fpu_val_4_5 = (fpu_val_7_19 - item_b50) * item_ba0;
                            float item_c24_6 = (fpu_val_6_8 - item_b4c) * item_ba0;
                            item_c14_8 = fpu_val_4_5;
                            item_c1c_5 = item_c24_6;
                            long double fpu_val_4_6 = fpu_val_4_5 - item_c14_8;
                            int32_t entity_64 = item_c1c_5 + (item_c1c_5 << (item_ba8 & 0x1f));
                            long double fpu_val_2_16 = *(dest_6 + entity_64 + item_c14_8);
                            int32_t flagP19 = ((item_c1c_5 + 1) << (item_ba8 & 0x1f)) + item_c1c_5 + 1
                                + item_c14_8 + 1;
                            float item_c24_7 = *(dest_6 + flagP19 - 1);
                            float item_c1c_7 =
                                (*(entity_64 + item_c14_8 + 1 + dest_6) - fpu_val_2_16) * fpu_val_4_6
                                + fpu_val_2_16;
                            fpu_val_5_8 = fpu_val_5_8 + ((fpu_val_4_6 * (*(dest_6 + flagP19) - item_c24_7)
                                + item_c24_7 - item_c1c_7) * (item_c24_6 - item_c1c_5) + item_c1c_7 - 64.0)
                                * 256.0f;
                        }

                        *(data_23 - 8) = fpu_val_5_8;
                        *(data_23 - 0xc) = fpu_val_6_8;
                        entity_71 = item_be0_1 + 1;
                        item_be0_1 = entity_71;
                        item_bc8_1 = &item_bc8_1[1];
                        *(data_23 - 0x10) = fpu_val_7_19;
                        data_23 += 0x10;
                    } while (entity_71 < context_5);
                }

                float* flagP22 = temp_17 + 0x20;
                int32_t* data_32 = data_23 - 0x10;
                int32_t entity_72 = 0;
                int32_t* item_c1c_8 = data_32;
                int32_t item_be0_2 = 0;
                int32_t i_1 = 0;
                void item_908;
                int32_t* source_22 = &item_908;
                int32_t i;

                do
                {
                    long double fpu_val_7_20 = *flagP22;
                    float temp_53 = flagP22[1];
                    float temp_54 = flagP22[2];
                    int32_t temp_55 = 0;
                    int32_t dest_7 = 0xff;
                    source_22[7] = (fpu_val_7_20 - item_af4) * item_b44 + item_b5c;
                    source_22[8] = (temp_53 - item_af8) * item_b44 + item_b5c;
                    int32_t item_af0;

                    if (item_af0)
                    {
                        void item_adc;
                        int32_t* data_33 = &item_adc;
                        float item_aec;
                        float item_ae8;
                        int32_t item_be8_2 = item_aec * (fpu_val_7_20 - item_ae8);
                        float item_ae4;
                        int32_t item_ae0;

                        if (*((item_be8_2 >> 3) + item_ae0
                            + ((item_aec * (temp_53 - item_ae4)) << (item_af0 & 0x1f))) >> (item_be8_2 & 7)
                            & 1)
                        {
                        label_510930:
                            temp_55 = *data_33;
                        }
                        else
                        {
                            while (true)
                            {
                                int32_t entity_75 = data_33[1];

                                if (!entity_75)
                                    break;

                                long double fpu_val_6_22 = data_33[2];
                                long double fpu_val_5_14 = fpu_val_7_20 - data_33[3];
                                float item_c20_3 = temp_53 - data_33[4];
                                int32_t dest_12 = data_33[5];
                                data_33 = &data_33[6];
                                int32_t item_be8_4 = fpu_val_5_14 * fpu_val_6_22;

                                if (*((item_be8_4 >> 3) + dest_12
                                        + ((item_c20_3 * fpu_val_6_22) << (entity_75 & 0x1f))) >> (item_be8_4 & 7)
                                        & 1)
                                    goto label_510930;
                            }
                        }

                        if (item_be0_2 < entity_34)
                        {
                            data_32 = item_c1c_8;
                            dest_7 = 0xff;
                        }
                        else
                        {
                            int32_t data_40 = flagP22[3];
                            *source_22 = data_40;
                            int32_t item_8f4[0x23b];
                            dest_7 = item_8f4[data_40 * 9] >> 0x10;

                            if (dest_7 == temp_55)
                                dest_7 = 0xff;

                            data_32 = item_c1c_8;
                        }
                    }
                    else if (entity_72 >= entity_34)
                        *source_22 = flagP22[3];

                    source_22[1] = fpu_val_7_20 - item_b24;
                    source_22[2] = temp_53 - item_b1c;
                    i = i_1 | 1 << (temp_55 & 0x1f);
                    flagP22 = &flagP22[4];
                    source_22[3] = temp_54 - item_b14;
                    source_22[5] = temp_55 << 0x10 | dest_7;
                    entity_72 = item_be0_2 + 1;
                    source_22 = &source_22[9];
                    i_1 = i;
                    item_be0_2 = entity_72;
                } while (entity_72 < context_5);

                long double fpu_val_7_27 = item_b24 + g_b12ba0;
                int32_t temp_58 = 0;
                int32_t source_23 = 0;
                int32_t item_c24_10 = 0;
                int32_t item_a78 = 0;
                double item_be8_6 = fpu_val_7_27;
                int32_t* entity_83 = &item_a78;
                item_bc8_1 = item_b1c + g_b12ba8;
                item_be0_2 = item_b14 + g_b12bb0;

                if (i)
                {
                    do
                    {
                        if (i & 1)
                        {
                            *entity_83 = temp_58;
                            entity_83 = &entity_83[1];
                            source_23 += 1;
                        }

                        temp_58 += 1;
                        i s>>= 1;
                    } while (i);

                    item_c24_10 = source_23;
                }

                if (data_18 + (((data_18 + 4) * source_23 + (context_5 << 3)) << 1) + 0x3c < 0x640)
                    goto label_510d13;

                int32_t i_2 = *(data_1 + 0x14);
                i_1 = i_2;

                if (i_2 != 1)
                {
                    if (i_2 == 2 && data_18 + (((data_18 + 4) * source_23 + (context_5 << 3)) << 1) + 0x3c
                            < 0x1f40)
                        goto label_510d13;
                }
                else if (data_18 + (((data_18 + 4) * source_23 + (context_5 << 3)) << 1) + 0x3c < 0xc80)
                    goto label_510d13;

                int32_t source_24 = g_b12c48;
                int32_t item_c20_4 = 0;
                int32_t flagP26 = *(data_1 + 0x18);

                if (i_2 < 1 && data_18 + (((data_18 + 4) * source_23 + (context_5 << 3)) << 1) + 0x3c < 0xc80
                    && source_24 < g_b12c4c - 2)
                {
                    void* data_41 = data_32 - flagP26;
                    int32_t* dest_18 = *(g_b12c44 + (source_24 << 2)) * g_b12c50 + g_b12c40;
                    *(dest_18 + g_b12c54) = source_24;
                    g_b12c48 += 1;
                    *(data_1 + 0x18) = dest_18;
                    int32_t source_28;
                    int32_t dest_19;
                    dest_19 = memcpy(dest_18, flagP26, data_41 & 0xfffffffc);
                    memcpy(dest_19, source_28, data_41 & 3);
                    int32_t entity_95 = *(data_1 + 0x18);
                    *(data_1 + 0x14) = 1;
                    data_32 = data_41 + entity_95;
                    item_c20_4 = 1;
                    *((g_b16c9c << 2) + &g_b12c5c) = entity_95;
                    goto label_510bba;
                }

                int32_t entity_97;

                if (i_2 >= 2
                        || data_18 + (((data_18 + 4) * source_23 + (context_5 << 3)) << 1) + 0x3c >= 0x1f40)
                    entity_97 = g_b16cc8;
                else
                {
                    entity_97 = g_b16cc8;

                    if (entity_97 < g_b16ccc - 2)
                    {
                        void* data_42 = data_32 - flagP26;
                        item_c20_4 = 1;
                        int32_t* dest_23 =
                            *(g_b16cc4 + (entity_97 << 2)) * g_b16cd0 + g_b16cc0;
                        *(dest_23 + g_b16cd4) = entity_97;
                        g_b16cc8 += 1;
                        *(data_1 + 0x18) = dest_23;
                        int32_t source_34;
                        int32_t dest_24;
                        dest_24 = memcpy(dest_23, flagP26, data_42 & 0xfffffffc);
                        memcpy(dest_24, source_34, data_42 & 3);
                        int32_t entity_102 = *(data_1 + 0x18);
                        *(data_1 + 0x14) = 2;
                        data_32 = data_42 + entity_102;
                        *((g_b16c9c << 2) + &g_b12c5c) = entity_102;
                    label_510bba:
                        source_24 = g_b12c48;
                        entity_97 = g_b16cc8;
                        i_2 = i_1;
                    }
                }

                int32_t* entity_107;
                int32_t flagP27;

                if (!i_2)
                {
                    int32_t* dest_25 = g_b12b74;
                    int32_t entity_104 = g_b12b68 - 1;
                    flagP27 = *(dest_25 + flagP26);
                    g_b12b68 = entity_104;

                    if (flagP27 != entity_104)
                    {
                        int32_t source_36 = g_b12b64;
                        entity_107 = *(source_36 + (entity_104 << 2)) * g_b12b70 + g_b12b60;
                        int32_t context_27 = *(source_36 + (flagP27 << 2));
                        int32_t dest_26 = *(entity_107 + dest_25);
                        *(source_36 + (flagP27 << 2)) = *(source_36 + (dest_26 << 2));
                        *(g_b12b64 + (dest_26 << 2)) = context_27;
                        *(entity_107 + g_b12b74) = flagP27;
                    }
                }
                else if (i_2 == 1)
                {
                    int32_t* context_30 = g_b12c54;
                    flagP27 = *(context_30 + flagP26);
                    g_b12c48 = source_24 - 1;

                    if (flagP27 != source_24 - 1)
                    {
                        int32_t dest_27 = g_b12c44;
                        entity_107 = *(dest_27 + ((source_24 - 1) << 2)) * g_b12c50 + g_b12c40;
                        int32_t source_41 = *(entity_107 + context_30);
                        int32_t context_31 = *(dest_27 + (flagP27 << 2));
                        *(dest_27 + (flagP27 << 2)) = *(dest_27 + (source_41 << 2));
                        *(g_b12c44 + (source_41 << 2)) = context_31;
                        *(entity_107 + g_b12c54) = flagP27;
                    }
                }
                else if (i_2 == 2)
                {
                    int32_t* dest_29 = g_b16cd4;
                    flagP27 = *(dest_29 + flagP26);
                    g_b16cc8 = entity_97 - 1;

                    if (flagP27 != entity_97 - 1)
                    {
                        int32_t source_42 = g_b16cc4;
                        entity_107 = *(source_42 + ((entity_97 - 1) << 2)) * g_b16cd0 + g_b16cc0;
                        int32_t context_35 = *(source_42 + (flagP27 << 2));
                        int32_t dest_30 = *(entity_107 + dest_29);
                        *(source_42 + (flagP27 << 2)) = *(source_42 + (dest_30 << 2));
                        *(g_b16cc4 + (dest_30 << 2)) = context_35;
                        *(entity_107 + g_b16cd4) = flagP27;
                    }
                }

                if (item_c20_4)
                {
                    source_23 = item_c24_10;
                label_510d13:
                    *data_32 = temp_2;
                    int32_t item_c0c_2 = 0;
                    data_32[1] = &source_9[4];
                    data_32[2] = source_23;
                    data_32[3] = *source_9;
                    int32_t flagP28 = 0x17 - temp_1;
                    int32_t context_40 = temp_1 * 0x1c;
                    int32_t* item_c1c_9 = &data_32[4];
                    int32_t* temp_63 = &item_a78;
                    void item_9d0;
                    void* data_47 = &item_9d0;
                    int32_t item_c08_5 = context_40;
                    int32_t item_bf0_3 = flagP28;
                    long double fpu_val_7_32 = 0x40000000 >> (temp_1 & 0x1f);

                    while (true)
                    {
                        int32_t temp_65 = *temp_63 * 0xe1;
                        float entity_120 = *(context_40 + (temp_65 << 2) + 0xc28ff8);
                        char entity_121 = flagP28;
                        long double fpu_val_6_26 = *(context_40 + (temp_65 << 2) + 0xc28ff0);
                        i_1 = fpu_val_6_26 * item_be8_6;
                        int32_t temp_68 = i_1 >> (entity_121 & 0x1f) & 0x7ff;
                        i_1 = fpu_val_6_26 * item_bc8_1;
                        int32_t source_48 = i_1 >> (entity_121 & 0x1f) & 0x7ff;
                        i_1 = entity_120 * item_be8_6;
                        int32_t dest_33 = i_1 >> ((0x16 - temp_1) & 0x1f) & 0x7ff;
                        i_1 = entity_120 * item_bc8_1;
                        i_1 = i_1 >> ((0x16 - temp_1) & 0x1f) & 0x7ff;
                        int32_t entity_124 = 0;
                        entity_124 = *((temp_68 >> 8)
                            + (((source_48 >> 8) + (*(context_40 + (temp_65 << 2) + 0xc28ff4) << 3)) << 3)
                            + 0xc30080);
                        *(data_47 - 4) = entity_124;
                        int32_t entity_127 = 0;
                        entity_127 = *((dest_33 >> 8)
                            + (((i_1 >> 8) + (*(context_40 + (temp_65 << 2) + 0xc28ffc) << 3)) << 3)
                            + 0xc30080);
                        *(data_47 - 8) = entity_127;
                        *(data_47 - 0xc) = fpu_val_6_26 * 0.5f / fpu_val_7_32;
                        int32_t item_bfc_4 = source_48 & 0xff;
                        *(data_47 - 0x10) = ((temp_68 & 0xff) + 1.0f) * 0.00390625f;
                        *(data_47 - 0x14) = (item_bfc_4 + 1.0f) * 0.00390625f;
                        flagP28 = item_bf0_3;
                        item_bfc_4 = fpu_val_6_26 * item_be0_2;
                        data_47 += 0x28;
                        *(data_47 - 0x40) = ((item_bfc_4 >> (flagP28 & 0x1f)) + 1.0f) * 0.00390625f;
                        *(data_47 - 0x44) = entity_120 / fpu_val_7_32;
                        int32_t item_bfc_7 = i_1;
                        *(data_47 - 0x48) = ((dest_33 & 0xff) + 1.0f) * 0.00390625f;
                        *(data_47 - 0x4c) = (item_bfc_7 + 1.0f) * 0.00390625f;
                        item_bfc_7 = entity_120 * item_be0_2;
                        bool flag_16_1 = item_c0c_2 + 1 < item_c24_10;
                        item_c0c_2 += 1;
                        *(data_47 - 0x50) =
                            ((item_bfc_7 >> ((0x16 - temp_1) & 0x1f)) + 1.0f) * 0.00390625f;

                        if (!flag_16_1)
                            break;

                        context_40 = item_c08_5;
                        temp_63 = &temp_63[1];
                    }

                    void item_9f8;
                    float* data_58 = &item_9f8;
                    int32_t flagP38;

                    if (item_c24_10 <= 0)
                        flagP38 = entity_34;
                    else
                    {
                        void* context_50 = data_18 + 4;
                        int32_t* dest_35 = item_c1c_9;
                        int32_t item_c0c_3 = item_c24_10;
                        int32_t* item_c20_6 = &item_a78;

                        while (true)
                        {
                            long double fpu_val_7_34 = *data_58;
                            long double fpu_val_6_44 = data_58[1];
                            int32_t item_be0_3 = 0;
                            long double fpu_val_5_35 = data_58[2];
                            long double fpu_val_4_13 = data_58[3];
                            long double fpu_val_3_25 = data_58[4];
                            float temp_77 = data_58[5];
                            float entity_134 = data_58[6];
                            float temp_78 = data_58[7];
                            int32_t item_c24_11 = context_5;
                            int32_t entity_136 = *item_c20_6;
                            int32_t temp_80 = g_c30060;
                            int32_t entity_137 = data_58[8];
                            data_58 = &data_58[0xa];
                            int32_t entity_139 = data_58[-1];
                            *dest_35 = temp_80 + entity_137 * 0x24 + 0xc;
                            int32_t* item_bc8_2 = data_3;
                            int32_t* entity_142 = context_50 + dest_35;
                            int32_t* dest_36 = &dest_35[1];
                            item_c1c_9 = context_50 + entity_142;
                            void item_904;
                            int32_t* context_52 = &item_904;
                            *entity_142 = temp_80 + entity_139 * 0x24 + 0xc;
                            void* entity_143 = &entity_142[1];
                            int32_t* item_bf4_2 = &item_904;
                            bool flag_23_1;

                            do
                            {
                                int32_t source_51 = context_52[4];
                                int32_t temp_83 = *item_bc8_2;
                                int32_t temp_85 = temp_83 >> 8 & 3;
                                float temp_88 = *context_52;
                                int32_t source_52 = source_51 & 0xff;
                                float temp_89 = context_52[1];
                                float temp_90 = context_52[2];
                                int32_t flagP36 = temp_83 >> 6 & 3;
                                int32_t item_c04_2;
                                int32_t* temp_95;

                                if (item_be0_3 < entity_34)
                                {
                                    item_c04_2 = item_be0_3;
                                    temp_95 = item_bf4_2;
                                }
                                else
                                {
                                    int32_t temp_93 = item_bf4_2[-1];
                                    item_c04_2 = temp_93;
                                    int32_t saved_target;
                                    temp_95 = &(&saved_target)[temp_93 * 9 + 0xcd];
                                }

                                float context_54 = *temp_95;
                                float context_55 = temp_95[1];
                                float temp_96 = temp_95[2];
                                float item_b70_1;
                                float item_b40_1;
                                long double fpu_val_1_18;
                                long double fpu_val_2_23;

                                if (!temp_85)
                                {
                                    fpu_val_2_23 = temp_89 * fpu_val_4_13 + fpu_val_6_44;
                                    item_b40_1 = temp_88 * fpu_val_4_13 + fpu_val_5_35;
                                    item_b70_1 = context_55 * fpu_val_4_13 + fpu_val_6_44 - fpu_val_2_23;
                                    fpu_val_1_18 = context_54 * fpu_val_4_13 + fpu_val_5_35;
                                }
                                else
                                {
                                    float item_bb8_1;
                                    float item_b54_1;
                                    long double fpu_val_2_20;

                                    if (!((temp_85 ^ temp_3) & 1))
                                    {
                                        item_b54_1 = temp_88;
                                        item_bb8_1 = context_54;
                                        fpu_val_2_20 = fpu_val_5_35;
                                    }
                                    else
                                    {
                                        item_b54_1 = temp_89;
                                        item_bb8_1 = context_55;
                                        fpu_val_2_20 = fpu_val_6_44;
                                    }

                                    float item_bd0_1 = fpu_val_2_20;
                                    fpu_val_2_23 = temp_90 * fpu_val_4_13 + fpu_val_7_34;
                                    item_b40_1 = item_b54_1 * fpu_val_4_13 + item_bd0_1;
                                    item_b70_1 = temp_96 * fpu_val_4_13 + fpu_val_7_34 - fpu_val_2_23;
                                    fpu_val_1_18 = item_bb8_1 * fpu_val_4_13 + item_bd0_1;
                                }

                                float item_b6c_1;
                                float item_b34_1;
                                long double fpu_val_0_17;
                                long double fpu_val_1_31;

                                if (!flagP36)
                                {
                                    fpu_val_1_31 = temp_88 * temp_78 + entity_134;
                                    item_b34_1 = temp_89 * temp_78 + temp_77;
                                    item_b6c_1 = context_54 * temp_78 + entity_134 - fpu_val_1_31;
                                    fpu_val_0_17 = context_55 * temp_78 + temp_77;
                                }
                                else
                                {
                                    float item_bb8_2;
                                    float temp_106;
                                    long double fpu_val_1_29;

                                    if (!((flagP36 ^ temp_3) & 1))
                                    {
                                        fpu_val_1_29 = temp_88;
                                        item_bb8_2 = context_54;
                                        temp_106 = entity_134;
                                    }
                                    else
                                    {
                                        fpu_val_1_29 = temp_89;
                                        item_bb8_2 = context_55;
                                        temp_106 = temp_77;
                                    }

                                    fpu_val_1_31 = fpu_val_1_29 * temp_78 + temp_106;
                                    item_b34_1 = temp_90 * temp_78 + fpu_val_3_25;
                                    item_b6c_1 = item_bb8_2 * temp_78 + temp_106 - fpu_val_1_31;
                                    fpu_val_0_17 = temp_96 * temp_78 + fpu_val_3_25;
                                }

                                int32_t context_56 = 0;

                                if (entity_136 == source_52)
                                    context_56 = 8;
                                else if (entity_136 == source_51 >> 0x10)
                                {
                                    int32_t source_54 = -((source_52 - 0xff));
                                    context_56 = ((source_54 - source_54) & 0xfffffff8) + 0x18;
                                }

                                int32_t temp_112 = ((item_c04_2 << 5) + context_56) | item_c04_2 << 0x10;
                                *dest_36 = temp_112;
                                dest_36[1] = item_b40_1;
                                dest_36[2] = fpu_val_2_23;
                                flagP38 = entity_34;
                                *entity_143 = temp_112 + 4;
                                *(entity_143 + 4) = fpu_val_1_31;
                                dest_36 = &dest_36[3];
                                *(entity_143 + 8) = item_b34_1;
                                entity_143 += 0xc;

                                if (item_be0_3 >= flagP38)
                                {
                                    *dest_36 = fpu_val_1_18 - item_b40_1;
                                    dest_36[1] = item_b70_1;
                                    *entity_143 = item_b6c_1;
                                    dest_36 = &dest_36[2];
                                    *(entity_143 + 4) = fpu_val_0_17 - item_b34_1;
                                    entity_143 += 8;
                                }

                                context_52 = &item_bf4_2[9];
                                item_bf4_2 = context_52;
                                item_bc8_2 = &item_bc8_2[1];
                                item_be0_3 += 1;
                                flag_23_1 = item_c24_11 != 1;
                                item_c24_11 -= 1;
                            } while (flag_23_1);
                            bool flag_24_1 = item_c0c_3 != 1;
                            item_c20_6 = &item_c20_6[1];
                            item_c0c_3 -= 1;

                            if (!flag_24_1)
                                break;

                            dest_35 = item_c1c_9;
                            context_50 = data_18 + 4;
                        }
                    }

                    if (!item_bd8_2)
                        *item_c1c_9 = 0;
                    else
                    {
                        *item_c1c_9 = item_afc;
                        float* data_69 = &item_c1c_9[1];
                        int32_t item_bd8_3 = context_5;
                        int32_t* source_69 = &item_908;
                        int32_t temp_121 = 0;
                        bool flag_20_1;

                        do
                        {
                            float entity_151 = source_69[7];
                            float entity_152 = source_69[8];
                            int32_t entity_153;

                            if (temp_121 < flagP38)
                                entity_153 = temp_121;
                            else
                                entity_153 = *source_69;

                            int32_t dest_40 = entity_153 * 9;
                            item_8ec;
                            float context_58 = *(&item_8ec + (dest_40 << 2));
                            data_69 = &data_69[3];
                            item_8e8;
                            long double fpu_val_7_37 = *(&item_8e8 + (dest_40 << 2)) - entity_152;
                            data_69[-3] = entity_153 << 5 | entity_153 << 0x10;
                            data_69[-2] = entity_151;
                            data_69[-1] = entity_152;

                            if (temp_121 >= flagP38)
                            {
                                *data_69 = context_58 - entity_151;
                                data_69[1] = fpu_val_7_37;
                                data_69 = &data_69[2];
                            }

                            source_69 = &source_69[9];
                            temp_121 += 1;
                            flag_20_1 = item_bd8_3 != 1;
                            item_bd8_3 -= 1;
                        } while (flag_20_1);
                    }
                }
                else
                {
                    *(data_1 + 0x18) = 0;
                    *(data_1 + 0x10) = 0xffffffff;
                    g_b16c9c -= 1;
                }

                flagP1 = item_b98;
            }
            else
            {
                int32_t temp_7 = g_b12c48;

                if (temp_7 <= g_b12c4c - 3)
                {
                    int32_t entity_12 = *(g_b12c44 + (temp_7 << 2)) * g_b12c50 + g_b12c40;
                    *(g_b12c54 + entity_12) = temp_7;
                    g_b12c48 += 1;
                    *(data_1 + 0x18) = entity_12;
                    *(data_1 + 0x14) = 1;
                    goto label_5101bf;
                }

                int32_t temp_9 = g_b16cc8;

                if (temp_9 <= g_b16ccc - 3)
                {
                    int32_t entity_8 = *(g_b16cc4 + (temp_9 << 2)) * g_b16cd0 + g_b16cc0;
                    *(g_b16cd4 + entity_8) = temp_9;
                    g_b16cc8 += 1;
                    *(data_1 + 0x18) = entity_8;
                    *(data_1 + 0x14) = 2;
                    goto label_5101bf;
                }

                *(data_1 + 0x10) = 0xffffffff;
            }

            result = result_1 + 1;
            flagP1 += 0x30;
            result_1 = result;
            item_b98 = flagP1;
        } while (result < result_2);
    }

    return result;
}
