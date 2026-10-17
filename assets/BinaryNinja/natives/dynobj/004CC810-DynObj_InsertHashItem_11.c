// IGI native provenance: DynObj_InsertHashItem_11 - 0x004CC810 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CC810-DynObj_InsertHashItem_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_InsertHashItem_11.h"
❓  int32_t DynObj_InsertHashItem_11(int32_t* context , int32_t param_2 , double* param_3, int32_t param_4 , int32_t param_5, int32_t param_6, int32_t param_7, int32_t param_8, void* param_9, void* param_10, int32_t param_11 , int32_t param_12)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    void* flagP;
    void* item_4 = flagP;
    Camera_UpdateTransform_5(0x15a4);
    void* source_val = context[7];
    DynObj_UpdateDynTree_6();
    double* entity_val = param_2;
    int32_t arg_c = 0;
    long double fpu7 = *entity_val;
    long double f0 = *param_3;
    fpu7 - f0;
    long double fpu_val_7_1;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = *param_3;
    else
        fpu_val_7_1 = *entity_val;

    int32_t context_val = *(source_val + 0xde0);
    item_4 = fpu_val_7_1;
    void* data_4 = item_4 + context_val;
    long double fpu_val_7_2 = entity_val[1];
    long double fpu6 = param_3[1];
    fpu6 - fpu_val_7_2;
    long double fpu_val_7_3;

    if (*(&((fpu6 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_2) ? 1 : 0) << 0xa
            | (fpu6 == fpu_val_7_2 ? 1 : 0) << 0xe) + 1) & 0x41)
        fpu_val_7_3 = param_3[1];
    else
        fpu_val_7_3 = entity_val[1];

    int32_t dest_val = *(source_val + 0xde4);
    item_4 = fpu_val_7_3;
    void* data_7 = item_4 + dest_val;
    long double fpu_val_7_4 = entity_val[2];
    long double fpu_val_6_1 = param_3[2];
    fpu_val_6_1 - fpu_val_7_4;
    long double fpu_val_7_5;

    if (*(&((fpu_val_6_1 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_4) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 0x41)
        fpu_val_7_5 = param_3[2];
    else
        fpu_val_7_5 = entity_val[2];

    int32_t source_1 = *(source_val + 0xde8);
    item_4 = fpu_val_7_5;
    void* data_10 = item_4 + source_1;
    long double fpu_val_7_6 = *entity_val;
    long double f1 = *param_3;
    fpu_val_7_6 - f1;
    long double fpu_val_7_7;

    if (*(&((fpu_val_7_6 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
        fpu_val_7_7 = *param_3;
    else
        fpu_val_7_7 = *entity_val;

    item_4 = fpu_val_7_7;
    void* data_13 = item_4 + context_val;
    long double fpu_val_7_8 = entity_val[1];
    long double fpu_val_6_2 = param_3[1];
    fpu_val_6_2 - fpu_val_7_8;
    long double fpu_val_7_9;

    if (!(*(&((fpu_val_6_2 < fpu_val_7_8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_8) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_8 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_9 = param_3[1];
    else
        fpu_val_7_9 = entity_val[1];

    item_4 = fpu_val_7_9;
    void* arg_74 = item_4 + dest_val;
    long double fpu_val_7_10 = entity_val[2];
    long double fpu_val_6_3 = param_3[2];
    fpu_val_6_3 - fpu_val_7_10;
    long double fpu_val_7_11;

    if (!(*(&((fpu_val_6_3 < fpu_val_7_10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, fpu_val_7_10) ? 1 : 0) << 0xa
            | (fpu_val_6_3 == fpu_val_7_10 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_11 = param_3[2];
    else
        fpu_val_7_11 = entity_val[2];

    item_4 = fpu_val_7_11;
    void* data_19 = item_4 + source_1;
    float arg_28 = *param_3 - *entity_val;
    float return_addr_1 = param_3[1] - entity_val[1];
    float arg_30 = param_3[2] - entity_val[2];
    long double fpu_val_7_18 = arg_28;
    long double f2 = 0.0f;
    fpu_val_7_18 - f2;
    long double fpu_val_7_19 = arg_28;

    if (*(&((fpu_val_7_18 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_18, f2) ? 1 : 0) << 0xa
            | (fpu_val_7_18 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_19 = -(fpu_val_7_19);

    long double fpu_val_6_4 = return_addr_1;
    long double f3 = 0.0f;
    fpu_val_6_4 - f3;

    return_addr = !(*(&((fpu_val_6_4 < f3 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_6_4, f3) ? 1 : 0) << 0xa | (fpu_val_6_4 == f3 ? 1 : 0) << 0xe | 0x3800) + 1)
        & 1) ? return_addr_1 : -(return_addr_1);

    long double fpu_val_6_7 = arg_30;
    long double f4 = 0.0f;
    fpu_val_6_7 - f4;
    float arg_4;

    arg_4 = !(*(&((fpu_val_6_7 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_7, f4) ? 1 : 0) << 0xa
        | (fpu_val_6_7 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? arg_30 : -(arg_30);

    long double f5 = return_addr;
    fpu_val_7_19 - f5;
    long double f7_1;

    if (!(*(&((fpu_val_7_19 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_19 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
    {
        f7_1 = arg_4;
        fpu_val_7_19 - f7_1;
    }

    int32_t arg_1c;
    int32_t entity_2;
    int32_t temp_2;
    int32_t dest_1;
    int32_t arg_20;

    if (*(&((fpu_val_7_19 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_19 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 || *(&(
        (fpu_val_7_19 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f7_1) ? 1 : 0) << 0xa
        | (fpu_val_7_19 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_6_10 = return_addr;
        long double f6_1 = arg_4;
        fpu_val_6_10 - f6_1;

        if (*(&((fpu_val_6_10 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_10, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_6_10 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double f8_1 = return_addr;
            fpu_val_7_19 - f8_1;
            temp_2 = 2;
            arg_1c = 2;

            if (*(&((fpu_val_7_19 < f8_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_19, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_7_19 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                dest_1 = 1;
                arg_20 = dest_1;
                entity_2 = 0;
            }
            else
            {
                dest_1 = 0;
                entity_2 = 1;
                arg_20 = 0;
            }
        }
        else
        {
            long double f9_1 = arg_4;
            fpu_val_7_19 - f9_1;
            temp_2 = 1;
            arg_1c = 1;

            if (*(&((fpu_val_7_19 < f9_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_19, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_7_19 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                dest_1 = 2;
                arg_20 = dest_1;
                entity_2 = 0;
            }
            else
            {
                dest_1 = 0;
                entity_2 = 2;
                arg_20 = 0;
            }
        }
    }
    else
    {
        long double fpu_val_7_21 = return_addr;
        long double f10_1 = arg_4;
        fpu_val_7_21 - f10_1;
        temp_2 = 0;
        arg_1c = 0;

        if (*(&((fpu_val_7_21 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f10_1) ? 1 : 0) << 0xa
            | (fpu_val_7_21 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            dest_1 = 2;
            entity_2 = 1;
            arg_20 = 2;
        }
        else
        {
            dest_1 = 1;
            entity_2 = 2;
            arg_20 = 1;
        }
    }
    long double fpu_val_7_22 = arg_28;
    long double f11 = 0.0f;
    fpu_val_7_22 - f11;
    int32_t arg_24 = entity_2;
    item_4 = 1;

    if (*(&((fpu_val_7_22 < f11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, f11) ? 1 : 0) << 0xa
            | (fpu_val_7_22 == f11 ? 1 : 0) << 0xe) + 1) & 0x41)
        item_4 = nullptr;

    long double fpu_val_7_23 = return_addr_1;
    long double f12 = 0.0f;
    fpu_val_7_23 - f12;
    return_addr = 1;

    if (*(&((fpu_val_7_23 < f12 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f12) ? 1 : 0) << 0xa
            | (fpu_val_7_23 == f12 ? 1 : 0) << 0xe) + 1) & 0x41)
        return_addr = nullptr;

    long double fpu_val_7_24 = arg_30;
    long double f13 = 0.0f;
    fpu_val_7_24 - f13;
    arg_4 = 1.40129846e-45.0f;

    if (*(&((fpu_val_7_24 < f13 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_24, f13) ? 1 : 0) << 0xa
            | (fpu_val_7_24 == f13 ? 1 : 0) << 0xe) + 1) & 0x41)
        arg_4 = 0.0f;

    int32_t data_21 = (&item_4)[temp_2];
    float temp_3 = (&item_4)[entity_2];
    int32_t data_22 = 0;
    void arg_17c;
    void* temp_4 = &arg_17c;

    while (true)
    {
        temp_4 += 4;
        int32_t source_8 = ((data_22 >> 2 & 1) ^ temp_3) << (entity_2 & 0x1f)
            | ((data_22 >> 1 & 1) ^ (&item_4)[dest_1]) << (dest_1 & 0x1f)
            | ((data_22 & 1) ^ data_21) << (arg_1c & 0x1f);
        data_22 += 1;
        *(temp_4 - 4) = source_8;

        if (data_22 >= 8)
            break;

        entity_2 = arg_24;
    }

    void arg_39c;
    int32_t* i = &arg_39c;
    memcpy(&arg_39c, context, 0x24);
    context = &arg_39c;
    int32_t arg_19c[0x77];
    arg_19c[0] = 1;

    do
    {
        int32_t entity_7 = 0x1e - i[1];

        if (entity_7 < 0x10)
        {
            void* data_30 = i[8];
            item_4 = data_30;
            int32_t entity_11 = g_b97d20;

            if (arg_19c[arg_c])
            {
                if (entity_11 && data_30 && *(data_30 + 0x38) & 0x80)
                {
                    void* j = *(data_30 + 0x2c);

                    do
                    {
                        if (*(j + 0x5c) & 0x80)
                        {
                            int32_t entity_12 = 0;
                            entity_12 = *(j + 0x1c);
                            (*((entity_12 << 2) + &g_a9c4e0))(j, *(j + 0x48));
                        }

                        j = *(j + 0x58);
                    } while (j);
                }

                int32_t saved_target;
                (&saved_target)[arg_c + 0x6c] = 0;
                int32_t arg_98;
                memcpy(&arg_98, i, 0x24);
                int32_t data_34 = 0;
                param_2 = 8;
                data_34 = *(param_9 + 0x18);
                int32_t* arg_38 = &arg_17c;
                bool flag_2_1;

                do
                {
                    int32_t temp_9 = *arg_38;
                    int32_t entity_15 = *(((temp_9 + (param_5 << 3)) << 2) + &g_548060);

                    if (data_34 & 1 << (entity_15 & 0x1f))
                    {
                        int32_t data_38 = 0;
                        data_38 = *(param_9 + (entity_15 << 1));
                        int32_t data_40 = (data_38 << 5) + *(param_10 + 0xc);
                        int32_t source_21 = arg_98 >> 1;
                        int32_t entity_19 = ((temp_9 & 1) * 2 - 1) * source_21 + param_6;
                        int32_t dest_9 = ((temp_9 & 2) - 1) * source_21 + param_7;
                        int32_t temp_14 = ((temp_9 >> 1 & 2) - 1) * source_21 + param_8;

                        if (data_4 > entity_19 + source_21 || data_13 < entity_19 - source_21
                            || data_7 > dest_9 + source_21 || arg_74 < dest_9 - source_21
                            || data_10 > temp_14 + source_21 + 0x4001
                            || data_19 < temp_14 - source_21 - 0x4001)
                        {
                        label_4cd125:
                            i = context;
                        }
                        else
                        {
                            long double fpu_val_7_28 = source_21;
                            param_3 = fpu_val_7_28;
                            float arg_4c = param_3 + 16385.0f;
                            double arg_58 = entity_19 - *(source_val + 0xde0);
                            int32_t* arg_3c = &arg_1c;
                            double arg_60 = dest_9 - *(source_val + 0xde4);
                            int32_t item_8_5 = 0;
                            double arg_68 = temp_14 - *(source_val + 0xde8);
                            double arg_d4 = arg_58 - fpu_val_7_28;
                            double arg_dc = arg_60 - param_3;
                            double arg_e4 = arg_68 - arg_4c;
                            double arg_bc = fpu_val_7_28 + arg_58;
                            double arg_c4 = param_3 + arg_60;
                            double arg_cc = arg_4c + arg_68;

                            while (true)
                            {
                                int32_t data_58 = *arg_3c;

                                if (data_58)
                                {
                                    if (data_58 != 1)
                                    {
                                        long double fpu_val_7_54 = arg_30;
                                        long double f16_1 = 0.0f;
                                        fpu_val_7_54 - f16_1;
                                        long double fpu_val_7_55;

                                        fpu_val_7_55 = *(&((fpu_val_7_54 < f16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_54, f16_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_54 == f16_1 ? 1 : 0) << 0xe) + 1) & 1
                                            ? -((source_21 + 0x4001)) : source_21 + 0x4001;

                                        long double fpu_val_7_59 = (fpu_val_7_55 + arg_68
                                            - *(param_2 + 0x10)) / (param_3[2] - *(param_2 + 0x10));
                                        double arg_110 = (*param_3 - *param_2) * fpu_val_7_59 + *param_2;
                                        double arg_118 =
                                            (param_3[1] - *(param_2 + 8)) * fpu_val_7_59 + *(param_2 + 8);
                                        long double fpu_val_7_61 = arg_110;
                                        long double f21_1 = arg_d4;
                                        fpu_val_7_61 - f21_1;

                                        if (*(&((fpu_val_7_61 < f21_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_61, f21_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_61 == f21_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4cd109;

                                        long double fpu_val_7_62 = arg_110;
                                        long double f24_1 = arg_bc;
                                        fpu_val_7_62 - f24_1;

                                        if (!(*(&((fpu_val_7_62 < f24_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_62, f24_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_62 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                            goto label_4cd109;

                                        long double fpu_val_7_63 = arg_118;
                                        long double f27_1 = arg_dc;
                                        fpu_val_7_63 - f27_1;

                                        if (*(&((fpu_val_7_63 < f27_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_63, f27_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_63 == f27_1 ? 1 : 0) << 0xe) + 1) & 1)
                                            goto label_4cd109;

                                        long double fpu_val_7_64 = arg_118;
                                        long double f29_1 = arg_c4;
                                        fpu_val_7_64 - f29_1;

                                        if (*(&((fpu_val_7_64 < f29_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_64, f29_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_64 == f29_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            goto label_4cd16e;

                                        goto label_4cd109;
                                    }

                                    long double fpu_val_7_44 = return_addr_1;
                                    long double f17_1 = 0.0f;
                                    fpu_val_7_44 - f17_1;
                                    long double fpu_val_7_45 = param_3;

                                    if (*(&((fpu_val_7_44 < f17_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_44, f17_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_44 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                        fpu_val_7_45 = -(fpu_val_7_45);

                                    long double fpu_val_7_48 = (fpu_val_7_45 + arg_60 - *(param_2 + 8))
                                        / (param_3[1] - *(param_2 + 8));
                                    double arg_f8 = (*param_3 - *param_2) * fpu_val_7_48 + *param_2;
                                    double arg_108 =
                                        (param_3[2] - *(param_2 + 0x10)) * fpu_val_7_48 + *(param_2 + 0x10);
                                    long double fpu_val_7_50 = arg_f8;
                                    long double f19_1 = arg_d4;
                                    fpu_val_7_50 - f19_1;

                                    if (*(&((fpu_val_7_50 < f19_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_50, f19_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_50 == f19_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double fpu_val_7_51 = arg_f8;
                                    long double f22_1 = arg_bc;
                                    fpu_val_7_51 - f22_1;

                                    if (!(*(&((fpu_val_7_51 < f22_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_51, f22_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_51 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                    long double fpu_val_7_52 = arg_108;
                                    long double f25_1 = arg_e4;
                                    fpu_val_7_52 - f25_1;

                                    if (*(&((fpu_val_7_52 < f25_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_52, f25_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_52 == f25_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double fpu_val_7_53 = arg_108;
                                    long double f28_1 = arg_cc;
                                    fpu_val_7_53 - f28_1;

                                    if (*(&((fpu_val_7_53 < f28_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_53, f28_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_53 == f28_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        goto label_4cd16e;

                                    goto label_4cd109;
                                }

                                long double fpu_val_7_34 = arg_28;
                                long double f15_1 = 0.0f;
                                fpu_val_7_34 - f15_1;
                                long double fpu_val_7_35 = param_3;

                                if (*(&((fpu_val_7_34 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_34, f15_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_34 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    fpu_val_7_35 = -(fpu_val_7_35);

                                long double fpu_val_7_38 =
                                    (fpu_val_7_35 + arg_58 - *param_2) / (*param_3 - *param_2);
                                double arg_130 = (param_3[1] - *(param_2 + 8)) * fpu_val_7_38 + *(param_2 + 8);
                                double arg_138 =
                                    (param_3[2] - *(param_2 + 0x10)) * fpu_val_7_38 + *(param_2 + 0x10);
                                long double fpu_val_7_40 = arg_130;
                                long double f18_1 = arg_dc;
                                fpu_val_7_40 - f18_1;

                                if (!(*(&((fpu_val_7_40 < f18_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_40, f18_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_40 == f18_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_41 = arg_130;
                                    long double f20_1 = arg_c4;
                                    fpu_val_7_41 - f20_1;

                                    if (!(*(&((fpu_val_7_41 < f20_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_41, f20_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_41 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                    long double fpu_val_7_42 = arg_138;
                                    long double f23_1 = arg_e4;
                                    fpu_val_7_42 - f23_1;

                                    if (*(&((fpu_val_7_42 < f23_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_42, f23_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_42 == f23_1 ? 1 : 0) << 0xe) + 1) & 1)
                                        goto label_4cd109;

                                    long double fpu_val_7_43 = arg_138;
                                    long double f26_1 = arg_cc;
                                    fpu_val_7_43 - f26_1;

                                    if (!(*(&((fpu_val_7_43 < f26_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_43, f26_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_43 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                        goto label_4cd109;

                                label_4cd16e:
                                    context = &context[9];
                                    int32_t data_80 = arg_c + 1;
                                    arg_c = data_80;
                                    arg_19c[data_80] = 1;
                                    int32_t data_85;

                                    if (param_5 >= 4)
                                    {
                                        void* entity_22 = param_9;
                                        int32_t data_86 = entity_15;
                                        data_86 = *(entity_22 + data_86 + 0x10);
                                        entity_22 = data_86;
                                        i = context;
                                        data_85 =
                                            ((entity_22 & 4) ^ (param_5 & 4)) + ((param_5 - data_86) & 3);
                                    }
                                    else
                                    {
                                        int32_t context_25 = entity_15;
                                        char data_82 = *(param_9 + context_25 + 0x10);
                                        context_25 = data_82;
                                        int32_t data_83 = param_5;
                                        int32_t context_26 = context_25 + data_83;
                                        data_83 = data_82;
                                        data_85 = (data_83 & 4) + (context_26 & 3);
                                        i = context;
                                    }

                                    i[2] = data_85;
                                    i[3] = entity_19;
                                    i[1] = param_4 - 1;
                                    i[5] = temp_14;
                                    *i = source_21;
                                    i[4] = dest_9;
                                    i[6] = data_40;
                                    i[7] = param_10;
                                    int32_t entity_27;

                                    entity_27 = arg_c || arg_c ? temp_9 : 7 - temp_9;

                                    void* data_93;

                                    if (g_b97d20)
                                        data_93 = item_4;

                                    if (!g_b97d20 || !data_93)
                                        i[8] = 0;
                                    else
                                        i[8] = *(data_93 + (entity_27 << 2) + 0xc);

                                    break;
                                }

                            label_4cd109:
                                item_8_5 += 1;
                                arg_3c = &arg_3c[1];

                                if (item_8_5 >= 3)
                                    goto label_4cd125;
                            }
                        }
                    }

                    flag_2_1 = param_2 != 1;
                    arg_38 = &arg_38[1];
                    param_2 -= 1;
                } while (flag_2_1);
            }
            else
            {
                if (entity_11 && data_30 && *(data_30 + 0x39) & 1)
                {
                    void* j_1 = *(data_30 + 0x2c);

                    do
                    {
                        if (*(j_1 + 0x5d) & 1)
                        {
                            int32_t temp_7 = 0;
                            temp_7 = *(j_1 + 0x1c);
                            (*((temp_7 << 2) + &g_a9cae0))(j_1, *(j_1 + 0x48));
                        }

                        j_1 = *(j_1 + 0x58);
                    } while (j_1);
                }

                i -= 0x24;
                context = i;
                arg_c -= 1;
            }
        }
        else
        {
            int16_t* temp_6 = *(i[6] + 0x1c);
            void* data_24 = i[7];
            int32_t source_12 = i[4];
            double arg_140 = i[3] - *(data_24 + 0xde0);
            int32_t source_14 = i[5];
            double arg_148 = source_12 - *(data_24 + 0xde4);
            int32_t source_15 = source_14 - *(data_24 + 0xde8);
            double arg_150 = source_15;
            int32_t arg_80;
            int32_t arg_84;
            float arg_ec;
            void arg_164;

            if (DynObj_LookupHashItem_11(temp_6, &arg_140, source_15, param_3, &arg_164, entity_7, &arg_80, &arg_84, i[2],
                &arg_ec))
            {
                *(arg_4 + 0x38) = arg_ec;
                *(arg_4 + 0x3c) = param_11;
                *(arg_4 + 0x40) = param_12;
                int32_t data_97 = arg_80;
                memcpy(arg_4 + 8, &arg_164, 0x18);
                int32_t data_98;

                if (!data_97)
                    data_98 = 0;
                else
                    data_98 = *(source_val + (data_97 << 2) + 0xd3c);

                *(arg_4 + 0x4c) = data_98;
                int32_t data_99 = arg_84;
                int32_t data_100;

                if (!data_99)
                    data_100 = 0;
                else
                    data_100 = *(source_val + (data_99 << 2) + 0xd3c);

                *(arg_4 + 0x50) = data_100;
                *(arg_4 + 0x60) = Sys_DispatchOpcode_11(arg_4 + 8, source_15);
                DynObj_LinkDynamicCube_6();
                return 1;
            }

            i -= 0x24;
            context = i;
            arg_c -= 1;
        }
    } while (i >= &arg_39c);

    DynObj_LinkDynamicCube_6();
    return 0;
}
