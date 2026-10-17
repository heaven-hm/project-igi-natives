// Original IGI.EXE function: RigidDynCubeObj_Setup (VA 0x004C1840; static CFG gate PASS, CFG score 1.000).
#include "RigidDynCubeObj_Setup.h"
int32_t* RigidDynCubeObj_Setup(void* context, int32_t* param_2)

{
    void** context_val = param_2[8];
    double* item_240 = *param_2;
    int32_t* result = *(context + 0x6c);
    double* item_260 = param_2[1];

    if (result)
    {
        int32_t entity_1 = *(context + 0xa4);

        if (entity_1 != 0xffffffff)
        {
            void* data_1 = result[entity_1];
            void* entity_2 = *(*(data_1 + 0xc) + 0xc);
            result = *(entity_2 + 0x28);

            if (!result)
            {
                int32_t temp_2 = *(entity_2 + 0x2c);
                int32_t data_3 = param_2[5] << 5;
                result = data_3 + temp_2;
                int32_t* result_1 = result;

                if (data_3 != -(temp_2) && *result)
                {
                    int32_t data_4 = result[5];
                    char data_5 = param_2[3];

                    if (data_5 == 0xff)
                    {
                    label_4c1906:
                        result = param_2[2];
                        int32_t* result_2 = nullptr;

                        if (result > 0)
                        {
                            while (true)
                            {
                                char item_2a9_1 = 1;
                                bool item_2f5_1;

                                if (!context_val[0x16])
                                    item_2f5_1 = false;
                                else
                                    item_2f5_1 = context_val[0x13];

                                long double fpu_val_7_1 = *(context + 0x9c);
                                long double fpu_val_6_1 = *(context + 0xa0);
                                int16_t data_9;
                                data_9 = context_val[0x16];
                                float* dest_1 = result_1[7];
                                char item_2d9_1 = data_9;
                                fpu_val_6_1 - fpu_val_7_1;
                                char item_2ab_1 = 0;
                                int32_t item_2b4_1 = 0;
                                float* item_218_1 = dest_1;
                                int32_t item_198[0x64];
                                item_198[0] = dest_1;
                                long double fpu_val_7_2;

                                if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
                                        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    fpu_val_7_2 = *(context + 0xa0);
                                else
                                    fpu_val_7_2 = *(context + 0x9c);

                                long double fpu_val_6_2 = *(context + 0x98);
                                fpu_val_6_2 - fpu_val_7_2;
                                data_9 = (fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
                                    | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800;
                                long double fpu_val_7_4;

                                if (*(&data_9 + 1) & 0x41)
                                {
                                    long double fpu_val_7_5 = *(context + 0x9c);
                                    long double fpu_val_6_3 = *(context + 0xa0);
                                    fpu_val_6_3 - fpu_val_7_5;
                                    data_9 = (fpu_val_6_3 < fpu_val_7_5 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_6_3, fpu_val_7_5) ? 1 : 0) << 0xa
                                        | (fpu_val_6_3 == fpu_val_7_5 ? 1 : 0) << 0xe;

                                    if (!(*(&data_9 + 1) & 1))
                                        fpu_val_7_4 = *(context + 0xa0);
                                    else
                                        fpu_val_7_4 = *(context + 0x9c);
                                }
                                else
                                    fpu_val_7_4 = *(context + 0x98);

                                long double fpu_val_7_7 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_4;
                                float item_2f4_1 = fpu_val_7_7;
                                long double fpu_val_7_8 = *(context + 0x20) - fpu_val_7_7;
                                long double f2_1 = *item_240;
                                fpu_val_7_8 - f2_1;
                                long double f3_1;

                                if (!(*(&((fpu_val_7_8 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_8, f2_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                {
                                    f3_1 = *item_260;
                                    fpu_val_7_8 - f3_1;
                                }

                                if (*(&((fpu_val_7_8 < f2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_8, f2_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 || *(
                                    &((fpu_val_7_8 < f3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_8, f3_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_8 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                {
                                    long double fpu_val_7_11 = item_2f4_1 + *(context + 0x20);
                                    long double f4_1 = *item_240;
                                    fpu_val_7_11 - f4_1;
                                    double* temp_6;

                                    if (!(*(&((fpu_val_7_11 < f4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_7_11, f4_1) ? 1 : 0) << 0xa
                                        | (fpu_val_7_11 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        temp_6 = item_260;
                                    label_4c1a41:
                                        long double fpu_val_7_14 = *(context + 0x28) - item_2f4_1;
                                        long double f6_1 = item_240[1];
                                        fpu_val_7_14 - f6_1;
                                        long double f7_1;

                                        if (!(*(&((fpu_val_7_14 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_14, f6_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_14 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41))
                                        {
                                            f7_1 = temp_6[1];
                                            fpu_val_7_14 - f7_1;
                                        }

                                        if (*(&((fpu_val_7_14 < f6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_14, f6_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_14 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 || *(&((fpu_val_7_14 < f7_1 ? 1 : 0) << 8
                                            | (FCMP_UO(fpu_val_7_14, f7_1) ? 1 : 0) << 0xa
                                            | (fpu_val_7_14 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        {
                                            long double fpu_val_7_17 = item_2f4_1 + *(context + 0x28);
                                            long double f8_1 = item_240[1];
                                            fpu_val_7_17 - f8_1;
                                            long double f9_1;

                                            if (*(&((fpu_val_7_17 < f8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_17, f8_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_17 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            {
                                                f9_1 = temp_6[1];
                                                fpu_val_7_17 - f9_1;
                                            }

                                            if (!(*(&((fpu_val_7_17 < f8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_17, f8_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_17 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1) || !(*(&((fpu_val_7_17 < f9_1 ? 1 : 0) << 8
                                                | (FCMP_UO(fpu_val_7_17, f9_1) ? 1 : 0) << 0xa
                                                | (fpu_val_7_17 == f9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            {
                                                long double fpu_val_7_20 = *(context + 0x30) - item_2f4_1;
                                                long double f10_1 = item_240[2];
                                                fpu_val_7_20 - f10_1;
                                                long double f11_1;

                                                if (!(*(&((fpu_val_7_20 < f10_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_20, f10_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_20 == f10_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 0x41))
                                                {
                                                    f11_1 = temp_6[2];
                                                    fpu_val_7_20 - f11_1;
                                                }

                                                if (*(&((fpu_val_7_20 < f10_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_20, f10_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_20 == f10_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 0x41 || *(&(
                                                    (fpu_val_7_20 < f11_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(fpu_val_7_20, f11_1) ? 1 : 0) << 0xa
                                                    | (fpu_val_7_20 == f11_1 ? 1 : 0) << 0xe) + 1)
                                                    & 0x41)
                                                {
                                                    long double fpu_val_7_23 =
                                                        item_2f4_1 + *(context + 0x30);
                                                    long double f12_1 = item_240[2];
                                                    fpu_val_7_23 - f12_1;
                                                    long double f13_1;

                                                    if (*(&((fpu_val_7_23 < f12_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_23, f12_1) ? 1 : 0)
                                                        << 0xa | (fpu_val_7_23 == f12_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1)
                                                    {
                                                        f13_1 = temp_6[2];
                                                        fpu_val_7_23 - f13_1;
                                                    }

                                                    if (!(*(&((fpu_val_7_23 < f12_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_23, f12_1) ? 1 : 0)
                                                        << 0xa | (fpu_val_7_23 == f12_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) || !(*(&(
                                                        (fpu_val_7_23 < f13_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(fpu_val_7_23, f13_1) ? 1 : 0)
                                                        << 0xa
                                                        | (fpu_val_7_23 == f13_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1))
                                                    {
                                                        long double fpu_val_7_26 =
                                                            *item_240 - *(context + 0x20);
                                                        long double fpu_val_6_5 =
                                                            item_240[1] - *(context + 0x28);
                                                        long double fpu_val_5_2 =
                                                            item_240[2] - *(context + 0x30);
                                                        float item_204_1 = fpu_val_5_2 * *(context + 0x88)
                                                            + fpu_val_7_26 * *(context + 0x70)
                                                            + fpu_val_6_5 * *(context + 0x7c);
                                                        float item_2e8_1 = item_204_1;
                                                        float item_2e8_2 =
                                                            item_204_1 / *(context + 0x98);
                                                        float item_2e4_2 = (fpu_val_5_2 * *(context + 0x8c)
                                                            + fpu_val_7_26 * *(context + 0x74)
                                                            + fpu_val_6_5 * *(context + 0x80)) /
                                                            *(context + 0x98);
                                                        float item_2e0_2 = (fpu_val_5_2 * *(context + 0x90)
                                                            + fpu_val_7_26 * *(context + 0x78)
                                                            + fpu_val_6_5 * *(context + 0x84)) /
                                                            *(context + 0x98);
                                                        long double fpu_val_7_37 =
                                                            *temp_6 - *(context + 0x20);
                                                        long double fpu_val_6_8 =
                                                            temp_6[1] - *(context + 0x28);
                                                        long double fpu_val_5_7 =
                                                            temp_6[2] - *(context + 0x30);
                                                        float item_1ec_1 = fpu_val_6_8 * *(context + 0x7c)
                                                            + fpu_val_5_7 * *(context + 0x88)
                                                            + fpu_val_7_37 * *(context + 0x70);
                                                        float item_23c_1 = item_1ec_1;
                                                        float item_23c_2 =
                                                            item_1ec_1 / *(context + 0x98);
                                                        float item_2d8_1 = item_23c_2;
                                                        float item_238_2 = (fpu_val_5_7 * *(context + 0x8c)
                                                            + fpu_val_7_37 * *(context + 0x74)
                                                            + fpu_val_6_8 * *(context + 0x80)) /
                                                            *(context + 0x98);
                                                        long double fpu_val_7_45 = (
                                                            fpu_val_6_8 * *(context + 0x84)
                                                            + fpu_val_5_7 * *(context + 0x90)
                                                            + fpu_val_7_37 * *(context + 0x78)) /
                                                            *(context + 0x98);
                                                        float item_2d4_1 = item_238_2;
                                                        float item_234_2 = fpu_val_7_45;
                                                        long double fpu_val_7_46 =
                                                            fpu_val_7_45 - item_2e0_2;
                                                        float item_2d0_1 = item_234_2;
                                                        int16_t data_16;
                                                        data_16 = item_2d9_1;
                                                        double item_2c0_1 = fpu_val_7_46;
                                                        long double fpu_val_6_16 =
                                                            item_238_2 - item_2e4_2;
                                                        double item_2a8_1 = fpu_val_6_16;
                                                        long double fpu_val_5_14 =
                                                            item_23c_2 - item_2e8_2;
                                                        long double fpu_val_4_20 =
                                                            fpu_val_5_14 * fpu_val_5_14
                                                            + item_2a8_1 * item_2a8_1
                                                            + item_2c0_1 * item_2c0_1;
                                                        double item_230;

                                                        if (data_16)
                                                        {
                                                            long double fpu_val_3_25 =
                                                                *(context_val + 8) - *(context + 0x20);
                                                            long double fpu_val_2_2 =
                                                                *(context_val + 0x10) - *(context + 0x28);
                                                            float item_2d0_2 =
                                                                *(context_val + 0x18) - *(context + 0x30);
                                                            float item_1f8_1 =
                                                                fpu_val_2_2 * *(context + 0x7c)
                                                                + item_2d0_2 * *(context + 0x88)
                                                                + fpu_val_3_25 * *(context + 0x70);
                                                            float item_2d8_2 = item_1f8_1;
                                                            item_2d8_1 = item_1f8_1 / *(context + 0x98);
                                                            item_2d4_1 = (item_2d0_2 * *(context + 0x8c)
                                                                + fpu_val_3_25 * *(context + 0x74)
                                                                + fpu_val_2_2 * *(context + 0x80)) /
                                                                *(context + 0x98);
                                                            long double fpu_val_3_33 = (
                                                                fpu_val_2_2 * *(context + 0x84)
                                                                + item_2d0_2 * *(context + 0x90)
                                                                + fpu_val_3_25 * *(context + 0x78)) /
                                                                *(context + 0x98);
                                                            item_2d0_1 = fpu_val_3_33;
                                                            long double fpu_val_3_34 =
                                                                fpu_val_3_33 - item_2e0_2;
                                                            long double fpu_val_2_8 =
                                                                item_2d4_1 - item_2e4_2;
                                                            long double fpu_val_1_14 =
                                                                item_2d8_1 - item_2e8_2;
                                                            item_230 = sqrtl(fpu_val_1_14 * fpu_val_1_14
                                                                + fpu_val_2_8 * fpu_val_2_8
                                                                + fpu_val_3_34 * fpu_val_3_34);
                                                        }

                                                        long double fpu_val_3_37 = item_2e8_2;
                                                        long double f14_1 = item_2d8_1;
                                                        fpu_val_3_37 - f14_1;
                                                        long double fpu_val_3_38;

                                                        fpu_val_3_38 = !(*(&(
                                                            (fpu_val_3_37 < f14_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_3_37, f14_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_3_37 == f14_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? item_2d8_1
                                                            : item_2e8_2;

                                                        float item_26c_1 = fpu_val_3_38 - 0.100000001f;
                                                        long double fpu_val_3_40 = item_2e4_2;
                                                        long double f15_1 = item_2d4_1;
                                                        fpu_val_3_40 - f15_1;
                                                        long double fpu_val_3_41;

                                                        fpu_val_3_41 = !(*(&(
                                                            (fpu_val_3_40 < f15_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_3_40, f15_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_3_40 == f15_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? item_2d4_1
                                                            : item_2e4_2;

                                                        float item_268_1 = fpu_val_3_41 - 0.100000001f;
                                                        long double fpu_val_3_43 = item_2e0_2;
                                                        long double f16_1 = item_2d0_1;
                                                        fpu_val_3_43 - f16_1;
                                                        long double fpu_val_3_44;

                                                        fpu_val_3_44 = !(*(&(
                                                            (fpu_val_3_43 < f16_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_3_43, f16_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_3_43 == f16_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? item_2d0_1
                                                            : item_2e0_2;

                                                        float item_264_1 = fpu_val_3_44 - 0.100000001f;
                                                        long double fpu_val_3_46 = item_2e8_2;
                                                        long double f17_1 = item_2d8_1;
                                                        fpu_val_3_46 - f17_1;
                                                        long double fpu_val_3_47;

                                                        fpu_val_3_47 = *(&(
                                                            (fpu_val_3_46 < f17_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_3_46, f17_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_3_46 == f17_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? item_2d8_1
                                                            : item_2e8_2;

                                                        float item_278_1 = fpu_val_3_47 + 0.100000001f;
                                                        long double fpu_val_3_49 = item_2e4_2;
                                                        long double f18_1 = item_2d4_1;
                                                        fpu_val_3_49 - f18_1;
                                                        long double fpu_val_3_50;

                                                        fpu_val_3_50 = *(&(
                                                            (fpu_val_3_49 < f18_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_3_49, f18_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_3_49 == f18_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? item_2d4_1
                                                            : item_2e4_2;

                                                        float item_274_1 = fpu_val_3_50 + 0.100000001f;
                                                        long double fpu_val_3_52 = item_2e0_2;
                                                        long double f19_1 = item_2d0_1;
                                                        fpu_val_3_52 - f19_1;
                                                        long double fpu_val_3_53;

                                                        fpu_val_3_53 = *(&(
                                                            (fpu_val_3_52 < f19_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(fpu_val_3_52, f19_1) ? 1 : 0)
                                                            << 0xa
                                                            | (fpu_val_3_52 == f19_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? item_2d0_1
                                                            : item_2e0_2;

                                                        float item_2d8_3 = item_23c_2;
                                                        float item_2d4_3 = item_238_2;
                                                        float item_2d0_4 = item_234_2;
                                                        float item_270_1 = fpu_val_3_53 + 0.100000001f;
                                                        double item_220_1 = 1.0 / fpu_val_4_20;
                                                        float i_2 = fpu_val_5_14;
                                                        float item_280_1 = fpu_val_6_16;
                                                        float item_27c_1 = fpu_val_7_46;
                                                        long double fpu_val_7_47 = item_280_1;
                                                        long double f20_1 = 0.0f;
                                                        fpu_val_7_47 - f20_1;

                                                        if (!(*(&(
                                                                (fpu_val_7_47 < f20_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(fpu_val_7_47, f20_1) ? 1 : 0)
                                                                << 0xa
                                                                | (fpu_val_7_47 == f20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float item_290_3 = item_280_1;
                                                        else
                                                            float item_290_2 = -(item_280_1);

                                                        long double fpu_val_7_50 = i_2;
                                                        long double f21_1 = 0.0f;
                                                        fpu_val_7_50 - f21_1;
                                                        data_16 = (fpu_val_7_50 < f21_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(fpu_val_7_50, f21_1) ? 1
                                                            : 0) << 0xa
                                                            | (fpu_val_7_50 == f21_1 ? 1 : 0)
                                                            << 0xe;
                                                        float i_1;

                                                        i_1 = !(*(&data_16 + 1) & 1) ? i_2 : -(i_2);

                                                        if (result_1[3])
                                                        {
                                                        label_4c1f56:
                                                            int32_t temp_10 = item_2b4_1;

                                                            while (true)
                                                            {
                                                                int16_t i;
                                                                i = item_2a9_1;
                                                                char item_2e9;
                                                                int16_t* item_228;
                                                                float item_1d4;
                                                                float item_1d0;

                                                                if (!i)
                                                                {
                                                                    int16_t dest_2 = *(dest_1 + 0x16);

                                                                    if (!dest_2)
                                                                    {
                                                                        int32_t f22_1 = temp_10;
                                                                        temp_10 -= 1;
                                                                        item_2b4_1 = temp_10;

                                                                        if (f22_1 - 1 >= 0)
                                                                        {
                                                                            dest_1 = item_198[temp_10];
                                                                            continue;
                                                                        }

                                                                        i = item_2ab_1;

                                                                        if (i)
                                                                        {
                                                                            if (*(context + 0x98) != 0x3f800000
                                                                                || *(context + 0x9c) != 0x3f800000
                                                                                || *(context + 0xa0) != 0x3f800000)
                                                                            {
                                                                                double item_2a8_6 =
                                                                                    item_2e0_2 * *(context + 0xa0)
                                                                                    - item_2d0_4 * *(context + 0xa0);
                                                                                double item_220_2 =
                                                                                    item_2e4_2 * *(context + 0x9c)
                                                                                    - item_2d4_3 * *(context + 0x9c);
                                                                                long double fpu_val_7_220 =
                                                                                    item_2e8_2 * *(context + 0x98)
                                                                                    - item_2d8_3 * *(context + 0x98);
                                                                                item_230 = sqrtl(fpu_val_7_220 * fpu_val_7_220
                                                                                    + item_220_2 * item_220_2
                                                                                    + item_2a8_6 * item_2a8_6);
                                                                            }

                                                                            long double fpu_val_7_225;
                                                                            long double f35_1;

                                                                            if (context_val[0x16])
                                                                            {
                                                                                fpu_val_7_225 = item_230;
                                                                                f35_1 = *(context_val + 0x60);
                                                                                fpu_val_7_225 - f35_1;
                                                                            }

                                                                            if (!context_val[0x16] || *(&(
                                                                                (fpu_val_7_225 < f35_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_225, f35_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_225 == f35_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 1)
                                                                            {
                                                                                int32_t data_62 = 0;
                                                                                int32_t entity_28 = 0;
                                                                                data_62 = *item_228;
                                                                                entity_28 = item_228[1];
                                                                                float* data_64 = (data_62 << 4) + data_4;
                                                                                float* entity_30 = (entity_28 << 4) + data_4;
                                                                                int32_t dest_6 = 0;
                                                                                dest_6 = item_228[2];
                                                                                float* temp_34 = (dest_6 << 4) + data_4;
                                                                                int32_t temp_35 = 0;
                                                                                temp_35 = item_228[3];
                                                                                int16_t temp_38 =
                                                                                    *(result_1[6] + temp_35 * 0xc + 8);
                                                                                int32_t dest_11;

                                                                                if (temp_38 != 0xffff)
                                                                                    dest_11 = *(*(context + 0x68)
                                                                                        + (temp_38 << 2) + 0xd3c);
                                                                                else
                                                                                    dest_11 = *(*(context + 0x68) + 0xd40);

                                                                                long double fpu_val_7_227 =
                                                                                    *temp_34 - *data_64;
                                                                                long double fpu_val_6_133 =
                                                                                    temp_34[1] - data_64[1];
                                                                                long double fpu_val_5_49 =
                                                                                    temp_34[2] - data_64[2];
                                                                                float item_1e0_1 = *entity_30 - *data_64;
                                                                                float item_1dc_1 = entity_30[1] - data_64[1];
                                                                                long double fpu_val_4_40 =
                                                                                    entity_30[2] - data_64[2];
                                                                                float item_210_1 = fpu_val_4_40 * fpu_val_6_133
                                                                                    - item_1dc_1 * fpu_val_5_49;
                                                                                context_val[0xe] = item_210_1;
                                                                                float item_20c_1 = -((
                                                                                    fpu_val_4_40 * fpu_val_7_227
                                                                                    - item_1e0_1 * fpu_val_5_49));
                                                                                context_val[0xf] = item_20c_1;
                                                                                float item_208_1 = item_1dc_1 * fpu_val_7_227
                                                                                    - item_1e0_1 * fpu_val_6_133;
                                                                                context_val[0x10] = item_208_1;
                                                                                context_val[0xb] = item_210_1;
                                                                                context_val[0xc] = item_20c_1;
                                                                                context_val[0xd] = item_208_1;
                                                                                long double fpu_val_7_236 =
                                                                                    context_val[0xe] * *(context + 0x7c)
                                                                                    + *(context + 0x84) * context_val[0x10]
                                                                                    + *(context + 0x80) * context_val[0xf];
                                                                                long double fpu_val_7_240 =
                                                                                    *(context + 0x90) * context_val[0x10]
                                                                                    + *(context + 0x8c) * context_val[0xf]
                                                                                    + *(context + 0x88) * context_val[0xe];
                                                                                context_val[0xe] = *(context + 0x78) * context_val[0x10]
                                                                                    + *(context + 0x74) * context_val[0xf]
                                                                                    + *(context + 0x70) * context_val[0xe];
                                                                                context_val[0xf] = fpu_val_7_236;
                                                                                context_val[0x10] = fpu_val_7_240;
                                                                                float entity_35 = item_2d4_3;
                                                                                context_val[8] = item_2d8_3;
                                                                                float data_67 = item_2d0_4;
                                                                                context_val[9] = entity_35;
                                                                                context_val[0xa] = data_67;
                                                                                data_67 = item_2f5_1;
                                                                                long double fpu_val_7_242 =
                                                                                    item_2d8_3 * *(context + 0x98);
                                                                                long double fpu_val_6_148 =
                                                                                    item_2d4_3 * *(context + 0x9c);
                                                                                long double fpu_val_5_55 =
                                                                                    item_2d0_4 * *(context + 0xa0);
                                                                                entity_35 = data_67;
                                                                                char f45_1 = entity_35;
                                                                                entity_35 = -(entity_35);
                                                                                char f46_1 = data_67;
                                                                                data_67 = -(data_67);
                                                                                float item_1ac_1 =
                                                                                    fpu_val_5_55 * *(context + 0x84)
                                                                                    + fpu_val_7_242 * *(context + 0x7c)
                                                                                    + fpu_val_6_148 * *(context + 0x80);
                                                                                long double fpu_val_7_244 =
                                                                                    fpu_val_6_148 * *(context + 0x8c)
                                                                                    + fpu_val_5_55 * *(context + 0x90)
                                                                                    + fpu_val_7_242 * *(context + 0x88);
                                                                                *(context_val + 8) = fpu_val_6_148 * *(context + 0x74)
                                                                                    + fpu_val_5_55 * *(context + 0x78)
                                                                                    + fpu_val_7_242 * *(context + 0x70)
                                                                                    + *(context + 0x20);
                                                                                *(context_val + 0x10) =
                                                                                    item_1ac_1 + *(context + 0x28);
                                                                                long double fpu_val_7_245 =
                                                                                    fpu_val_7_244 + *(context + 0x30);
                                                                                context_val[0x14] = ~(data_67 - data_67) & dest_11;
                                                                                context_val[0x13] = (entity_35 - entity_35) & dest_11;
                                                                                context_val[0x18] = item_230;
                                                                                *(context_val + 0x18) = fpu_val_7_245;
                                                                                *context_val = context;
                                                                                context_val[0x15] = item_2e9;
                                                                                context_val[0x16] = 1;
                                                                                context_val[0x19] = *(&item_230 + 4);
                                                                                context_val[0x12] =
                                                                                    (item_228 - result_1[4]) >> 3;
                                                                                context_val[0x1a] = item_1d4;
                                                                                context_val[0x1b] = item_1d0;
                                                                            }
                                                                        }

                                                                        break;
                                                                    }
                                                                    else
                                                                    {
                                                                        uint32_t data_21 = dest_2 * 3;
                                                                        long double fpu_val_7_54 =
                                                                            item_218_1[data_21 * 2] - item_2e8_2;
                                                                        dest_1 = &item_218_1[data_21 * 2];
                                                                        long double fpu_val_6_18 =
                                                                            item_218_1[data_21 * 2 + 1] - item_2e4_2;
                                                                        long double fpu_val_5_16 =
                                                                            dest_1[2] - item_2e0_2;
                                                                        item_198[temp_10] = dest_1;
                                                                        i_1 = fpu_val_5_16;
                                                                        double item_2c0_2 = fpu_val_6_18;
                                                                        double item_2a8_3 = fpu_val_7_54;
                                                                        long double fpu_val_7_56 =
                                                                            fpu_val_5_16 * item_27c_1
                                                                            + fpu_val_6_18 * item_280_1
                                                                            + fpu_val_7_54 * i_2;
                                                                        float item_2b8_1 = dest_1[3];
                                                                        long double fpu_val_7_61 =
                                                                            item_2a8_3 * item_2a8_3
                                                                            + item_2c0_2 * item_2c0_2 + i_1 * i_1
                                                                            - fpu_val_7_56 * fpu_val_7_56 * item_220_1;
                                                                        long double fpu_val_6_33 =
                                                                            item_2b8_1 * item_2b8_1;
                                                                        fpu_val_6_33 - fpu_val_7_61;

                                                                        if (*(&(
                                                                                (fpu_val_6_33 < fpu_val_7_61 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_6_33, fpu_val_7_61) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_6_33 == fpu_val_7_61 ? 1 : 0)
                                                                                << 0xe) + 1) & 1)
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double fpu_val_7_63 =
                                                                                dest_1[3] + *dest_1;
                                                                            long double f23_1 = item_26c_1;
                                                                            fpu_val_7_63 - f23_1;

                                                                            if (*(&(
                                                                                    (fpu_val_7_63 < f23_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_63, f23_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_63 == f23_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 1)
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double fpu_val_7_65 =
                                                                                    dest_1[1] + dest_1[3];
                                                                                long double f25_1 = item_268_1;
                                                                                fpu_val_7_65 - f25_1;

                                                                                if (*(&(
                                                                                        (fpu_val_7_65 < f25_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_65, f25_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_65 == f25_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1)
                                                                                    continue;
                                                                                else
                                                                                {
                                                                                    long double fpu_val_7_67 =
                                                                                        dest_1[2] + dest_1[3];
                                                                                    long double f28_1 = item_264_1;
                                                                                    fpu_val_7_67 - f28_1;

                                                                                    if (*(&(
                                                                                            (fpu_val_7_67 < f28_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_7_67, f28_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_7_67 == f28_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1)
                                                                                        continue;
                                                                                    else
                                                                                    {
                                                                                        long double fpu_val_7_69 =
                                                                                            *dest_1 - dest_1[3];
                                                                                        long double f31_1 = item_278_1;
                                                                                        fpu_val_7_69 - f31_1;

                                                                                        if (!(*(&(
                                                                                                (fpu_val_7_69 < f31_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_7_69, f31_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_7_69 == f31_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 0x41))
                                                                                            continue;
                                                                                        else
                                                                                        {
                                                                                            long double fpu_val_7_71 =
                                                                                                dest_1[1] - dest_1[3];
                                                                                            long double f36_1 = item_274_1;
                                                                                            fpu_val_7_71 - f36_1;

                                                                                            if (!(*(&(
                                                                                                    (fpu_val_7_71 < f36_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_7_71, f36_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_71 == f36_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x41))
                                                                                                continue;
                                                                                            else
                                                                                            {
                                                                                                long double fpu_val_7_73 =
                                                                                                    dest_1[2] - dest_1[3];
                                                                                                long double f40_1 = item_270_1;
                                                                                                fpu_val_7_73 - f40_1;

                                                                                                if (!(*(&(
                                                                                                        (fpu_val_7_73 < f40_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(fpu_val_7_73, f40_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (fpu_val_7_73 == f40_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 0x41))
                                                                                                    continue;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                i = dest_1[5];
                                                                item_2a9_1 = 0;

                                                                if (i)
                                                                {
                                                                    int32_t saved_target;
                                                                    float** entity_17 =
                                                                        &(&saved_target)[temp_10 + 0x5c];

                                                                    do
                                                                    {
                                                                        entity_17 = &entity_17[1];
                                                                        temp_10 += 1;
                                                                        uint32_t data_24 = i * 3;
                                                                        long double fpu_val_7_75 =
                                                                            item_218_1[data_24 * 2] - item_2e8_2;
                                                                        dest_1 = &item_218_1[data_24 * 2];
                                                                        long double fpu_val_6_35 =
                                                                            item_218_1[data_24 * 2 + 1] - item_2e4_2;
                                                                        long double fpu_val_5_26 =
                                                                            dest_1[2] - item_2e0_2;
                                                                        *entity_17 = dest_1;
                                                                        i_1 = fpu_val_6_35;
                                                                        double item_2c0_3 = fpu_val_7_75;
                                                                        double item_2a8_4 = fpu_val_5_26;
                                                                        long double fpu_val_7_77 =
                                                                            fpu_val_5_26 * item_27c_1
                                                                            + fpu_val_6_35 * item_280_1
                                                                            + fpu_val_7_75 * i_2;
                                                                        float item_2b8_2 = dest_1[3];
                                                                        long double fpu_val_7_82 =
                                                                            item_2a8_4 * item_2a8_4
                                                                            + item_2c0_3 * item_2c0_3 + i_1 * i_1
                                                                            - fpu_val_7_77 * fpu_val_7_77 * item_220_1;
                                                                        long double fpu_val_6_50 =
                                                                            item_2b8_2 * item_2b8_2;
                                                                        fpu_val_6_50 - fpu_val_7_82;
                                                                        i = (fpu_val_6_50 < fpu_val_7_82 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_6_50, fpu_val_7_82) ? 1
                                                                            : 0) << 0xa
                                                                            | (fpu_val_6_50 == fpu_val_7_82 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double fpu_val_7_84 =
                                                                            dest_1[3] + *dest_1;
                                                                        long double f24_1 = item_26c_1;
                                                                        fpu_val_7_84 - f24_1;
                                                                        i = (fpu_val_7_84 < f24_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_7_84, f24_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (fpu_val_7_84 == f24_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double fpu_val_7_86 =
                                                                            dest_1[1] + dest_1[3];
                                                                        long double f27_1 = item_268_1;
                                                                        fpu_val_7_86 - f27_1;
                                                                        i = (fpu_val_7_86 < f27_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_7_86, f27_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (fpu_val_7_86 == f27_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double fpu_val_7_88 =
                                                                            dest_1[2] + dest_1[3];
                                                                        long double f30_1 = item_264_1;
                                                                        fpu_val_7_88 - f30_1;
                                                                        i = (fpu_val_7_88 < f30_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_7_88, f30_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (fpu_val_7_88 == f30_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double fpu_val_7_90 =
                                                                            *dest_1 - dest_1[3];
                                                                        long double f34_1 = item_278_1;
                                                                        fpu_val_7_90 - f34_1;
                                                                        i = (fpu_val_7_90 < f34_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_7_90, f34_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (fpu_val_7_90 == f34_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        long double fpu_val_7_92 =
                                                                            dest_1[1] - dest_1[3];
                                                                        long double f39_1 = item_274_1;
                                                                        fpu_val_7_92 - f39_1;
                                                                        i = (fpu_val_7_92 < f39_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_7_92, f39_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (fpu_val_7_92 == f39_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        long double fpu_val_7_94 =
                                                                            dest_1[2] - dest_1[3];
                                                                        long double f44_1 = item_270_1;
                                                                        fpu_val_7_94 - f44_1;
                                                                        i = (fpu_val_7_94 < f44_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(fpu_val_7_94, f44_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (fpu_val_7_94 == f44_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        i = dest_1[5];
                                                                    } while (i);

                                                                    item_2b4_1 = temp_10;
                                                                }

                                                                int16_t entity_15 = *(dest_1 + 0x12);

                                                                if (entity_15)
                                                                {
                                                                    float i_3 = 0.0f;
                                                                    i_3 = dest_1[4];
                                                                    i_1 = i_3;
                                                                    int16_t* temp_13 =
                                                                        result_1[4] + (i_3 << 3);
                                                                    int16_t* item_2b8_3 = temp_13;

                                                                    if (i_3 >= entity_15 + i_3)
                                                                        goto label_4c1f56;

                                                                    int32_t data_52;
                                                                    void* const entity_22;

                                                                    do
                                                                    {
                                                                        int32_t entity_19 = 0;
                                                                        entity_19 = *temp_13;
                                                                        float* entity_21 = (entity_19 << 4) + data_4;
                                                                        int32_t data_26 = 0;
                                                                        data_26 = temp_13[1];
                                                                        float* data_28 = (data_26 << 4) + data_4;
                                                                        int32_t data_29 = 0;
                                                                        data_29 = item_2b8_3[2];
                                                                        float* data_31 = (data_29 << 4) + data_4;
                                                                        int32_t data_32 = 0;
                                                                        data_32 = item_2b8_3[3];

                                                                        if (*(result_1[6] + data_32 * 0xc + 4)
                                                                            == 0xffff || param_2[6])
                                                                        {
                                                                            long double fpu_val_7_95 = item_26c_1;
                                                                            long double f26_1 = *entity_21;
                                                                            fpu_val_7_95 - f26_1;
                                                                            long double fpu_val_7_96;
                                                                            long double f29_1;

                                                                            if (!(*(&(
                                                                                (fpu_val_7_95 < f26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_95, f26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_95 == f26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41))
                                                                            {
                                                                                fpu_val_7_96 = item_26c_1;
                                                                                f29_1 = *data_28;
                                                                                fpu_val_7_96 - f29_1;
                                                                            }

                                                                            float* temp_22;

                                                                            if (*(&(
                                                                                (fpu_val_7_95 < f26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_95, f26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_95 == f26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41 || *(&(
                                                                                (fpu_val_7_96 < f29_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(fpu_val_7_96, f29_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (fpu_val_7_96 == f29_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                                temp_22 = data_31;
                                                                            label_4c22f9:
                                                                                long double fpu_val_7_98 = item_268_1;
                                                                                long double f32_1 = entity_21[1];
                                                                                fpu_val_7_98 - f32_1;

                                                                                if (*(&(
                                                                                    (fpu_val_7_98 < f32_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(fpu_val_7_98, f32_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (fpu_val_7_98 == f32_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
                                                                                label_4c2334:
                                                                                    long double fpu_val_7_101 = item_264_1;
                                                                                    long double f37_1 = entity_21[2];
                                                                                    fpu_val_7_101 - f37_1;

                                                                                    if (*(&(
                                                                                        (fpu_val_7_101 < f37_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(fpu_val_7_101, f37_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (fpu_val_7_101 == f37_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    {
                                                                                    label_4c236f:
                                                                                        long double fpu_val_7_104 = item_278_1;
                                                                                        long double f41_1 = *entity_21;
                                                                                        fpu_val_7_104 - f41_1;

                                                                                        if (!(*(&(
                                                                                            (fpu_val_7_104 < f41_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(fpu_val_7_104, f41_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (fpu_val_7_104 == f41_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                        label_4c23a7:
                                                                                            long double fpu_val_7_107 = item_274_1;
                                                                                            long double f47_1 = entity_21[1];
                                                                                            fpu_val_7_107 - f47_1;

                                                                                            if (!(*(&(
                                                                                                (fpu_val_7_107 < f47_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(fpu_val_7_107, f47_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (fpu_val_7_107 == f47_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                            label_4c23e2:
                                                                                                long double fpu_val_7_110 = item_270_1;
                                                                                                long double f50_1 = entity_21[2];
                                                                                                fpu_val_7_110 - f50_1;

                                                                                                if (!(*(&(
                                                                                                    (fpu_val_7_110 < f50_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(fpu_val_7_110, f50_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (fpu_val_7_110 == f50_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 1))
                                                                                                {
                                                                                                label_4c2425:
                                                                                                    float item_2cc_1 = *temp_22 - *entity_21;
                                                                                                    float item_2c8_1 = temp_22[1] - entity_21[1];
                                                                                                    float item_2c4_1 = temp_22[2] - entity_21[2];
                                                                                                    float item_24c_1 = *data_28 - *entity_21;
                                                                                                    float item_248_1 = data_28[1] - entity_21[1];
                                                                                                    long double fpu_val_7_124 =
                                                                                                        data_28[2] - entity_21[2];
                                                                                                    float item_244_1 = fpu_val_7_124;
                                                                                                    float item_2f0_3 = fpu_val_7_124 * item_2c8_1
