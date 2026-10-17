// Original IGI.EXE function: DrawLineFilter (VA 0x004A2CD0; static CFG gate PASS, CFG score 1.000).
#include "DrawLineFilter.h"
int32_t DrawLineFilter(int32_t context , void* param_2)

{
    int32_t context_val;
    int32_t item_8c = context_val;
    int32_t result_1 = context;
    int32_t source_val;
    int32_t item_94 = source_val;
    int32_t dest_val;
    int32_t item_98 = dest_val;
    long double fpu7 = *(param_2 + 0x2c);
    long double f0 = g_bcadc0;
    fpu7 - f0;
    float item_78;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        item_78 = g_bcadc0;
    else
        item_78 = *(param_2 + 0x2c);

    int32_t* data_2 = g_5ca114;
    void item_40;
    void* item_9c = &item_40;
    void* item_a0 = 3;
    (*(*data_2 + 0x30))(data_2, item_a0, item_9c);
    long double fpu_val_7_3 = g_bcabec * item_78;
    void* entity_1 = g_bcade8;
    int32_t item_9c_1 = 0;
    item_a0 = 0x2f;
    float item_18;
    long double fpu_val_7_10 =
        (1.0f - g_bcada0 * 1.0f / fpu_val_7_3) * item_18 * (g_bcad8c - g_bcadb4) + g_bcadb4;
    *(entity_1 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    float item_54 = fpu_val_7_10;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* data_3 = g_5ca114;
    (*(*data_3 + 0x50))(data_3, item_a0, item_9c_1);
    int32_t* data_4 = g_5ca114;
    int32_t item_9c_2 = 0;
    item_a0 = 0x1c;
    (*(*data_4 + 0x50))(data_4, item_a0, item_9c_2);
    int32_t* data_5 = g_5ca114;
    int32_t item_9c_3 = 0;
    item_a0 = 0x1d;
    (*(*data_5 + 0x50))(data_5, item_a0, item_9c_3);
    int32_t* data_6 = g_5ca114;
    int32_t item_9c_4 = 1;
    item_a0 = 0x16;
    (*(*data_6 + 0x50))(data_6, item_a0, item_9c_4);
    int32_t* data_7 = g_5ca114;
    int32_t item_9c_5 = 0;
    item_a0 = 0x89;
    (*(*data_7 + 0x50))(data_7, item_a0, item_9c_5);
    int32_t* data_8 = g_5ca114;
    int32_t item_9c_6 = 1;
    item_a0 = 0x1a;
    (*(*data_8 + 0x50))(data_8, item_a0, item_9c_6);
    int32_t* data_9 = g_5ca114;
    int32_t item_9c_7 = 0;
    item_a0 = 0xf;
    (*(*data_9 + 0x50))(data_9, item_a0, item_9c_7);
    int32_t* data_10 = g_5ca114;
    int32_t item_9c_8 = 4;
    item_a0 = 0x17;
    (*(*data_10 + 0x50))(data_10, item_a0, item_9c_8);
    int32_t* data_11 = g_5ca114;
    int32_t item_9c_9 = 1;
    item_a0 = 7;
    (*(*data_11 + 0x50))(data_11, item_a0, item_9c_9);
    int32_t* data_12 = g_5ca114;
    int32_t item_9c_10 = 0;
    item_a0 = 0xe;
    (*(*data_12 + 0x50))(data_12, item_a0, item_9c_10);
    int32_t* data_13 = g_5ca114;
    int32_t item_9c_11 = 3;
    item_a0 = 4;
    int32_t item_a4_11 = 0;
    (*(*data_13 + 0x94))(data_13, 0, item_a0, item_9c_11);
    int32_t* data_14 = g_5ca114;
    int32_t item_9c_12 = 2;
    item_a0 = 5;
    int32_t item_a4_12 = 0;
    (*(*data_14 + 0x94))(data_14, 0, item_a0, item_9c_12);
    int32_t* data_15 = g_5ca114;
    int32_t item_9c_13 = 0;
    item_a0 = 6;
    int32_t item_a4_13 = 0;
    (*(*data_15 + 0x94))(data_15, 0, item_a0, item_9c_13);
    int32_t* data_16 = g_5ca114;
    int32_t item_9c_14 = 3;
    item_a0 = 1;
    int32_t item_a4_14 = 0;
    (*(*data_16 + 0x94))(data_16, 0, item_a0, item_9c_14);
    int32_t* data_17 = g_5ca114;
    int32_t item_9c_15 = 2;
    item_a0 = 2;
    int32_t item_a4_15 = 0;
    (*(*data_17 + 0x94))(data_17, 0, item_a0, item_9c_15);
    int32_t* data_18 = g_5ca114;
    int32_t item_9c_16 = 0;
    item_a0 = 3;
    int32_t item_a4_16 = 0;
    (*(*data_18 + 0x94))(data_18, 0, item_a0, item_9c_16);
    int32_t* data_19 = g_5ca114;
    int32_t item_9c_17 = 1;
    item_a0 = 1;
    int32_t item_a4_17 = 1;
    (*(*data_19 + 0x94))(data_19, 1, item_a0, item_9c_17);
    int32_t* data_20 = g_5ca114;
    int32_t item_9c_18 = 0;
    item_a0 = nullptr;
    (*(*data_20 + 0x8c))(data_20, item_a0, item_9c_18);
    int32_t* data_21 = g_5ca114;
    int32_t item_9c_19 = 1;
    item_a0 = 0x1b;
    (*(*data_21 + 0x50))(data_21, item_a0, item_9c_19);
    int32_t* data_22 = g_5ca114;
    int32_t item_9c_20 = 5;
    item_a0 = 0x13;
    (*(*data_22 + 0x50))(data_22, item_a0, item_9c_20);
    int32_t* data_23 = g_5ca114;
    int32_t entity_13 = *data_23;
    int32_t item_9c_21 = 6;
    item_a0 = 0x14;
    (*(entity_13 + 0x50))(data_23, item_a0, item_9c_21);
    bool flag_1 = g_bcad08 + 0xc8 > g_bcad04;
    int32_t* data_26 = g_bcad00;
    int32_t item_68 = *(param_2 + 0x30);
    int32_t entity_15 = *data_26;
    int32_t item_9c_22 = 0;
    void item_88;
    item_a0 = &item_88;
    int32_t result;
    void** stack_ptr_1;
    int32_t context_1;

    if (flag_1)
    {
        int32_t item_a4_23 = 0x2020;
        result = (*(entity_15 + 0xc))(data_26, 0x2020);
        stack_ptr_1 = &item_a0;
        context_1 = 0;
        g_bcad08 = 0xc8;

        if (!result)
        {
        label_4a2f6a:
            result = result_1;

            if (result)
            {
                int32_t dest_2 = 0;
                long double fpu_val_7_12 = g_bcabbc + 4.0f;
                long double fpu_val_6_3 = g_bcabc4 + g_bcabbc;
                fpu_val_6_3 - fpu_val_7_12;

                if (!(*(&((fpu_val_6_3 < fpu_val_7_12 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_3, fpu_val_7_12) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == fpu_val_7_12 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_6_19;
                    long double fpu_val_7_27;

                    do
                    {
                        if (dest_2 >= 0xc8)
                        {
                            int32_t* data_38 = g_bcad00;
                            *(stack_ptr_1 - 4) = data_38;
                            (*(*data_38 + 0x10))();
                            int32_t* data_39 = g_5ca114;
                            int32_t entity_29 = g_bcad00;
                            *(stack_ptr_1 - 4) = 0;
                            *(stack_ptr_1 - 8) = dest_2;
                            int32_t temp_26 = *data_39;
                            *(stack_ptr_1 - 0xc) = context_1;
                            *(stack_ptr_1 - 0x10) = entity_29;
                            *(stack_ptr_1 - 0x14) = 2;
                            *(stack_ptr_1 - 0x18) = data_39;
                            (*(temp_26 + 0x7c))();
                            int32_t data_40 = g_bcad04;
                            int32_t temp_28 = g_bcad08 + 0xc8;
                            *(stack_ptr_1 - 4) = 0;
                            int32_t* data_41 = g_bcad00;
                            int32_t entity_30 = *data_41;
                            *(stack_ptr_1 - 8) = &stack_ptr_1[4];

                            if (temp_28 > data_40)
                            {
                                *(stack_ptr_1 - 0xc) = 0x2020;
                                *(stack_ptr_1 - 0x10) = data_41;
                                result = (*(entity_30 + 0xc))();
                                stack_ptr_1 -= 8;
                                context_1 = 0;
                                g_bcad08 = 0xc8;

                                if (result)
                                    goto label_4a351e;
                            }
                            else
                            {
                                *(stack_ptr_1 - 0xc) = 0x1020;
                                *(stack_ptr_1 - 0x10) = data_41;
                                result = (*(entity_30 + 0xc))();
                                stack_ptr_1 -= 8;
                                int32_t entity_31 = g_bcad08;
                                context_1 = entity_31;
                                int32_t temp_32 = stack_ptr_1[4] + entity_31 * 0x1c;
                                g_bcad08 = entity_31 + 0xc8;
                                stack_ptr_1[4] = temp_32;

                                if (result)
                                    goto label_4a351e;
                            }

                            result = stack_ptr_1[4];

                            if (!result)
                                goto label_4a351e;

                            dest_2 = 0;
                            stack_ptr_1[5] = stack_ptr_1[5] - 4.0f;
                        }
                        else
                        {
                            *(stack_ptr_1 + 0x18) = stack_ptr_1[5];
                            float* data_29 = stack_ptr_1[4];
                            stack_ptr_1[9] = stack_ptr_1[6];
                            long double fpu_val_7_14 = stack_ptr_1[9];
                            *(stack_ptr_1 + 0x18) = g_bcabb8;
                            stack_ptr_1[9] = stack_ptr_1[6];
                            *data_29 = stack_ptr_1[9];
                            *(stack_ptr_1[4] + 4) = fpu_val_7_14;
                            *(stack_ptr_1[4] + 8) = stack_ptr_1[0x11];
                            *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0x12];
                            *(stack_ptr_1 + 0x18) = *(param_2 + 0x20) * 255.0f;
                            int32_t entity_20 = stack_ptr_1[6];
                            *(&entity_20 + 1) |= 0x4c;
                            *(stack_ptr_1 + 0x18) = *(param_2 + 0x24) * 255.0f;
                            void* temp_19 = stack_ptr_1[4];
                            int32_t entity_23 = (entity_20 << 8 | stack_ptr_1[6]) << 8;
                            *(stack_ptr_1 + 0x18) = *(param_2 + 0x28) * 255.0f;
                            *(temp_19 + 0x10) = entity_23 | stack_ptr_1[6];
                            float* data_33 = stack_ptr_1[4] + 0x1c;
                            stack_ptr_1[4] = data_33;
                            *(stack_ptr_1 + 0x18) = g_bcabc0 + g_bcabb8;
                            stack_ptr_1[9] = stack_ptr_1[6];
                            *data_33 = stack_ptr_1[9];
                            *(stack_ptr_1[4] + 4) = fpu_val_7_14;
                            *(stack_ptr_1[4] + 8) = stack_ptr_1[0x11];
                            *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0x12];
                            *(stack_ptr_1 + 0x18) = *(param_2 + 0x20) * 255.0f;
                            int32_t temp_21 = stack_ptr_1[6];
                            *(&temp_21 + 1) |= 0x4c;
                            *(stack_ptr_1 + 0x18) = *(param_2 + 0x24) * 255.0f;
                            int32_t temp_24 = (temp_21 << 8 | stack_ptr_1[6]) << 8;
                            *(stack_ptr_1 + 0x18) = *(param_2 + 0x28) * 255.0f;
                            dest_2 += 2;
                            *(stack_ptr_1[4] + 0x10) = temp_24 | stack_ptr_1[6];
                            stack_ptr_1[4] += 0x1c;
                        }

❓️❓️                        long double fpu_val_7_26 = stack_ptr_1[5] + 4.0f;
                        stack_ptr_1[5] = fpu_val_7_26;
                        fpu_val_7_27 = fpu_val_7_26 + 4.0f;
                        fpu_val_6_19 = g_bcabc4 + g_bcabbc;
                        fpu_val_6_19 - fpu_val_7_27;
                    } while (!(*(&((fpu_val_6_19 < fpu_val_7_27 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_19, fpu_val_7_27) ? 1 : 0) << 0xa
                        | (fpu_val_6_19 == fpu_val_7_27 ? 1 : 0) << 0xe) + 1) & 1));
                }

                int32_t* data_43 = g_bcad00;
                *(stack_ptr_1 - 4) = data_43;
                result = (*(*data_43 + 0x10))();

                if (dest_2 > 0)
                {
                    int32_t* data_44 = g_5ca114;
                    int32_t entity_34 = g_bcad00;
                    *(stack_ptr_1 - 4) = 0;
                    *(stack_ptr_1 - 8) = dest_2;
                    int32_t temp_33 = *data_44;
                    *(stack_ptr_1 - 0xc) = context_1;
                    *(stack_ptr_1 - 0x10) = entity_34;
                    *(stack_ptr_1 - 0x14) = 2;
                    *(stack_ptr_1 - 0x18) = data_44;
                    result = (*(temp_33 + 0x7c))();
                }

❓️                long double fpu_val_7_28 = stack_ptr_1[0xc];
                long double f1_1 = 0.0f;
                fpu_val_7_28 - f1_1;
                result = (fpu_val_7_28 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_28, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_28 == f1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double fpu_val_7_30 = stack_ptr_1[0xc] * 10.0f;
                    stack_ptr_1[8] = 0x3f800000;
                    long double f2_1 = 1.0f;
                    fpu_val_7_30 - f2_1;

                    if (*(&((fpu_val_7_30 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_30, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_30 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        stack_ptr_1[8] = 1.0f / fpu_val_7_30;
                        fpu_val_7_30 = 1.0f;
                    }

                    int32_t data_46 = g_bcad04;
                    int32_t temp_35 = g_bcad08 + 0xc8;
                    *(stack_ptr_1 - 4) = 0;
                    *(stack_ptr_1 + 0x18) = fpu_val_7_30;
                    int32_t source_2 = stack_ptr_1[6];
                    int32_t* data_47 = g_bcad00;
                    stack_ptr_1[6] = source_2;
                    *(stack_ptr_1 - 8) = &stack_ptr_1[4];
                    int32_t entity_35 = *data_47;
                    int32_t context_2;

                    if (temp_35 > data_46)
                    {
                        *(stack_ptr_1 - 0xc) = 0x2020;
                        *(stack_ptr_1 - 0x10) = data_47;
                        result = (*(entity_35 + 0xc))();
                        stack_ptr_1 -= 8;
                        context_2 = 0;
                        g_bcad08 = 0xc8;

                        if (!result)
                        {
                        label_4a32af:
                            result = stack_ptr_1[4];

                            if (result)
                            {
                                int32_t dest_5 = 0;
                                long double fpu_val_7_32 = stack_ptr_1[8];
                                stack_ptr_1[5] = g_bcabbc;
                                stack_ptr_1[0xb] = fpu_val_7_32 + stack_ptr_1[5];
                                long double fpu_val_7_35 = g_bcabc4 + g_bcabbc;
                                long double f3_1 = stack_ptr_1[0xb];
                                fpu_val_7_35 - f3_1;

                                if (!(*(&((fpu_val_7_35 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_35, f3_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_35 == f3_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_60;
                                    long double f4_1;

                                    do
                                    {
                                        int32_t flagP = 0;

                                        if (source_2 > 0)
                                        {
                                            do
                                            {
                                                if (dest_5 >= 0xc8)
                                                {
                                                    int32_t* data_58 = g_bcad00;
                                                    *(stack_ptr_1 - 4) = data_58;
                                                    (*(*data_58 + 0x10))();
                                                    int32_t* data_59 = g_5ca114;
                                                    int32_t temp_44 = g_bcad00;
                                                    *(stack_ptr_1 - 4) = 0;
                                                    *(stack_ptr_1 - 8) = dest_5;
                                                    int32_t entity_45 = *data_59;
                                                    *(stack_ptr_1 - 0xc) = context_2;
                                                    *(stack_ptr_1 - 0x10) = temp_44;
                                                    *(stack_ptr_1 - 0x14) = 2;
                                                    *(stack_ptr_1 - 0x18) = data_59;
                                                    (*(entity_45 + 0x7c))();
                                                    bool flag_6_1 =
                                                        g_bcad08 + 0xc8 > g_bcad04;
                                                    int32_t* data_62 = g_bcad00;
                                                    *(stack_ptr_1 - 4) = 0;
                                                    *(stack_ptr_1 - 8) = &stack_ptr_1[4];
                                                    int32_t entity_47 = *data_62;

                                                    if (flag_6_1)
                                                    {
                                                        *(stack_ptr_1 - 0xc) = 0x2020;
                                                        *(stack_ptr_1 - 0x10) = data_62;
                                                        result = (*(entity_47 + 0xc))();
                                                        stack_ptr_1 -= 8;
                                                        context_2 = 0;
                                                        g_bcad08 = 0xc8;

                                                        if (result)
                                                            goto label_4a351e;
                                                    }
                                                    else
                                                    {
                                                        *(stack_ptr_1 - 0xc) = 0x1020;
                                                        *(stack_ptr_1 - 0x10) = data_62;
                                                        result = (*(entity_47 + 0xc))();
                                                        stack_ptr_1 -= 8;
                                                        int32_t entity_48 = g_bcad08;
                                                        context_2 = entity_48;
                                                        int32_t temp_48 = stack_ptr_1[4] + entity_48 * 0x1c;
                                                        g_bcad08 = entity_48 + 0xc8;
                                                        stack_ptr_1[4] = temp_48;

                                                        if (result)
                                                            goto label_4a351e;
                                                    }

                                                    result = stack_ptr_1[4];

                                                    if (!result)
                                                        goto label_4a351e;

                                                    dest_5 = 0;
                                                }
                                                else
                                                {
                                                    *(stack_ptr_1 + 0x24) = stack_ptr_1[5];
                                                    int32_t entity_38 = stack_ptr_1[9];
                                                    *(stack_ptr_1 - 4) = 0x935bf0;
                                                    stack_ptr_1[9] = entity_38;
                                                    stack_ptr_1[9] = stack_ptr_1[9];
                                                    long double fpu_val_7_39 =
                                                        Sys_AllocateMemory_14() * g_bcabc0;
                                                    float* temp_40 = stack_ptr_1[4];
                                                    *(stack_ptr_1 - 8) = 0x935bf0;
                                                    *temp_40 = fpu_val_7_39 + g_bcabb8;
                                                    *(stack_ptr_1[4] + 4) = stack_ptr_1[9];
                                                    *(stack_ptr_1[4] + 8) = stack_ptr_1[0x11];
                                                    *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0x12];
                                                    long double fpu_val_7_45 = Sys_AllocateMemory_14() * 255.0f;
                                                    *(stack_ptr_1 - 0xc) = 0x935bf0;
                                                    *(stack_ptr_1 + 0x34) = fpu_val_7_45;
                                                    int32_t data_51 = stack_ptr_1[0xd];
                                                    *(stack_ptr_1 + 0x34) = stack_ptr_1[0xc] * 255.0f;
                                                    int32_t source_9 = ((stack_ptr_1[0xd] << 8 | data_51) << 8
                                                        | data_51) << 8 | data_51;
                                                    *(stack_ptr_1[4] + 0x10) = source_9;
                                                    stack_ptr_1[4] += 0x1c;
                                                    long double fpu_val_7_49 = Sys_AllocateMemory_14() * 50.0f;
                                                    float* data_55 = stack_ptr_1[4];
                                                    *data_55 = fpu_val_7_49 + data_55[-7];
                                                    long double fpu_val_7_52 =
                                                        g_bcabc0 + g_bcabb8;
                                                    float* entity_40 = stack_ptr_1[4];
                                                    long double f5_1 = *entity_40;
                                                    fpu_val_7_52 - f5_1;

                                                    if (!(*(&((fpu_val_7_52 < f5_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_7_52, f5_1) ? 1 : 0)
                                                            << 0xa | (fpu_val_7_52 == f5_1 ? 1 : 0) << 0xe
                                                            | 0x3800) + 1) & 0x41))
                                                        fpu_val_7_52 = *entity_40;

                                                    *entity_40 = fpu_val_7_52;
                                                    *(stack_ptr_1[4] + 4) = stack_ptr_1[9];
                                                    *(stack_ptr_1[4] + 8) = stack_ptr_1[0x11];
                                                    *(stack_ptr_1[4] + 0xc) = stack_ptr_1[0x12];
                                                    *(stack_ptr_1[4] + 0x10) = source_9;
                                                    source_2 = stack_ptr_1[6];
                                                    stack_ptr_1[4] += 0x1c;
                                                    dest_5 += 2;
                                                }

❓️                                                flagP += 1;
                                            } while (flagP < source_2);
                                        }

                                        long double fpu_val_7_57 = stack_ptr_1[8];
                                        stack_ptr_1[5] = stack_ptr_1[0xb];
                                        stack_ptr_1[0xb] = fpu_val_7_57 + stack_ptr_1[5];
                                        fpu_val_7_60 = g_bcabc4 + g_bcabbc;
                                        f4_1 = stack_ptr_1[0xb];
                                        fpu_val_7_60 - f4_1;
                                    } while (!(*(&((fpu_val_7_60 < f4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_60, f4_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_60 == f4_1 ? 1 : 0) << 0xe) + 1) & 1));
                                }

                                int32_t* data_65 = g_bcad00;
                                *(stack_ptr_1 - 4) = data_65;
                                result = (*(*data_65 + 0x10))();

                                if (dest_5 > 0)
                                {
                                    int32_t* data_66 = g_5ca114;
                                    int32_t entity_51 = g_bcad00;
                                    *(stack_ptr_1 - 4) = 0;
                                    *(stack_ptr_1 - 8) = dest_5;
                                    int32_t temp_49 = *data_66;
                                    *(stack_ptr_1 - 0xc) = context_2;
                                    *(stack_ptr_1 - 0x10) = entity_51;
                                    *(stack_ptr_1 - 0x14) = 2;
                                    *(stack_ptr_1 - 0x18) = data_66;
                                    result = (*(temp_49 + 0x7c))();
                                }
                            }
                        }
                    }
                    else
                    {
                        *(stack_ptr_1 - 0xc) = 0x1020;
                        *(stack_ptr_1 - 0x10) = data_47;
                        result = (*(entity_35 + 0xc))();
                        stack_ptr_1 -= 8;
                        int32_t entity_36 = g_bcad08;
                        context_2 = entity_36;
                        int32_t temp_39 = stack_ptr_1[4] + entity_36 * 0x1c;
                        g_bcad08 = entity_36 + 0xc8;
                        stack_ptr_1[4] = temp_39;

                        if (!result)
                            goto label_4a32af;
                    }
                }
            }
        }
    }
    else
    {
        int32_t item_a4_22 = 0x1020;
        result = (*(entity_15 + 0xc))(data_26, 0x1020);
        stack_ptr_1 = &item_a0;
        int32_t entity_16 = g_bcad08;
        context_1 = entity_16;
        g_bcad08 = entity_16 + 0xc8;
        result_1 += entity_16 * 0x1c;

        if (!result)
            goto label_4a2f6a;
    }
❓️label_4a351e:
    *stack_ptr_1;
    stack_ptr_1[1];
    stack_ptr_1[2];
    stack_ptr_1[3];
    return result;
}
