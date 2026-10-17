// Original IGI.EXE function: Light_UpdateGlobalLight_12 (VA 0x0052E660; static CFG gate FAIL, CFG score 0.849).
#include "Light_UpdateGlobalLight_12.h"
float Light_UpdateGlobalLight_12(float context, int32_t* param_2, int32_t param_3 , int32_t param_4, int32_t param_5) {
    uint32_t i_7;
    uint32_t i_6 = i_7;
    Camera_UpdateTransform_5(0x2648);
    int32_t* dest_val = param_2;
    float result = dest_val[9];
    int32_t arg_c = 0;

    if (result)
    {
        float context_1 = context;
        g_a8457c += 1;
        int32_t data_val = *(context_1 + 0x4ab8);
        void* return_addr_1;

        if (dest_val[7] > data_val || !data_val)
        {
            arg_c = 1;
            return_addr_1 = 6;
        }
        else
            return_addr_1 = 1;

        int32_t arg_14 = 0;
        int32_t arg_c4 = *(context_1 + 0x4acc);
        int32_t arg_d0 = *(context_1 + 0x4ad0);
        int32_t arg_10 = dest_val[8];
        return_addr = return_addr_1;
        int32_t source_3 = dest_val[1];
        int32_t arg_18 = *dest_val;
        int32_t arg_1c = source_3;
        int32_t arg_20 = dest_val[2];
        int32_t arg_24 = dest_val[3];
        context = 0.0f;
        arg_10 = arg_10 / return_addr;
        double arg_28 = *(context_1 + 0x4a94);
        int32_t saved_target;

        if (return_addr_1 >= 0)
        {
            int32_t item_8_1 = 0;
            bool flag_3_1;

            do
            {
                i_6 = 0;
                void* const return_addr_7;
                bool flag_10_1;

                do
                {
                    if (!arg_c)
                    {
                        memcpy(&(&saved_target)[(i_6 + item_8_1) * 6 + 0x59f], &arg_18,
                            0x18);
                        dest_val = param_2;
                    }
                    else
                    {
                        int32_t entity_1 = *(context_1 + 0x4ab8);
                        int32_t source_5 = dest_val[7];
                        param_2 = 1;

                        if (source_5 == entity_1 + 1)
                        {
                            long double fpu_val_7_4 = *dest_val;
                            void* temp_8 = entity_1 * 0x300 + context_1;
                            long double f1_1 = *(temp_8 + 0xc40);
                            fpu_val_7_4 - f1_1;

                            if (!(*(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40) || item_8_1)
                            {
                                long double fpu_val_7_5 = *dest_val;
                                long double f5_1 = *(temp_8 + 0xe80);
                                fpu_val_7_5 - f5_1;

                                if (!(*(&((fpu_val_7_5 < f5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_5, f5_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_5 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                                    || context != return_addr)
                                {
                                    long double fpu_val_7_6 = *(dest_val + 8);
                                    long double f10_1 = *(temp_8 + 0xc48);
                                    fpu_val_7_6 - f10_1;

                                    if (!(*(&((fpu_val_7_6 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_6, f10_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_6 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40) || i_6)
                                    {
                                        long double fpu_val_7_7 = *(dest_val + 8);
                                        long double f17_1 = *(temp_8 + 0xcd8);
                                        fpu_val_7_7 - f17_1;

                                        if (*(&((fpu_val_7_7 < f17_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_7, f17_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_7 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40
                                                && i_6 == return_addr)
                                            param_2 = nullptr;
                                    }
                                    else
                                        param_2 = nullptr;
                                }
                                else
                                    param_2 = nullptr;
                            }
                            else
                                param_2 = nullptr;
                        }

                        if (source_5 == entity_1 + 2)
                        {
                            long double fpu_val_7_8 = *dest_val;
                            int32_t data_9 = entity_1 * 0x300;
                            long double f4_1 = *(data_9 + context_1 + 0xc40);
                            fpu_val_7_8 - f4_1;
                            void* entity_2 = data_9 + context_1;

                            if (!(*(&((fpu_val_7_8 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_8, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_8 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40) || item_8_1)
                            {
                                long double fpu_val_7_9 = *dest_val;
                                long double f9_1 = *(entity_2 + 0xe80);
                                fpu_val_7_9 - f9_1;

                                if (*(&((fpu_val_7_9 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_9, f9_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_9 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41
                                    || context != return_addr)
                                {
                                    long double fpu_val_7_10 = *(dest_val + 8);
                                    long double f16_1 = *(entity_2 + 0xc48);
                                    fpu_val_7_10 - f16_1;

                                    if (!(*(&((fpu_val_7_10 < f16_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_10, f16_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_10 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40) || i_6)
                                    {
                                        long double fpu_val_7_11 = *(dest_val + 8);
                                        long double f22_1 = *(entity_2 + 0xcd8);
                                        fpu_val_7_11 - f22_1;

                                        if (!(*(&((fpu_val_7_11 < f22_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_11, f22_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_11 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                                && i_6 == return_addr)
                                            param_2 = nullptr;
                                    }
                                    else
                                        param_2 = nullptr;
                                }
                                else
                                    param_2 = nullptr;
                            }
                            else
                                param_2 = nullptr;
                        }

                        if (*(context_1 + 0x4abc) <= entity_1 + 2 || param_2)
                        {
                            void arg_d8;
                            Light_SetLightColor_11(context_1, &arg_d8, &arg_18);
                            int32_t data_16 = item_8_1 + i_6;
                            void arg_e0;
                            memcpy(&(&saved_target)[data_16 * 6 + 0x59f], &arg_e0, 0x18);
                            (&saved_target)[data_16 * 3 + 0x3a4] = param_3;
                            (&saved_target)[data_16 * 3 + 0x3a5] = param_4;
                            (&saved_target)[data_16 * 3 + 0x3a6] = param_5;
                            dest_val = param_2;
                        }
                        else
                        {
                            int32_t entity_9 = i_6 + item_8_1;
                            int32_t data_20 = entity_9 * 0x18;
                            void arg_1668;
                            *(&arg_1668 + data_20) = arg_18;
                            void arg_1670;
                            *(&arg_1670 + data_20) = arg_20;
                            int64_t arg_1678[0x2a];
                            arg_1678[entity_9 * 3] = *(context_1 + 0x4a94);
                            void arg_e7c;
                            memset(&arg_e7c + entity_9 * 0xc, 0, 8);
                            int32_t arg_e84[0x29];
                            arg_e84[entity_9 * 3] = 0x3f800000;
                        }
                    }

                    return_addr_7 = return_addr;
                    flag_10_1 = i_6 + 1 <= return_addr_7;
                    i_6 += 1;
                    arg_20 = arg_20 + arg_10;
                } while (flag_10_1);
                arg_24 = dest_val[3];
                arg_20 = dest_val[2];
                arg_18 = arg_18 + arg_10;
                flag_3_1 = context + 1 <= return_addr_7;
                context += 1;
                item_8_1 += 0xd;
            } while (flag_3_1);
            return_addr_1 = return_addr;
        }

        if (arg_c)
        {
            if (return_addr_1 >= 1)
            {
                void arg_17e0;
                double* item_8_2 = &arg_17e0;
                void arg_f34;
                float* context_2 = &arg_f34;
                i_6 = (return_addr + 1) >> 1;
                bool flag_2_1;

                do
                {
                    void* const return_addr_2 = return_addr;

                    if (return_addr_2 > 2)
                    {
                        long double fpu_val_7_19 = dest_val[4];
                        double* temp_19 = item_8_2;
                        long double fpu_val_6_2 = 1.0f - fpu_val_7_19;
                        float* entity_11 = context_2;
                        uint32_t i_3 = (return_addr_2 - 1) >> 1;
                        uint32_t i;

                        do
                        {
                            *temp_19 = (temp_19[-0x27] + temp_19[0x27]) * fpu_val_6_2 * 0.5
                                + fpu_val_7_19 * *temp_19;
                            long double fpu_val_5_8 = fpu_val_7_19 * entity_11[1] + fpu_val_6_2;
                            context = fpu_val_5_8;
                            entity_11[1] = fpu_val_5_8;
                            long double fpu_val_5_9 = entity_11[-1];
                            long double f3_1 = 0.0f;
                            fpu_val_5_9 - f3_1;

                            if (!(*(&((fpu_val_5_9 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_5_9, f3_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_9 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                            {
                            label_52ea3b:
                                long double fpu_val_5_12 = context;
                                long double fpu_val_4_4 = *entity_11;
                                long double fpu_val_3_1 = entity_11[-1];
                                long double fpu_val_5_14 = 1.0 / sqrtl(fpu_val_3_1 * fpu_val_3_1
                                    + fpu_val_4_4 * fpu_val_4_4 + fpu_val_5_12 * fpu_val_5_12);
                                entity_11[-1] = entity_11[-1] * fpu_val_5_14;
                                *entity_11 = *entity_11 * fpu_val_5_14;
                                entity_11[1] = entity_11[1] * fpu_val_5_14;
                            }
                            else
                            {
                                long double fpu_val_5_10 = *entity_11;
                                long double f8_1 = 0.0f;
                                fpu_val_5_10 - f8_1;

                                if (!(*(&((fpu_val_5_10 < f8_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_5_10, f8_1) ? 1 : 0) << 0xa
                                        | (fpu_val_5_10 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52ea3b;

                                long double fpu_val_5_11 = context;
                                long double f15_1 = 0.0f;
                                fpu_val_5_11 - f15_1;

                                if (!(*(&((fpu_val_5_11 < f15_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_5_11, f15_1) ? 1 : 0) << 0xa
                                        | (fpu_val_5_11 == f15_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52ea3b;
                            }

                            temp_19 = &temp_19[6];
                            entity_11 = &entity_11[6];
                            i = i_3;
                            i_3 -= 1;
                        } while (i != 1);
                    }

                    context_2 = &context_2[0x4e];
                    flag_2_1 = i_6 != 1;
                    item_8_2 = &item_8_2[0x4e];
                    i_6 -= 1;
                } while (flag_2_1);
            }

            void* const return_addr_3 = return_addr;

            if (return_addr_3 > 2)
            {
                void arg_1900;
                double* temp_20 = &arg_1900;
                double* item_8_3 = &arg_1900;
                void arg_fc4;
                float* context_3 = &arg_fc4;
                i_6 = (return_addr_3 - 1) >> 1;
                bool flag_6_1;

                do
                {
                    void* const return_addr_4 = return_addr;

                    if (return_addr_4 >= 1)
                    {
                        long double fpu_val_7_21 = dest_val[4];
                        float* entity_15 = context_3;
                        long double fpu_val_6_5 = 1.0f - fpu_val_7_21;
                        uint32_t i_4 = (return_addr_4 + 1) >> 1;
                        uint32_t i_1;

                        do
                        {
                            *temp_20 =
                                (temp_20[-3] + temp_20[3]) * fpu_val_6_5 * 0.5 + fpu_val_7_21 * *temp_20;
                            long double fpu_val_5_23 = fpu_val_7_21 * entity_15[1] + fpu_val_6_5;
                            context = fpu_val_5_23;
                            entity_15[1] = fpu_val_5_23;
                            long double fpu_val_5_24 = entity_15[-1];
                            long double f7_1 = 0.0f;
                            fpu_val_5_24 - f7_1;

                            if (!(*(&((fpu_val_5_24 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_5_24, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_5_24 == f7_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                            {
                            label_52eb4d:
                                long double fpu_val_5_27 = context;
                                long double fpu_val_4_15 = *entity_15;
                                long double fpu_val_3_3 = entity_15[-1];
                                long double fpu_val_5_29 = 1.0 / sqrtl(fpu_val_4_15 * fpu_val_4_15
                                    + fpu_val_3_3 * fpu_val_3_3 + fpu_val_5_27 * fpu_val_5_27);
                                entity_15[-1] = entity_15[-1] * fpu_val_5_29;
                                *entity_15 = *entity_15 * fpu_val_5_29;
                                entity_15[1] = entity_15[1] * fpu_val_5_29;
                            }
                            else
                            {
                                long double fpu_val_5_25 = *entity_15;
                                long double f13_1 = 0.0f;
                                fpu_val_5_25 - f13_1;

                                if (!(*(&((fpu_val_5_25 < f13_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_5_25, f13_1) ? 1 : 0) << 0xa
                                        | (fpu_val_5_25 == f13_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52eb4d;

                                long double fpu_val_5_26 = context;
                                long double f21_1 = 0.0f;
                                fpu_val_5_26 - f21_1;

                                if (!(*(&((fpu_val_5_26 < f21_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_5_26, f21_1) ? 1 : 0) << 0xa
                                        | (fpu_val_5_26 == f21_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                    goto label_52eb4d;
                            }

                            temp_20 = &temp_20[6];
                            entity_15 = &entity_15[6];
                            i_1 = i_4;
                            i_4 -= 1;
                        } while (i_1 != 1);
                    }

                    context_3 = &context_3[0x4e];
                    temp_20 = &item_8_3[0x4e];
                    flag_6_1 = i_6 != 1;
                    item_8_3 = temp_20;
                    i_6 -= 1;
                } while (flag_6_1);
            }

            void* const return_addr_5 = return_addr;

            if (return_addr_5 >= 1)
            {
                uint32_t i_5 = (return_addr_5 + 1) >> 1;
                void arg_17c8;
                double* item_8_4 = &arg_17c8;
                void arg_f28;
                float* context_4 = &arg_f28;
                param_2 = i_5;
                i_6 = i_5;

                while (true)
                {
                    long double fpu_val_7_23 = dest_val[4];
                    double* temp_22 = item_8_4;
                    float* entity_16 = context_4;
                    long double fpu_val_6_8 = 1.0f - fpu_val_7_23;
                    uint32_t i_2;

                    do
                    {
                        *temp_22 =
                            (temp_22[-0x24] + temp_22[0x24]) * fpu_val_6_8 * 0.5 + fpu_val_7_23 * *temp_22;
                        long double fpu_val_5_38 = fpu_val_7_23 * entity_16[1] + fpu_val_6_8;
                        context = fpu_val_5_38;
                        entity_16[1] = fpu_val_5_38;
                        long double fpu_val_5_39 = entity_16[-1];
                        long double f6_1 = 0.0f;
                        fpu_val_5_39 - f6_1;

                        if (!(*(&((fpu_val_5_39 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_5_39, f6_1) ? 1 : 0) << 0xa
                            | (fpu_val_5_39 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                        {
                        label_52ec5f:
                            long double fpu_val_5_42 = context;
                            long double fpu_val_4_26 = *entity_16;
                            long double fpu_val_3_5 = entity_16[-1];
                            long double fpu_val_5_44 = 1.0 / sqrtl(fpu_val_3_5 * fpu_val_3_5
                                + fpu_val_4_26 * fpu_val_4_26 + fpu_val_5_42 * fpu_val_5_42);
                            entity_16[-1] = entity_16[-1] * fpu_val_5_44;
                            *entity_16 = *entity_16 * fpu_val_5_44;
                            entity_16[1] = entity_16[1] * fpu_val_5_44;
                        }
                        else
                        {
                            long double fpu_val_5_40 = *entity_16;
                            long double f12_1 = 0.0f;
                            fpu_val_5_40 - f12_1;

                            if (!(*(&((fpu_val_5_40 < f12_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_5_40, f12_1) ? 1 : 0) << 0xa
                                    | (fpu_val_5_40 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                goto label_52ec5f;

                            long double fpu_val_5_41 = context;
                            long double f19_1 = 0.0f;
                            fpu_val_5_41 - f19_1;

                            if (!(*(&((fpu_val_5_41 < f19_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_5_41, f19_1) ? 1 : 0) << 0xa
                                    | (fpu_val_5_41 == f19_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
                                goto label_52ec5f;
                        }

                        temp_22 = &temp_22[6];
                        entity_16 = &entity_16[6];
                        i_2 = i_5;
                        i_5 -= 1;
                    } while (i_2 != 1);
                    context_4 = &context_4[0x4e];
                    bool flag_9_1 = i_6 != 1;
                    item_8_4 = &item_8_4[0x4e];
                    i_6 -= 1;

                    if (!flag_9_1)
                        break;

                    i_5 = param_2;
                }
            }
        }

        void* const return_addr_6 = return_addr;
        double* item_24;
        int32_t arg_148[0x2];

        if (return_addr_6 >= 0)
        {
            context = 0.0f;
            void* item_8_5 = return_addr_6 + 1;
            bool flag_4_1;

            do
            {
                int32_t context_5 = 0;
                bool flag_5_1;

                do
                {
                    if (!arg_c)
                    {
                        int32_t data_48 = context + context_5;
                        int32_t dest_4 = *(context + 0x4a6c);
                        memset(&(&arg_148)[data_48], 0, 8);
                        (&saved_target)[data_48 * 3 + 0x1a9] = dest_4;
                        int32_t temp_28 = *(context + 0x4a74);
                        (&saved_target)[data_48 * 3 + 0x1aa] = *(context + 0x4a70);
                        (&saved_target)[data_48 * 3 + 0x1ab] = temp_28;
                    }
                    else
                    {
                        int32_t source_10 = context + context_5;
                        Light_RenderLensflare_12(context, &(&saved_target)[source_10 * 3 + 0x1a9],
                            &(&saved_target)[source_10 * 3 + 0x3a4]);
                        item_24 = &(&saved_target)[source_10 * 3 + 0x3a4];
                        Light_CalculateAttenuation_12(context, &(&item_24)[source_10 * 2 + 0x5b],
                            &(&item_24)[source_10 * 6 + 0x5a3], item_24);
                    }

                    context_5 += 1;
                    flag_5_1 = context_5 <= return_addr;
                    arg_18 = arg_18 + arg_10;
                } while (flag_5_1);
                int32_t temp_29 = param_2[1];
                arg_18 = *param_2;
                arg_1c = temp_29;
                flag_4_1 = item_8_5 != 1;
                arg_20 = arg_20 + arg_10;
                context += 0xd;
                item_8_5 -= 1;
            } while (flag_4_1);
        }

        result = 0.0f;
        context = 0.0f;

        if (return_addr > 0)
        {
            while (true)
            {
                i_6 = 0;
                void* const return_addr_9;
                bool flag_12_1;

                do
                {
                    param_2 = nullptr;
                    int32_t item_8_6 = 0;
                    void* const return_addr_8;
                    uint32_t i_8;

                    if (context)
                    {
                        i_8 = i_6;
                        return_addr_8 = return_addr;
                    }
                    else
                    {
                        return_addr_8 = return_addr;
                        i_8 = i_6;
                        item_8_6 = 0x10;
                        int32_t data_54;
                        int32_t temp_31;
                        temp_31 = HIGHD(return_addr_8);
                        data_54 = LOWD(return_addr_8);
                        int32_t temp_32 = 0;
                        temp_32 = i_8 >= (data_54 - temp_31) >> 1;
                        void* temp_33 = temp_32 - 1;
                        temp_33 &= 0x20;
                        param_2 = temp_33 + 0x100;
                    }

                    if (!i_8)
                    {
                        int32_t data_57 = item_8_6;
                        data_57 |= 4;
                        item_8_6 = data_57;
                        int32_t data_59;
                        int32_t temp_35;
                        temp_35 = HIGHD(return_addr_8);
                        data_59 = LOWD(return_addr_8);
                        int32_t* data_62 = param_2;

                        if (context >= (data_59 - temp_35) >> 1)
                            *(&data_62 + 1) |= 1;
                        else
                            data_62 |= 0x80;

                        param_2 = data_62;
                    }

                    if (context == return_addr_8 - 1)
                    {
                        int32_t data_63 = item_8_6;
                        data_63 |= 8;
                        item_8_6 = data_63;
                        int32_t data_65;
                        int32_t temp_36;
                        temp_36 = HIGHD(return_addr_8);
                        data_65 = LOWD(return_addr_8);
                        int32_t* data_68 = param_2;

                        if (i_8 >= (data_65 - temp_36) >> 1)
                            data_68 |= 0x80;
                        else
                            data_68 |= 0x40;

                        param_2 = data_68;
                    }

                    if (i_8 == return_addr_8 - 1)
                    {
                        int32_t data_70;
                        int32_t temp_37;
                        temp_37 = HIGHD(return_addr_8);
                        data_70 = LOWD(return_addr_8);
                        int32_t* data_73 = param_2;
                        item_8_6 |= 2;

                        if (context >= (data_70 - temp_37) >> 1)
                            data_73 |= 0x20;
                        else
                            data_73 |= 0x40;

                        param_2 = data_73;
                    }

                    int32_t temp_38 = result * 0xd + i_6;
                    int32_t data_76 = temp_38 * 0xc;
                    double arg_40[0x3];
                    memcpy(&arg_40, &(&saved_target)[temp_38 * 6 + 0x59f], 0x18);
                    void arg_58;
                    memcpy(&arg_58, &(&saved_target)[temp_38 * 6 + 0x5ed], 0x18);
                    void arg_70;
                    memcpy(&arg_70, &(&saved_target)[temp_38 * 6 + 0x5a5], 0x18);
                    int32_t arg_690[0x3];
                    int32_t arg_88 = (&arg_690)[temp_38][0];
                    int32_t arg_8c = (&saved_target)[temp_38 * 3 + 0x1aa];
                    int32_t arg_90 = (&saved_target)[temp_38 * 3 + 0x1ab];
                    int32_t arg_94 = (&saved_target)[temp_38 * 3 + 0x1d0];
                    int32_t arg_98 = (&saved_target)[temp_38 * 3 + 0x1d1];
                    int32_t arg_9c = (&saved_target)[temp_38 * 3 + 0x1d2];
                    int32_t arg_a0 = (&saved_target)[temp_38 * 3 + 0x1ac];
                    int32_t arg_a4 = (&saved_target)[temp_38 * 3 + 0x1ad];
                    int32_t arg_a8 = (&saved_target)[temp_38 * 3 + 0x1ae];
                    int32_t arg_ac;
                    int32_t arg_b0;
                    int32_t arg_b4;
                    int32_t arg_b8;
                    int32_t arg_bc;
                    int32_t arg_c0;
                    int32_t arg_150[0x18];
                    arg_154;
                    int32_t arg_1b0[0x2];
                    arg_1b4;

                    if (*(context + 0x4ac0) && arg_c)
                    {
                        arg_ac = (&arg_148)[temp_38][0];
                        arg_14c;
                        arg_b0 = *(&arg_14c + (temp_38 << 3));
                        arg_b4 = (&arg_1b0)[temp_38][0];
                        arg_b8 = *(&arg_1b4 + (temp_38 << 3));
                        arg_bc = arg_150[temp_38 * 2];
                        arg_c0 = *(&arg_154 + (temp_38 << 3));
                    }

                    int32_t data_84 = param_2[6];
                    int32_t arg_c8;
                    int32_t arg_cc;

                    if (!(data_84 & item_8_6 & 0x14))
                    {
                        double (* item_18_5)[0x3] = &arg_40;
                        arg_c8 = 0;
                        arg_cc = *(context + 0x4aa0);
                        Terrain_ConnectGraphNode(item_18_5);

                        if (*(context + 0x4ac0) && arg_c)
                        {
                            int32_t data_93 = *(context + 0x4aa4);
                            double (* item_18_6)[0x3] = &arg_40;
                            arg_c8 = 1;
                            arg_cc = data_93;
                            Terrain_ConnectGraphNode(item_18_6);
                        }
                    }
                    else
                    {
                        void* dest_8 = 2;

                        if (arg_c && data_84 & param_2 & 0x1e0)
                            dest_8 = 4;

                        arg_cc = *(context + 0x4aa0);
                        void* item_20_3 = nullptr;
                        item_24 = &arg_40;
                        arg_c8 = 0;
                        Light_SetLightColor_12(context, param_2, item_24, item_20_3, dest_8, arg_c);

                        if (*(context + 0x4ac0) && arg_c)
                        {
                            arg_cc = *(context + 0x4aa4);
                            void* const item_20_4 = nullptr;
                            item_24 = &arg_40;
                            arg_c8 = 1;
                            Light_SetLightColor_12(context, param_2, item_24, item_20_4, dest_8, arg_c);
                        }
                    }

                    memcpy(&arg_40, &(&saved_target)[temp_38 * 6 + 0x5a5], 0x18);
                    memcpy(&arg_58, &(&saved_target)[temp_38 * 6 + 0x5f3], 0x18);
                    memcpy(&arg_70, &(&saved_target)[temp_38 * 6 + 0x5ed], 0x18);

                    if (!*(context + 0x4ac8))
                    {
                        void arg_69c;
                        arg_88 = *(&arg_69c + data_76);
                        void arg_6a0;
                        arg_8c = *(&arg_6a0 + data_76);
                        int32_t arg_6a4[0x1f6];
                        arg_90 = arg_6a4[temp_38 * 3];
                        arg_94 = (&saved_target)[temp_38 * 3 + 0x1d3];
                        arg_98 = (&saved_target)[temp_38 * 3 + 0x1d4];
                        arg_9c = (&saved_target)[temp_38 * 3 + 0x1d5];
                        arg_a0 = (&saved_target)[temp_38 * 3 + 0x1d0];
                        arg_a4 = (&saved_target)[temp_38 * 3 + 0x1d1];
                        arg_a8 = (&saved_target)[temp_38 * 3 + 0x1d2];
                    }
                    else
                    {
                        arg_88 = 0x3f800000;
                        arg_8c = 0x3f800000;
                        arg_90 = 0;
                        arg_94 = 0x3f800000;
                        arg_98 = 0x3f800000;
                        arg_9c = 0;
                        arg_a0 = 0x3f800000;
                        arg_a4 = 0x3f800000;
                        arg_a8 = 0;
                    }

                    if (*(context + 0x4ac0) && arg_c)
                    {
                        arg_ac = arg_150[temp_38 * 2];
                        arg_b0 = *(&arg_154 + (temp_38 << 3));
                        int32_t arg_1b8[0x136];
                        arg_b4 = arg_1b8[temp_38 * 2];
                        arg_1bc;
                        arg_b8 = *(&arg_1bc + (temp_38 << 3));
                        arg_bc = (&arg_1b0)[temp_38][0];
                        arg_c0 = *(&arg_1b4 + (temp_38 << 3));
                    }

                    int32_t data_104 = param_2[6];

                    if (!(data_104 & item_8_6 & 0xa))
                    {
                        double (* item_18_9)[0x3] = &arg_40;
                        arg_c8 = 0;
                        arg_cc = *(context + 0x4aa0);
                        Terrain_ConnectGraphNode(item_18_9);

                        if (*(context + 0x4ac0) && arg_c)
                        {
                            int32_t temp_56 = *(context + 0x4aa4);
                            double (* item_18_10)[0x3] = &arg_40;
                            arg_c8 = 1;
                            arg_cc = temp_56;
                            Terrain_ConnectGraphNode(item_18_10);
                        }
                    }
                    else
                    {
                        void* source_28 = 2;

                        if (arg_c && data_104 & param_2 & 0x1e0)
                            source_28 = 4;

                        float* dest_9 = context;
                        arg_cc = dest_9[0x12a8];
                        void* const item_20_5 = nullptr;
                        item_24 = &arg_40;
                        arg_c8 = 0;
                        Light_SetLightColor_12(dest_9, param_2, item_24, item_20_5, source_28, arg_c);

                        if (dest_9[0x12b0] && arg_c)
                        {
                            arg_cc = dest_9[0x12a9];
                            void* const item_20_6 = nullptr;
                            item_24 = &arg_40;
                            arg_c8 = 1;
                            Light_SetLightColor_12(dest_9, param_2, item_24, item_20_6, source_28, arg_c);
                        }
                    }

                    return_addr_9 = return_addr;
                    flag_12_1 = i_6 + 1 < return_addr_9;
                    i_6 += 1;
                } while (flag_12_1);
                result = context + 1;
                context = result;

                if (result >= return_addr_9)
                    break;

                result = context;
            }
        }
    }

    return result;
}
