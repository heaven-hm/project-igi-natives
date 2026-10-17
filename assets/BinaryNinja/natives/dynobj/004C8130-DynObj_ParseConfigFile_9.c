// Original IGI.EXE function: DynObj_ParseConfigFile_9 (VA 0x004C8130; static CFG gate PASS, CFG score 0.905).
#include "DynObj_ParseConfigFile_9.h"
uint32_t DynObj_ParseConfigFile_9(float context, double* param_2, void* const param_3 , float param_4, double* param_5, double* param_6 , char param_7 )

{
    double* flagP;
    double* item_4 = flagP;
    Camera_UpdateTransform_5(0x2574);
    int32_t* arg_184;
    int32_t* context_val = &arg_184;
    int32_t arg_48 = 0xffff;
    DynObj_InsertHashItem_12(context, param_6);
    uint32_t result = param_2;
    uint32_t result_1 = result;

    if (*(context + ((result + param_6 * 0xfe) << 1) + 0x118))
    {
        void* const source_1 = param_3;
        void arg_56c;
        void arg_1370;

        if (param_5 > 0)
        {
            double* temp_1 = param_4;
            double* entity_3 = source_1 + 8;
            void* dest_1 = &arg_56c;
            double* source_3 = temp_1 - param_3;
            float* data_2 = &arg_1370;
            item_4 = param_5;
            bool flag_2_1;

            do
            {
                long double fpu_val_7_2 = *temp_1 - entity_3[-1];
                temp_1 = &temp_1[3];
                data_2[-1] = fpu_val_7_2;
                *data_2 = *(source_3 + entity_3) - *entity_3;
                long double fpu_val_7_6 = temp_1[-1] - entity_3[1];
                data_2[1] = fpu_val_7_6;
                entity_3 = &entity_3[3];
                long double fpu_val_6_1 = *data_2;
                long double fpu_val_5_1 = data_2[-1];
                data_2 = &data_2[3];
                dest_1 += 4;
                flag_2_1 = item_4 != 1;
                item_4 -= 1;
                *(dest_1 - 4) =
                    1.0f / (fpu_val_5_1 * fpu_val_5_1 + fpu_val_7_6 * fpu_val_7_6 + fpu_val_6_1 * fpu_val_6_1);
            } while (flag_2_1);
            source_1 = param_3;
        }

        long double fpu_val_7_9 = -1.7976931348623157e+308;
        float data_3 = param_5;
        int32_t arg_78 = 0xffffffff;
        double arg_ac = fpu_val_7_9;
        int32_t arg_7c = 0x7fefffff;
        int32_t arg_80 = 0xffffffff;
        int32_t arg_84 = 0x7fefffff;
        int32_t arg_88 = 0xffffffff;
        int32_t arg_8c = 0x7fefffff;
        int32_t arg_9c = 0xffffffff;
        int32_t arg_a0 = 0xffefffff;
        int32_t arg_a4 = 0xffffffff;
        int32_t arg_a8 = 0xffefffff;
        double arg_24;
        float arg_30;
        int32_t* arg_3c;
        int32_t arg_4c;
        double arg_94;
        double arg_b4;
        void arg_76c;
        void arg_774;
        void arg_196c;
        void arg_1974;

        if (data_3 > 0)
        {
            double* entity_4 = source_1 + 8;
            item_4 = &arg_1974 - source_1;
            double* temp_4 = param_4 - source_1;
            arg_30 = data_3;
            double* source_8 = temp_4;
            double* temp_7 = nullptr;
            bool flag_15_1;

            do
            {
                long double fpu_val_6_3 = entity_4[-1];
                long double f2_1 = *(temp_7 + param_4);
                fpu_val_6_3 - f2_1;
                long double fpu_val_6_4;

                if (!(*(&((fpu_val_6_3 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_3, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_3 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    fpu_val_6_4 = *(temp_7 + param_4);
                else
                    fpu_val_6_4 = entity_4[-1];

                arg_24 = fpu_val_6_4;
                *(&arg_196c + temp_7) = fpu_val_6_4;
                long double fpu_val_6_5 = *entity_4;
                long double fpu_val_5_3 = *(source_8 + entity_4);
                fpu_val_5_3 - fpu_val_6_5;
                long double fpu_val_6_6;

                if (*(&((fpu_val_5_3 < fpu_val_6_5 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_3, fpu_val_6_5) ? 1 : 0) << 0xa
                        | (fpu_val_5_3 == fpu_val_6_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    fpu_val_6_6 = *(source_8 + entity_4);
                else
                    fpu_val_6_6 = *entity_4;

                arg_b4 = fpu_val_6_6;
                *(item_4 + entity_4 - 8) = fpu_val_6_6;
                long double fpu_val_6_7 = entity_4[1];
                long double fpu_val_5_4 = *(temp_7 + param_4 + 0x10);
                fpu_val_5_4 - fpu_val_6_7;
                long double fpu_val_6_8;

                if (*(&((fpu_val_5_4 < fpu_val_6_7 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_4, fpu_val_6_7) ? 1 : 0) << 0xa
                        | (fpu_val_5_4 == fpu_val_6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    fpu_val_6_8 = *(temp_7 + param_4 + 0x10);
                else
                    fpu_val_6_8 = entity_4[1];

                arg_94 = fpu_val_6_8;
                *(item_4 + entity_4) = fpu_val_6_8;
                long double fpu_val_6_9 = entity_4[-1];
                long double f3_1 = *(temp_7 + param_4);
                fpu_val_6_9 - f3_1;
                long double fpu_val_6_10;

                if (*(&((fpu_val_6_9 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_9, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_9 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    fpu_val_6_10 = *(temp_7 + param_4);
                else
                    fpu_val_6_10 = entity_4[-1];

                *(&arg_76c + temp_7) = fpu_val_6_10;
                long double fpu_val_5_5 = *entity_4;
                long double fpu_val_4_5 = *(source_8 + entity_4);
                fpu_val_4_5 - fpu_val_5_5;
                long double fpu_val_5_6;

                if (!(*(&((fpu_val_4_5 < fpu_val_5_5 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_4_5, fpu_val_5_5) ? 1 : 0) << 0xa
                        | (fpu_val_4_5 == fpu_val_5_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    fpu_val_5_6 = *(source_8 + entity_4);
                else
                    fpu_val_5_6 = *entity_4;

                arg_4c = fpu_val_5_6;
                *(&arg_76c - source_1 + entity_4) = fpu_val_5_6;
                long double fpu_val_5_7 = entity_4[1];
                long double fpu_val_4_6 = *(temp_7 + param_4 + 0x10);
                fpu_val_4_6 - fpu_val_5_7;
                long double fpu_val_5_8;

                if (!(*(&((fpu_val_4_6 < fpu_val_5_7 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_4_6, fpu_val_5_7) ? 1 : 0) << 0xa
                        | (fpu_val_4_6 == fpu_val_5_7 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    fpu_val_5_8 = *(temp_7 + param_4 + 0x10);
                else
                    fpu_val_5_8 = entity_4[1];

                arg_3c = fpu_val_5_8;
                *(&arg_774 - source_1 + entity_4) = fpu_val_5_8;
                long double fpu_val_5_9 = arg_24;
                long double f6_1 = arg_78;
                fpu_val_5_9 - f6_1;

                if (*(&((fpu_val_5_9 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_5_9, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_5_9 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                {
                    arg_7c = *(&arg_24 + 4);
                    source_8 = temp_4;
                    arg_78 = arg_24;
                }

                long double fpu_val_5_10 = arg_b4;
                long double f8_1 = 2.1219957904712067e-314;
                fpu_val_5_10 - f8_1;

                if (*(&((fpu_val_5_10 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_10, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_5_10 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    arg_80 = arg_b4;

                long double fpu_val_5_12 = arg_94;
                long double f10_1 = 2.1219957904712067e-314;
                fpu_val_5_12 - f10_1;

                if (*(&((fpu_val_5_12 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_5_12, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_5_12 == f10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    arg_88 = arg_94;

                long double f12_1 = arg_9c;
                fpu_val_6_10 - f12_1;

                if (!(*(&((fpu_val_6_10 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_10, f12_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_10 == f12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    arg_9c = fpu_val_6_10;

                long double fpu_val_6_12 = arg_4c;
                long double f15_1 = 2.1219957904712067e-314;
                fpu_val_6_12 - f15_1;

                if (!(*(&((fpu_val_6_12 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_12, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_12 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    arg_a4 = arg_4c;

                long double fpu_val_6_14 = arg_3c;
                fpu_val_6_14 - fpu_val_7_9;

                if (!(*(&((fpu_val_6_14 < fpu_val_7_9 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_14, fpu_val_7_9) ? 1 : 0) << 0xa
                        | (fpu_val_6_14 == fpu_val_7_9 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    fpu_val_7_9 = arg_3c;

                temp_7 = &temp_7[3];
                entity_4 = &entity_4[3];
                flag_15_1 = arg_30 != 1;
                arg_30 -= 1;
            } while (flag_15_1);
            arg_ac = fpu_val_7_9;
        }

        int32_t data_16 = *(context + 0xde0);
        double* arg_64 = arg_78 + data_16;
        int32_t entity_7 = *(context + 0xde4);
        int32_t temp_11 = *(context + 0xde8);
        int32_t entity_10 = *(result_1 + 0xa969e0);

        if (entity_10 != 0xffffffff)
            arg_48 = 1 << (entity_10 & 0x1f);

        DynObj_LookupHashItem_12(context, param_6);
        int32_t data_19 = *(context + (param_6 << 2) + 0x28);
        int32_t arg_114;
        memcpy(&arg_114, data_19, 0x40);
        int32_t entity_12 = *(context + (param_6 << 2) + 0xd0);
        int32_t arg_1c = entity_12;
        arg_4c = arg_114;

        if (entity_12 == 0x1e)
        {
            param_5 = param_7;
            memcpy(&arg_114, data_19, 0x40);
            param_7 = 0;
            int32_t i = 0;
            item_4 = 7;
            void arg_13c;
            int32_t* data_20 = &arg_13c;
            void arg_120;
            int32_t* dest_8 = &arg_120;

            do
            {
                int32_t entity_15 = *dest_8;
                *dest_8 = *data_20;
                *data_20 = entity_15;
                dest_8 = &dest_8[1];
                data_20 -= 4;
                char entity_18 = param_7 | (param_5 >> (i & 0x1f) & 1) << (item_4 & 0x1f);
                i += 1;
                param_7 = entity_18;
                item_4 -= 1;
            } while (i < 4);
        }

        param_2 = 1;
        long double fpu_val_7_11 = *(context + 0xde0);
        arg_184 = &arg_114;
        void* data_21 = param_6 * 3;
        char arg_18a = 0;
        int32_t source_17 = (fpu_val_7_11 + *(context + (data_21 << 3) + 0x40));
        int32_t arg_18c = source_17;
        int32_t dest_9 = (*(context + 0xde4) + *(context + ((param_6 * 3 + 9) << 3)));
        int32_t arg_190 = dest_9;
        result = arg_9c + data_16 < source_17;
        int64_t arg_c = *(context + 0xde8) + *(context + (data_21 << 3) + 0x50);
        result = *(result + 0x548160);
        int32_t entity_22 = arg_c;
        result &= param_7;
        int32_t arg_194 = entity_22;
        result &= *((arg_64 > source_17) + 0x548164);
        result &= *((2.1219957904712067e-314 + entity_7 < dest_9) + 0x548168);
        result &= *((2.1219957904712067e-314 + entity_7 > dest_9) + 0x54816c);
        result &= *((fpu_val_7_9 + temp_11 < entity_22) + 0x548170);
        result &= *((2.1219957904712067e-314 + temp_11 > entity_22) + 0x548174);
        char arg_189 = result;

        if (!(result & 0xf))
        {
            if (!(result & 0x30))
            {
                result u>>= 6;
                result &= 1;
                result += 6;
            }
            else
            {
                result u>>= 4;
                result &= 1;
                result += 4;
            }
        }
        else if (!(result & 3))
        {
            result u>>= 2;
            result &= 1;
            result += 2;
        }
        else
            result &= 1;

        uint32_t result_2 = result_1;
        int16_t entity_25 = arg_48;
        result ^= 1;
        int32_t temp_34 = arg_1c - 1;
        char arg_188 = result;
        int32_t arg_38 = temp_34;

        while (true)
        {
            result = *(context_val + 5);
            int32_t* arg_2c;

            if (result)
            {
                result = context_val[1];
                uint32_t dest_12 = result;
                arg_b4 = result;
                void* source_20 = *(*context_val + (dest_12 << 2) + 0xc);
                uint8_t data_34 = *(context_val + 5) ^ 1 << (dest_12 & 0x1f);
                *(context_val + 5) = data_34;

                if (data_34)
                {
                    if (!(data_34 & 0xf))
                    {
                        if (!(data_34 & 0x30))
                            context_val[1] = (*(context_val + 5) >> 6 & 1) + 6;
                        else
                            context_val[1] = (*(context_val + 5) >> 4 & 1) + 4;
                    }
                    else if (!(data_34 & 3))
                        context_val[1] = (*(context_val + 5) >> 2 & 1) + 2;
                    else
                        context_val[1] = data_34 & 1;

                    context_val[1] ^= 1;
                }

                arg_1c -= 1;
                temp_34 = context_val;
                param_2 += 1;
                uint8_t data_37 = *(source_20 + 0x30);
                arg_38 -= 1;
                arg_4c u>>= 1;
                context_val[5] = source_20;
                *(context_val + 0x19) = data_37;
                arg_2c = &context_val[5];

                if (!*(temp_34 + 6))
                {
                    uint8_t item_5_1 = data_37;
                    *(context_val + 0x1a) = 0;

                    if (data_37)
                    {
                        uint32_t data_41 = arg_b4 * 0xc;
                        context_val[7] = (*(data_41 + 0x548000) << (arg_1c & 0x1f)) + *(temp_34 + 8);
                        int32_t data_43 = *(data_41 + 0x548008) << (arg_1c & 0x1f);
                        context_val[8] = (*(data_41 + &g_548004) << (arg_1c & 0x1f)) + *(temp_34 + 0xc);
                        int32_t data_44 = data_43 + *(temp_34 + 0x10);
                        int32_t entity_50 = context_val[7];
                        arg_94 = entity_50;
                        context_val[9] = data_44;
                        double* context_3 = context_val[8];
                        double arg_fc = entity_50 - *(context + 0xde0);
                        double arg_104 = context_3 - *(context + 0xde4);
                        int32_t arg_e8 = 0;
                        double arg_10c = data_44 - *(context + 0xde8);
                        long double fpu_val_7_32 = (arg_4c >> 1);
                        param_6 = nullptr;
                        item_4 = &g_548004;
                        arg_3c = source_20 + 0xc;
                        arg_30 = fpu_val_7_32;
                        param_4 = fpu_val_7_32 * 1.73205078f;
                        uint8_t context_5;
                        bool flag_12_1;

                        do
                        {
                            double* entity_52 = param_6;
                            context_5 = item_5_1;
                            temp_34 = 1 << (entity_52 & 0x1f);

                            if (context_5 & temp_34)
                            {
                                temp_34 = arg_48;
                                void* data_49 = *arg_3c;
                                entity_52 = *(data_49 + 0x3a);
                                entity_52 |= *(data_49 + 0x38);

                                if (!(entity_52 & temp_34))
                                {
                                label_4c8f75:
                                    temp_34 = 1;
                                    temp_34 = 1 << (param_6 & 0x1f);
                                    temp_34 = ~temp_34;
                                    context_5 &= temp_34;
                                    item_5_1 = context_5;
                                }
                                else
                                {
                                    int32_t source_22 = 0;
                                    context = 0.0f;
                                    double arg_c4 = ((param_6 & 1) * 2 - 1) * arg_30 + arg_fc;
                                    double arg_cc = ((param_6 & 2) - 1) * arg_30 + arg_104;
                                    double arg_d4 = ((param_6 >> 1 & 2) - 1) * arg_30 + arg_10c;

                                    if (context_3 <= 0)
                                    {
                                        context_5 &= ~(1 << (param_6 & 0x1f));
                                        item_5_1 = context_5;
                                    }
                                    else
                                    {
                                        float* context_6 = &arg_56c;
                                        arg_24 = &arg_196c - param_3;
                                        float* temp_48 = &arg_1370;
                                        entity_52 = param_3 + 0x10;
                                        int32_t dest_25 = 0;

                                        do
                                        {
                                            if (context)
                                                goto label_4c8d2f;

                                            long double fpu_val_7_44 = arg_c4 - entity_52[-2];
                                            long double fpu_val_6_21 = arg_cc - entity_52[-1];
                                            long double fpu_val_5_15 = arg_d4 - *entity_52;
                                            arg_64 = fpu_val_5_15;
                                            double arg_ec = fpu_val_6_21;
                                            double arg_f4 = fpu_val_7_44;
                                            long double fpu_val_7_47 = fpu_val_5_15 * temp_48[1]
                                                + fpu_val_7_44 * temp_48[-1] + fpu_val_6_21 * *temp_48;
                                            long double fpu_val_6_27 = arg_f4 * arg_f4
                                                + arg_ec * arg_ec + arg_64 * arg_64
                                                - fpu_val_7_47 * fpu_val_7_47 * *context_6;
                                            long double fpu_val_5_29 = param_4 * param_4;
                                            fpu_val_5_29 - fpu_val_6_27;

                                            if (!(*(&((fpu_val_5_29 < fpu_val_6_27 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_5_29, fpu_val_6_27) ? 1 : 0) << 0xa
                                                | (fpu_val_5_29 == fpu_val_6_27 ? 1 : 0) << 0xe | 0x3800)
                                                + 1) & 1))
                                            {
                                                long double fpu_val_7_50 = param_4 + arg_c4;
                                                long double f17_1 = *(&arg_196c + dest_25);
                                                fpu_val_7_50 - f17_1;

                                                if (!(*(&((fpu_val_7_50 < f17_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_50, f17_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_50 == f17_1 ? 1 : 0) << 0xe) + 1)
                                                    & 1))
                                                {
                                                    long double fpu_val_7_52 = param_4 + arg_cc;
                                                    long double f18_1 = *(&arg_1974 + dest_25);
                                                    fpu_val_7_52 - f18_1;

                                                    if (!(*(&((fpu_val_7_52 < f18_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_52, f18_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_7_52 == f18_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1))
                                                    {
                                                        long double fpu_val_7_54 = param_4 + arg_d4;
                                                        long double f20_1 = *(arg_24 + entity_52);
                                                        fpu_val_7_54 - f20_1;

                                                        if (!(*(&(
                                                            (fpu_val_7_54 < f20_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_54, f20_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_7_54 == f20_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1))
                                                        {
                                                            long double fpu_val_7_56 = arg_c4 - param_4;
                                                            long double f21_1 =
                                                                *(&arg_76c + dest_25);
                                                            fpu_val_7_56 - f21_1;

                                                            if (*(&(
                                                                (fpu_val_7_56 < f21_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_56, f21_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_56 == f21_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x41)
                                                            {
                                                                long double fpu_val_7_58 = arg_cc - param_4;
                                                                long double f22_1 =
                                                                    *(&arg_774 + dest_25);
                                                                fpu_val_7_58 - f22_1;

                                                                if (*(&(
                                                                    (fpu_val_7_58 < f22_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(fpu_val_7_58, f22_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (fpu_val_7_58 == f22_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
                                                                    long double fpu_val_7_60 = arg_d4 - param_4;
                                                                    long double f23_1 =
                                                                        *(entity_52 + &arg_76c - param_3);
                                                                    fpu_val_7_60 - f23_1;

                                                                    if (*(&(
                                                                            (fpu_val_7_60 < f23_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(fpu_val_7_60, f23_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (fpu_val_7_60 == f23_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        context = 1.40129846e-45.0f;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            source_22 += 1;
                                            temp_48 = &temp_48[3];
                                            context_6 = &context_6[1];
                                            entity_52 = &entity_52[3];
                                            dest_25 += 0x18;
                                        } while (source_22 < context_3);

                                        if (context)
                                        {
                                        label_4c8d2f:
                                            context_5 = item_5_1;
                                        }
                                        else
                                        {
                                            context_5 = item_5_1 & ~(1 << (param_6 & 0x1f));
                                            item_5_1 = context_5;
                                        }
                                    }

                                    temp_34 = *(*arg_3c + 0x3c);

                                    if (temp_34)
                                    {
                                        long double fpu_val_7_62 = arg_9c - arg_78;
                                        long double f14_1 = 4.0;
                                        fpu_val_7_62 - f14_1;
                                        long double fpu_val_6_29;
                                        long double f16_1;

                                        if (*(&((fpu_val_7_62 < f14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_62, f14_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_62 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41)
                                        {
                                            fpu_val_6_29 =
                                                2.1219957904712067e-314 - 2.1219957904712067e-314;
                                            f16_1 = 4.0;
                                            fpu_val_6_29 - f16_1;
                                        }

                                        if (!(*(&((fpu_val_7_62 < f14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_62, f14_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_62 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41) || !(*(&((fpu_val_6_29 < f16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_6_29, f16_1) ? 1 : 0) << 0xa
                                            | (fpu_val_6_29 == f16_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41))
                                        {
                                            char entity_64 = arg_38;
                                            param_3 = nullptr;
                                            arg_24 = (*(item_4 - 4) << (entity_64 & 0x1f))
                                                - *(context + 0xde0) + arg_94;
                                            long double fpu_val_6_39 = arg_24;
                                            arg_24 = (*item_4 << (entity_64 & 0x1f)) - *(context + 0xde4)
                                                + context_3;
                                            arg_c = **arg_3c;
                                            context = arg_c;
                                            return_addr = *(temp_34 + 8) * 0.5f / context;
                                            int32_t data_79;
                                            data_79 = SoundSys_LoadSoundDef_3(temp_34,
                                                (arg_78 - fpu_val_6_39 + context) * return_addr,
                                                (2.1219957904712067e-314 - arg_24 + context)
                                                    * return_addr,
                                                return_addr * fpu_val_7_62,
                                                (2.1219957904712067e-314 - 2.1219957904712067e-314)
                                                    * return_addr);

                                            if (!data_79)
                                                goto label_4c8f75;
                                        }
                                        else
                                        {
                                            int32_t arg_5c = 0;
                                            int32_t data_67 = *(context + 0xde0);
                                            char entity_60 = arg_38;
                                            arg_24 =
                                                (*(item_4 - 4) << (entity_60 & 0x1f)) - data_67 + arg_94;
                                            long double fpu_val_7_64 = arg_24;
                                            arg_24 = (*item_4 << (entity_60 & 0x1f)) - data_67 + context_3;
                                            int32_t data_68 = *(temp_34 + 8);
                                            long double fpu_val_6_30 = arg_24;
                                            arg_24 = data_68;
                                            context = **arg_3c;
                                            return_addr = arg_24 * 0.5f / context;
                                            arg_64 = (arg_78 - fpu_val_7_64 + context) * return_addr;
                                            entity_52 = arg_64;
                                            arg_64 = (2.1219957904712067e-314 - fpu_val_6_30 + context)
                                                * return_addr;

                                            if (entity_52 >= data_68 || arg_64 >= data_68)
                                                context_5 = item_5_1;
                                            else
                                            {
                                                int32_t data_69;
                                                data_69 = SoundSys_InitSoundSys_3(temp_34, entity_52, arg_64);

                                                if (data_69)
                                                    context_5 = item_5_1;
                                                else
                                                {
                                                    temp_34 = 1;
                                                    temp_34 = 1 << (param_6 & 0x1f);
                                                    temp_34 = ~temp_34;
                                                    context_5 = item_5_1 & temp_34;
                                                    item_5_1 = context_5;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            flag_12_1 = item_4 + 0xc < 0x548064;
                            param_6 += 1;
                            arg_3c = &arg_3c[1];
                            item_4 += 0xc;
                        } while (flag_12_1);
                        *(arg_2c + 5) = context_5;

                        if (context_5)
                        {
                            if (!(context_5 & 0xf))
                            {
                                if (!(context_5 & 0x30))
                                    context_5 = (context_5 >> 6 & 1) + 6;
                                else
                                    context_5 = (context_5 >> 4 & 1) + 4;
                            }
                            else if (!(context_5 & 3))
                                context_5 = (context_5 >> 2 & 1) + 2;
                            else
                                context_5 &= 1;

                            arg_2c[1] = context_5;
                            arg_2c[1] = context_5 ^ 1;
                        }
                    }
                }
                else
                {
                    *(context_val + 0x1a) = 1;

                    if (data_37)
                    {
                        if (!(data_37 & 0xf))
                        {
                            if (!(data_37 & 0x30))
                            {
                                context_val[6] = (data_37 >> 6 & 1) + 6;
                                context_val[6] = ((data_37 >> 6 & 1) + 6) ^ 1;
                            }
                            else
                            {
                                context_val[6] = (data_37 >> 4 & 1) + 4;
                                context_val[6] = ((data_37 >> 4 & 1) + 4) ^ 1;
                            }
                        }
                        else if (!(data_37 & 3))
                        {
                            context_val[6] = (data_37 >> 2 & 1) + 2;
                            context_val[6] = ((data_37 >> 2 & 1) + 2) ^ 1;
                        }
                        else
                        {
                            data_37 &= 1;
                            context_val[6] = data_37;
                            context_val[6] = data_37 ^ 1;
                        }
                    }
                }
            }
            else
            {
                void* data_25 = *context_val;
                temp_34 = *(data_25 + 0x38);

                if (!*(context_val + 6))
                {
                    if (temp_34 & entity_25)
                    {
                        for (void* i_1 = *(data_25 + 0x2c); i_1; i_1 = *(i_1 + 0x58))
                        {
                            float data_28 = *(i_1 + 0x44);
                            long double fpu_val_7_18 = *(i_1 + 0x20) - data_28;
                            long double f4_1 = arg_9c;
                            fpu_val_7_18 - f4_1;

                            if (*(&((fpu_val_7_18 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_18, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_18 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double fpu_val_7_20 = data_28 + *(i_1 + 0x20);
                                long double f5_1 = arg_78;
                                fpu_val_7_20 - f5_1;

                                if (!(*(&((fpu_val_7_20 < f5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_20, f5_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_20 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_22 = *(i_1 + 0x28) - data_28;
                                    long double f7_1 = 2.1219957904712067e-314;
                                    fpu_val_7_22 - f7_1;

                                    if (*(&((fpu_val_7_22 < f7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_22, f7_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_22 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double fpu_val_7_24 = data_28 + *(i_1 + 0x28);
                                        long double f9_1 = 2.1219957904712067e-314;
                                        fpu_val_7_24 - f9_1;

                                        if (!(*(&((fpu_val_7_24 < f9_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_24, f9_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_24 == f9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double fpu_val_7_26 = *(i_1 + 0x30) - data_28;
                                            long double f11_1 = arg_ac;
                                            fpu_val_7_26 - f11_1;

                                            if (*(&((fpu_val_7_26 < f11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_26, f11_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_26 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double fpu_val_7_28 = data_28 + *(i_1 + 0x30);
                                                long double f13_1 = 2.1219957904712067e-314;
                                                fpu_val_7_28 - f13_1;

                                                if (!(*(&((fpu_val_7_28 < f13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_28, f13_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_28 == f13_1 ? 1 : 0) << 0xe) + 1)
                                                    & 1))
                                                {
                                                    int32_t data_30 = 0;
                                                    data_30 = *(i_1 + 0x1c);

                                                    if (*(data_30 * 0x30 + 0xaf5f0c) & arg_1c)
                                                    {
                                                        int32_t data_31 = *(
                                                            ((result_2 * 0x180 + data_30) << 2) +
                                                            &g_a96ae0);

                                                        if (data_31)
                                                            data_31(i_1, arg_c);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if (temp_34 & entity_25)
                {
                    for (void* i_2 = *(data_25 + 0x2c); i_2; i_2 = *(i_2 + 0x58))
                    {
                        int32_t data_26 = 0;
                        data_26 = *(i_2 + 0x1c);

                        if (*(data_26 * 0x30 + 0xaf5f0c) & arg_1c)
                        {
                            int32_t data_27 = *(((result_2 * 0x180 + data_26) << 2) + &g_a96ae0);

                            if (data_27)
                                data_27(i_2, arg_c);
                        }
                    }
                }

                temp_34 = arg_38 + 1;
                arg_2c = context_val - 0x14;
                arg_1c += 1;
                arg_38 = temp_34;
                arg_4c <<= 1;
                param_2 -= 1;
            }

            result = param_2;

            if (!result)
                break;

            entity_25 = arg_48;
            result_2 = result_1;
            context_val = arg_2c;
        }
    }

    return result;
}
