// IGI native provenance: DrawHandiCamFilter - 0x004A4300 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004A4300-DrawHandiCamFilter.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DrawHandiCamFilter.h"
int32_t DrawHandiCamFilter(int32_t context , void* param_2)

{
    int32_t context_val;
    int32_t item_b0 = context_val;
    int32_t result_1 = context;
    int32_t source_val;
    int32_t item_b8 = source_val;
    int32_t dest_val;
    int32_t item_bc = dest_val;
    long double fpu7 = *(param_2 + 0x2c);
    long double f0 = g_bcadc0;
    fpu7 - f0;
    float item_a0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        item_a0 = g_bcadc0;
    else
        item_a0 = *(param_2 + 0x2c);

    int32_t* data_2 = g_5ca114;
    void item_40;
    void* item_c0 = &item_40;
    void* item_c4 = 3;
    (*(*data_2 + 0x30))(data_2, item_c4, item_c0);
    long double fpu_val_7_3 = g_bcabec * item_a0;
    void* data_3 = g_bcade8;
    int32_t item_c0_1 = 0;
    item_c4 = 0x2f;
    float item_18;
    long double fpu_val_7_10 =
        (1.0f - g_bcada0 * 1.0f / fpu_val_7_3) * item_18 * (g_bcad8c - g_bcadb4) + g_bcadb4;
    *(data_3 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    float item_94 = fpu_val_7_10;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* data_5 = g_5ca114;
    (*(*data_5 + 0x50))(data_5, item_c4, item_c0_1);
    int32_t* data_6 = g_5ca114;
    int32_t item_c0_2 = 0;
    item_c4 = 0x1c;
    (*(*data_6 + 0x50))(data_6, item_c4, item_c0_2);
    int32_t* data_7 = g_5ca114;
    int32_t item_c0_3 = 0;
    item_c4 = 0x1d;
    (*(*data_7 + 0x50))(data_7, item_c4, item_c0_3);
    int32_t* data_8 = g_5ca114;
    int32_t item_c0_4 = 1;
    item_c4 = 0x16;
    (*(*data_8 + 0x50))(data_8, item_c4, item_c0_4);
    int32_t* data_9 = g_5ca114;
    int32_t item_c0_5 = 0;
    item_c4 = 0x89;
    (*(*data_9 + 0x50))(data_9, item_c4, item_c0_5);
    int32_t* data_10 = g_5ca114;
    int32_t item_c0_6 = 1;
    item_c4 = 0x1a;
    (*(*data_10 + 0x50))(data_10, item_c4, item_c0_6);
    int32_t* data_11 = g_5ca114;
    int32_t item_c0_7 = 0;
    item_c4 = 0xf;
    (*(*data_11 + 0x50))(data_11, item_c4, item_c0_7);
    int32_t* data_12 = g_5ca114;
    int32_t item_c0_8 = 4;
    item_c4 = 0x17;
    (*(*data_12 + 0x50))(data_12, item_c4, item_c0_8);
    int32_t* data_13 = g_5ca114;
    int32_t item_c0_9 = 0;
    item_c4 = 7;
    (*(*data_13 + 0x50))(data_13, item_c4, item_c0_9);
    int32_t* data_14 = g_5ca114;
    int32_t item_c0_10 = 0;
    item_c4 = 0xe;
    (*(*data_14 + 0x50))(data_14, item_c4, item_c0_10);
    int32_t* data_15 = g_5ca114;
    int32_t item_c0_11 = 3;
    item_c4 = 4;
    int32_t item_c8_11 = 0;
    (*(*data_15 + 0x94))(data_15, 0, item_c4, item_c0_11);
    int32_t* data_16 = g_5ca114;
    int32_t item_c0_12 = 2;
    item_c4 = 5;
    int32_t item_c8_12 = 0;
    (*(*data_16 + 0x94))(data_16, 0, item_c4, item_c0_12);
    int32_t* data_17 = g_5ca114;
    int32_t item_c0_13 = 0;
    item_c4 = 6;
    int32_t item_c8_13 = 0;
    (*(*data_17 + 0x94))(data_17, 0, item_c4, item_c0_13);
    int32_t* data_18 = g_5ca114;
    int32_t item_c0_14 = 3;
    item_c4 = 1;
    int32_t item_c8_14 = 0;
    (*(*data_18 + 0x94))(data_18, 0, item_c4, item_c0_14);
    int32_t* data_19 = g_5ca114;
    int32_t item_c0_15 = 2;
    item_c4 = 2;
    int32_t item_c8_15 = 0;
    (*(*data_19 + 0x94))(data_19, 0, item_c4, item_c0_15);
    int32_t* data_20 = g_5ca114;
    int32_t item_c0_16 = 0;
    item_c4 = 3;
    int32_t item_c8_16 = 0;
    (*(*data_20 + 0x94))(data_20, 0, item_c4, item_c0_16);
    int32_t* data_21 = g_5ca114;
    int32_t item_c0_17 = 1;
    item_c4 = 1;
    int32_t item_c8_17 = 1;
    (*(*data_21 + 0x94))(data_21, 1, item_c4, item_c0_17);
    int32_t* data_22 = g_5ca114;
    int32_t item_c0_18 = 0;
    item_c4 = nullptr;
    (*(*data_22 + 0x8c))(data_22, item_c4, item_c0_18);
    int32_t* data_23 = g_5ca114;
    int32_t item_c0_19 = 1;
    item_c4 = 0x1b;
    (*(*data_23 + 0x50))(data_23, item_c4, item_c0_19);
    int32_t* data_24 = g_5ca114;
    int32_t item_c0_20 = 5;
    item_c4 = 0x13;
    (*(*data_24 + 0x50))(data_24, item_c4, item_c0_20);
    int32_t* data_25 = g_5ca114;
    int32_t entity_12 = *data_25;
    int32_t item_c0_21 = 6;
    item_c4 = 0x14;
    (*(entity_12 + 0x50))(data_25, item_c4, item_c0_21);
    int32_t item_c0_22 = 0;
    bool flag_1 = g_bcad08 + 0xc8 > g_bcad04;
    int32_t* data_27 = g_bcad00;
    int32_t entity_13 = *data_27;
    void item_ac;
    item_c4 = &item_ac;
    int32_t result;
    void** stack_ptr_1;
    int32_t flagP;

    if (flag_1)
    {
        int32_t item_c8_23 = 0x2020;
        result = (*(entity_13 + 0xc))(data_27, 0x2020);
        stack_ptr_1 = &item_c4;
        flagP = 0;
        g_bcad08 = 0xc8;

        if (!result)
        {
        label_4a458c:
            result = result_1;

            if (result)
            {
                int32_t context_2 = 0;
                long double fpu_val_7_12 = g_bcabbc + 4.0f;
                long double fpu_val_6_3 = g_bcabc4 + g_bcabbc;
                fpu_val_6_3 - fpu_val_7_12;

                if (!(*(&((fpu_val_6_3 < fpu_val_7_12 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_12) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_12 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_6_42;
                    long double fpu_val_7_28;

                    do
                    {
                        if (context_2 >= 0xc4)
                        {
                            int32_t* data_49 = g_bcad00;
                            *(stack_ptr_1 - 4) = data_49;
                            (*(*data_49 + 0x10))();
                            int32_t* data_50 = g_5ca114;
                            int32_t entity_33 = g_bcad00;
                            *(stack_ptr_1 - 4) = 0;
                            *(stack_ptr_1 - 8) = context_2;
                            int32_t temp_38 = *data_50;
                            *(stack_ptr_1 - 0xc) = flagP;
                            *(stack_ptr_1 - 0x10) = entity_33;
                            *(stack_ptr_1 - 0x14) = 2;
                            *(stack_ptr_1 - 0x18) = data_50;
                            (*(temp_38 + 0x7c))();
                            int32_t data_51 = g_bcad04;
                            int32_t temp_40 = g_bcad08 + 0xc8;
                            *(stack_ptr_1 - 4) = 0;
                            int32_t* data_52 = g_bcad00;
                            int32_t entity_34 = *data_52;
                            *(stack_ptr_1 - 8) = &stack_ptr_1[4];

                            if (temp_40 > data_51)
                            {
                                *(stack_ptr_1 - 0xc) = 0x2020;
                                *(stack_ptr_1 - 0x10) = data_52;
                                result = (*(entity_34 + 0xc))();
                                stack_ptr_1 -= 8;
                                flagP = 0;
                                g_bcad08 = 0xc8;

                                if (result)
                                    goto label_4a4c7f;
                            }
                            else
                            {
                                *(stack_ptr_1 - 0xc) = 0x1020;
                                *(stack_ptr_1 - 0x10) = data_52;
                                result = (*(entity_34 + 0xc))();
                                stack_ptr_1 -= 8;
                                int32_t entity_35 = g_bcad08;
                                flagP = entity_35;
                                int32_t temp_44 = stack_ptr_1[4] + entity_35 * 0x1c;
                                g_bcad08 = entity_35 + 0xc8;
                                stack_ptr_1[4] = temp_44;

                                if (result)
                                    goto label_4a4c7f;
                            }

                            result = stack_ptr_1[4];

                            if (!result)
                                goto label_4a4c7f;

                            context_2 = 0;
                            stack_ptr_1[7] = stack_ptr_1[7] - 4.0f;
                        }
                        else
                        {
                            *(stack_ptr_1 + 0x14) = stack_ptr_1[7];
                            float* data_30 = stack_ptr_1[4];
                            stack_ptr_1[5] = stack_ptr_1[5];
                            long double fpu_val_7_14 = stack_ptr_1[5];
                            *(stack_ptr_1 + 0x14) = g_bcabb8;
                            stack_ptr_1[5] = stack_ptr_1[5];
                            *data_30 = stack_ptr_1[5];
                            *(stack_ptr_1[4] + 4) = fpu_val_7_14;
                            *(stack_ptr_1[4] + 8) = stack_ptr_1[0xa];
                            *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0xb];
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x20) * 255.0f;
                            int32_t entity_18 = stack_ptr_1[5];
                            *(&entity_18 + 1) |= 0x4c;
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x24) * 255.0f;
                            void* temp_19 = stack_ptr_1[4];
                            int32_t entity_21 = (entity_18 << 8 | stack_ptr_1[5]) << 8;
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x28) * 255.0f;
                            *(temp_19 + 0x10) = entity_21 | stack_ptr_1[5];
                            float* data_34 = stack_ptr_1[4] + 0x1c;
                            stack_ptr_1[4] = data_34;
                            *(stack_ptr_1 + 0x14) = g_bcabc0 + g_bcabb8;
                            stack_ptr_1[5] = stack_ptr_1[5];
                            *data_34 = stack_ptr_1[5];
                            *(stack_ptr_1[4] + 4) = fpu_val_7_14;
                            *(stack_ptr_1[4] + 8) = stack_ptr_1[0xa];
                            *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0xb];
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x20) * 255.0f;
                            int32_t temp_21 = stack_ptr_1[5];
                            *(&temp_21 + 1) |= 0x4c;
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x24) * 255.0f;
                            int32_t temp_24 = (temp_21 << 8 | stack_ptr_1[5]) << 8;
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x28) * 255.0f;
                            long double fpu_val_7_15 = fpu_val_7_14 + 1.0f;
                            *(stack_ptr_1[4] + 0x10) = temp_24 | stack_ptr_1[5];
                            void* data_38 = stack_ptr_1[4];
                            *(stack_ptr_1 + 0x14) = g_bcabb8;
                            stack_ptr_1[5] = stack_ptr_1[5];
                            stack_ptr_1[4] = data_38 + 0x1c;
                            *(data_38 + 0x1c) = stack_ptr_1[5];
                            *(stack_ptr_1[4] + 4) = fpu_val_7_15;
                            *(stack_ptr_1[4] + 8) = stack_ptr_1[0xa];
                            *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0xb];
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x20) * 255.0f;
                            int32_t temp_27 = stack_ptr_1[5];
                            *(&temp_27 + 1) |= 0x4c;
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x24) * 255.0f;
                            void* data_42 = stack_ptr_1[4];
                            int32_t temp_30 = (temp_27 << 8 | stack_ptr_1[5]) << 8;
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x28) * 255.0f;
                            *(data_42 + 0x10) = temp_30 | stack_ptr_1[5];
                            float* data_44 = stack_ptr_1[4] + 0x1c;
                            stack_ptr_1[4] = data_44;
                            *(stack_ptr_1 + 0x14) = g_bcabc0 + g_bcabb8;
                            stack_ptr_1[5] = stack_ptr_1[5];
                            *data_44 = stack_ptr_1[5];
                            *(stack_ptr_1[4] + 4) = fpu_val_7_15;
                            *(stack_ptr_1[4] + 8) = stack_ptr_1[0xa];
                            *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0xb];
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x20) * 255.0f;
                            int32_t temp_33 = stack_ptr_1[5];
                            *(&temp_33 + 1) |= 0x4c;
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x24) * 255.0f;
                            int32_t temp_36 = (temp_33 << 8 | stack_ptr_1[5]) << 8;
                            *(stack_ptr_1 + 0x14) = *(param_2 + 0x28) * 255.0f;
                            context_2 += 4;
                            *(stack_ptr_1[4] + 0x10) = temp_36 | stack_ptr_1[5];
                            stack_ptr_1[4] += 0x1c;
                        }

❓️❓️                        long double fpu_val_7_27 = stack_ptr_1[7] + 4.0f;
                        stack_ptr_1[7] = fpu_val_7_27;
                        fpu_val_7_28 = fpu_val_7_27 + 4.0f;
                        fpu_val_6_42 = g_bcabc4 + g_bcabbc;
                        fpu_val_6_42 - fpu_val_7_28;
                    } while (!(*(&((fpu_val_6_42 < fpu_val_7_28 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_42, fpu_val_7_28) ? 1 : 0) << 0xa
                        | (fpu_val_6_42 == fpu_val_7_28 ? 1 : 0) << 0xe) + 1) & 1));
                }

                int32_t* data_54 = g_bcad00;
                *(stack_ptr_1 - 4) = data_54;
                (*(*data_54 + 0x10))();
                void* stack_ptr_18 = stack_ptr_1;

                if (context_2 > 0)
                {
                    int32_t* data_55 = g_5ca114;
                    int32_t entity_38 = g_bcad00;
                    *(stack_ptr_18 - 4) = 0;
                    *(stack_ptr_18 - 8) = context_2;
                    int32_t temp_45 = *data_55;
                    *(stack_ptr_18 - 0xc) = flagP;
                    *(stack_ptr_18 - 0x10) = entity_38;
                    *(stack_ptr_18 - 0x14) = 2;
                    *(stack_ptr_18 - 0x18) = data_55;
                    (*(temp_45 + 0x7c))();
                }

                int32_t data_56 = g_bcad04;
❓️                int32_t temp_47 = g_bcad08 + 0xc8;
                *(stack_ptr_18 - 4) = 0;
                int32_t* data_57 = g_bcad00;
                int32_t entity_39 = *data_57;
                *(stack_ptr_18 - 8) = stack_ptr_18 + 0x10;
                int32_t source_2;

                if (temp_47 > data_56)
                {
                    *(stack_ptr_18 - 0xc) = 0x2020;
                    *(stack_ptr_18 - 0x10) = data_57;
                    result = (*(entity_39 + 0xc))();
                    stack_ptr_1 = stack_ptr_18 - 8;
                    source_2 = 0;
                    g_bcad08 = 0xc8;

                    if (!result)
                    {
                    label_4a49af:
                        result = stack_ptr_1[4];

                        if (result)
                        {
                            strncpy(&stack_ptr_1[0x14], "fff?", 4);
                            stack_ptr_1[0x15] = 0x3dcccccd;
                            strncpy(&stack_ptr_1[0x16], "fff?", 4);
                            memcpy(&stack_ptr_1[0xf],
                                "\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3f\xcd\xcc\x4c\x3f\xcd\x"
                            "cc\xcc\x3d",
                                0x14);
                            memcpy(&stack_ptr_1[0x17],
                                "\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x"
                            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf",
                                0x20);

                            for (int32_t i = 0; i < 0x10; i += 4)
                            {
                                long double fpu_val_7_30 = *(stack_ptr_1 + i + 0x5c) * 50.0f;
                                long double fpu_val_6_44 = *(stack_ptr_1 + i + 0x6c) * 50.0f;
                                int32_t j = 0;
                                stack_ptr_1[7] = 0;

                                do
                                {
                                    *(stack_ptr_1 + 0x14) =
                                        g_bcabc0 * *(stack_ptr_1 + i + 0x4c) + g_bcabb8;
                                    stack_ptr_1[5] = stack_ptr_1[5];
                                    *stack_ptr_1[4] = stack_ptr_1[5];
                                    long double fpu_val_5_5 = stack_ptr_1[7];
                                    long double fpu_val_4_2 = fpu_val_5_5 * *(stack_ptr_1 + i + 0x6c);
                                    *(stack_ptr_1 + 0x14) =
                                        g_bcabc4 * *(stack_ptr_1 + i + 0x3c) + g_bcabbc;
                                    stack_ptr_1[5] = stack_ptr_1[5];
                                    *(stack_ptr_1[4] + 4) = stack_ptr_1[5] + fpu_val_4_2;
                                    *(stack_ptr_1[4] + 8) = stack_ptr_1[0xa];
                                    *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0xb];
                                    *(stack_ptr_1[4] + 0x10) = 0xffffffff;
                                    long double fpu_val_3_9 = g_bcabc0 * *(stack_ptr_1 + i + 0x4c);
                                    float* entity_50 = stack_ptr_1[4] + 0x1c;
                                    stack_ptr_1[4] = entity_50;
                                    *(stack_ptr_1 + 0x14) = fpu_val_3_9 + g_bcabb8;
                                    stack_ptr_1[5] = stack_ptr_1[5];
                                    *entity_50 = stack_ptr_1[5] + fpu_val_7_30;
                                    *(stack_ptr_1 + 0x14) =
                                        g_bcabc4 * *(stack_ptr_1 + i + 0x3c) + g_bcabbc;
                                    stack_ptr_1[5] = stack_ptr_1[5];
                                    *(stack_ptr_1[4] + 4) = stack_ptr_1[5] + fpu_val_4_2;
                                    *(stack_ptr_1[4] + 8) = stack_ptr_1[0xa];
                                    *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0xb];
                                    long double fpu_val_5_6 = fpu_val_5_5 * *(stack_ptr_1 + i + 0x5c);
                                    *(stack_ptr_1[4] + 0x10) = 0xffffffff;
                                    long double fpu_val_4_7 = g_bcabc0 * *(stack_ptr_1 + i + 0x4c);
                                    float* entity_57 = stack_ptr_1[4] + 0x1c;
                                    stack_ptr_1[4] = entity_57;
                                    *(stack_ptr_1 + 0x14) = fpu_val_4_7 + g_bcabb8;
                                    stack_ptr_1[5] = stack_ptr_1[5];
                                    *entity_57 = stack_ptr_1[5] + fpu_val_5_6;
                                    *(stack_ptr_1 + 0x14) =
                                        g_bcabc4 * *(stack_ptr_1 + i + 0x3c) + g_bcabbc;
                                    stack_ptr_1[5] = stack_ptr_1[5];
                                    *(stack_ptr_1[4] + 4) = stack_ptr_1[5];
                                    *(stack_ptr_1[4] + 8) = stack_ptr_1[0xa];
                                    *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0xb];
                                    *(stack_ptr_1[4] + 0x10) = 0xffffffff;
                                    long double fpu_val_4_18 = g_bcabc0 * *(stack_ptr_1 + i + 0x4c);
                                    float* entity_64 = stack_ptr_1[4] + 0x1c;
                                    stack_ptr_1[4] = entity_64;
                                    *(stack_ptr_1 + 0x14) = fpu_val_4_18 + g_bcabb8;
                                    stack_ptr_1[5] = stack_ptr_1[5];
                                    *entity_64 = stack_ptr_1[5] + fpu_val_5_6;
                                    *(stack_ptr_1 + 0x14) =
                                        g_bcabc4 * *(stack_ptr_1 + i + 0x3c) + g_bcabbc;
                                    stack_ptr_1[5] = stack_ptr_1[5];
                                    *(stack_ptr_1[4] + 4) = stack_ptr_1[5] + fpu_val_6_44;
                                    *(stack_ptr_1[4] + 8) = stack_ptr_1[0xa];
                                    *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0xb];
                                    *(stack_ptr_1[4] + 0x10) = 0xffffffff;
                                    j += 1;
                                    stack_ptr_1[4] += 0x1c;
                                    stack_ptr_1[7] = j;
                                } while (j < 2);
                            }

                            int32_t* data_58 = g_bcad00;
                            *(stack_ptr_1 - 4) = data_58;
                            (*(*data_58 + 0x10))();
                            int32_t* data_59 = g_5ca114;
                            int32_t temp_53 = g_bcad00;
                            *(stack_ptr_1 - 4) = 0;
                            *(stack_ptr_1 - 8) = 0x20;
                            int32_t entity_70 = *data_59;
                            *(stack_ptr_1 - 0xc) = source_2;
                            *(stack_ptr_1 - 0x10) = temp_53;
                            *(stack_ptr_1 - 0x14) = 2;
                            *(stack_ptr_1 - 0x18) = data_59;
                            result = (*(entity_70 + 0x7c))();
                        }
                    }
                }
                else
                {
                    *(stack_ptr_18 - 0xc) = 0x1020;
                    *(stack_ptr_18 - 0x10) = data_57;
                    result = (*(entity_39 + 0xc))();
                    stack_ptr_1 = stack_ptr_18 - 8;
                    int32_t entity_40 = g_bcad08;
                    source_2 = entity_40;
                    int32_t temp_51 = stack_ptr_1[4] + entity_40 * 0x1c;
                    g_bcad08 = entity_40 + 0xc8;
                    stack_ptr_1[4] = temp_51;

                    if (!result)
                        goto label_4a49af;
                }
            }
        }
    }
    else
    {
        int32_t item_c8_22 = 0x1020;
        result = (*(entity_13 + 0xc))(data_27, 0x1020);
        stack_ptr_1 = &item_c4;
        int32_t entity_14 = g_bcad08;
        flagP = entity_14;
        g_bcad08 = entity_14 + 0xc8;
        result_1 += entity_14 * 0x1c;

        if (!result)
            goto label_4a458c;
    }
❓️label_4a4c7f:
    *stack_ptr_1;
    stack_ptr_1[1];
    stack_ptr_1[2];
    stack_ptr_1[3];
    return result;
}
