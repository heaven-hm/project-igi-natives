// Original IGI.EXE function: Car_WheelSweep (VA 0x0042EF00; static CFG gate PASS, CFG score 0.900).
#include "Car_WheelSweep.h"
int32_t Car_WheelSweep(float* context)

{
    void* data_val = context[0x6d];
    int32_t entity_val = 0;
    float source_val = 0.0f;
    void* dest_val = *(data_val + 0x2d4);
    float item_a90 = 0.0f;
    void* item_a8c = dest_val;
    int32_t result_1 = 0;
    int32_t item_a60 = 0xffffffff;
    int32_t item_a5c = 0xffefffff;
    int32_t item_a88 = 0;
    double item_a78;
    int32_t item_a70;
    double item_a68;
    void item_8c8;

    if (*(dest_val + 0x118) > 0)
    {
        char* item_a9c_1 = &context[0x1d7];
        float* temp_2 = dest_val + 0x128;
        int32_t* item_a84_1 = &item_8c8;
        float* item_a94_1 = temp_2;
        int32_t item_a98_1 = 0;
        bool flag_1_1;

        do
        {
            int32_t data_5 = temp_2[-1];

            if (data_5 >= 0 && *item_a9c_1)
            {
                long double fpu_val_7_2 = *temp_2 + 2048.0;
                int32_t temp_4 = data_5 * 7;
                void* temp_5 = &context[temp_4 * 2];
                int32_t saved_target;
                *(&saved_target + entity_val + 0x60) = context[temp_4 * 2 + 0x72];
                void item_a40;
                *(&item_a40 + entity_val) = *(temp_5 + 0x1cc);
                long double fpu_val_6_3 = *(temp_5 + 0x1d0);
                void item_a38;
                *(&item_a38 + entity_val) = fpu_val_6_3;
                item_a78 = context[0x1c] * *(&saved_target + entity_val + 0x60) + context[0x1e] * fpu_val_6_3
                    + context[0x1d] * *(&item_a40 + entity_val);
                item_a70 = context[0x1f] * *(&saved_target + entity_val + 0x60) + context[0x21] * fpu_val_6_3
                    + context[0x20] * *(&item_a40 + entity_val);
                item_a68 = context[0x22] * *(&saved_target + entity_val + 0x60) + context[0x24] * fpu_val_6_3
                    + context[0x23] * *(&item_a40 + entity_val);
                memcpy(&saved_target + entity_val + 0x60, &item_a78, 0x18);
                *(&saved_target + entity_val + 0x60) = *(context + 0x20) + *(&saved_target + entity_val + 0x60);
                int32_t entity_1 = item_a98_1;
                *(&item_a40 + entity_1) = *(context + 0x28) + *(&item_a40 + entity_1);
                long double fpu_val_6_10 = *(context + 0x30) + *(&item_a38 + entity_1);
                *(&item_a38 + entity_1) = fpu_val_6_10;
                int32_t data_4 = item_a98_1 + 0x18;
                item_a98_1 = data_4;
                *(&item_a38 + entity_1) = *item_a94_1 + fpu_val_6_10 + 4096.0;
                memcpy(&saved_target + entity_1 + 0x220, &saved_target + entity_val + 0x60, 0x18);
                void item_890;
                *(&item_890 + data_4) = *(&item_890 + data_4) - fpu_val_7_2 - 4096.0;
                float source_4 = item_a90;
                *(temp_5 + 0x1d4) = 0;
                *item_a84_1 = item_a88;
                item_a90 = source_4 + 1;
                item_a84_1 = &item_a84_1[1];
                temp_2 = item_a94_1;
                dest_val = item_a8c;
                entity_val = data_4;
            }

            if (!*item_a9c_1)
                context[data_5 * 0xe + 0x75] = 1;

            item_a9c_1 = &item_a9c_1[0x1c];
            temp_2 = &temp_2[5];
            flag_1_1 = item_a88 + 1 < *(dest_val + 0x118);
            item_a88 += 1;
            item_a94_1 = temp_2;
        } while (flag_1_1);
        source_val = item_a90;
    }

    float* item_a4c = context;
    void item_a50;
    double item_a48;
    double item_888[0x30];
    void item_708;
    int32_t result = DynObj_FindSymbol_11(Level_StartMission_4(), &item_708, &item_a48, &item_888, source_val, 0xc,
        &item_a50, 0xffffffff);

    if (source_val > 0)
    {
        void item_6a8;
        double* item_a9c_2 = &item_6a8;
        int32_t* item_a94_2 = &item_8c8;
        float item_a88_1 = source_val;

        while (true)
        {
            float item_a98_2 = 0.0f;
            float source_12 = *item_a94_2;
            int32_t entity_4 = source_12 * 5;
            item_a90 = *(dest_val + (entity_4 << 2) + 0x128);
            int32_t entity_5 = 0;
            float dest_3 = *(dest_val + (entity_4 << 2) + 0x124);
            int32_t temp_8 = 0;

            if (item_a9c_2[-1])
            {
                long double fpu_val_7_4 = *item_a9c_2;
                long double f1_1 = 4096.0;
                fpu_val_7_4 - f1_1;
                int32_t item_a84_2;

                if (*(&((fpu_val_7_4 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    long double fpu_val_7_6 = 4096.0 - *item_a9c_2;
                    long double fpu_val_6_15 = item_a60;
                    item_a98_2 = item_a90;
                    entity_5 = 1;
                    fpu_val_6_15 - fpu_val_7_6;
                    result_1 = 1;
                    item_a84_2 = 1;

                    if (1 & *(&((fpu_val_6_15 < fpu_val_7_6 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_15, fpu_val_7_6) ? 1 : 0) << 0xa
                            | (fpu_val_6_15 == fpu_val_7_6 ? 1 : 0) << 0xe | 0x3800) + 1))
                        item_a60 = fpu_val_7_6;

                    goto label_42f236;
                }

                long double fpu_val_7_7 = *item_a9c_2;
                long double f3_1 = 4096.0;
                fpu_val_7_7 - f3_1;

                if (!(*(&((fpu_val_7_7 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double fpu_val_7_9 = item_a90 + 4096.0f;
                    long double f4_1 = *item_a9c_2;
                    fpu_val_7_9 - f4_1;

                    if (!(*(&((fpu_val_7_9 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_9, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_9 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    {
                        item_a84_2 = 1;
                        item_a98_2 = fpu_val_7_9 - *item_a9c_2;
                    label_42f236:
                        long double fpu_val_7_13 = item_a98_2 / item_a90;
                        item_a78 = 0;
                        *(&item_a78 + 4) = 0;
                        item_a70 = fpu_val_7_13 * *(item_a8c + ((source_12 * 5 + 0x4b) << 2)) * *(data_val + 8)
                            * 44.6008873f;

                        if (entity_5)
                            item_a70 = (2.0f - *item_a9c_2 * 0.000244140625) * item_a70;

                        int32_t temp_13 = dest_3 * 7;
                        *(&item_a70 + 4) = context[temp_13 * 2 + 0x72];
                        item_a68 = context[temp_13 * 2 + 0x73];
                        *(&item_a68 + 4) = context[temp_13 * 2 + 0x74];
                        ForceAccumulator_Add(&context[0x3c], &item_a78);
                        temp_8 = item_a84_2;
                    }
                }
            }

            int32_t data_25 = dest_3 * 7;
            long double fpu_val_7_23 = context[data_25 * 2 + 0x7c] - item_a98_2;
            void* dest_4 = &context[data_25 * 2];
            long double f0_1 = 0.0f;
            fpu_val_7_23 - f0_1;

            if (*(&((fpu_val_7_23 < f0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_23, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_23 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                fpu_val_7_23 = -(fpu_val_7_23);

            long double f2_1 = 0.00100000005f;
            fpu_val_7_23 - f2_1;

            if (!(*(&((fpu_val_7_23 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_23, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_23 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_24 = *(dest_4 + 0x1f0);
                long double fpu_val_6_19 = item_a98_2;
                fpu_val_6_19 - fpu_val_7_24;
                long double fpu_val_7_26;

                fpu_val_7_26 = *(&((fpu_val_6_19 < fpu_val_7_24 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_19, fpu_val_7_24) ? 1 : 0) << 0xa
                    | (fpu_val_6_19 == fpu_val_7_24 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                    ? fpu_val_7_24 * 0.0500000007f + item_a98_2 * 0.949999988f : item_a98_2;

                *(dest_4 + 0x1f0) = fpu_val_7_26;
            }

            void* entity_10 = &context[source_12 * 7];
            *(entity_10 + 0x75d) = temp_8;
            *(dest_4 + 0x1d6) = temp_8;

            if (temp_8)
            {
                *(entity_10 + 0x760) = item_a9c_2[-5];
                *(entity_10 + 0x764) = *(item_a9c_2 - 0x24);
                *(entity_10 + 0x768) = item_a9c_2[-4];
                long double fpu_val_7_28 = *(entity_10 + 0x760);
                long double f6_1 = 0.0f;
                fpu_val_7_28 - f6_1;

                if (!(*(&((fpu_val_7_28 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_28, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_28 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_42f3a9:
                    long double fpu_val_7_31 = *(entity_10 + 0x768);
                    long double fpu_val_6_22 = *(entity_10 + 0x764);
                    long double fpu_val_5_16 = *(entity_10 + 0x760);
                    long double fpu_val_7_33 = 1.0 / sqrtl(fpu_val_5_16 * fpu_val_5_16
                        + fpu_val_6_22 * fpu_val_6_22 + fpu_val_7_31 * fpu_val_7_31);
                    *(entity_10 + 0x760) = *(entity_10 + 0x760) * fpu_val_7_33;
                    *(entity_10 + 0x764) = *(entity_10 + 0x764) * fpu_val_7_33;
                    *(entity_10 + 0x768) = *(entity_10 + 0x768) * fpu_val_7_33;
                }
                else
                {
                    long double fpu_val_7_29 = *(entity_10 + 0x764);
                    long double f7_1 = 0.0f;
                    fpu_val_7_29 - f7_1;

                    if (!(*(&((fpu_val_7_29 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_29, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_29 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_42f3a9;

                    long double fpu_val_7_30 = *(entity_10 + 0x768);
                    long double f8_1 = 0.0f;
                    fpu_val_7_30 - f8_1;

                    if (!(*(&((fpu_val_7_30 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_30, f8_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_30 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_42f3a9;
                }

                *(entity_10 + 0x76c) = *(dest_4 + 0x1c8);
                *(entity_10 + 0x770) = *(dest_4 + 0x1cc);
                *(entity_10 + 0x774) = *(dest_4 + 0x1d0);
                *(entity_10 + 0x774) = *(entity_10 + 0x774) + 1638.40002f;
                context[0x6e] = 1;
                Car_WheelDrive(context, source_12, dest_3);
            }

            bool flag_4_1 = item_a88_1 != 1;
            item_a94_2 = &item_a94_2[1];
            item_a9c_2 = &item_a9c_2[0xe];
            item_a88_1 -= 1;

            if (!flag_4_1)
                break;

            dest_val = item_a8c;
        }

        result = result_1;

        if (result)
        {
            memcpy(&item_a78, &context[8], 0x18);
            double item_a68_1 = item_a68 + item_a60;
            long double fpu_val_7_39 = context[0x27];
            long double fpu_val_6_30 = context[0x28];
            fpu_val_6_30 - fpu_val_7_39;
            long double fpu_val_7_40;

            if (!(*(&((fpu_val_6_30 < fpu_val_7_39 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_30, fpu_val_7_39) ? 1 : 0) << 0xa
                    | (fpu_val_6_30 == fpu_val_7_39 ? 1 : 0) << 0xe) + 1) & 1))
                fpu_val_7_40 = context[0x28];
            else
                fpu_val_7_40 = context[0x27];

            long double fpu_val_6_31 = context[0x26];
            fpu_val_6_31 - fpu_val_7_40;
            long double fpu_val_7_42;

            if (*(&((fpu_val_6_31 < fpu_val_7_40 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_31, fpu_val_7_40) ? 1 : 0) << 0xa
                | (fpu_val_6_31 == fpu_val_7_40 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_7_43 = context[0x27];
                long double fpu_val_6_32 = context[0x28];
                fpu_val_6_32 - fpu_val_7_43;

                if (!(*(&((fpu_val_6_32 < fpu_val_7_43 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_32, fpu_val_7_43) ? 1 : 0) << 0xa
                        | (fpu_val_6_32 == fpu_val_7_43 ? 1 : 0) << 0xe) + 1) & 1))
                    fpu_val_7_42 = context[0x28];
                else
                    fpu_val_7_42 = context[0x27];
            }
            else
                fpu_val_7_42 = context[0x26];

            float item_aac_4 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_42;
            return WorldObject_CommitTransform(Level_StartMission_4(), context, &item_a78, item_aac_4);
        }
    }

    return result;
}
