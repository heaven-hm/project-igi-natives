// IGI native provenance: PolyListDynCubeObj_Process - 0x0049A9B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049A9B0-PolyListDynCubeObj_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PolyListDynCubeObj_Process.h"
int32_t PolyListDynCubeObj_Process(int32_t context , void* param_2)

{
    int32_t context_val;
    int32_t item_e8 = context_val;
    int32_t source_val;
    int32_t item_f0 = source_val;
    void* context_1 = *(param_2 + 0xc);
    int32_t dest_val;
    int32_t item_f4 = dest_val;
    void* item_ac = context_1;
    int32_t item_d8 = 0x3f800000;
    int32_t item_d4 = 0x3f800000;
    int32_t item_d0 = 0x3f800000;
    int32_t item_cc = 0;
    int32_t item_c8 = 0;
    int32_t item_c4 = 0;

    if (*(context_1 + 0xa4))
    {
        long double fpu_val_7_1 = 0.0f;
        long double fpu_val_6_1 = 0.0f;
        int32_t i_3 = g_b041e8;
        float item_d4_1 = fpu_val_6_1;
        long double fpu_val_5_1 = 0.0f;
        float item_d0_1 = fpu_val_5_1;

        if (i_3 > 0)
        {
            int32_t* entity_1 = g_b041e4;
            int32_t i_2 = i_3;
            int32_t i;

            do
            {
                void* data_4 = *entity_1 * g_b041f0 + g_b041e0;

                if (*(data_4 + 0x25))
                {
                    fpu_val_7_1 = fpu_val_7_1 + *(data_4 + 0xc);
                    fpu_val_6_1 = fpu_val_6_1 + *(data_4 + 0x10);
                    fpu_val_5_1 = fpu_val_5_1 + *(data_4 + 0x14);
                }

                entity_1 = &entity_1[1];
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
            item_d0_1 = fpu_val_5_1;
            item_d4_1 = fpu_val_6_1;
        }

        float entity_2 = g_b818ac;
        float data_5 = g_b818b4;
        float temp_2 = g_b818b0;
        long double fpu_val_7_9 = entity_2 + fpu_val_7_1 * 0.5f;
        long double f1_1 = 1.0f;
        fpu_val_7_9 - f1_1;

        if (!(*(&((fpu_val_7_9 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float item_d8_2 = 1.0f - entity_2;

        long double fpu_val_7_13 = temp_2 + item_d4_1 * 0.5f;
        long double f2_1 = 1.0f;
        fpu_val_7_13 - f2_1;

        if (!(*(&((fpu_val_7_13 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_13 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float item_d4_3 = 1.0f - temp_2;

        long double fpu_val_7_17 = data_5 + item_d0_1 * 0.5f;
        long double f4_1 = 1.0f;
        fpu_val_7_17 - f4_1;

        if (!(*(&((fpu_val_7_17 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_17, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_17 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float item_d0_3 = 1.0f - data_5;
    }

    void* data_7 = g_bcade8;
    int32_t entity_3 = g_72057c;

    if (*(data_7 + 4) != entity_3)
    {
        *(data_7 + 4) = entity_3;
        (*(g_bcade8 + (g_72057c << 2) + 0x14))(0);
    }

    void* data_8 = g_bcad7c;
    int32_t entity_5 = g_7205a4;

    if (*(data_8 + 4) != entity_5)
    {
        *(data_8 + 4) = entity_5;
        (*(g_bcad7c + (g_7205a4 << 2) + 0x14))(0);
    }

    void* data_10 = g_bcadac;
    int32_t entity_7 = g_7205a8;

    if (*(data_10 + 4) != entity_7)
    {
        *(data_10 + 4) = entity_7;
        (*(g_bcadac + (g_7205a8 << 2) + 0x14))(0);
    }

    int32_t* data_12 = *(context_1 + 0x6c);
    double item_68;
    memcpy(&item_68, context_1 + 0x20, 0x18);
    item_68 = **data_12 + item_68;
    double item_60;
    double item_60_1 = *(*data_12 + 4) + item_60;
    int32_t* data_14 = *(context_1 + 0xb4);
    float item_50 = 4096.0f;
    double item_58;
    double item_58_1 = *(*data_12 + 8) + item_58;
    double* item_fc;

    if (data_14 && *data_14)
    {
        double* source_3 = *data_14;
        uint32_t data_16 = QObj_OnEvent();
        int32_t data_17 = 0;
        data_17 = *(source_3 + 0x1c);
        int32_t data_18 = *(((data_16 * 0x180 + data_17) << 2) + &g_a96ae0);

        if (data_18)
        {
            double* item_f8_4 = &item_68;
            item_fc = source_3;
            data_18(item_fc, item_f8_4);
        }
    }

    item_fc = &item_68;
    Display_CreateSurface_18(item_fc, item_50);
    int32_t* data_19 = g_5ca114;
    int32_t entity_10 = *data_19;
    int32_t item_f8_6 = 0;
    item_fc = 0x89;
    (*(entity_10 + 0x50))(data_19, item_fc, item_f8_6);
    float item_a4 = *(context_1 + 0x20) - g_bcab08;
    float item_a0 = *(context_1 + 0x28) - g_bcab10;
    long double fpu_val_7_31 = *(context_1 + 0x30) - g_bcab18;
    float* item_f8_7 = &item_a4;
    item_a4 = g_bcabec * item_a4;
    long double fpu_val_6_6 = item_a0 * g_bcabec;
    float item_98;
    item_fc = &item_98;
    float item_a0_1 = fpu_val_6_6;
    float item_9c = fpu_val_7_31 * g_bcabec;
    memcpy(&item_98, context_1 + 0x70, 0x28);
    item_98 = item_98 * g_bcabec;
    float item_94;
    float item_94_1 = item_94 * g_bcabec;
    float item_90;
    float item_90_1 = item_90 * g_bcabec;
    float item_8c;
    float item_8c_1 = item_8c * g_bcabec;
    float item_88;
    float item_88_1 = item_88 * g_bcabec;
    float item_84;
    float item_84_1 = item_84 * g_bcabec;
    float item_80 = item_80 * g_bcabec;
    float item_7c;
    float item_7c_1 = item_7c * g_bcabec;
    float item_78;
    float item_78_1 = item_78 * g_bcabec;
    void item_40;
    Display_SetGammaRamp_7(&item_40, item_fc, item_f8_7);
    int32_t* data_20 = g_5ca114;
    int32_t temp_10 = *data_20;
    void* item_f8_8 = &item_40;
    item_fc = 1;
    (*(temp_10 + 0x2c))(data_20, item_fc, item_f8_8);
    char data_21 = *(context_1 + 0xa0);
    int32_t item_f8_11;
    int32_t* data_24;
    int32_t temp_12;

    if (!(data_21 & 8))
    {
        int32_t* data_25 = g_5ca114;

        if (!(data_21 & 0x10))
        {
            int32_t temp_14 = *data_25;
            int32_t item_f8_15 = 1;
            item_fc = 0x1b;
            (*(temp_14 + 0x50))(data_25, item_fc, item_f8_15);
            int32_t* data_28 = g_5ca114;
            int32_t item_f8_16 = 5;
            item_fc = 0x13;
            (*(*data_28 + 0x50))(data_28, item_fc, item_f8_16);
            data_24 = g_5ca114;
            item_f8_11 = 6;
            temp_12 = *data_24;
            item_fc = 0x14;
            (*(temp_12 + 0x50))(data_24, item_fc, item_f8_11);
        }
        else
        {
            int32_t entity_12 = *data_25;
            int32_t item_f8_12 = 1;
            item_fc = 0x1b;
            (*(entity_12 + 0x50))(data_25, item_fc, item_f8_12);
            int32_t* data_26 = g_5ca114;
            int32_t item_f8_13 = 1;
            item_fc = 0x13;
            (*(*data_26 + 0x50))(data_26, item_fc, item_f8_13);
            int32_t* data_27 = g_5ca114;
            int32_t item_f8_14 = 4;
            item_fc = 0x14;
            (*(*data_27 + 0x50))(data_27, item_fc, item_f8_14);
        }
    }
    else
    {
        int32_t* data_22 = g_5ca114;
        int32_t item_f8_9 = 1;
        item_fc = 0x1b;
        (*(*data_22 + 0x50))(data_22, item_fc, item_f8_9);
        int32_t* data_23 = g_5ca114;
        int32_t item_f8_10 = 2;
        item_fc = 0x13;
        (*(*data_23 + 0x50))(data_23, item_fc, item_f8_10);
        data_24 = g_5ca114;
        item_f8_11 = 2;
        temp_12 = *data_24;
        item_fc = 0x14;
        (*(temp_12 + 0x50))(data_24, item_fc, item_f8_11);
    }
    int32_t item_44 = *(context_1 + 0x94) + g_bcab04 + 1;
    Sys_ResolveSymbol_13(&g_720570);
    float item_70 = g_bcadc0 * 1.00999999f;
    int32_t data_31 = Display_CreateSurface_15();
    item_fc = &item_70;
    (*((data_31 << 2) + &g_a94e84))(item_fc);
    bool flag_6 = g_bcad88 + 0xc0 > g_bcad84;
    int32_t* data_33 = g_bcad80;
    int32_t item_f8_18 = 0;
    int32_t entity_16 = *data_33;
    int32_t item_e4;
    item_fc = &item_e4;
    int32_t result;
    double** stack_ptr_1;
    int32_t temp_19;

    if (flag_6)
    {
        int32_t item_100_12 = 0x2020;
        result = (*(entity_16 + 0xc))(data_33, 0x2020);
        stack_ptr_1 = &item_fc;
        item_e4 = 0;
        g_bcad88 = 0xc0;

        if (!result)
        {
            temp_19 = context;
        label_49aed6:
            int32_t flagP1 = 0;

            if (temp_19)
            {
                int32_t dest_1 = 0;
                bool flag_7_1 = *(context_1 + 0x9c) <= 0;
                int32_t item_e8_1 = temp_19;
                int32_t item_c0 = 0;

                if (!flag_7_1)
                {
                    int32_t item_b0_1 = 0;
                    bool flag_15_1;

                    do
                    {
                        int32_t entity_19 = *(context_1 + 0x6c);
                        void* data_35 = stack_ptr_1[5];
                        stack_ptr_1[0x21] = entity_19;
                        void* data_36 = data_35 + 0x10;
                        void* source_6 = entity_19 + flagP1 + 0x18;
                        void* entity_20 = entity_19 + flagP1 + 0xc;
                        stack_ptr_1[0x11] = 3;
                        int32_t i_1;

                        do
                        {
                            int32_t* context_2 = *(entity_20 - 0xc);
                            int32_t* temp_20 = data_36 - 0x10;
                            long double fpu_val_7_53 = stack_ptr_1[7];
                            source_6 += 8;
                            *temp_20 = *context_2;
                            entity_20 += 4;
                            data_36 += 0x18;
                            temp_20[1] = context_2[1];
                            temp_20[2] = context_2[2];
                            float* temp_21 = *(entity_20 - 4);
                            *(stack_ptr_1 + 0x34) = (fpu_val_7_53 * *temp_21 + stack_ptr_1[0xa]) * 255.0f;
                            int32_t context_4 = stack_ptr_1[0xd];
                            *(stack_ptr_1 + 0x34) = *(entity_20 + 0x20) * 255.0f;
                            int32_t context_6 = (context_4 | stack_ptr_1[0xd] << 8) << 8;
                            *(stack_ptr_1 + 0x34) = (stack_ptr_1[8] * temp_21[1] + stack_ptr_1[0xb]) * 255.0f;
                            int32_t context_8 = (context_6 | stack_ptr_1[0xd]) << 8;
                            *(stack_ptr_1 + 0x34) = (stack_ptr_1[9] * temp_21[2] + stack_ptr_1[0xc]) * 255.0f;
                            *(data_36 - 0x1c) = context_8 | stack_ptr_1[0xd];
                            *(data_36 - 0x18) = *(source_6 - 8);
                            *(data_36 - 0x14) = *(source_6 - 4);
                            i_1 = stack_ptr_1[0x11];
                            stack_ptr_1[0x11] = i_1 - 1;
                        } while (i_1 != 1);
                        int32_t flagP7 = stack_ptr_1[0x13];
                        int32_t data_37 = stack_ptr_1[0x21];
                        context_1 = stack_ptr_1[0x12];
                        dest_1 += 1;
                        void* entity_21 = *(data_37 + flagP7 + 0x48);
                        int32_t source_7;
                        int32_t temp_36;

                        if (!entity_21)
                        {
                            source_7 = stack_ptr_1[0xf];

                            if (source_7 >= *(context_1 + 0x9c) - 1 || *(data_37 + flagP7 + 0x98)
                                || dest_1 >= 0x3f)
                            {
                                int32_t* data_46 = g_5ca114;
                                *(stack_ptr_1 - 4) = 0;
                                *(stack_ptr_1 - 8) = 0;
                                *(stack_ptr_1 - 0xc) = data_46;
                                (*(*data_46 + 0x8c))();
                                int32_t* data_47 = g_5ca114;
                                *(stack_ptr_1 - 4) = 3;
                                *(stack_ptr_1 - 8) = 4;
                                *(stack_ptr_1 - 0xc) = 0;
                                int32_t entity_32 = *data_47;
                                *(stack_ptr_1 - 0x10) = data_47;
                                (*(entity_32 + 0x94))();
                                int32_t* data_48 = g_5ca114;
                                *(stack_ptr_1 - 4) = 3;
                                *(stack_ptr_1 - 8) = 1;
                                *(stack_ptr_1 - 0xc) = 0;
                                int32_t temp_38 = *data_48;
                                *(stack_ptr_1 - 0x10) = data_48;
                                (*(temp_38 + 0x94))();
                                int32_t* data_49 = g_bcad80;
                                *(stack_ptr_1 - 4) = data_49;
                                (*(*data_49 + 0x10))();
                                int32_t* data_50 = g_5ca114;
                                *(stack_ptr_1 - 4) = 0;
                                *(stack_ptr_1 - 8) = dest_1 * 3;
                                int32_t temp_39 = *data_50;
                                *(stack_ptr_1 - 0xc) = stack_ptr_1[6];
                                *(stack_ptr_1 - 0x10) = g_bcad80;
                                *(stack_ptr_1 - 0x14) = 4;
                                *(stack_ptr_1 - 0x18) = data_50;
                                (*(temp_39 + 0x7c))();
                                int32_t data_51 = g_bcad84;
                                int32_t temp_41 = g_bcad88 + 0xc0;
                                *(stack_ptr_1 - 4) = 0;
                                int32_t* data_52 = g_bcad80;
                                int32_t entity_37 = *data_52;
                                *(stack_ptr_1 - 8) = &stack_ptr_1[4];

                                if (temp_41 > data_51)
                                {
                                    *(stack_ptr_1 - 0xc) = 0x2020;
                                    *(stack_ptr_1 - 0x10) = data_52;
                                    result = (*(entity_37 + 0xc))();
                                    stack_ptr_1 -= 8;
                                    stack_ptr_1[6] = 0;
                                    g_bcad88 = 0xc0;

                                    if (result)
                                        goto label_49b24e;

                                    temp_36 = stack_ptr_1[4];
                                }
                                else
                                {
                                    *(stack_ptr_1 - 0xc) = 0x1020;
                                    *(stack_ptr_1 - 0x10) = data_52;
                                    result = (*(entity_37 + 0xc))();
                                    stack_ptr_1 -= 8;
                                    int32_t entity_38 = g_bcad88;
                                    int32_t dest_3 = stack_ptr_1[4];
                                    stack_ptr_1[6] = entity_38;
                                    temp_36 = dest_3 + entity_38 * 0x18;
                                    g_bcad88 = entity_38 + 0xc0;
                                    stack_ptr_1[4] = temp_36;

                                    if (result)
                                        goto label_49b24e;
                                }

                                if (!temp_36)
                                    goto label_49b24e;

                                stack_ptr_1[5] = temp_36;
                                dest_1 = 0;
                            }
                            else
                                stack_ptr_1[5] = &stack_ptr_1[5][9];
                        }
                        else
                        {
                            source_7 = stack_ptr_1[0xf];

                            if (source_7 >= *(context_1 + 0x9c) - 1 || *(data_37 + flagP7 + 0x98) != entity_21
                                || dest_1 >= 0x3f)
                            {
                                int32_t* data_38 = g_5ca114;
                                *(stack_ptr_1 - 4) = *(entity_21 + 0x20);
                                *(stack_ptr_1 - 8) = 0;
                                int32_t temp_28 = *data_38;
                                *(stack_ptr_1 - 0xc) = data_38;
                                (*(temp_28 + 0x8c))();
                                int32_t* data_39 = g_5ca114;
                                *(stack_ptr_1 - 4) = 2;
                                *(stack_ptr_1 - 8) = 4;
                                *(stack_ptr_1 - 0xc) = 0;
                                int32_t temp_29 = *data_39;
                                *(stack_ptr_1 - 0x10) = data_39;
                                (*(temp_29 + 0x94))();
                                int32_t* data_40 = g_5ca114;
                                *(stack_ptr_1 - 4) = 4;
                                *(stack_ptr_1 - 8) = 1;
                                *(stack_ptr_1 - 0xc) = 0;
                                int32_t entity_23 = *data_40;
                                *(stack_ptr_1 - 0x10) = data_40;
                                (*(entity_23 + 0x94))();
                                int32_t* data_41 = g_bcad80;
                                *(stack_ptr_1 - 4) = data_41;
                                (*(*data_41 + 0x10))();
                                int32_t* data_42 = g_5ca114;
                                *(stack_ptr_1 - 4) = 0;
                                *(stack_ptr_1 - 8) = dest_1 * 3;
                                int32_t entity_24 = *data_42;
                                *(stack_ptr_1 - 0xc) = stack_ptr_1[6];
                                *(stack_ptr_1 - 0x10) = g_bcad80;
                                *(stack_ptr_1 - 0x14) = 4;
                                *(stack_ptr_1 - 0x18) = data_42;
                                (*(entity_24 + 0x7c))();
                                bool flag_10_1 = g_bcad88 + 0xc0 > g_bcad84;
                                int32_t* data_45 = g_bcad80;
                                *(stack_ptr_1 - 4) = 0;
                                *(stack_ptr_1 - 8) = &stack_ptr_1[4];
                                int32_t entity_26 = *data_45;

                                if (flag_10_1)
                                {
                                    *(stack_ptr_1 - 0xc) = 0x2020;
                                    *(stack_ptr_1 - 0x10) = data_45;
                                    result = (*(entity_26 + 0xc))();
                                    stack_ptr_1 -= 8;
                                    stack_ptr_1[6] = 0;
                                    g_bcad88 = 0xc0;

                                    if (result)
                                        goto label_49b24e;

                                    temp_36 = stack_ptr_1[4];
                                }
                                else
                                {
                                    *(stack_ptr_1 - 0xc) = 0x1020;
                                    *(stack_ptr_1 - 0x10) = data_45;
                                    result = (*(entity_26 + 0xc))();
                                    stack_ptr_1 -= 8;
                                    int32_t entity_27 = g_bcad88;
                                    int32_t dest_2 = stack_ptr_1[4];
                                    stack_ptr_1[6] = entity_27;
                                    temp_36 = dest_2 + entity_27 * 0x18;
                                    g_bcad88 = entity_27 + 0xc0;
                                    stack_ptr_1[4] = temp_36;

                                    if (result)
                                        goto label_49b24e;
                                }

                                if (!temp_36)
                                    goto label_49b24e;

                                stack_ptr_1[5] = temp_36;
                                dest_1 = 0;
                            }
                            else
                                stack_ptr_1[5] = &stack_ptr_1[5][9];
                        }
                        flagP1 = flagP7 + 0x50;
❓️❓️                        flag_15_1 = source_7 + 1 < *(context_1 + 0x9c);
                        stack_ptr_1[0xf] = source_7 + 1;
                        stack_ptr_1[0x13] = flagP1;
                    } while (flag_15_1);
                }

                int32_t* data_54 = g_bcad80;
                *(stack_ptr_1 - 4) = data_54;
                (*(*data_54 + 0x10))();
                stack_ptr_1[0xd] = stack_ptr_1[0x10];
                int32_t data_55 = Display_CreateSurface_15();
                *(stack_ptr_1 - 4) = &stack_ptr_1[0xd];
                result = (*((data_55 << 2) + &g_a94e84))();
            }
        }
    }
    else
    {
        int32_t item_100_11 = 0x1020;
        result = (*(entity_16 + 0xc))(data_33, 0x1020);
        stack_ptr_1 = &item_fc;
        int32_t entity_17 = g_bcad88;
        item_e4 = entity_17;
        temp_19 = context + entity_17 * 0x18;
        g_bcad88 = entity_17 + 0xc0;
        int32_t item_ec_1 = temp_19;

        if (!result)
            goto label_49aed6;
    }
❓️❓️label_49b24e:
    *stack_ptr_1;
    stack_ptr_1[1];
    stack_ptr_1[2];
    stack_ptr_1[3];
    return result;
}
