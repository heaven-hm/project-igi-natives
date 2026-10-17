// Original IGI.EXE function: RigidDynCubeObj_OnEvent (VA 0x004C35F0; static CFG gate PASS, CFG score 1.000).
#include "RigidDynCubeObj_OnEvent.h"
void* RigidDynCubeObj_OnEvent(void* context, int32_t* param_2)

{
    double* data_val = *param_2;
    double* entity_val = param_2[1];
    void* result = *(context + 0x6c);

    if (result)
    {
        int32_t entity_1 = *(context + 0xa4);

        if (entity_1 != 0xffffffff)
        {
            void* data_1 = *(result + (entity_1 << 2));
            result = *(*(data_1 + 0xc) + 0xc);

            if (!*(result + 0x28))
            {
                int32_t* context_1 = *(result + 0x2c);

                if (context_1 && *context_1)
                {
                    result = context_1[5];
                    void* result_2 = result;
                    result = param_2[5];

                    if (!result)
                    {
                    label_4c3687:
                        int16_t data_4;
                        data_4 = param_2[2];

                        if (data_4 == 0xff)
                        {
                        label_4c36c2:
                            long double fpu_val_7_2 = *(context + 0x9c);
                            long double fpu_val_6_1 = *(context + 0xa0);
                            float* source_1 = context_1[7];
                            char item_241_1 = 1;
                            fpu_val_6_1 - fpu_val_7_2;
                            void* result_1 = nullptr;
                            float* item_1cc_1 = source_1;
                            int32_t item_198[0x64];
                            item_198[0] = source_1;
                            long double fpu_val_7_3;

                            if (!(*(&((fpu_val_6_1 < fpu_val_7_2 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_1, fpu_val_7_2) ? 1 : 0) << 0xa
                                    | (fpu_val_6_1 == fpu_val_7_2 ? 1 : 0) << 0xe) + 1) & 1))
                                fpu_val_7_3 = *(context + 0xa0);
                            else
                                fpu_val_7_3 = *(context + 0x9c);

                            long double fpu_val_6_2 = *(context + 0x98);
                            fpu_val_6_2 - fpu_val_7_3;
                            long double fpu_val_7_5;

                            if (*(&((fpu_val_6_2 < fpu_val_7_3 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_2, fpu_val_7_3) ? 1 : 0) << 0xa
                                | (fpu_val_6_2 == fpu_val_7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            {
                                long double fpu_val_7_6 = *(context + 0x9c);
                                long double fpu_val_6_3 = *(context + 0xa0);
                                fpu_val_6_3 - fpu_val_7_6;

                                if (!(*(&((fpu_val_6_3 < fpu_val_7_6 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_3, fpu_val_7_6) ? 1 : 0) << 0xa
                                        | (fpu_val_6_3 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
                                    fpu_val_7_5 = *(context + 0xa0);
                                else
                                    fpu_val_7_5 = *(context + 0x9c);
                            }
                            else
                                fpu_val_7_5 = *(context + 0x98);

                            long double fp0_1;
                            fp0_1 = Render_ComputeNormals(*(context + 0x6c));
                            long double fpu_val_7_8 = fp0_1 * fpu_val_7_5;
                            float item_260_1 = fpu_val_7_8;
                            long double fpu_val_7_9 = *(context + 0x20) - fpu_val_7_8;
                            long double f2_1 = *data_val;
                            fpu_val_7_9 - f2_1;
                            result = (fpu_val_7_9 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_9, f2_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_9 == f2_1 ? 1 : 0) << 0xe | 0x3800;
                            double* temp_4;

                            if (*(&result + 1) & 0x41)
                            {
                                temp_4 = entity_val;
                            label_4c3784:
                                long double fpu_val_7_12 = item_260_1 + *(context + 0x20);
                                long double f4_1 = *data_val;
                                fpu_val_7_12 - f4_1;
                                result = (fpu_val_7_12 < f4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_12, f4_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_12 == f4_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 1))
                                {
                                label_4c37a5:
                                    long double fpu_val_7_15 = *(context + 0x28) - item_260_1;
                                    long double f6_1 = data_val[1];
                                    fpu_val_7_15 - f6_1;
                                    result = (fpu_val_7_15 < f6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_15, f6_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_15 == f6_1 ? 1 : 0) << 0xe | 0x3800;

                                    if (*(&result + 1) & 0x41)
                                    {
                                    label_4c37c8:
                                        long double fpu_val_7_18 = item_260_1 + *(context + 0x28);
                                        long double f8_1 = data_val[1];
                                        fpu_val_7_18 - f8_1;
                                        result = (fpu_val_7_18 < f8_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_18, f8_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_18 == f8_1 ? 1 : 0) << 0xe | 0x3800;

                                        if (!(*(&result + 1) & 1))
                                        {
                                        label_4c37eb:
                                            long double fpu_val_7_21 = *(context + 0x30) - item_260_1;
                                            long double f10_1 = data_val[2];
                                            fpu_val_7_21 - f10_1;
                                            result = (fpu_val_7_21 < f10_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_21, f10_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_21 == f10_1 ? 1 : 0) << 0xe | 0x3800;

                                            if (*(&result + 1) & 0x41)
                                            {
                                            label_4c380e:
                                                long double fpu_val_7_24 = item_260_1 + *(context + 0x30);
                                                long double f12_1 = data_val[2];
                                                fpu_val_7_24 - f12_1;
                                                result = (fpu_val_7_24 < f12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_24, f12_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_24 == f12_1 ? 1 : 0) << 0xe
                                                    | 0x3800;

                                                if (!(*(&result + 1) & 1))
                                                {
                                                label_4c382f:
                                                    long double fpu_val_7_27 = *data_val - *(context + 0x20);
                                                    long double fpu_val_6_5 = data_val[1] - *(context + 0x28);
                                                    long double fpu_val_5_2 = data_val[2] - *(context + 0x30);
                                                    float item_20c_1 = fpu_val_6_5 * *(context + 0x7c)
                                                        + fpu_val_5_2 * *(context + 0x88)
                                                        + fpu_val_7_27 * *(context + 0x70);
                                                    float item_234_1 = item_20c_1;
                                                    float item_234_2 = item_20c_1 / *(context + 0x98);
                                                    float item_230_2 = (fpu_val_5_2 * *(context + 0x8c)
                                                        + fpu_val_7_27 * *(context + 0x74)
                                                        + fpu_val_6_5 * *(context + 0x80)) / *(context + 0x98);
                                                    float item_22c_2 = (fpu_val_6_5 * *(context + 0x84)
                                                        + fpu_val_5_2 * *(context + 0x90)
                                                        + fpu_val_7_27 * *(context + 0x78)) / *(context + 0x98);
                                                    long double fpu_val_7_37 = *temp_4 - *(context + 0x20);
                                                    long double fpu_val_6_12 =
                                                        temp_4[1] - *(context + 0x28);
                                                    long double fpu_val_5_8 =
                                                        temp_4[2] - *(context + 0x30);
                                                    float item_20c_2 = fpu_val_5_8 * *(context + 0x88)
                                                        + fpu_val_7_37 * *(context + 0x70)
                                                        + fpu_val_6_12 * *(context + 0x7c);
                                                    float item_240_1 = item_20c_2;
                                                    float item_240_2 = item_20c_2 / *(context + 0x98);
                                                    float item_23c_2 = (fpu_val_5_8 * *(context + 0x8c)
                                                        + fpu_val_7_37 * *(context + 0x74)
                                                        + fpu_val_6_12 * *(context + 0x80)) / *(context + 0x98);
                                                    long double fpu_val_7_46 = (
                                                        fpu_val_5_8 * *(context + 0x90)
                                                        + fpu_val_7_37 * *(context + 0x78)
                                                        + fpu_val_6_12 * *(context + 0x84)) / *(context + 0x98);
                                                    long double fpu_val_6_14 = item_234_2;
                                                    long double f14_1 = item_240_2;
                                                    fpu_val_6_14 - f14_1;
                                                    float item_200_1;

                                                    item_200_1 = !(*(&(
                                                        (fpu_val_6_14 < f14_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_6_14, f14_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_6_14 == f14_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? item_240_2 : item_234_2;

                                                    long double fpu_val_6_15 = item_230_2;
                                                    long double f15_1 = item_23c_2;
                                                    fpu_val_6_15 - f15_1;
                                                    float item_1fc_1;

                                                    item_1fc_1 = !(*(&(
                                                        (fpu_val_6_15 < f15_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_6_15, f15_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_6_15 == f15_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? item_23c_2 : item_230_2;

                                                    long double fpu_val_6_16 = item_22c_2;
                                                    fpu_val_6_16 - fpu_val_7_46;
                                                    float item_1f8_1;

                                                    item_1f8_1 = !(*(&(
                                                        (fpu_val_6_16 < fpu_val_7_46 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_6_16, fpu_val_7_46) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_6_16 == fpu_val_7_46 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? fpu_val_7_46 : item_22c_2;

                                                    long double fpu_val_6_17 = item_234_2;
                                                    long double f16_1 = item_240_2;
                                                    fpu_val_6_17 - f16_1;
                                                    float item_1f4_1;

                                                    item_1f4_1 = *(&(
                                                        (fpu_val_6_17 < f16_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_6_17, f16_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_6_17 == f16_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? item_240_2 : item_234_2;

                                                    long double fpu_val_6_18 = item_230_2;
                                                    long double f17_1 = item_23c_2;
                                                    fpu_val_6_18 - f17_1;
                                                    float item_1f0_1;

                                                    item_1f0_1 = *(&(
                                                        (fpu_val_6_18 < f17_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_6_18, f17_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_6_18 == f17_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? item_23c_2 : item_230_2;

                                                    long double fpu_val_6_19 = item_22c_2;
                                                    fpu_val_6_19 - fpu_val_7_46;
                                                    float item_1ec_1;

                                                    item_1ec_1 = *(&(
                                                        (fpu_val_6_19 < fpu_val_7_46 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_6_19, fpu_val_7_46) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_6_19 == fpu_val_7_46 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? fpu_val_7_46 : item_22c_2;

                                                    long double fpu_val_7_47 = fpu_val_7_46 - item_22c_2;
                                                    long double fpu_val_5_13 = item_23c_2 - item_230_2;
                                                    float item_258_1 = fpu_val_5_13;
                                                    long double fpu_val_4_18 = item_240_2 - item_234_2;
                                                    float item_25c_2 = fpu_val_4_18;
                                                    double item_1b0_1 = 1.0 / (fpu_val_4_18 * fpu_val_4_18
                                                        + fpu_val_5_13 * fpu_val_5_13
                                                        + fpu_val_7_47 * fpu_val_7_47);
                                                    float item_210_1 = fpu_val_7_47;
                                                    long double fpu_val_7_48 = item_258_1;
                                                    long double f18_1 = 0.0f;
                                                    fpu_val_7_48 - f18_1;
                                                    long double fpu_val_7_49 = item_258_1;

                                                    if (*(&((fpu_val_7_48 < f18_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_7_48, f18_1) ? 1 : 0) << 0xa
                                                            | (fpu_val_7_48 == f18_1 ? 1 : 0)
                                                            << 0xe | 0x3800) + 1) & 1)
                                                        fpu_val_7_49 = -(fpu_val_7_49);

                                                    long double fpu_val_6_23 = item_25c_2;
                                                    long double f19_1 = 0.0f;
                                                    fpu_val_6_23 - f19_1;
                                                    long double fpu_val_6_24 = item_25c_2;

                                                    if (*(&((fpu_val_6_23 < f19_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_6_23, f19_1) ? 1 : 0) << 0xa
                                                            | (fpu_val_6_23 == f19_1 ? 1 : 0)
                                                            << 0xe | 0x3000) + 1) & 1)
                                                        fpu_val_6_24 = -(fpu_val_6_24);

                                                    fpu_val_7_49 - fpu_val_6_24;

                                                    if (!(*(&((fpu_val_7_49 < fpu_val_6_24 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_49, fpu_val_6_24) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_7_49 == fpu_val_6_24 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41))
                                                    {
                                                        long double fpu_val_7_52 = item_258_1;
                                                        long double f20_1 = 0.0f;
                                                        fpu_val_7_52 - f20_1;

                                                        if (!(*(&(
                                                                (fpu_val_7_52 < f20_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_52, f20_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_52 == f20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float item_220_2 = item_258_1;
                                                        else
                                                            float item_220_1 = -(item_258_1);

                                                        long double fpu_val_7_55 = item_210_1;
                                                        long double f22_1 = 0.0f;
                                                        fpu_val_7_55 - f22_1;

                                                        if (!(*(&(
                                                                (fpu_val_7_55 < f22_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_55, f22_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_55 == f22_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float item_220_4 = item_210_1;
                                                        else
                                                            float item_220_3 = -(item_210_1);
                                                    }

                                                    while (true)
                                                    {
                                                    label_4c3b13:
                                                        int16_t i;
                                                        i = item_241_1;
                                                        void* result_3;
                                                        float* dest_1;

                                                        if (i)
                                                        {
                                                            result_3 = result_1;
                                                            dest_1 = item_1cc_1;
                                                        }
                                                        else
                                                        {
                                                            int16_t source_2 = *(source_1 + 0x16);

                                                            if (!source_2)
                                                            {
                                                                result = result_1 - 1;
                                                                bool flag_4_1 = result_1 - 1 < 0;
                                                                result_1 = result;

                                                                if (flag_4_1)
                                                                    break;

                                                                source_1 = item_198[result];
                                                                continue;
                                                            }
                                                            else
                                                            {
                                                                dest_1 = item_1cc_1;
                                                                result_3 = result_1;
                                                                uint32_t entity_16 = source_2 * 3;
                                                                long double fpu_val_7_59 =
                                                                    dest_1[entity_16 * 2] - item_234_2;
                                                                source_1 = &dest_1[entity_16 * 2];
                                                                item_198[result_3] = source_1;
                                                                float item_1d8_1 = fpu_val_7_59;
                                                                float item_1d4_1 = source_1[1] - item_230_2;
                                                                long double fpu_val_7_63 =
                                                                    source_1[2] - item_22c_2;
                                                                long double fpu_val_6_26 = item_1d4_1;
                                                                long double fpu_val_5_15 = item_1d8_1;
                                                                float item_25c_3 = fpu_val_7_63 * item_210_1
                                                                    + item_1d4_1 * item_258_1
                                                                    + item_1d8_1 * item_25c_2;
                                                                float item_260_2 = source_1[3];
                                                                long double fpu_val_7_67 =
                                                                    fpu_val_5_15 * fpu_val_5_15
                                                                    + fpu_val_6_26 * fpu_val_6_26
                                                                    + fpu_val_7_63 * fpu_val_7_63
                                                                    - item_25c_3 * item_25c_3 * item_1b0_1;
                                                                long double fpu_val_6_34 =
                                                                    item_260_2 * item_260_2;
                                                                fpu_val_6_34 - fpu_val_7_67;
                                                                i = (fpu_val_6_34 < fpu_val_7_67 ? 1 : 0) << 8
                                                                    | (FCMP_UO(fpu_val_6_34, fpu_val_7_67) ? 1
                                                                    : 0) << 0xa
                                                                    | (fpu_val_6_34 == fpu_val_7_67 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    continue;
                                                                else
                                                                {
                                                                    long double fpu_val_7_69 =
                                                                        source_1[3] + *source_1;
                                                                    long double f23_1 = item_200_1;
                                                                    fpu_val_7_69 - f23_1;
                                                                    i = (fpu_val_7_69 < f23_1 ? 1 : 0) << 8
                                                                        | (FCMP_UO(fpu_val_7_69, f23_1) ? 1
                                                                        : 0) << 0xa
                                                                        | (fpu_val_7_69 == f23_1 ? 1 : 0)
                                                                        << 0xe;

                                                                    if (*(&i + 1) & 1)
                                                                        continue;
                                                                    else
                                                                    {
                                                                        long double fpu_val_7_71 =
                                                                            source_1[1] + source_1[3];
                                                                        long double f24_1 = item_1fc_1;
                                                                        fpu_val_7_71 - f24_1;
                                                                        i = (fpu_val_7_71 < f24_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_7_71, f24_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (fpu_val_7_71 == f24_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double fpu_val_7_73 =
                                                                                source_1[2] + source_1[3];
                                                                            long double f26_1 = item_1f8_1;
                                                                            fpu_val_7_73 - f26_1;
                                                                            i = (fpu_val_7_73 < f26_1 ? 1 : 0) << 8
                                                                                | (FCMP_UO(fpu_val_7_73, f26_1) ? 1
                                                                                : 0) << 0xa
                                                                                | (fpu_val_7_73 == f26_1 ? 1 : 0)
                                                                                << 0xe;

                                                                            if (*(&i + 1) & 1)
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double fpu_val_7_75 =
                                                                                    *source_1 - source_1[3];
                                                                                long double f28_1 = item_1f4_1;
                                                                                fpu_val_7_75 - f28_1;
                                                                                i = (fpu_val_7_75 < f28_1 ? 1 : 0) << 8
                                                                                    | (FCMP_UO(fpu_val_7_75, f28_1) ? 1
                                                                                    : 0) << 0xa
                                                                                    | (fpu_val_7_75 == f28_1 ? 1 : 0)
                                                                                    << 0xe;

                                                                                if (!(*(&i + 1) & 0x41))
                                                                                    continue;
                                                                                else
                                                                                {
                                                                                    long double fpu_val_7_77 =
                                                                                        source_1[1] - source_1[3];
                                                                                    long double f31_1 = item_1f0_1;
                                                                                    fpu_val_7_77 - f31_1;
                                                                                    i = (fpu_val_7_77 < f31_1 ? 1 : 0) << 8
                                                                                        | (FCMP_UO(fpu_val_7_77, f31_1) ? 1
                                                                                        : 0) << 0xa
                                                                                        | (fpu_val_7_77 == f31_1 ? 1 : 0)
                                                                                        << 0xe;

                                                                                    if (!(*(&i + 1) & 0x41))
                                                                                        continue;
                                                                                    else
                                                                                    {
                                                                                        long double fpu_val_7_79 =
                                                                                            source_1[2] - source_1[3];
                                                                                        long double f35_1 = item_1ec_1;
                                                                                        fpu_val_7_79 - f35_1;
                                                                                        i = (fpu_val_7_79 < f35_1 ? 1 : 0) << 8
                                                                                            | (FCMP_UO(fpu_val_7_79, f35_1) ? 1
                                                                                            : 0) << 0xa
                                                                                            | (fpu_val_7_79 == f35_1 ? 1 : 0)
                                                                                            << 0xe;

                                                                                        if (!(*(&i + 1) & 0x41))
                                                                                            continue;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        i = source_1[5];
                                                        item_241_1 = 0;

                                                        if (i)
                                                        {
                                                            int32_t saved_target;
                                                            float** entity_17 =
                                                                &(&saved_target)[result_3 + 0x36];

                                                            do
                                                            {
                                                                entity_17 = &entity_17[1];
                                                                result_3 += 1;
                                                                uint32_t data_17 = i * 3;
                                                                long double fpu_val_7_81 =
                                                                    dest_1[data_17 * 2] - item_234_2;
                                                                source_1 = &dest_1[data_17 * 2];
                                                                *entity_17 = source_1;
                                                                float item_1c8_1 = fpu_val_7_81;
                                                                float item_1c4_1 = source_1[1] - item_230_2;
                                                                long double fpu_val_7_85 =
                                                                    source_1[2] - item_22c_2;
                                                                long double fpu_val_6_35 = item_1c4_1;
                                                                long double fpu_val_5_17 = item_1c8_1;
                                                                float item_25c_4 = fpu_val_7_85 * item_210_1
                                                                    + item_1c4_1 * item_258_1
                                                                    + item_1c8_1 * item_25c_2;
                                                                float item_260_3 = source_1[3];
                                                                long double fpu_val_7_89 =
                                                                    fpu_val_5_17 * fpu_val_5_17
                                                                    + fpu_val_6_35 * fpu_val_6_35
                                                                    + fpu_val_7_85 * fpu_val_7_85
                                                                    - item_25c_4 * item_25c_4 * item_1b0_1;
                                                                long double fpu_val_6_43 =
                                                                    item_260_3 * item_260_3;
                                                                fpu_val_6_43 - fpu_val_7_89;
                                                                i = (fpu_val_6_43 < fpu_val_7_89 ? 1 : 0) << 8
                                                                    | (FCMP_UO(fpu_val_6_43, fpu_val_7_89) ? 1
                                                                    : 0) << 0xa
                                                                    | (fpu_val_6_43 == fpu_val_7_89 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double fpu_val_7_91 =
                                                                    source_1[3] + *source_1;
                                                                long double f25_1 = item_200_1;
                                                                fpu_val_7_91 - f25_1;
                                                                i = (fpu_val_7_91 < f25_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(fpu_val_7_91, f25_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (fpu_val_7_91 == f25_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double fpu_val_7_93 =
                                                                    source_1[1] + source_1[3];
                                                                long double f27_1 = item_1fc_1;
                                                                fpu_val_7_93 - f27_1;
                                                                i = (fpu_val_7_93 < f27_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(fpu_val_7_93, f27_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (fpu_val_7_93 == f27_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double fpu_val_7_95 =
                                                                    source_1[2] + source_1[3];
                                                                long double f30_1 = item_1f8_1;
                                                                fpu_val_7_95 - f30_1;
                                                                i = (fpu_val_7_95 < f30_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(fpu_val_7_95, f30_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (fpu_val_7_95 == f30_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double fpu_val_7_97 =
                                                                    *source_1 - source_1[3];
                                                                long double f34_1 = item_1f4_1;
                                                                fpu_val_7_97 - f34_1;
                                                                i = (fpu_val_7_97 < f34_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(fpu_val_7_97, f34_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (fpu_val_7_97 == f34_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                long double fpu_val_7_99 =
                                                                    source_1[1] - source_1[3];
                                                                long double f39_1 = item_1f0_1;
                                                                fpu_val_7_99 - f39_1;
                                                                i = (fpu_val_7_99 < f39_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(fpu_val_7_99, f39_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (fpu_val_7_99 == f39_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                long double fpu_val_7_101 =
                                                                    source_1[2] - source_1[3];
                                                                long double f43_1 = item_1ec_1;
                                                                fpu_val_7_101 - f43_1;
                                                                i = (fpu_val_7_101 < f43_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(fpu_val_7_101, f43_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (fpu_val_7_101 == f43_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                i = source_1[5];
                                                            } while (i);

                                                            result_1 = result_3;
                                                        }

                                                        int16_t entity_15 = *(source_1 + 0x12);

                                                        if (entity_15)
                                                        {
                                                            int32_t data_18 = 0;
                                                            data_18 = source_1[4];
                                                            int32_t item_220_5 = data_18;
                                                            int16_t* context_2 =
                                                                context_1[4] + (data_18 << 3);
                                                            int16_t* item_25c_5 = context_2;

                                                            if (data_18 < entity_15 + data_18)
                                                            {
                                                                while (true)
                                                                {
                                                                    int32_t entity_20 = 0;
                                                                    entity_20 = *context_2;
                                                                    int32_t temp_14 = 0;
                                                                    temp_14 = context_2[1];
                                                                    int32_t dest_2 = 0;
                                                                    dest_2 = context_2[2];
                                                                    float* entity_22 =
                                                                        (entity_20 << 4) + result_2;
                                                                    float* temp_16 =
                                                                        (temp_14 << 4) + result_2;
                                                                    float* dest_4 = (dest_2 << 4) + result_2;
                                                                    int32_t data_20 = 0;
                                                                    data_20 = context_2[3];
                                                                    int32_t context_4 = context_1[6];
                                                                    int32_t data_21 = data_20 * 3;

                                                                    if (*(context_4 + (data_21 << 2) + 4)
                                                                        == 0xffff)
                                                                    {
                                                                        long double fpu_val_7_102 = item_200_1;
                                                                        long double f29_1 = *entity_22;
                                                                        fpu_val_7_102 - f29_1;

                                                                        if (*(&(
                                                                            (fpu_val_7_102 < f29_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(fpu_val_7_102, f29_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (fpu_val_7_102 == f29_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                        label_4c3e99:
                                                                            long double fpu_val_7_105 = item_1fc_1;
                                                                            long double f32_1 = entity_22[1];
                                                                            fpu_val_7_105 - f32_1;

                                                                            if (*(&(
                                                                                (fpu_val_7_105 < f32_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_105, f32_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_105 == f32_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                            label_4c3ec7:
                                                                                long double fpu_val_7_108 = item_1f8_1;
                                                                                long double f36_1 = entity_22[2];
                                                                                fpu_val_7_108 - f36_1;

                                                                                if (*(&(
                                                                                    (fpu_val_7_108 < f36_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_108, f36_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_108 == f36_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
                                                                                label_4c3ef5:
                                                                                    long double fpu_val_7_111 = item_1f4_1;
                                                                                    long double f40_1 = *entity_22;
                                                                                    fpu_val_7_111 - f40_1;

                                                                                    if (!(*(&(
                                                                                        (fpu_val_7_111 < f40_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_111, f40_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_111 == f40_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1))
                                                                                    {
                                                                                    label_4c3f20:
                                                                                        long double fpu_val_7_114 = item_1f0_1;
                                                                                        long double f44_1 = entity_22[1];
                                                                                        fpu_val_7_114 - f44_1;

                                                                                        if (!(*(&(
                                                                                            (fpu_val_7_114 < f44_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_7_114, f44_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_7_114 == f44_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                        label_4c3f57:
                                                                                            long double fpu_val_7_117 = item_1ec_1;
                                                                                            long double f47_1 = entity_22[2];
                                                                                            fpu_val_7_117 - f47_1;

                                                                                            if (!(*(&(
                                                                                                (fpu_val_7_117 < f47_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_7_117, f47_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_7_117 == f47_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                            label_4c3f92:
                                                                                                float item_250_1 = *dest_4 - *entity_22;
                                                                                                float item_24c_1 = dest_4[1] - entity_22[1];
                                                                                                float item_248_1 = dest_4[2] - entity_22[2];
                                                                                                float item_1e8_1 = *temp_16 - *entity_22;
                                                                                                float item_1e4_1 = temp_16[1] - entity_22[1];
                                                                                                long double fpu_val_7_131 =
                                                                                                    temp_16[2] - entity_22[2];
                                                                                                float item_1e0_1 = fpu_val_7_131;
                                                                                                float item_258_2 = fpu_val_7_131 * item_24c_1
                                                                                                    - item_1e4_1 * item_248_1;
                                                                                                long double fpu_val_7_136 =
                                                                                                    item_1e0_1 * item_250_1
                                                                                                    - item_1e8_1 * item_248_1;
                                                                                                float item_23c_3 = -(fpu_val_7_136);
                                                                                                float item_228_1 = item_1e4_1 * item_250_1
                                                                                                    - item_1e8_1 * item_24c_1;
                                                                                                long double fpu_val_7_144 =
                                                                                                    item_228_1 * item_210_1
                                                                                                    + item_23c_3 * item_258_1
                                                                                                    + item_258_2 * item_25c_2;
                                                                                                long double f50_1 = 0.0;
                                                                                                fpu_val_7_144 - f50_1;
                                                                                                float item_1bc_1 = fpu_val_7_144;
                                                                                                bool c1_1 = /* bool c1_1 =
                                                                                                    unknown  {fst dword [stack_ptr+0xb4], fp0} */;

                                                                                                if (!(*(&(
                                                                                                    (fpu_val_7_144 < f50_1 ? 1 : 0) << 8
                                                                                                    | (c1_1 ? 1 : 0) << 9 | (
                                                                                                    FCMP_UO(fpu_val_7_144, f50_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_144 == f50_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                                {
                                                                                                    long double fpu_val_7_146 = (
                                                                                                        (entity_22[2] - item_22c_2) * item_228_1
                                                                                                        + (entity_22[1] - item_230_2) * item_23c_3
                                                                                                        + (*entity_22 - item_234_2) * item_258_2)
                                                                                                        / fpu_val_7_144;
                                                                                                    float item_260_4 = fpu_val_7_146;
                                                                                                    long double f53_1 = 0.0f;
                                                                                                    fpu_val_7_146 - f53_1;

                                                                                                    if (!(*(&(
                                                                                                        (fpu_val_7_146 < f53_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_7_146, f53_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_7_146 == f53_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1))
                                                                                                    {
                                                                                                        long double fpu_val_7_147 = item_260_4;
                                                                                                        long double f55_1 = 1.0f;
                                                                                                        fpu_val_7_147 - f55_1;

                                                                                                        if (*(&(
                                                                                                            (fpu_val_7_147 < f55_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(fpu_val_7_147, f55_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (fpu_val_7_147 == f55_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 0x41)
                                                                                                        {
                                                                                                            float item_20c_3 =
                                                                                                                item_260_4 * item_25c_2 + item_234_2;
                                                                                                            float item_208_3 =
                                                                                                                item_260_4 * item_258_1 + item_230_2;
                                                                                                            float item_204_3 =
                                                                                                                item_260_4 * item_210_1 + item_22c_2;
                                                                                                            long double fpu_val_7_157 = item_258_2;
                                                                                                            long double f56_1 = 0.0f;
                                                                                                            fpu_val_7_157 - f56_1;
                                                                                                            float item_1a4_1;

                                                                                                            item_1a4_1 = !(*(&(
                                                                                                                (fpu_val_7_157 < f56_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(fpu_val_7_157, f56_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (fpu_val_7_157 == f56_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 1) ? item_258_2
                                                                                                                : -(item_258_2);

                                                                                                            long double fpu_val_7_160 = item_23c_3;
                                                                                                            long double f57_1 = 0.0f;
                                                                                                            fpu_val_7_160 - f57_1;
                                                                                                            long double fpu_val_7_161 = item_23c_3;

                                                                                                            if (*(&(
                                                                                                                    (fpu_val_7_160 < f57_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_7_160, f57_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_7_160 == f57_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                                fpu_val_7_161 = -(fpu_val_7_161);

                                                                                                            long double fpu_val_6_60 = item_228_1;
                                                                                                            long double f58_1 = 0.0f;
                                                                                                            fpu_val_6_60 - f58_1;
                                                                                                            long double fpu_val_6_61 = item_228_1;

                                                                                                            if (*(&(
                                                                                                                    (fpu_val_6_60 < f58_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(fpu_val_6_60, f58_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (fpu_val_6_60 == f58_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                                fpu_val_6_61 = -(fpu_val_6_61);

                                                                                                            long double fpu_val_5_25 = item_1a4_1;
                                                                                                            fpu_val_5_25 - fpu_val_7_161;
                                                                                                            long double fpu_val_5_26;

                                                                                                            if (!(*(&(
                                                                                                                (fpu_val_5_25 < fpu_val_7_161 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(fpu_val_5_25, fpu_val_7_161) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (fpu_val_5_25 == fpu_val_7_161 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41))
                                                                                                            {
                                                                                                                fpu_val_5_26 = item_1a4_1;
                                                                                                                fpu_val_5_26 - fpu_val_6_61;
                                                                                                            }

                                                                                                            float item_260_5;

                                                                                                            if (*(&(
                                                                                                                (fpu_val_5_25 < fpu_val_7_161 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(fpu_val_5_25, fpu_val_7_161) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (fpu_val_5_25 == fpu_val_7_161 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41 || *(&(
                                                                                                                (fpu_val_5_26 < fpu_val_6_61 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(fpu_val_5_26, fpu_val_6_61) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (fpu_val_5_26 == fpu_val_6_61 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41)
                                                                                                            {
                                                                                                                fpu_val_7_161 - fpu_val_6_61;

                                                                                                                if (*(&(
                                                                                                                    (fpu_val_7_161 < fpu_val_6_61 ? 1 : 0) << 8
                                                                                                                    | (FCMP_UO(fpu_val_7_161, fpu_val_6_61) ? 1
                                                                                                                    : 0) << 0xa
                                                                                                                    | (fpu_val_7_161 == fpu_val_6_61 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                {
                                                                                                                    fpu_val_7_144 = item_228_1;
                                                                                                                    long double f59_1 = 0.0;
                                                                                                                    fpu_val_7_144 - f59_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (fpu_val_7_144 < f59_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_7_144, f59_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_7_144 == f59_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        float item_258_4 = item_208_3 - entity_22[1];
                                                                                                                        float item_21c_3 = item_20c_3 - *entity_22;
                                                                                                                        item_228_1 = (item_258_4 * item_250_1
                                                                                                                            - item_21c_3 * item_24c_1) / fpu_val_7_144;
                                                                                                                        long double fpu_val_7_188 = item_228_1;
                                                                                                                        long double f62_1 = 0.0;
                                                                                                                        fpu_val_7_188 - f62_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (fpu_val_7_188 < f62_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(fpu_val_7_188, f62_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (fpu_val_7_188 == f62_1 ? 1 : 0)
                                                                                                                            << 0xe) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double fpu_val_7_189 = item_228_1;
                                                                                                                            long double f65_1 = 1.0;
                                                                                                                            fpu_val_7_189 - f65_1;

                                                                                                                            if (*(&(
                                                                                                                                (fpu_val_7_189 < f65_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(fpu_val_7_189, f65_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (fpu_val_7_189 == f65_1 ? 1 : 0)
                                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                                            {
                                                                                                                                long double fpu_val_7_190 = item_250_1;
                                                                                                                                long double f68_1 = 0.0f;
                                                                                                                                fpu_val_7_190 - f68_1;
                                                                                                                                long double fpu_val_7_191 = item_250_1;

                                                                                                                                if (*(&(
                                                                                                                                        (fpu_val_7_190 < f68_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(fpu_val_7_190, f68_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (fpu_val_7_190 == f68_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                                    fpu_val_7_191 = -(fpu_val_7_191);

                                                                                                                                long double fpu_val_6_102 = item_24c_1;
                                                                                                                                long double f71_1 = 0.0f;
                                                                                                                                fpu_val_6_102 - f71_1;
                                                                                                                                long double fpu_val_6_103 = item_24c_1;

                                                                                                                                if (*(&(
                                                                                                                                        (fpu_val_6_102 < f71_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(fpu_val_6_102, f71_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (fpu_val_6_102 == f71_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                                    fpu_val_6_103 = -(fpu_val_6_103);

                                                                                                                                fpu_val_7_191 - fpu_val_6_103;

                                                                                                                                if (*(&(
                                                                                                                                    (fpu_val_7_191 < fpu_val_6_103 ? 1 : 0) << 8
                                                                                                                                    | (FCMP_UO(fpu_val_7_191, fpu_val_6_103) ? 1
                                                                                                                                    : 0) << 0xa
                                                                                                                                    | (fpu_val_7_191 == fpu_val_6_103 ? 1 : 0)
                                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                                {
                                                                                                                                    long double fpu_val_7_196 = item_24c_1;
                                                                                                                                    long double f74_1 = 0.0f;
                                                                                                                                    fpu_val_7_196 - f74_1;

                                                                                                                                    if (!(*(&(
                                                                                                                                        (fpu_val_7_196 < f74_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(fpu_val_7_196, f74_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (fpu_val_7_196 == f74_1 ? 1 : 0)
                                                                                                                                        << 0xe) + 1) & 0x40))
                                                                                                                                    {
                                                                                                                                        fpu_val_7_144 = (item_258_4
                                                                                                                                            - item_1e4_1 * item_228_1) / item_24c_1;
                                                                                                                                        goto label_4c4467;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    fpu_val_7_144 = (item_21c_3
                                                                                                                                        - item_1e8_1 * item_228_1) / item_250_1;
                                                                                                                                label_4c4467:
                                                                                                                                    long double f76_1 = 0.0;
                                                                                                                                    fpu_val_7_144 - f76_1;

                                                                                                                                    if (!(*(&(
                                                                                                                                        (fpu_val_7_144 < f76_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(fpu_val_7_144, f76_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (fpu_val_7_144 == f76_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                                                    {
                                                                                                                                        long double fpu_val_6_110 =
                                                                                                                                            fpu_val_7_144 + item_228_1;
                                                                                                                                        long double f78_1 = 1.0;
                                                                                                                                        fpu_val_6_110 - f78_1;

                                                                                                                                        if (*(&(
                                                                                                                                                (fpu_val_6_110 < f78_1 ? 1 : 0) << 8 | (
                                                                                                                                                FCMP_UO(fpu_val_6_110, f78_1) ? 1 : 0)
                                                                                                                                                << 0xa
                                                                                                                                                | (fpu_val_6_110 == f78_1 ? 1 : 0)
                                                                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                                            goto label_4c4497;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    fpu_val_7_144 = fpu_val_7_136;
                                                                                                                    long double f60_1 = 0.0;
                                                                                                                    fpu_val_7_144 - f60_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (fpu_val_7_144 < f60_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(fpu_val_7_144, f60_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (fpu_val_7_144 == f60_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        item_260_5 = item_204_3 - entity_22[2];
                                                                                                                        float item_21c_2 = item_20c_3 - *entity_22;
                                                                                                                        item_228_1 = (item_260_5 * item_250_1
                                                                                                                            - item_21c_2 * item_248_1) / fpu_val_7_144;
                                                                                                                        long double fpu_val_7_179 = item_228_1;
                                                                                                                        long double f63_1 = 0.0;
                                                                                                                        fpu_val_7_179 - f63_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (fpu_val_7_179 < f63_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(fpu_val_7_179, f63_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (fpu_val_7_179 == f63_1 ? 1 : 0)
                                                                                                                            << 0xe) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double fpu_val_7_180 = item_228_1;
                                                                                                                            long double f66_1 = 1.0;
                                                                                                                            fpu_val_7_180 - f66_1;
