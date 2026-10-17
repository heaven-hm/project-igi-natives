// IGI native provenance: BoneDynCubeObj_Setup - 0x004D7620 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D7620-BoneDynCubeObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BoneDynCubeObj_Setup.h"
int32_t* BoneDynCubeObj_Setup(float context, int32_t* param_2, float param_3 , float param_4, float param_5, double param_6 , int16_t* param_7 , float param_8 , float param_9, float param_10, float param_11, float param_12, float param_13, float param_14, float param_15)

{
    int32_t flagP;
    int32_t item_4_1 = flagP;
    Camera_UpdateTransform_5(0x10150);
    int32_t* entity_val = param_2;
    float source_val = context;
    void** context_val = entity_val[8];
    double* arg_ac = *entity_val;
    void arg_4148;
    int32_t* item_4 = &arg_4148;
    int32_t* result = *(source_val + 0x74);
    double* arg_9c = entity_val[1];

    if (result)
    {
        void* data_1 = *result;
        void* temp_2 = *(*(data_1 + 0xc) + 0xc);
        result = *(temp_2 + 0x28);

        if (!result)
        {
            int32_t dest_1 = *(temp_2 + 0x2c);
            int32_t data_3 = entity_val[5] << 5;
            result = data_3 + dest_1;
            int32_t* result_1 = result;

            if (data_3 != -(dest_1) && *result)
            {
                void* dest_2 = result[5];
                float arg_40 = result[1];
                char data_5 = entity_val[3];
                float arg_30 = dest_2;

                if (data_5 == 0xff)
                    goto label_4d76f3;

                int32_t data_7 = 0;
                data_7 = *(source_val + 0x1c);
                int32_t data_8 = *(((data_5 * 0x180 + data_7) << 2) + &g_a96ae0);

                if (!data_8)
                    goto label_4d76f3;

                data_8(source_val, entity_val[4]);
                result = param_2;

                if (*result[4])
                {
                    entity_val = param_2;
                label_4d76f3:
                    float temp_7 = nanf;
                    float arg_48;
                    float arg_54;
                    float arg_5c;
                    float arg_e0;
                    int32_t arg_148[0x1000];

                    if (arg_40 > 0)
                    {
                        int32_t (* arg_3c)[0x1000] = &arg_148;
                        bool flag_3_1;

                        do
                        {
                            float data_10 = *(dest_2 + 0xc);

                            if (temp_7 != data_10)
                            {
                                temp_7 = data_10;
                                void* data_13 = *(context + 0x70) + data_10 * 0x84;
                                memcpy(&arg_e0, data_13 + 0x24, 0x28);
                                source_val = context;
                                dest_2 = arg_30;
                                param_3 = *(data_13 + 0x18);
                                param_4 = *(data_13 + 0x1c);
                                param_5 = *(data_13 + 0x20);
                            }

                            long double fpu_val_7_2 = param_9 * *(dest_2 + 8);
                            long double fpu_val_6_2 = param_8 * *(dest_2 + 4);
                            dest_2 += 0x10;
                            arg_30 = dest_2;
                            arg_54 = fpu_val_7_2 + fpu_val_6_2 + arg_e0 * *(dest_2 - 0x10);
                            arg_48 = arg_54;
                            arg_5c = param_15 * *(dest_2 - 8) + param_14 * *(dest_2 - 0xc)
                                + param_13 * *(dest_2 - 0x10);
                            long double fpu_val_7_16 = param_4 + param_12 * *(dest_2 - 8)
                                + param_11 * *(dest_2 - 0xc) + param_10 * *(dest_2 - 0x10);
                            *item_4 = param_3 + arg_54;
                            item_4[1] = fpu_val_7_16;
                            item_4[2] = param_5 + arg_5c;
                            *arg_3c = temp_7;
                            arg_3c = &(*arg_3c)[1];
                            flag_3_1 = arg_40 != 1;
                            item_4 = &item_4[3];
                            arg_40 -= 1;
                        } while (flag_3_1);
                        entity_val = param_2;
                    }

                    result = entity_val[2];
                    int32_t* result_2 = nullptr;

                    if (result > 0)
                    {
                        do
                        {
                            if (!context_val[0x16])
                                temp_7 = 0;
                            else
                                temp_7 = context_val[0x13];

                            int16_t data_23;
                            data_23 = context_val[0x16];
                            char item_5_1 = temp_7;
                            float arg_c = *arg_ac - *(source_val + 0x20);
                            float arg_10 = arg_ac[1] - *(source_val + 0x28);
                            float arg_14 = arg_ac[2] - *(source_val + 0x30);
                            float arg_78 = *arg_9c - *(source_val + 0x20);
                            float arg_7c = arg_9c[1] - *(source_val + 0x28);
                            float arg_80 = arg_9c[2] - *(source_val + 0x30);
                            long double fpu_val_7_31 = arg_c;
                            long double f3_1 = arg_78;
                            fpu_val_7_31 - f3_1;
                            *(&param_2 + 3) = data_23;
                            char arg_26 = 0;
                            long double fpu_val_7_32;

                            fpu_val_7_32 = !(*(&((fpu_val_7_31 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_31, f3_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_31 == f3_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_78 : arg_c;

                            double arg_c8 = fpu_val_7_32 - 0.100000001f;
                            long double fpu_val_7_34 = arg_10;
                            long double f4_1 = arg_7c;
                            fpu_val_7_34 - f4_1;
                            long double fpu_val_7_35;

                            fpu_val_7_35 = !(*(&((fpu_val_7_34 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_34, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_34 == f4_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_7c : arg_10;

                            double arg_d0 = fpu_val_7_35 - 0.100000001f;
                            long double fpu_val_7_37 = arg_14;
                            long double f5_1 = arg_80;
                            fpu_val_7_37 - f5_1;
                            long double fpu_val_7_38;

                            fpu_val_7_38 = !(*(&((fpu_val_7_37 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_37, f5_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_37 == f5_1 ? 1 : 0) << 0xe) + 1) & 1) ? arg_80 : arg_14;

                            double arg_d8 = fpu_val_7_38 - 0.100000001f;
                            long double fpu_val_7_40 = arg_c;
                            long double f6_1 = arg_78;
                            fpu_val_7_40 - f6_1;
                            long double fpu_val_7_41;

                            fpu_val_7_41 = *(&((fpu_val_7_40 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_40, f6_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_40 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? arg_78 : arg_c;

                            arg_e0 = fpu_val_7_41 + 0.100000001f;
                            long double fpu_val_7_43 = arg_10;
                            long double f7_1 = arg_7c;
                            fpu_val_7_43 - f7_1;
                            long double fpu_val_7_44;

                            fpu_val_7_44 = *(&((fpu_val_7_43 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_43, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_43 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? arg_7c : arg_10;

                            param_9 = fpu_val_7_44 + 0.100000001f;
                            long double fpu_val_7_46 = arg_14;
                            long double f8_1 = arg_80;
                            fpu_val_7_46 - f8_1;
                            data_23 = (fpu_val_7_46 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_46, f8_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_46 == f8_1 ? 1 : 0) << 0xe;
                            long double fpu_val_7_47;

                            fpu_val_7_47 = *(&data_23 + 1) & 0x41 ? arg_80 : arg_14;

                            float arg_130 = arg_c;
                            param_11 = fpu_val_7_47 + 0.100000001f;
                            float arg_84 = *arg_9c - *arg_ac;
                            float arg_88 = arg_9c[1] - arg_ac[1];
                            float arg_8c = arg_9c[2] - arg_ac[2];
                            int32_t (* entity_16)[0x1000] = *(source_val + 0xa0);
                            long double fpu_val_7_56 = -(arg_c);
                            long double fpu_val_6_14 = -(arg_10);
                            long double fpu_val_5_2 = -(arg_14);
                            double arg_b8 = fpu_val_5_2;
                            double arg_28 = fpu_val_6_14;
                            double arg_b0 = fpu_val_7_56;
                            arg_30 = arg_8c;
                            arg_40 = arg_88;
                            double arg_90 = arg_84;
                            item_4 = fpu_val_5_2 * arg_8c + fpu_val_6_14 * arg_88 + fpu_val_7_56 * arg_84;
                            long double fpu_val_7_65 = arg_b0 * arg_b0 + arg_28 * arg_28
                                + arg_b8 * arg_b8 - 1.0f
                                / (arg_90 * arg_90 + arg_40 * arg_40 + arg_30 * arg_30) * item_4
                                * item_4;
                            long double fpu_val_6_32 = entity_16 * entity_16;
                            fpu_val_6_32 - fpu_val_7_65;

                            if (!(*(&((fpu_val_6_32 < fpu_val_7_65 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_32, fpu_val_7_65) ? 1 : 0) << 0xa
                                | (fpu_val_6_32 == fpu_val_7_65 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                long double fpu_val_7_66 = entity_16;
                                long double f9_1 = arg_c8;
                                fpu_val_7_66 - f9_1;

                                if (!(*(&((fpu_val_7_66 < f9_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_66, f9_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_66 == f9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double fpu_val_7_67 = entity_16;
                                    long double f10_1 = arg_d0;
                                    fpu_val_7_67 - f10_1;

                                    if (!(*(&((fpu_val_7_67 < f10_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_67, f10_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_67 == f10_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    {
                                        long double fpu_val_7_68 = entity_16;
                                        long double f11_1 = arg_d8;
                                        fpu_val_7_68 - f11_1;

                                        if (!(*(&((fpu_val_7_68 < f11_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_68, f11_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_68 == f11_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double fpu_val_7_70 = -(entity_16);
                                            item_4 = fpu_val_7_70;
                                            long double f12_1 = arg_e0;
                                            fpu_val_7_70 - f12_1;

                                            if (*(&((fpu_val_7_70 < f12_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_70, f12_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_70 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double fpu_val_7_71 = item_4;
                                                long double f13_1 = param_9;
                                                fpu_val_7_71 - f13_1;

                                                if (*(&((fpu_val_7_71 < f13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_71, f13_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_71 == f13_1 ? 1 : 0) << 0xe) + 1)
                                                    & 0x41)
                                                {
                                                    long double fpu_val_7_72 = item_4;
                                                    long double f14_1 = param_11;
                                                    fpu_val_7_72 - f14_1;

                                                    if (*(&((fpu_val_7_72 < f14_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_72, f14_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_7_72 == f14_1 ? 1 : 0) << 0xe) + 1)
                                                        & 0x41)
                                                    {
                                                        long double fpu_val_7_74 = arg_80 - arg_14;
                                                        float arg_58 = arg_7c;
                                                        int16_t data_28;
                                                        data_28 = *(&param_2 + 3);
                                                        long double fpu_val_6_34 = arg_7c - arg_10;
                                                        arg_54 = arg_78;
                                                        long double fpu_val_5_13 = arg_78 - arg_c;
                                                        arg_5c = arg_80;
                                                        arg_b8 = sqrtl(fpu_val_5_13 * fpu_val_5_13
                                                            + fpu_val_6_34 * fpu_val_6_34
                                                            + fpu_val_7_74 * fpu_val_7_74);

                                                        if (data_28)
                                                        {
                                                            arg_54 = *(context_val + 8) - *(source_val + 0x20);
                                                            arg_58 = *(context_val + 0x10) - *(source_val + 0x28);
                                                            long double fpu_val_7_81 =
                                                                *(context_val + 0x18) - *(source_val + 0x30);
                                                            arg_5c = fpu_val_7_81;
                                                            long double fpu_val_7_82 =
                                                                fpu_val_7_81 - arg_14;
                                                            long double fpu_val_6_37 = arg_58 - arg_10;
                                                            long double fpu_val_5_16 = arg_54 - arg_c;
                                                            param_6 = sqrtl(fpu_val_5_16 * fpu_val_5_16
                                                                + fpu_val_6_37 * fpu_val_6_37
                                                                + fpu_val_7_82 * fpu_val_7_82);
                                                        }

                                                        long double fpu_val_7_84 = arg_88;
                                                        long double f15_1 = 0.0f;
                                                        fpu_val_7_84 - f15_1;

                                                        if (!(*(&(
                                                                (fpu_val_7_84 < f15_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_84, f15_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_84 == f15_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            arg_90 = arg_88;
                                                        else
                                                            arg_90 = -(arg_88);

                                                        long double fpu_val_7_87 = arg_84;
                                                        long double f16_1 = 0.0f;
                                                        fpu_val_7_87 - f16_1;
                                                        data_28 = (fpu_val_7_87 < f16_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_7_87, f16_1) ? 1
                                                            : 0) << 0xa
                                                            | (fpu_val_7_87 == f16_1 ? 1 : 0)
                                                            << 0xe;

                                                        if (!(*(&data_28 + 1) & 1))
                                                            arg_90 = arg_84;
                                                        else
                                                            arg_90 = -(arg_84);

                                                        arg_90 = 0;
                                                        int16_t* dest_4 = result_1[4];

                                                        if (*result_1 > 0)
                                                        {
                                                            int32_t saved_target;
                                                            bool flag_6_1;

                                                            do
                                                            {
                                                                int32_t data_31 = 0;
                                                                data_31 = *dest_4;
                                                                int32_t data_33 = 0;
                                                                data_33 = dest_4[1];
                                                                long double fpu_val_7_90 =
                                                                    (&saved_target)[data_31 * 3 + 0x1057];
                                                                long double f17_1 = arg_c8;
                                                                fpu_val_7_90 - f17_1;
                                                                arg_30 =
                                                                    &(&saved_target)[data_33 * 3 + 0x1057];
                                                                int32_t data_36 = 0;
                                                                data_36 = dest_4[2];

                                                                if (!(*(&(
                                                                    (fpu_val_7_90 < f17_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(fpu_val_7_90, f17_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (fpu_val_7_90 == f17_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 1))
                                                                {
                                                                label_4d7d71:
                                                                    long double fpu_val_7_93 =
                                                                        (&saved_target)[data_31 * 3 + 0x1058];
                                                                    long double f18_1 = arg_d0;
                                                                    fpu_val_7_93 - f18_1;

                                                                    if (!(*(&(
                                                                        (fpu_val_7_93 < f18_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(fpu_val_7_93, f18_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (fpu_val_7_93 == f18_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1))
                                                                    {
                                                                    label_4d7db0:
                                                                        long double fpu_val_7_96 =
                                                                            (&saved_target)[data_31 * 3 + 0x1059];
                                                                        long double f20_1 = arg_d8;
                                                                        fpu_val_7_96 - f20_1;

                                                                        if (!(*(&(
                                                                            (fpu_val_7_96 < f20_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(fpu_val_7_96, f20_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (fpu_val_7_96 == f20_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        {
                                                                        label_4d7def:
                                                                            long double fpu_val_7_99 =
                                                                                (&saved_target)[data_31 * 3 + 0x1057];
                                                                            long double f23_1 = arg_e0;
                                                                            fpu_val_7_99 - f23_1;

                                                                            if (*(&(
                                                                                (fpu_val_7_99 < f23_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_99, f23_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_99 == f23_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                            label_4d7e2b:
                                                                                long double fpu_val_7_102 =
                                                                                    (&saved_target)[data_31 * 3 + 0x1058];
                                                                                long double f26_1 = param_9;
                                                                                fpu_val_7_102 - f26_1;

                                                                                if (*(&(
                                                                                    (fpu_val_7_102 < f26_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_102, f26_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_102 == f26_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
                                                                                label_4d7e6a:
                                                                                    long double fpu_val_7_105 =
                                                                                        (&saved_target)[data_31 * 3 + 0x1059];
                                                                                    long double f29_1 = param_11;
                                                                                    fpu_val_7_105 - f29_1;

                                                                                    if (*(&(
                                                                                        (fpu_val_7_105 < f29_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_105, f29_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_105 == f29_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    {
                                                                                    label_4d7eb1:
                                                                                        float arg_18 =
                                                                                            (&saved_target)[data_36 * 3 + 0x1057]
                                                                                            - (&saved_target)[data_31 * 3 + 0x1057];
                                                                                        float arg_1c =
                                                                                            (&saved_target)[data_36 * 3 + 0x1058]
                                                                                            - (&saved_target)[data_31 * 3 + 0x1058];
                                                                                        float arg_20 =
                                                                                            (&saved_target)[data_36 * 3 + 0x1059]
                                                                                            - (&saved_target)[data_31 * 3 + 0x1059];
                                                                                        arg_48 = *arg_30
                                                                                            - (&saved_target)[data_31 * 3 + 0x1057];
                                                                                        float arg_4c = *(arg_30 + 4)
                                                                                            - (&saved_target)[data_31 * 3 + 0x1058];
                                                                                        long double fpu_val_7_119 = *(arg_30 + 8)
                                                                                            - (&saved_target)[data_31 * 3 + 0x1059];
                                                                                        float arg_50 = fpu_val_7_119;
                                                                                        item_4 =
                                                                                            fpu_val_7_119 * arg_1c - arg_4c * arg_20;
                                                                                        param_3 = item_4;
                                                                                        long double fpu_val_7_124 =
                                                                                            arg_50 * arg_18 - arg_48 * arg_20;
                                                                                        arg_40 = fpu_val_7_124;
                                                                                        param_4 = -(fpu_val_7_124);
                                                                                        context =
                                                                                            arg_4c * arg_18 - arg_48 * arg_1c;
                                                                                        long double fpu_val_7_132 = context * arg_8c
                                                                                            + param_4 * arg_88 + param_3 * arg_84;
                                                                                        arg_b0 = fpu_val_7_132;
                                                                                        long double f32_1 = 0.0;
                                                                                        fpu_val_7_132 - f32_1;

                                                                                        if (!(*(&(
                                                                                            (fpu_val_7_132 < f32_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_7_132, f32_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_7_132 == f32_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 0x40))
                                                                                        {
                                                                                            long double fpu_val_7_138 = ((
                                                                                                (&saved_target)[data_31 * 3 + 0x1058]
                                                                                                - arg_10) * param_4 + (
                                                                                                (&saved_target)[data_31 * 3 + 0x1059]
                                                                                                - arg_14) * context + (
                                                                                                (&saved_target)[data_31 * 3 + 0x1057]
                                                                                                - arg_c) * param_3) / arg_b0;
                                                                                            arg_30 = fpu_val_7_138;
                                                                                            long double f36_1 = 0.0f;
                                                                                            fpu_val_7_138 - f36_1;

                                                                                            if (!(*(&(
                                                                                                (fpu_val_7_138 < f36_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_7_138, f36_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_7_138 == f36_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                                long double fpu_val_7_139 = arg_30;
                                                                                                long double f38_1 = 1.0f;
                                                                                                fpu_val_7_139 - f38_1;

                                                                                                if (*(&(
                                                                                                    (fpu_val_7_139 < f38_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_7_139, f38_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_139 == f38_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x41)
                                                                                                {
                                                                                                    float arg_60 = arg_30 * arg_84 + arg_c;
                                                                                                    float arg_64 = arg_30 * arg_88 + arg_10;
                                                                                                    float arg_68 = arg_30 * arg_8c + arg_14;
                                                                                                    long double fpu_val_7_149 = param_3;
                                                                                                    long double f41_1 = 0.0f;
                                                                                                    fpu_val_7_149 - f41_1;
                                                                                                    float arg_13c;

                                                                                                    arg_13c = !(*(&(
                                                                                                        (fpu_val_7_149 < f41_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_7_149, f41_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_7_149 == f41_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1) ? param_3 : -(param_3);

                                                                                                    long double fpu_val_7_152 = param_4;
                                                                                                    long double f42_1 = 0.0f;
                                                                                                    fpu_val_7_152 - f42_1;
                                                                                                    long double fpu_val_7_153 = param_4;

                                                                                                    if (*(&(
                                                                                                            (fpu_val_7_152 < f42_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(fpu_val_7_152, f42_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (fpu_val_7_152 == f42_1 ? 1 : 0)
                                                                                                            << 0xe | 0x3800) + 1) & 1)
                                                                                                        fpu_val_7_153 = -(fpu_val_7_153);

                                                                                                    long double fpu_val_6_55 = context;
                                                                                                    long double f43_1 = 0.0f;
                                                                                                    fpu_val_6_55 - f43_1;
                                                                                                    long double fpu_val_6_56 = context;

                                                                                                    if (*(&(
                                                                                                            (fpu_val_6_55 < f43_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(fpu_val_6_55, f43_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (fpu_val_6_55 == f43_1 ? 1 : 0)
                                                                                                            << 0xe | 0x3000) + 1) & 1)
                                                                                                        fpu_val_6_56 = -(fpu_val_6_56);

                                                                                                    long double fpu_val_5_18 = arg_13c;
                                                                                                    fpu_val_5_18 - fpu_val_7_153;
                                                                                                    long double fpu_val_5_19;

                                                                                                    if (!(*(&(
                                                                                                        (fpu_val_5_18 < fpu_val_7_153 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(fpu_val_5_18, fpu_val_7_153) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (fpu_val_5_18 == fpu_val_7_153 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 0x41))
                                                                                                    {
                                                                                                        fpu_val_5_19 = arg_13c;
                                                                                                        fpu_val_5_19 - fpu_val_6_56;
                                                                                                    }

                                                                                                    long double fpu_val_7_155;

                                                                                                    if (*(&(
                                                                                                        (fpu_val_5_18 < fpu_val_7_153 ? 1 : 0) << 8
                                                                                                        | (FCMP_UO(fpu_val_5_18, fpu_val_7_153) ? 1
                                                                                                        : 0) << 0xa
                                                                                                        | (fpu_val_5_18 == fpu_val_7_153 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 0x41 || *(&(
                                                                                                        (fpu_val_5_19 < fpu_val_6_56 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_5_19, fpu_val_6_56) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_5_19 == fpu_val_6_56 ? 1 : 0)
                                                                                                        << 0xe | 0x3000) + 1) & 0x41)
                                                                                                    {
                                                                                                        fpu_val_7_153 - fpu_val_6_56;

                                                                                                        if (*(&(
                                                                                                            (fpu_val_7_153 < fpu_val_6_56 ? 1 : 0) << 8
                                                                                                            | (FCMP_UO(fpu_val_7_153, fpu_val_6_56) ? 1
                                                                                                            : 0) << 0xa
                                                                                                            | (fpu_val_7_153 == fpu_val_6_56 ? 1 : 0)
                                                                                                            << 0xe | 0x3800) + 1) & 0x41)
                                                                                                        {
                                                                                                            fpu_val_7_155 = context;
                                                                                                            long double f44_1 = 0.0;
                                                                                                            fpu_val_7_155 - f44_1;

                                                                                                            if (!(*(&(
                                                                                                                (fpu_val_7_155 < f44_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(fpu_val_7_155, f44_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (fpu_val_7_155 == f44_1 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x40))
                                                                                                            {
                                                                                                                item_4 = arg_64
                                                                                                                    - (&saved_target)[data_31 * 3 + 0x1058];
                                                                                                                arg_40 = arg_60
                                                                                                                    - (&saved_target)[data_31 * 3 + 0x1057];
                                                                                                                arg_28 = (item_4 * arg_18
                                                                                                                    - arg_40 * arg_1c) / fpu_val_7_155;
                                                                                                                long double fpu_val_7_182 = arg_28;
                                                                                                                long double f47_1 = 0.0;
                                                                                                                fpu_val_7_182 - f47_1;

                                                                                                                if (!(*(&(
                                                                                                                    (fpu_val_7_182 < f47_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_7_182, f47_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_7_182 == f47_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 1))
                                                                                                                {
                                                                                                                    long double fpu_val_7_183 = arg_28;
                                                                                                                    long double f50_1 = 1.0;
                                                                                                                    fpu_val_7_183 - f50_1;

                                                                                                                    if (*(&(
                                                                                                                        (fpu_val_7_183 < f50_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_7_183, f50_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_7_183 == f50_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x41)
                                                                                                                    {
                                                                                                                        long double fpu_val_7_184 = arg_18;
                                                                                                                        long double f53_1 = 0.0f;
                                                                                                                        fpu_val_7_184 - f53_1;
                                                                                                                        long double fpu_val_7_185 = arg_18;

                                                                                                                        if (*(&(
                                                                                                                                (fpu_val_7_184 < f53_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_7_184, f53_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_7_184 == f53_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1)
                                                                                                                            fpu_val_7_185 = -(fpu_val_7_185);

                                                                                                                        long double fpu_val_6_97 = arg_1c;
                                                                                                                        long double f56_1 = 0.0f;
                                                                                                                        fpu_val_6_97 - f56_1;
                                                                                                                        long double fpu_val_6_98 = arg_1c;

                                                                                                                        if (*(&(
                                                                                                                                (fpu_val_6_97 < f56_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_6_97, f56_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_6_97 == f56_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3000) + 1) & 1)
                                                                                                                            fpu_val_6_98 = -(fpu_val_6_98);

                                                                                                                        fpu_val_7_185 - fpu_val_6_98;

                                                                                                                        if (*(&(
                                                                                                                            (fpu_val_7_185 < fpu_val_6_98 ? 1 : 0) << 8
                                                                                                                            | (FCMP_UO(fpu_val_7_185, fpu_val_6_98) ? 1
                                                                                                                            : 0) << 0xa
                                                                                                                            | (fpu_val_7_185 == fpu_val_6_98 ? 1 : 0)
                                                                                                                            << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                        {
                                                                                                                            long double fpu_val_7_190 = arg_1c;
                                                                                                                            long double f59_1 = 0.0f;
                                                                                                                            fpu_val_7_190 - f59_1;

                                                                                                                            if (!(*(&(
                                                                                                                                (fpu_val_7_190 < f59_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_7_190, f59_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_7_190 == f59_1 ? 1 : 0)
                                                                                                                                << 0xe) + 1) & 0x40))
                                                                                                                            {
                                                                                                                                fpu_val_7_155 =
                                                                                                                                    (item_4 - arg_4c * arg_28) / arg_1c;
                                                                                                                                goto label_4d843d;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            fpu_val_7_155 =
                                                                                                                                (arg_40 - arg_48 * arg_28) / arg_18;
                                                                                                                        label_4d843d:
                                                                                                                            long double f61_1 = 0.0;
                                                                                                                            fpu_val_7_155 - f61_1;

                                                                                                                            if (!(*(&(
                                                                                                                                (fpu_val_7_155 < f61_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_7_155, f61_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_7_155 == f61_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1))
                                                                                                                            {
                                                                                                                                long double fpu_val_6_105 =
                                                                                                                                    fpu_val_7_155 + arg_28;
                                                                                                                                long double f63_1 = 1.0;
                                                                                                                                fpu_val_6_105 - f63_1;

                                                                                                                                if (*(&(
                                                                                                                                        (fpu_val_6_105 < f63_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(fpu_val_6_105, f63_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (fpu_val_6_105 == f63_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                                    goto label_4d8469;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            fpu_val_7_155 = arg_40;
                                                                                                            long double f45_1 = 0.0;
                                                                                                            fpu_val_7_155 - f45_1;

                                                                                                            if (!(*(&(
                                                                                                                (fpu_val_7_155 < f45_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(fpu_val_7_155, f45_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (fpu_val_7_155 == f45_1 ? 1 : 0)
                                                                                                                << 0xe | 0x3800) + 1) & 0x40))
                                                                                                            {
                                                                                                                context = arg_68
                                                                                                                    - (&saved_target)[data_31 * 3 + 0x1059];
                                                                                                                arg_40 = arg_60
                                                                                                                    - (&saved_target)[data_31 * 3 + 0x1057];
                                                                                                                arg_28 = (context * arg_18
                                                                                                                    - arg_40 * arg_20) / fpu_val_7_155;
                                                                                                                long double fpu_val_7_168 = arg_28;
                                                                                                                long double f48_1 = 0.0;
                                                                                                                fpu_val_7_168 - f48_1;

                                                                                                                if (!(*(&(
                                                                                                                    (fpu_val_7_168 < f48_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_7_168, f48_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_7_168 == f48_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 1))
                                                                                                                {
                                                                                                                    long double fpu_val_7_169 = arg_28;
                                                                                                                    long double f51_1 = 1.0;
                                                                                                                    fpu_val_7_169 - f51_1;

                                                                                                                    if (*(&(
                                                                                                                        (fpu_val_7_169 < f51_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_7_169, f51_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_7_169 == f51_1 ? 1 : 0)
                                                                                                                        << 0xe) + 1) & 0x41)
                                                                                                                    {
                                                                                                                        long double fpu_val_7_170 = arg_18;
                                                                                                                        long double f54_1 = 0.0f;
                                                                                                                        fpu_val_7_170 - f54_1;
                                                                                                                        long double fpu_val_7_171 = arg_18;

                                                                                                                        if (*(&(
                                                                                                                                (fpu_val_7_170 < f54_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_7_170, f54_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_7_170 == f54_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 1)
                                                                                                                            fpu_val_7_171 = -(fpu_val_7_171);

                                                                                                                        long double fpu_val_6_80 = arg_20;
                                                                                                                        long double f57_1 = 0.0f;
                                                                                                                        fpu_val_6_80 - f57_1;
                                                                                                                        long double fpu_val_6_81 = arg_20;

                                                                                                                        if (*(&(
                                                                                                                                (fpu_val_6_80 < f57_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_6_80, f57_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_6_80 == f57_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3000) + 1) & 1)
                                                                                                                            fpu_val_6_81 = -(fpu_val_6_81);

                                                                                                                        fpu_val_7_171 - fpu_val_6_81;

                                                                                                                        if (*(&(
                                                                                                                                (fpu_val_7_171 < fpu_val_6_81 ? 1 : 0) << 8
                                                                                                                                | (FCMP_UO(fpu_val_7_171, fpu_val_6_81) ? 1
                                                                                                                                : 0) << 0xa
                                                                                                                                | (fpu_val_7_171 == fpu_val_6_81 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                            goto label_4d8250;

                                                                                                                        fpu_val_7_155 =
                                                                                                                            (arg_40 - arg_48 * arg_28) / arg_18;
                                                                                                                        goto label_4d8273;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        fpu_val_7_155 = item_4;
                                                                                                        long double f46_1 = 0.0;
                                                                                                        fpu_val_7_155 - f46_1;

                                                                                                        if (!(*(&(
                                                                                                            (fpu_val_7_155 < f46_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(fpu_val_7_155, f46_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (fpu_val_7_155 == f46_1 ? 1 : 0)
                                                                                                            << 0xe | 0x3800) + 1) & 0x40))
                                                                                                        {
                                                                                                            context = arg_68
                                                                                                                - (&saved_target)[data_31 * 3 + 0x1059];
                                                                                                            item_4 = arg_64
                                                                                                                - (&saved_target)[data_31 * 3 + 0x1058];
                                                                                                            arg_28 = (context * arg_1c
                                                                                                                - item_4 * arg_20) / fpu_val_7_155;
                                                                                                            long double fpu_val_7_157 = arg_28;
                                                                                                            long double f49_1 = 0.0;
                                                                                                            fpu_val_7_157 - f49_1;

                                                                                                            if (!(*(&(
                                                                                                                (fpu_val_7_157 < f49_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(fpu_val_7_157, f49_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (fpu_val_7_157 == f49_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 1))
                                                                                                            {
                                                                                                                long double fpu_val_7_158 = arg_28;
                                                                                                                long double f52_1 = 1.0;
                                                                                                                fpu_val_7_158 - f52_1;

                                                                                                                if (*(&(
                                                                                                                    (fpu_val_7_158 < f52_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_7_158, f52_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_7_158 == f52_1 ? 1 : 0)
                                                                                                                    << 0xe) + 1) & 0x41)
                                                                                                                {
                                                                                                                    long double fpu_val_7_159 = arg_1c;
                                                                                                                    long double f55_1 = 0.0f;
                                                                                                                    fpu_val_7_159 - f55_1;
                                                                                                                    long double fpu_val_7_160 = arg_1c;

                                                                                                                    if (*(&(
                                                                                                                            (fpu_val_7_159 < f55_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(fpu_val_7_159, f55_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (fpu_val_7_159 == f55_1 ? 1 : 0)
                                                                                                                            << 0xe | 0x3800) + 1) & 1)
                                                                                                                        fpu_val_7_160 = -(fpu_val_7_160);

                                                                                                                    long double fpu_val_6_66 = arg_20;
                                                                                                                    long double f58_1 = 0.0f;
                                                                                                                    fpu_val_6_66 - f58_1;
                                                                                                                    long double fpu_val_6_67 = arg_20;

                                                                                                                    if (*(&(
                                                                                                                            (fpu_val_6_66 < f58_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(fpu_val_6_66, f58_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (fpu_val_6_66 == f58_1 ? 1 : 0)
                                                                                                                            << 0xe | 0x3000) + 1) & 1)
                                                                                                                        fpu_val_6_67 = -(fpu_val_6_67);

                                                                                                                    fpu_val_7_160 - fpu_val_6_67;

                                                                                                                    if (*(&(
                                                                                                                        (fpu_val_7_160 < fpu_val_6_67 ? 1 : 0) << 8
                                                                                                                        | (FCMP_UO(fpu_val_7_160, fpu_val_6_67) ? 1
                                                                                                                        : 0) << 0xa
                                                                                                                        | (fpu_val_7_160 == fpu_val_6_67 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                    {
                                                                                                                    label_4d8250:
                                                                                                                        long double fpu_val_7_176 = arg_20;
                                                                                                                        long double f60_1 = 0.0f;
                                                                                                                        fpu_val_7_176 - f60_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (fpu_val_7_176 < f60_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(fpu_val_7_176, f60_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (fpu_val_7_176 == f60_1 ? 1 : 0)
                                                                                                                            << 0xe) + 1) & 0x40))
                                                                                                                        {
                                                                                                                            fpu_val_7_155 =
                                                                                                                                (context - arg_50 * arg_28) / arg_20;
                                                                                                                            goto label_4d8273;
                                                                                                                        }
                                                                                                                    }
                                                                                                                    else
                                                                                                                    {
                                                                                                                        fpu_val_7_155 =
                                                                                                                            (item_4 - arg_4c * arg_28) / arg_1c;
                                                                                                                    label_4d8273:
                                                                                                                        long double f62_1 = 0.0;
                                                                                                                        fpu_val_7_155 - f62_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (fpu_val_7_155 < f62_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(fpu_val_7_155, f62_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (fpu_val_7_155 == f62_1 ? 1 : 0)
                                                                                                                            << 0xe | 0x3800) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double fpu_val_6_88 =
                                                                                                                                fpu_val_7_155 + arg_28;
                                                                                                                            long double f64_1 = 1.0;
                                                                                                                            fpu_val_6_88 - f64_1;

                                                                                                                            if (*(&(
                                                                                                                                (fpu_val_6_88 < f64_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_6_88, f64_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_6_88 == f64_1 ? 1 : 0)
                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                            {
                                                                                                                            label_4d8469:
                                                                                                                                float* item_18_2 =
                                                                                                                                    &(&saved_target)[data_31 * 3 + 0x1057];
                                                                                                                                float item_18_3 = arg_28;
                                                                                                                                float* item_1c_2 =
                                                                                                                                    &(&saved_target)[data_31 * 3 + 0x1057];
                                                                                                                                float item_1c_3 = fpu_val_7_155;
                                                                                                                                int16_t* item_20_1 = dest_4;
                                                                                                                                void* item_24_1 = data_1;
                                                                                                                                long double fpu_val_7_194 =
                                                                                                                                    arg_30 * arg_b8;
                                                                                                                                long double fpu_val_6_107 = arg_b0;
                                                                                                                                long double f65_1 = 0.0;
                                                                                                                                fpu_val_6_107 - f65_1;
                                                                                                                                int16_t data_84 =
                                                                                                                                    (fpu_val_6_107 < f65_1 ? 1 : 0) << 8 | (
                                                                                                                                    FCMP_UO(fpu_val_6_107, f65_1) ? 1 : 0)
                                                                                                                                    << 0xa
                                                                                                                                    | (fpu_val_6_107 == f65_1 ? 1 : 0)
                                                                                                                                    << 0xe | 0x3800;
                                                                                                                                char entity_37;

                                                                                                                                entity_37 = !(*(&data_84 + 1) & 1) ? 0 : 1;

                                                                                                                                data_84 = *(&param_2 + 3);

                                                                                                                                if (data_84)
                                                                                                                                {
                                                                                                                                    long double fpu_val_6_109 =
                                                                                                                                        fpu_val_7_194 + 0.10000000000000001;
                                                                                                                                    long double f66_1 = param_6;
                                                                                                                                    fpu_val_6_109 - f66_1;

                                                                                                                                    if (*(&(
                                                                                                                                        (fpu_val_6_109 < f66_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(fpu_val_6_109, f66_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (fpu_val_6_109 == f66_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                                    {
                                                                                                                                        *(&return_addr + 3) = 0;
                                                                                                                                        goto label_4d8532;
                                                                                                                                    }

                                                                                                                                    long double f67_1 = param_6;
                                                                                                                                    fpu_val_7_194 - f67_1;
                                                                                                                                    data_84 =
                                                                                                                                        (fpu_val_7_194 < f67_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(fpu_val_7_194, f67_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (fpu_val_7_194 == f67_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800;

                                                                                                                                    if (!(*(&data_84 + 1) & 1))
                                                                                                                                    {
                                                                                                                                        long double fpu_val_6_111 =
                                                                                                                                            fpu_val_7_194 - 0.10000000000000001;
                                                                                                                                        long double f69_1 = param_6;
                                                                                                                                        fpu_val_6_111 - f69_1;
                                                                                                                                        data_84 =
                                                                                                                                            (fpu_val_6_111 < f69_1 ? 1 : 0) << 8 | (
                                                                                                                                            FCMP_UO(fpu_val_6_111, f69_1) ? 1 : 0)
                                                                                                                                            << 0xa
                                                                                                                                            | (fpu_val_6_111 == f69_1 ? 1 : 0)
                                                                                                                                            << 0xe | 0x3800;

                                                                                                                                        if (*(&data_84 + 1) & 1)
                                                                                                                                        {
                                                                                                                                            if (!entity_37)
                                                                                                                                            {
                                                                                                                                            label_4d8521:
                                                                                                                                                data_84 = 0;
                                                                                                                                                goto label_4d8527;
                                                                                                                                            }

                                                                                                                                            data_84 = item_5_1;
                                                                                                                                            bool flag_12_1 = !data_84;
                                                                                                                                            data_84 = 1;

                                                                                                                                            if (flag_12_1)
                                                                                                                                                goto label_4d8527;

                                                                                                                                            goto label_4d8521;
                                                                                                                                        }

                                                                                                                                        temp_7 = item_5_1;
                                                                                                                                    }
                                                                                                                                    else
                                                                                                                                    {
                                                                                                                                        if (!entity_37)
                                                                                                                                            data_84 = item_5_1;

                                                                                                                                        if (!entity_37 && data_84)
                                                                                                                                            goto label_4d8521;

                                                                                                                                        data_84 = 1;
                                                                                                                                    label_4d8527:
                                                                                                                                        *(&return_addr + 3) = 1;

                                                                                                                                        if (data_84)
                                                                                                                                            goto label_4d8532;

                                                                                                                                        temp_7 = item_5_1;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    *(&return_addr + 3) = 0;
                                                                                                                                label_4d8532:
