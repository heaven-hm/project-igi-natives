#include "004C1840-RigidDynCubeObj_Setup.h"
/* 0x004c1840 RigidDynCubeObj_Setup full linked: callers=0 callees=2 */
int32_t* sub_4c1840(void* a1, int32_t* a2)

{
    void** ebx = a2[8];
    double* var_240 = *a2;
    int32_t* result = *(a1 + 0x6c);
    double* var_260 = a2[1];

    if (result)
    {
        int32_t ecx_1 = *(a1 + 0xa4);

        if (ecx_1 != 0xffffffff)
        {
            void* eax_1 = result[ecx_1];
            void* ecx_2 = *(*(eax_1 + 0xc) + 0xc);
            result = *(ecx_2 + 0x28);

            if (!result)
            {
                int32_t edx_2 = *(ecx_2 + 0x2c);
                int32_t eax_3 = a2[5] << 5;
                result = eax_3 + edx_2;
                int32_t* result_1 = result;

                if (eax_3 != -(edx_2) && *result)
                {
                    int32_t eax_4 = result[5];
                    char eax_5 = a2[3];

                    if (eax_5 == 0xff)
                    {
                    label_4c1906:
                        result = a2[2];
                        int32_t* result_2 = nullptr;

                        if (result > 0)
                        {
                            while (true)
                            {
                                char var_2a9_1 = 1;
                                bool var_2f5_1;

                                if (!ebx[0x16])
                                    var_2f5_1 = false;
                                else
                                    var_2f5_1 = ebx[0x13];

                                long double x87_r7_1 = *(a1 + 0x9c);
                                long double x87_r6_1 = *(a1 + 0xa0);
                                int16_t eax_9;
                                eax_9 = ebx[0x16];
                                float* edi_1 = result_1[7];
                                char var_2d9_1 = eax_9;
                                x87_r6_1 - x87_r7_1;
                                char var_2ab_1 = 0;
                                int32_t var_2b4_1 = 0;
                                float* var_218_1 = edi_1;
                                int32_t var_198[0x64];
                                var_198[0] = edi_1;
                                long double x87_r7_2;

                                if (!(*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                                        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe) + 1) & 1))
                                    x87_r7_2 = *(a1 + 0xa0);
                                else
                                    x87_r7_2 = *(a1 + 0x9c);

                                long double x87_r6_2 = *(a1 + 0x98);
                                x87_r6_2 - x87_r7_2;
                                eax_9 = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800;
                                long double x87_r7_4;

                                if (*(&eax_9 + 1) & 0x41)
                                {
                                    long double x87_r7_5 = *(a1 + 0x9c);
                                    long double x87_r6_3 = *(a1 + 0xa0);
                                    x87_r6_3 - x87_r7_5;
                                    eax_9 = (x87_r6_3 < x87_r7_5 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_3, x87_r7_5) ? 1 : 0) << 0xa
                                        | (x87_r6_3 == x87_r7_5 ? 1 : 0) << 0xe;

                                    if (!(*(&eax_9 + 1) & 1))
                                        x87_r7_4 = *(a1 + 0xa0);
                                    else
                                        x87_r7_4 = *(a1 + 0x9c);
                                }
                                else
                                    x87_r7_4 = *(a1 + 0x98);

                                long double x87_r7_7 = sub_4d0950(*(a1 + 0x6c)) * x87_r7_4;
                                float var_2f4_1 = x87_r7_7;
                                long double x87_r7_8 = *(a1 + 0x20) - x87_r7_7;
                                long double temp2_1 = *var_240;
                                x87_r7_8 - temp2_1;
                                long double temp3_1;

                                if (!(*(&((x87_r7_8 < temp2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                                {
                                    temp3_1 = *var_260;
                                    x87_r7_8 - temp3_1;
                                }

                                if (*(&((x87_r7_8 < temp2_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
                                    | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 || *(
                                    &((x87_r7_8 < temp3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_8, temp3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_8 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                {
                                    long double x87_r7_11 = var_2f4_1 + *(a1 + 0x20);
                                    long double temp4_1 = *var_240;
                                    x87_r7_11 - temp4_1;
                                    double* edx_6;

                                    if (!(*(&((x87_r7_11 < temp4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_11, temp4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_11 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                                    {
                                        edx_6 = var_260;
                                    label_4c1a41:
                                        long double x87_r7_14 = *(a1 + 0x28) - var_2f4_1;
                                        long double temp6_1 = var_240[1];
                                        x87_r7_14 - temp6_1;
                                        long double temp7_1;

                                        if (!(*(&((x87_r7_14 < temp6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_14, temp6_1) ? 1 : 0) << 0xa
                                            | (x87_r7_14 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41))
                                        {
                                            temp7_1 = edx_6[1];
                                            x87_r7_14 - temp7_1;
                                        }

                                        if (*(&((x87_r7_14 < temp6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_14, temp6_1) ? 1 : 0) << 0xa
                                            | (x87_r7_14 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41 || *(&((x87_r7_14 < temp7_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_14, temp7_1) ? 1 : 0) << 0xa
                                            | (x87_r7_14 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                        {
                                            long double x87_r7_17 = var_2f4_1 + *(a1 + 0x28);
                                            long double temp8_1 = var_240[1];
                                            x87_r7_17 - temp8_1;
                                            long double temp9_1;

                                            if (*(&((x87_r7_17 < temp8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_17, temp8_1) ? 1 : 0) << 0xa
                                                | (x87_r7_17 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1)
                                            {
                                                temp9_1 = edx_6[1];
                                                x87_r7_17 - temp9_1;
                                            }

                                            if (!(*(&((x87_r7_17 < temp8_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_17, temp8_1) ? 1 : 0) << 0xa
                                                | (x87_r7_17 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                                & 1) || !(*(&((x87_r7_17 < temp9_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_17, temp9_1) ? 1 : 0) << 0xa
                                                | (x87_r7_17 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                            {
                                                long double x87_r7_20 = *(a1 + 0x30) - var_2f4_1;
                                                long double temp10_1 = var_240[2];
                                                x87_r7_20 - temp10_1;
                                                long double temp11_1;

                                                if (!(*(&((x87_r7_20 < temp10_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_20, temp10_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_20 == temp10_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 0x41))
                                                {
                                                    temp11_1 = edx_6[2];
                                                    x87_r7_20 - temp11_1;
                                                }

                                                if (*(&((x87_r7_20 < temp10_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_20, temp10_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_20 == temp10_1 ? 1 : 0) << 0xe
                                                    | 0x3800) + 1) & 0x41 || *(&(
                                                    (x87_r7_20 < temp11_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_20, temp11_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_20 == temp11_1 ? 1 : 0) << 0xe) + 1)
                                                    & 0x41)
                                                {
                                                    long double x87_r7_23 =
                                                        var_2f4_1 + *(a1 + 0x30);
                                                    long double temp12_1 = var_240[2];
                                                    x87_r7_23 - temp12_1;
                                                    long double temp13_1;

                                                    if (*(&((x87_r7_23 < temp12_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_23, temp12_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_23 == temp12_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1)
                                                    {
                                                        temp13_1 = edx_6[2];
                                                        x87_r7_23 - temp13_1;
                                                    }

                                                    if (!(*(&((x87_r7_23 < temp12_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_23, temp12_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_23 == temp12_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) || !(*(&(
                                                        (x87_r7_23 < temp13_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_23, temp13_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_23 == temp13_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1))
                                                    {
                                                        long double x87_r7_26 =
                                                            *var_240 - *(a1 + 0x20);
                                                        long double x87_r6_5 =
                                                            var_240[1] - *(a1 + 0x28);
                                                        long double x87_r5_2 =
                                                            var_240[2] - *(a1 + 0x30);
                                                        float var_204_1 = x87_r5_2 * *(a1 + 0x88)
                                                            + x87_r7_26 * *(a1 + 0x70)
                                                            + x87_r6_5 * *(a1 + 0x7c);
                                                        float var_2e8_1 = var_204_1;
                                                        float var_2e8_2 =
                                                            var_204_1 / *(a1 + 0x98);
                                                        float var_2e4_2 = (x87_r5_2 * *(a1 + 0x8c)
                                                            + x87_r7_26 * *(a1 + 0x74)
                                                            + x87_r6_5 * *(a1 + 0x80)) /
                                                            *(a1 + 0x98);
                                                        float var_2e0_2 = (x87_r5_2 * *(a1 + 0x90)
                                                            + x87_r7_26 * *(a1 + 0x78)
                                                            + x87_r6_5 * *(a1 + 0x84)) /
                                                            *(a1 + 0x98);
                                                        long double x87_r7_37 =
                                                            *edx_6 - *(a1 + 0x20);
                                                        long double x87_r6_8 =
                                                            edx_6[1] - *(a1 + 0x28);
                                                        long double x87_r5_7 =
                                                            edx_6[2] - *(a1 + 0x30);
                                                        float var_1ec_1 = x87_r6_8 * *(a1 + 0x7c)
                                                            + x87_r5_7 * *(a1 + 0x88)
                                                            + x87_r7_37 * *(a1 + 0x70);
                                                        float var_23c_1 = var_1ec_1;
                                                        float var_23c_2 =
                                                            var_1ec_1 / *(a1 + 0x98);
                                                        float var_2d8_1 = var_23c_2;
                                                        float var_238_2 = (x87_r5_7 * *(a1 + 0x8c)
                                                            + x87_r7_37 * *(a1 + 0x74)
                                                            + x87_r6_8 * *(a1 + 0x80)) /
                                                            *(a1 + 0x98);
                                                        long double x87_r7_45 = (
                                                            x87_r6_8 * *(a1 + 0x84)
                                                            + x87_r5_7 * *(a1 + 0x90)
                                                            + x87_r7_37 * *(a1 + 0x78)) /
                                                            *(a1 + 0x98);
                                                        float var_2d4_1 = var_238_2;
                                                        float var_234_2 = x87_r7_45;
                                                        long double x87_r7_46 =
                                                            x87_r7_45 - var_2e0_2;
                                                        float var_2d0_1 = var_234_2;
                                                        int16_t eax_16;
                                                        eax_16 = var_2d9_1;
                                                        double var_2c0_1 = x87_r7_46;
                                                        long double x87_r6_16 =
                                                            var_238_2 - var_2e4_2;
                                                        double var_2a8_1 = x87_r6_16;
                                                        long double x87_r5_14 =
                                                            var_23c_2 - var_2e8_2;
                                                        long double x87_r4_20 =
                                                            x87_r5_14 * x87_r5_14
                                                            + var_2a8_1 * var_2a8_1
                                                            + var_2c0_1 * var_2c0_1;
                                                        double var_230;

                                                        if (eax_16)
                                                        {
                                                            long double x87_r3_25 =
                                                                *(ebx + 8) - *(a1 + 0x20);
                                                            long double x87_r2_2 =
                                                                *(ebx + 0x10) - *(a1 + 0x28);
                                                            float var_2d0_2 =
                                                                *(ebx + 0x18) - *(a1 + 0x30);
                                                            float var_1f8_1 =
                                                                x87_r2_2 * *(a1 + 0x7c)
                                                                + var_2d0_2 * *(a1 + 0x88)
                                                                + x87_r3_25 * *(a1 + 0x70);
                                                            float var_2d8_2 = var_1f8_1;
                                                            var_2d8_1 = var_1f8_1 / *(a1 + 0x98);
                                                            var_2d4_1 = (var_2d0_2 * *(a1 + 0x8c)
                                                                + x87_r3_25 * *(a1 + 0x74)
                                                                + x87_r2_2 * *(a1 + 0x80)) /
                                                                *(a1 + 0x98);
                                                            long double x87_r3_33 = (
                                                                x87_r2_2 * *(a1 + 0x84)
                                                                + var_2d0_2 * *(a1 + 0x90)
                                                                + x87_r3_25 * *(a1 + 0x78)) /
                                                                *(a1 + 0x98);
                                                            var_2d0_1 = x87_r3_33;
                                                            long double x87_r3_34 =
                                                                x87_r3_33 - var_2e0_2;
                                                            long double x87_r2_8 =
                                                                var_2d4_1 - var_2e4_2;
                                                            long double x87_r1_14 =
                                                                var_2d8_1 - var_2e8_2;
                                                            var_230 = sqrtl(x87_r1_14 * x87_r1_14
                                                                + x87_r2_8 * x87_r2_8
                                                                + x87_r3_34 * x87_r3_34);
                                                        }

                                                        long double x87_r3_37 = var_2e8_2;
                                                        long double temp14_1 = var_2d8_1;
                                                        x87_r3_37 - temp14_1;
                                                        long double x87_r3_38;

                                                        x87_r3_38 = !(*(&(
                                                            (x87_r3_37 < temp14_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_37, temp14_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_37 == temp14_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? var_2d8_1
                                                            : var_2e8_2;

                                                        float var_26c_1 = x87_r3_38 - 0.100000001f;
                                                        long double x87_r3_40 = var_2e4_2;
                                                        long double temp15_1 = var_2d4_1;
                                                        x87_r3_40 - temp15_1;
                                                        long double x87_r3_41;

                                                        x87_r3_41 = !(*(&(
                                                            (x87_r3_40 < temp15_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_40, temp15_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_40 == temp15_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? var_2d4_1
                                                            : var_2e4_2;

                                                        float var_268_1 = x87_r3_41 - 0.100000001f;
                                                        long double x87_r3_43 = var_2e0_2;
                                                        long double temp16_1 = var_2d0_1;
                                                        x87_r3_43 - temp16_1;
                                                        long double x87_r3_44;

                                                        x87_r3_44 = !(*(&(
                                                            (x87_r3_43 < temp16_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_43, temp16_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_43 == temp16_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 1) ? var_2d0_1
                                                            : var_2e0_2;

                                                        float var_264_1 = x87_r3_44 - 0.100000001f;
                                                        long double x87_r3_46 = var_2e8_2;
                                                        long double temp17_1 = var_2d8_1;
                                                        x87_r3_46 - temp17_1;
                                                        long double x87_r3_47;

                                                        x87_r3_47 = *(&(
                                                            (x87_r3_46 < temp17_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_46, temp17_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_46 == temp17_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? var_2d8_1
                                                            : var_2e8_2;

                                                        float var_278_1 = x87_r3_47 + 0.100000001f;
                                                        long double x87_r3_49 = var_2e4_2;
                                                        long double temp18_1 = var_2d4_1;
                                                        x87_r3_49 - temp18_1;
                                                        long double x87_r3_50;

                                                        x87_r3_50 = *(&(
                                                            (x87_r3_49 < temp18_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_49, temp18_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_49 == temp18_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? var_2d4_1
                                                            : var_2e4_2;

                                                        float var_274_1 = x87_r3_50 + 0.100000001f;
                                                        long double x87_r3_52 = var_2e0_2;
                                                        long double temp19_1 = var_2d0_1;
                                                        x87_r3_52 - temp19_1;
                                                        long double x87_r3_53;

                                                        x87_r3_53 = *(&(
                                                            (x87_r3_52 < temp19_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r3_52, temp19_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r3_52 == temp19_1 ? 1 : 0)
                                                            << 0xe | 0x2000) + 1) & 0x41 ? var_2d0_1
                                                            : var_2e0_2;

                                                        float var_2d8_3 = var_23c_2;
                                                        float var_2d4_3 = var_238_2;
                                                        float var_2d0_4 = var_234_2;
                                                        float var_270_1 = x87_r3_53 + 0.100000001f;
                                                        double var_220_1 = 1.0 / x87_r4_20;
                                                        float i_2 = x87_r5_14;
                                                        float var_280_1 = x87_r6_16;
                                                        float var_27c_1 = x87_r7_46;
                                                        long double x87_r7_47 = var_280_1;
                                                        long double temp20_1 = 0f;
                                                        x87_r7_47 - temp20_1;

                                                        if (!(*(&(
                                                                (x87_r7_47 < temp20_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_47, temp20_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_47 == temp20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float var_290_3 = var_280_1;
                                                        else
                                                            float var_290_2 = -(var_280_1);

                                                        long double x87_r7_50 = i_2;
                                                        long double temp21_1 = 0f;
                                                        x87_r7_50 - temp21_1;
                                                        eax_16 = (x87_r7_50 < temp21_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r7_50, temp21_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_50 == temp21_1 ? 1 : 0)
                                                            << 0xe;
                                                        float i_1;

                                                        i_1 = !(*(&eax_16 + 1) & 1) ? i_2 : -(i_2);

                                                        if (result_1[3])
                                                        {
                                                        label_4c1f56:
                                                            int32_t edx_10 = var_2b4_1;

                                                            while (true)
                                                            {
                                                                int16_t i;
                                                                i = var_2a9_1;
                                                                char var_2e9;
                                                                int16_t* var_228;
                                                                float var_1d4;
                                                                float var_1d0;

                                                                if (!i)
                                                                {
                                                                    int16_t edi_2 = *(edi_1 + 0x16);

                                                                    if (!edi_2)
                                                                    {
                                                                        int32_t temp22_1 = edx_10;
                                                                        edx_10 -= 1;
                                                                        var_2b4_1 = edx_10;

                                                                        if (temp22_1 - 1 >= 0)
                                                                        {
                                                                            edi_1 = var_198[edx_10];
                                                                            continue;
                                                                        }

                                                                        i = var_2ab_1;

                                                                        if (i)
                                                                        {
                                                                            if (*(a1 + 0x98) != 0x3f800000
                                                                                || *(a1 + 0x9c) != 0x3f800000
                                                                                || *(a1 + 0xa0) != 0x3f800000)
                                                                            {
                                                                                double var_2a8_6 =
                                                                                    var_2e0_2 * *(a1 + 0xa0)
                                                                                    - var_2d0_4 * *(a1 + 0xa0);
                                                                                double var_220_2 =
                                                                                    var_2e4_2 * *(a1 + 0x9c)
                                                                                    - var_2d4_3 * *(a1 + 0x9c);
                                                                                long double x87_r7_220 =
                                                                                    var_2e8_2 * *(a1 + 0x98)
                                                                                    - var_2d8_3 * *(a1 + 0x98);
                                                                                var_230 = sqrtl(x87_r7_220 * x87_r7_220
                                                                                    + var_220_2 * var_220_2
                                                                                    + var_2a8_6 * var_2a8_6);
                                                                            }

                                                                            long double x87_r7_225;
                                                                            long double temp35_1;

                                                                            if (ebx[0x16])
                                                                            {
                                                                                x87_r7_225 = var_230;
                                                                                temp35_1 = *(ebx + 0x60);
                                                                                x87_r7_225 - temp35_1;
                                                                            }

                                                                            if (!ebx[0x16] || *(&(
                                                                                (x87_r7_225 < temp35_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_225, temp35_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_225 == temp35_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 1)
                                                                            {
                                                                                int32_t eax_62 = 0;
                                                                                int32_t ecx_28 = 0;
                                                                                eax_62 = *var_228;
                                                                                ecx_28 = var_228[1];
                                                                                float* eax_64 = (eax_62 << 4) + eax_4;
                                                                                float* ecx_30 = (ecx_28 << 4) + eax_4;
                                                                                int32_t edi_6 = 0;
                                                                                edi_6 = var_228[2];
                                                                                float* edx_34 = (edi_6 << 4) + eax_4;
                                                                                int32_t edx_35 = 0;
                                                                                edx_35 = var_228[3];
                                                                                int16_t edx_38 =
                                                                                    *(result_1[6] + edx_35 * 0xc + 8);
                                                                                int32_t edi_11;

                                                                                if (edx_38 != 0xffff)
                                                                                    edi_11 = *(*(a1 + 0x68)
                                                                                        + (edx_38 << 2) + 0xd3c);
                                                                                else
                                                                                    edi_11 = *(*(a1 + 0x68) + 0xd40);

                                                                                long double x87_r7_227 =
                                                                                    *edx_34 - *eax_64;
                                                                                long double x87_r6_133 =
                                                                                    edx_34[1] - eax_64[1];
                                                                                long double x87_r5_49 =
                                                                                    edx_34[2] - eax_64[2];
                                                                                float var_1e0_1 = *ecx_30 - *eax_64;
                                                                                float var_1dc_1 = ecx_30[1] - eax_64[1];
                                                                                long double x87_r4_40 =
                                                                                    ecx_30[2] - eax_64[2];
                                                                                float var_210_1 = x87_r4_40 * x87_r6_133
                                                                                    - var_1dc_1 * x87_r5_49;
                                                                                ebx[0xe] = var_210_1;
                                                                                float var_20c_1 = -((
                                                                                    x87_r4_40 * x87_r7_227
                                                                                    - var_1e0_1 * x87_r5_49));
                                                                                ebx[0xf] = var_20c_1;
                                                                                float var_208_1 = var_1dc_1 * x87_r7_227
                                                                                    - var_1e0_1 * x87_r6_133;
                                                                                ebx[0x10] = var_208_1;
                                                                                ebx[0xb] = var_210_1;
                                                                                ebx[0xc] = var_20c_1;
                                                                                ebx[0xd] = var_208_1;
                                                                                long double x87_r7_236 =
                                                                                    ebx[0xe] * *(a1 + 0x7c)
                                                                                    + *(a1 + 0x84) * ebx[0x10]
                                                                                    + *(a1 + 0x80) * ebx[0xf];
                                                                                long double x87_r7_240 =
                                                                                    *(a1 + 0x90) * ebx[0x10]
                                                                                    + *(a1 + 0x8c) * ebx[0xf]
                                                                                    + *(a1 + 0x88) * ebx[0xe];
                                                                                ebx[0xe] = *(a1 + 0x78) * ebx[0x10]
                                                                                    + *(a1 + 0x74) * ebx[0xf]
                                                                                    + *(a1 + 0x70) * ebx[0xe];
                                                                                ebx[0xf] = x87_r7_236;
                                                                                ebx[0x10] = x87_r7_240;
                                                                                float ecx_35 = var_2d4_3;
                                                                                ebx[8] = var_2d8_3;
                                                                                float eax_67 = var_2d0_4;
                                                                                ebx[9] = ecx_35;
                                                                                ebx[0xa] = eax_67;
                                                                                eax_67 = var_2f5_1;
                                                                                long double x87_r7_242 =
                                                                                    var_2d8_3 * *(a1 + 0x98);
                                                                                long double x87_r6_148 =
                                                                                    var_2d4_3 * *(a1 + 0x9c);
                                                                                long double x87_r5_55 =
                                                                                    var_2d0_4 * *(a1 + 0xa0);
                                                                                ecx_35 = eax_67;
                                                                                char temp45_1 = ecx_35;
                                                                                ecx_35 = -(ecx_35);
                                                                                char temp46_1 = eax_67;
                                                                                eax_67 = -(eax_67);
                                                                                float var_1ac_1 =
                                                                                    x87_r5_55 * *(a1 + 0x84)
                                                                                    + x87_r7_242 * *(a1 + 0x7c)
                                                                                    + x87_r6_148 * *(a1 + 0x80);
                                                                                long double x87_r7_244 =
                                                                                    x87_r6_148 * *(a1 + 0x8c)
                                                                                    + x87_r5_55 * *(a1 + 0x90)
                                                                                    + x87_r7_242 * *(a1 + 0x88);
                                                                                *(ebx + 8) = x87_r6_148 * *(a1 + 0x74)
                                                                                    + x87_r5_55 * *(a1 + 0x78)
                                                                                    + x87_r7_242 * *(a1 + 0x70)
                                                                                    + *(a1 + 0x20);
                                                                                *(ebx + 0x10) =
                                                                                    var_1ac_1 + *(a1 + 0x28);
                                                                                long double x87_r7_245 =
                                                                                    x87_r7_244 + *(a1 + 0x30);
                                                                                ebx[0x14] = ~(eax_67 - eax_67) & edi_11;
                                                                                ebx[0x13] = (ecx_35 - ecx_35) & edi_11;
                                                                                ebx[0x18] = var_230;
                                                                                *(ebx + 0x18) = x87_r7_245;
                                                                                *ebx = a1;
                                                                                ebx[0x15] = var_2e9;
                                                                                ebx[0x16] = 1;
                                                                                ebx[0x19] = *(&var_230 + 4);
                                                                                ebx[0x12] =
                                                                                    (var_228 - result_1[4]) >> 3;
                                                                                ebx[0x1a] = var_1d4;
                                                                                ebx[0x1b] = var_1d0;
                                                                            }
                                                                        }

                                                                        break;
                                                                    }
                                                                    else
                                                                    {
                                                                        uint32_t eax_21 = edi_2 * 3;
                                                                        long double x87_r7_54 =
                                                                            var_218_1[eax_21 * 2] - var_2e8_2;
                                                                        edi_1 = &var_218_1[eax_21 * 2];
                                                                        long double x87_r6_18 =
                                                                            var_218_1[eax_21 * 2 + 1] - var_2e4_2;
                                                                        long double x87_r5_16 =
                                                                            edi_1[2] - var_2e0_2;
                                                                        var_198[edx_10] = edi_1;
                                                                        i_1 = x87_r5_16;
                                                                        double var_2c0_2 = x87_r6_18;
                                                                        double var_2a8_3 = x87_r7_54;
                                                                        long double x87_r7_56 =
                                                                            x87_r5_16 * var_27c_1
                                                                            + x87_r6_18 * var_280_1
                                                                            + x87_r7_54 * i_2;
                                                                        float var_2b8_1 = edi_1[3];
                                                                        long double x87_r7_61 =
                                                                            var_2a8_3 * var_2a8_3
                                                                            + var_2c0_2 * var_2c0_2 + i_1 * i_1
                                                                            - x87_r7_56 * x87_r7_56 * var_220_1;
                                                                        long double x87_r6_33 =
                                                                            var_2b8_1 * var_2b8_1;
                                                                        x87_r6_33 - x87_r7_61;

                                                                        if (*(&(
                                                                                (x87_r6_33 < x87_r7_61 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r6_33, x87_r7_61) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r6_33 == x87_r7_61 ? 1 : 0)
                                                                                << 0xe) + 1) & 1)
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double x87_r7_63 =
                                                                                edi_1[3] + *edi_1;
                                                                            long double temp23_1 = var_26c_1;
                                                                            x87_r7_63 - temp23_1;

                                                                            if (*(&(
                                                                                    (x87_r7_63 < temp23_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_63, temp23_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_63 == temp23_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 1)
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double x87_r7_65 =
                                                                                    edi_1[1] + edi_1[3];
                                                                                long double temp25_1 = var_268_1;
                                                                                x87_r7_65 - temp25_1;

                                                                                if (*(&(
                                                                                        (x87_r7_65 < temp25_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_65, temp25_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_65 == temp25_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1)
                                                                                    continue;
                                                                                else
                                                                                {
                                                                                    long double x87_r7_67 =
                                                                                        edi_1[2] + edi_1[3];
                                                                                    long double temp28_1 = var_264_1;
                                                                                    x87_r7_67 - temp28_1;

                                                                                    if (*(&(
                                                                                            (x87_r7_67 < temp28_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_67, temp28_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_67 == temp28_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1)
                                                                                        continue;
                                                                                    else
                                                                                    {
                                                                                        long double x87_r7_69 =
                                                                                            *edi_1 - edi_1[3];
                                                                                        long double temp31_1 = var_278_1;
                                                                                        x87_r7_69 - temp31_1;

                                                                                        if (!(*(&(
                                                                                                (x87_r7_69 < temp31_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_69, temp31_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_69 == temp31_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 0x41))
                                                                                            continue;
                                                                                        else
                                                                                        {
                                                                                            long double x87_r7_71 =
                                                                                                edi_1[1] - edi_1[3];
                                                                                            long double temp36_1 = var_274_1;
                                                                                            x87_r7_71 - temp36_1;

                                                                                            if (!(*(&(
                                                                                                    (x87_r7_71 < temp36_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_71, temp36_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_71 == temp36_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x41))
                                                                                                continue;
                                                                                            else
                                                                                            {
                                                                                                long double x87_r7_73 =
                                                                                                    edi_1[2] - edi_1[3];
                                                                                                long double temp40_1 = var_270_1;
                                                                                                x87_r7_73 - temp40_1;

                                                                                                if (!(*(&(
                                                                                                        (x87_r7_73 < temp40_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_73, temp40_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_73 == temp40_1 ? 1 : 0)
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

                                                                i = edi_1[5];
                                                                var_2a9_1 = 0;

                                                                if (i)
                                                                {
                                                                    int32_t __saved_edi;
                                                                    float** ecx_17 =
                                                                        &(&__saved_edi)[edx_10 + 0x5c];

                                                                    do
                                                                    {
                                                                        ecx_17 = &ecx_17[1];
                                                                        edx_10 += 1;
                                                                        uint32_t eax_24 = i * 3;
                                                                        long double x87_r7_75 =
                                                                            var_218_1[eax_24 * 2] - var_2e8_2;
                                                                        edi_1 = &var_218_1[eax_24 * 2];
                                                                        long double x87_r6_35 =
                                                                            var_218_1[eax_24 * 2 + 1] - var_2e4_2;
                                                                        long double x87_r5_26 =
                                                                            edi_1[2] - var_2e0_2;
                                                                        *ecx_17 = edi_1;
                                                                        i_1 = x87_r6_35;
                                                                        double var_2c0_3 = x87_r7_75;
                                                                        double var_2a8_4 = x87_r5_26;
                                                                        long double x87_r7_77 =
                                                                            x87_r5_26 * var_27c_1
                                                                            + x87_r6_35 * var_280_1
                                                                            + x87_r7_75 * i_2;
                                                                        float var_2b8_2 = edi_1[3];
                                                                        long double x87_r7_82 =
                                                                            var_2a8_4 * var_2a8_4
                                                                            + var_2c0_3 * var_2c0_3 + i_1 * i_1
                                                                            - x87_r7_77 * x87_r7_77 * var_220_1;
                                                                        long double x87_r6_50 =
                                                                            var_2b8_2 * var_2b8_2;
                                                                        x87_r6_50 - x87_r7_82;
                                                                        i = (x87_r6_50 < x87_r7_82 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r6_50, x87_r7_82) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r6_50 == x87_r7_82 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double x87_r7_84 =
                                                                            edi_1[3] + *edi_1;
                                                                        long double temp24_1 = var_26c_1;
                                                                        x87_r7_84 - temp24_1;
                                                                        i = (x87_r7_84 < temp24_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_84, temp24_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_84 == temp24_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double x87_r7_86 =
                                                                            edi_1[1] + edi_1[3];
                                                                        long double temp27_1 = var_268_1;
                                                                        x87_r7_86 - temp27_1;
                                                                        i = (x87_r7_86 < temp27_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_86, temp27_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_86 == temp27_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double x87_r7_88 =
                                                                            edi_1[2] + edi_1[3];
                                                                        long double temp30_1 = var_264_1;
                                                                        x87_r7_88 - temp30_1;
                                                                        i = (x87_r7_88 < temp30_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_88, temp30_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_88 == temp30_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            break;

                                                                        long double x87_r7_90 =
                                                                            *edi_1 - edi_1[3];
                                                                        long double temp34_1 = var_278_1;
                                                                        x87_r7_90 - temp34_1;
                                                                        i = (x87_r7_90 < temp34_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_90, temp34_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_90 == temp34_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        long double x87_r7_92 =
                                                                            edi_1[1] - edi_1[3];
                                                                        long double temp39_1 = var_274_1;
                                                                        x87_r7_92 - temp39_1;
                                                                        i = (x87_r7_92 < temp39_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_92, temp39_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_92 == temp39_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        long double x87_r7_94 =
                                                                            edi_1[2] - edi_1[3];
                                                                        long double temp44_1 = var_270_1;
                                                                        x87_r7_94 - temp44_1;
                                                                        i = (x87_r7_94 < temp44_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_94, temp44_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_94 == temp44_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (!(*(&i + 1) & 0x41))
                                                                            break;

                                                                        i = edi_1[5];
                                                                    } while (i);

                                                                    var_2b4_1 = edx_10;
                                                                }

                                                                int16_t ecx_15 = *(edi_1 + 0x12);

                                                                if (ecx_15)
                                                                {
                                                                    float i_3 = 0f;
                                                                    i_3 = edi_1[4];
                                                                    i_1 = i_3;
                                                                    int16_t* edx_13 =
                                                                        result_1[4] + (i_3 << 3);
                                                                    int16_t* var_2b8_3 = edx_13;

                                                                    if (i_3 >= ecx_15 + i_3)
                                                                        goto label_4c1f56;

                                                                    int32_t eax_52;
                                                                    void* const ecx_22;

                                                                    do
                                                                    {
                                                                        int32_t ecx_19 = 0;
                                                                        ecx_19 = *edx_13;
                                                                        float* ecx_21 = (ecx_19 << 4) + eax_4;
                                                                        int32_t eax_26 = 0;
                                                                        eax_26 = edx_13[1];
                                                                        float* eax_28 = (eax_26 << 4) + eax_4;
                                                                        int32_t eax_29 = 0;
                                                                        eax_29 = var_2b8_3[2];
                                                                        float* eax_31 = (eax_29 << 4) + eax_4;
                                                                        int32_t eax_32 = 0;
                                                                        eax_32 = var_2b8_3[3];

                                                                        if (*(result_1[6] + eax_32 * 0xc + 4)
                                                                            == 0xffff || a2[6])
                                                                        {
                                                                            long double x87_r7_95 = var_26c_1;
                                                                            long double temp26_1 = *ecx_21;
                                                                            x87_r7_95 - temp26_1;
                                                                            long double x87_r7_96;
                                                                            long double temp29_1;

                                                                            if (!(*(&(
                                                                                (x87_r7_95 < temp26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_95, temp26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_95 == temp26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41))
                                                                            {
                                                                                x87_r7_96 = var_26c_1;
                                                                                temp29_1 = *eax_28;
                                                                                x87_r7_96 - temp29_1;
                                                                            }

                                                                            float* edx_22;

                                                                            if (*(&(
                                                                                (x87_r7_95 < temp26_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_95, temp26_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_95 == temp26_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41 || *(&(
                                                                                (x87_r7_96 < temp29_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_96, temp29_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_96 == temp29_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                                edx_22 = eax_31;
                                                                            label_4c22f9:
                                                                                long double x87_r7_98 = var_268_1;
                                                                                long double temp32_1 = ecx_21[1];
                                                                                x87_r7_98 - temp32_1;

                                                                                if (*(&(
                                                                                    (x87_r7_98 < temp32_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_98, temp32_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_98 == temp32_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
                                                                                label_4c2334:
                                                                                    long double x87_r7_101 = var_264_1;
                                                                                    long double temp37_1 = ecx_21[2];
                                                                                    x87_r7_101 - temp37_1;

                                                                                    if (*(&(
                                                                                        (x87_r7_101 < temp37_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_101, temp37_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_101 == temp37_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x41)
                                                                                    {
                                                                                    label_4c236f:
                                                                                        long double x87_r7_104 = var_278_1;
                                                                                        long double temp41_1 = *ecx_21;
                                                                                        x87_r7_104 - temp41_1;

                                                                                        if (!(*(&(
                                                                                            (x87_r7_104 < temp41_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_104, temp41_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_104 == temp41_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                        label_4c23a7:
                                                                                            long double x87_r7_107 = var_274_1;
                                                                                            long double temp47_1 = ecx_21[1];
                                                                                            x87_r7_107 - temp47_1;

                                                                                            if (!(*(&(
                                                                                                (x87_r7_107 < temp47_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_107, temp47_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_107 == temp47_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                            label_4c23e2:
                                                                                                long double x87_r7_110 = var_270_1;
                                                                                                long double temp50_1 = ecx_21[2];
                                                                                                x87_r7_110 - temp50_1;

                                                                                                if (!(*(&(
                                                                                                    (x87_r7_110 < temp50_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_110, temp50_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_110 == temp50_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 1))
                                                                                                {
                                                                                                label_4c2425:
                                                                                                    float var_2cc_1 = *edx_22 - *ecx_21;
                                                                                                    float var_2c8_1 = edx_22[1] - ecx_21[1];
                                                                                                    float var_2c4_1 = edx_22[2] - ecx_21[2];
                                                                                                    float var_24c_1 = *eax_28 - *ecx_21;
                                                                                                    float var_248_1 = eax_28[1] - ecx_21[1];
                                                                                                    long double x87_r7_124 =
                                                                                                        eax_28[2] - ecx_21[2];
                                                                                                    float var_244_1 = x87_r7_124;
                                                                                                    float var_2f0_3 = x87_r7_124 * var_2c8_1
