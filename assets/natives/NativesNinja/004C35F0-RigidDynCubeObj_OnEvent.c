#include "004C35F0-RigidDynCubeObj_OnEvent.h"
/* 0x004c35f0 RigidDynCubeObj_OnEvent full linked: callers=0 callees=2 */
void* sub_4c35f0(void* a1, int32_t* a2)

{
    double* eax = *a2;
    double* ecx = a2[1];
    void* result = *(a1 + 0x6c);

    if (result)
    {
        int32_t ecx_1 = *(a1 + 0xa4);

        if (ecx_1 != 0xffffffff)
        {
            void* eax_1 = *(result + (ecx_1 << 2));
            result = *(*(eax_1 + 0xc) + 0xc);

            if (!*(result + 0x28))
            {
                int32_t* ebx_1 = *(result + 0x2c);

                if (ebx_1 && *ebx_1)
                {
                    result = ebx_1[5];
                    void* result_2 = result;
                    result = a2[5];

                    if (!result)
                    {
                    label_4c3687:
                        int16_t eax_4;
                        eax_4 = a2[2];

                        if (eax_4 == 0xff)
                        {
                        label_4c36c2:
                            long double x87_r7_2 = *(a1 + 0x9c);
                            long double x87_r6_1 = *(a1 + 0xa0);
                            float* esi_1 = ebx_1[7];
                            char var_241_1 = 1;
                            x87_r6_1 - x87_r7_2;
                            void* result_1 = nullptr;
                            float* var_1cc_1 = esi_1;
                            int32_t var_198[0x64];
                            var_198[0] = esi_1;
                            long double x87_r7_3;

                            if (!(*(&((x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe) + 1) & 1))
                                x87_r7_3 = *(a1 + 0xa0);
                            else
                                x87_r7_3 = *(a1 + 0x9c);

                            long double x87_r6_2 = *(a1 + 0x98);
                            x87_r6_2 - x87_r7_3;
                            long double x87_r7_5;

                            if (*(&((x87_r6_2 < x87_r7_3 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_2, x87_r7_3) ? 1 : 0) << 0xa
                                | (x87_r6_2 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            {
                                long double x87_r7_6 = *(a1 + 0x9c);
                                long double x87_r6_3 = *(a1 + 0xa0);
                                x87_r6_3 - x87_r7_6;

                                if (!(*(&((x87_r6_3 < x87_r7_6 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r6_3, x87_r7_6) ? 1 : 0) << 0xa
                                        | (x87_r6_3 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
                                    x87_r7_5 = *(a1 + 0xa0);
                                else
                                    x87_r7_5 = *(a1 + 0x9c);
                            }
                            else
                                x87_r7_5 = *(a1 + 0x98);

                            long double st0_1;
                            st0_1 = sub_4d0950(*(a1 + 0x6c));
                            long double x87_r7_8 = st0_1 * x87_r7_5;
                            float var_260_1 = x87_r7_8;
                            long double x87_r7_9 = *(a1 + 0x20) - x87_r7_8;
                            long double temp2_1 = *eax;
                            x87_r7_9 - temp2_1;
                            result = (x87_r7_9 < temp2_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_9, temp2_1) ? 1 : 0) << 0xa
                                | (x87_r7_9 == temp2_1 ? 1 : 0) << 0xe | 0x3800;
                            double* edx_4;

                            if (*(&result + 1) & 0x41)
                            {
                                edx_4 = ecx;
                            label_4c3784:
                                long double x87_r7_12 = var_260_1 + *(a1 + 0x20);
                                long double temp4_1 = *eax;
                                x87_r7_12 - temp4_1;
                                result = (x87_r7_12 < temp4_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_12, temp4_1) ? 1 : 0) << 0xa
                                    | (x87_r7_12 == temp4_1 ? 1 : 0) << 0xe | 0x3800;

                                if (!(*(&result + 1) & 1))
                                {
                                label_4c37a5:
                                    long double x87_r7_15 = *(a1 + 0x28) - var_260_1;
                                    long double temp6_1 = eax[1];
                                    x87_r7_15 - temp6_1;
                                    result = (x87_r7_15 < temp6_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_15, temp6_1) ? 1 : 0) << 0xa
                                        | (x87_r7_15 == temp6_1 ? 1 : 0) << 0xe | 0x3800;

                                    if (*(&result + 1) & 0x41)
                                    {
                                    label_4c37c8:
                                        long double x87_r7_18 = var_260_1 + *(a1 + 0x28);
                                        long double temp8_1 = eax[1];
                                        x87_r7_18 - temp8_1;
                                        result = (x87_r7_18 < temp8_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_18, temp8_1) ? 1 : 0) << 0xa
                                            | (x87_r7_18 == temp8_1 ? 1 : 0) << 0xe | 0x3800;

                                        if (!(*(&result + 1) & 1))
                                        {
                                        label_4c37eb:
                                            long double x87_r7_21 = *(a1 + 0x30) - var_260_1;
                                            long double temp10_1 = eax[2];
                                            x87_r7_21 - temp10_1;
                                            result = (x87_r7_21 < temp10_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_21, temp10_1) ? 1 : 0) << 0xa
                                                | (x87_r7_21 == temp10_1 ? 1 : 0) << 0xe | 0x3800;

                                            if (*(&result + 1) & 0x41)
                                            {
                                            label_4c380e:
                                                long double x87_r7_24 = var_260_1 + *(a1 + 0x30);
                                                long double temp12_1 = eax[2];
                                                x87_r7_24 - temp12_1;
                                                result = (x87_r7_24 < temp12_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_24, temp12_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_24 == temp12_1 ? 1 : 0) << 0xe
                                                    | 0x3800;

                                                if (!(*(&result + 1) & 1))
                                                {
                                                label_4c382f:
                                                    long double x87_r7_27 = *eax - *(a1 + 0x20);
                                                    long double x87_r6_5 = eax[1] - *(a1 + 0x28);
                                                    long double x87_r5_2 = eax[2] - *(a1 + 0x30);
                                                    float var_20c_1 = x87_r6_5 * *(a1 + 0x7c)
                                                        + x87_r5_2 * *(a1 + 0x88)
                                                        + x87_r7_27 * *(a1 + 0x70);
                                                    float var_234_1 = var_20c_1;
                                                    float var_234_2 = var_20c_1 / *(a1 + 0x98);
                                                    float var_230_2 = (x87_r5_2 * *(a1 + 0x8c)
                                                        + x87_r7_27 * *(a1 + 0x74)
                                                        + x87_r6_5 * *(a1 + 0x80)) / *(a1 + 0x98);
                                                    float var_22c_2 = (x87_r6_5 * *(a1 + 0x84)
                                                        + x87_r5_2 * *(a1 + 0x90)
                                                        + x87_r7_27 * *(a1 + 0x78)) / *(a1 + 0x98);
                                                    long double x87_r7_37 = *edx_4 - *(a1 + 0x20);
                                                    long double x87_r6_12 =
                                                        edx_4[1] - *(a1 + 0x28);
                                                    long double x87_r5_8 =
                                                        edx_4[2] - *(a1 + 0x30);
                                                    float var_20c_2 = x87_r5_8 * *(a1 + 0x88)
                                                        + x87_r7_37 * *(a1 + 0x70)
                                                        + x87_r6_12 * *(a1 + 0x7c);
                                                    float var_240_1 = var_20c_2;
                                                    float var_240_2 = var_20c_2 / *(a1 + 0x98);
                                                    float var_23c_2 = (x87_r5_8 * *(a1 + 0x8c)
                                                        + x87_r7_37 * *(a1 + 0x74)
                                                        + x87_r6_12 * *(a1 + 0x80)) / *(a1 + 0x98);
                                                    long double x87_r7_46 = (
                                                        x87_r5_8 * *(a1 + 0x90)
                                                        + x87_r7_37 * *(a1 + 0x78)
                                                        + x87_r6_12 * *(a1 + 0x84)) / *(a1 + 0x98);
                                                    long double x87_r6_14 = var_234_2;
                                                    long double temp14_1 = var_240_2;
                                                    x87_r6_14 - temp14_1;
                                                    float var_200_1;

                                                    var_200_1 = !(*(&(
                                                        (x87_r6_14 < temp14_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_14, temp14_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_14 == temp14_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? var_240_2 : var_234_2;

                                                    long double x87_r6_15 = var_230_2;
                                                    long double temp15_1 = var_23c_2;
                                                    x87_r6_15 - temp15_1;
                                                    float var_1fc_1;

                                                    var_1fc_1 = !(*(&(
                                                        (x87_r6_15 < temp15_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_15, temp15_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_15 == temp15_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? var_23c_2 : var_230_2;

                                                    long double x87_r6_16 = var_22c_2;
                                                    x87_r6_16 - x87_r7_46;
                                                    float var_1f8_1;

                                                    var_1f8_1 = !(*(&(
                                                        (x87_r6_16 < x87_r7_46 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_16, x87_r7_46) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_16 == x87_r7_46 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1) ? x87_r7_46 : var_22c_2;

                                                    long double x87_r6_17 = var_234_2;
                                                    long double temp16_1 = var_240_2;
                                                    x87_r6_17 - temp16_1;
                                                    float var_1f4_1;

                                                    var_1f4_1 = *(&(
                                                        (x87_r6_17 < temp16_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_17, temp16_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_17 == temp16_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? var_240_2 : var_234_2;

                                                    long double x87_r6_18 = var_230_2;
                                                    long double temp17_1 = var_23c_2;
                                                    x87_r6_18 - temp17_1;
                                                    float var_1f0_1;

                                                    var_1f0_1 = *(&(
                                                        (x87_r6_18 < temp17_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_18, temp17_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_18 == temp17_1 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? var_23c_2 : var_230_2;

                                                    long double x87_r6_19 = var_22c_2;
                                                    x87_r6_19 - x87_r7_46;
                                                    float var_1ec_1;

                                                    var_1ec_1 = *(&(
                                                        (x87_r6_19 < x87_r7_46 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_19, x87_r7_46) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r6_19 == x87_r7_46 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41 ? x87_r7_46 : var_22c_2;

                                                    long double x87_r7_47 = x87_r7_46 - var_22c_2;
                                                    long double x87_r5_13 = var_23c_2 - var_230_2;
                                                    float var_258_1 = x87_r5_13;
                                                    long double x87_r4_18 = var_240_2 - var_234_2;
                                                    float var_25c_2 = x87_r4_18;
                                                    double var_1b0_1 = 1.0 / (x87_r4_18 * x87_r4_18
                                                        + x87_r5_13 * x87_r5_13
                                                        + x87_r7_47 * x87_r7_47);
                                                    float var_210_1 = x87_r7_47;
                                                    long double x87_r7_48 = var_258_1;
                                                    long double temp18_1 = 0f;
                                                    x87_r7_48 - temp18_1;
                                                    long double x87_r7_49 = var_258_1;

                                                    if (*(&((x87_r7_48 < temp18_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_48, temp18_1) ? 1 : 0) << 0xa
                                                            | (x87_r7_48 == temp18_1 ? 1 : 0)
                                                            << 0xe | 0x3800) + 1) & 1)
                                                        x87_r7_49 = -(x87_r7_49);

                                                    long double x87_r6_23 = var_25c_2;
                                                    long double temp19_1 = 0f;
                                                    x87_r6_23 - temp19_1;
                                                    long double x87_r6_24 = var_25c_2;

                                                    if (*(&((x87_r6_23 < temp19_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r6_23, temp19_1) ? 1 : 0) << 0xa
                                                            | (x87_r6_23 == temp19_1 ? 1 : 0)
                                                            << 0xe | 0x3000) + 1) & 1)
                                                        x87_r6_24 = -(x87_r6_24);

                                                    x87_r7_49 - x87_r6_24;

                                                    if (!(*(&((x87_r7_49 < x87_r6_24 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_49, x87_r6_24) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_49 == x87_r6_24 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 0x41))
                                                    {
                                                        long double x87_r7_52 = var_258_1;
                                                        long double temp20_1 = 0f;
                                                        x87_r7_52 - temp20_1;

                                                        if (!(*(&(
                                                                (x87_r7_52 < temp20_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_52, temp20_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_52 == temp20_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float var_220_2 = var_258_1;
                                                        else
                                                            float var_220_1 = -(var_258_1);

                                                        long double x87_r7_55 = var_210_1;
                                                        long double temp22_1 = 0f;
                                                        x87_r7_55 - temp22_1;

                                                        if (!(*(&(
                                                                (x87_r7_55 < temp22_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_55, temp22_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_55 == temp22_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            float var_220_4 = var_210_1;
                                                        else
                                                            float var_220_3 = -(var_210_1);
                                                    }

                                                    while (true)
                                                    {
                                                    label_4c3b13:
                                                        int16_t i;
                                                        i = var_241_1;
                                                        void* result_3;
                                                        float* edi_1;

                                                        if (i)
                                                        {
                                                            result_3 = result_1;
                                                            edi_1 = var_1cc_1;
                                                        }
                                                        else
                                                        {
                                                            int16_t esi_2 = *(esi_1 + 0x16);

                                                            if (!esi_2)
                                                            {
                                                                result = result_1 - 1;
                                                                bool cond:4_1 = result_1 - 1 < 0;
                                                                result_1 = result;

                                                                if (cond:4_1)
                                                                    break;

                                                                esi_1 = var_198[result];
                                                                continue;
                                                            }
                                                            else
                                                            {
                                                                edi_1 = var_1cc_1;
                                                                result_3 = result_1;
                                                                uint32_t ecx_16 = esi_2 * 3;
                                                                long double x87_r7_59 =
                                                                    edi_1[ecx_16 * 2] - var_234_2;
                                                                esi_1 = &edi_1[ecx_16 * 2];
                                                                var_198[result_3] = esi_1;
                                                                float var_1d8_1 = x87_r7_59;
                                                                float var_1d4_1 = esi_1[1] - var_230_2;
                                                                long double x87_r7_63 =
                                                                    esi_1[2] - var_22c_2;
                                                                long double x87_r6_26 = var_1d4_1;
                                                                long double x87_r5_15 = var_1d8_1;
                                                                float var_25c_3 = x87_r7_63 * var_210_1
                                                                    + var_1d4_1 * var_258_1
                                                                    + var_1d8_1 * var_25c_2;
                                                                float var_260_2 = esi_1[3];
                                                                long double x87_r7_67 =
                                                                    x87_r5_15 * x87_r5_15
                                                                    + x87_r6_26 * x87_r6_26
                                                                    + x87_r7_63 * x87_r7_63
                                                                    - var_25c_3 * var_25c_3 * var_1b0_1;
                                                                long double x87_r6_34 =
                                                                    var_260_2 * var_260_2;
                                                                x87_r6_34 - x87_r7_67;
                                                                i = (x87_r6_34 < x87_r7_67 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r6_34, x87_r7_67) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r6_34 == x87_r7_67 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    continue;
                                                                else
                                                                {
                                                                    long double x87_r7_69 =
                                                                        esi_1[3] + *esi_1;
                                                                    long double temp23_1 = var_200_1;
                                                                    x87_r7_69 - temp23_1;
                                                                    i = (x87_r7_69 < temp23_1 ? 1 : 0) << 8
                                                                        | (FCMP_UO(x87_r7_69, temp23_1) ? 1
                                                                        : 0) << 0xa
                                                                        | (x87_r7_69 == temp23_1 ? 1 : 0)
                                                                        << 0xe;

                                                                    if (*(&i + 1) & 1)
                                                                        continue;
                                                                    else
                                                                    {
                                                                        long double x87_r7_71 =
                                                                            esi_1[1] + esi_1[3];
                                                                        long double temp24_1 = var_1fc_1;
                                                                        x87_r7_71 - temp24_1;
                                                                        i = (x87_r7_71 < temp24_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_71, temp24_1) ? 1
                                                                            : 0) << 0xa
                                                                            | (x87_r7_71 == temp24_1 ? 1 : 0)
                                                                            << 0xe;

                                                                        if (*(&i + 1) & 1)
                                                                            continue;
                                                                        else
                                                                        {
                                                                            long double x87_r7_73 =
                                                                                esi_1[2] + esi_1[3];
                                                                            long double temp26_1 = var_1f8_1;
                                                                            x87_r7_73 - temp26_1;
                                                                            i = (x87_r7_73 < temp26_1 ? 1 : 0) << 8
                                                                                | (FCMP_UO(x87_r7_73, temp26_1) ? 1
                                                                                : 0) << 0xa
                                                                                | (x87_r7_73 == temp26_1 ? 1 : 0)
                                                                                << 0xe;

                                                                            if (*(&i + 1) & 1)
                                                                                continue;
                                                                            else
                                                                            {
                                                                                long double x87_r7_75 =
                                                                                    *esi_1 - esi_1[3];
                                                                                long double temp28_1 = var_1f4_1;
                                                                                x87_r7_75 - temp28_1;
                                                                                i = (x87_r7_75 < temp28_1 ? 1 : 0) << 8
                                                                                    | (FCMP_UO(x87_r7_75, temp28_1) ? 1
                                                                                    : 0) << 0xa
                                                                                    | (x87_r7_75 == temp28_1 ? 1 : 0)
                                                                                    << 0xe;

                                                                                if (!(*(&i + 1) & 0x41))
                                                                                    continue;
                                                                                else
                                                                                {
                                                                                    long double x87_r7_77 =
                                                                                        esi_1[1] - esi_1[3];
                                                                                    long double temp31_1 = var_1f0_1;
                                                                                    x87_r7_77 - temp31_1;
                                                                                    i = (x87_r7_77 < temp31_1 ? 1 : 0) << 8
                                                                                        | (FCMP_UO(x87_r7_77, temp31_1) ? 1
                                                                                        : 0) << 0xa
                                                                                        | (x87_r7_77 == temp31_1 ? 1 : 0)
                                                                                        << 0xe;

                                                                                    if (!(*(&i + 1) & 0x41))
                                                                                        continue;
                                                                                    else
                                                                                    {
                                                                                        long double x87_r7_79 =
                                                                                            esi_1[2] - esi_1[3];
                                                                                        long double temp35_1 = var_1ec_1;
                                                                                        x87_r7_79 - temp35_1;
                                                                                        i = (x87_r7_79 < temp35_1 ? 1 : 0) << 8
                                                                                            | (FCMP_UO(x87_r7_79, temp35_1) ? 1
                                                                                            : 0) << 0xa
                                                                                            | (x87_r7_79 == temp35_1 ? 1 : 0)
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

                                                        i = esi_1[5];
                                                        var_241_1 = 0;

                                                        if (i)
                                                        {
                                                            int32_t __saved_edi;
                                                            float** ecx_17 =
                                                                &(&__saved_edi)[result_3 + 0x36];

                                                            do
                                                            {
                                                                ecx_17 = &ecx_17[1];
                                                                result_3 += 1;
                                                                uint32_t eax_17 = i * 3;
                                                                long double x87_r7_81 =
                                                                    edi_1[eax_17 * 2] - var_234_2;
                                                                esi_1 = &edi_1[eax_17 * 2];
                                                                *ecx_17 = esi_1;
                                                                float var_1c8_1 = x87_r7_81;
                                                                float var_1c4_1 = esi_1[1] - var_230_2;
                                                                long double x87_r7_85 =
                                                                    esi_1[2] - var_22c_2;
                                                                long double x87_r6_35 = var_1c4_1;
                                                                long double x87_r5_17 = var_1c8_1;
                                                                float var_25c_4 = x87_r7_85 * var_210_1
                                                                    + var_1c4_1 * var_258_1
                                                                    + var_1c8_1 * var_25c_2;
                                                                float var_260_3 = esi_1[3];
                                                                long double x87_r7_89 =
                                                                    x87_r5_17 * x87_r5_17
                                                                    + x87_r6_35 * x87_r6_35
                                                                    + x87_r7_85 * x87_r7_85
                                                                    - var_25c_4 * var_25c_4 * var_1b0_1;
                                                                long double x87_r6_43 =
                                                                    var_260_3 * var_260_3;
                                                                x87_r6_43 - x87_r7_89;
                                                                i = (x87_r6_43 < x87_r7_89 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r6_43, x87_r7_89) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r6_43 == x87_r7_89 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double x87_r7_91 =
                                                                    esi_1[3] + *esi_1;
                                                                long double temp25_1 = var_200_1;
                                                                x87_r7_91 - temp25_1;
                                                                i = (x87_r7_91 < temp25_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_91, temp25_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_91 == temp25_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double x87_r7_93 =
                                                                    esi_1[1] + esi_1[3];
                                                                long double temp27_1 = var_1fc_1;
                                                                x87_r7_93 - temp27_1;
                                                                i = (x87_r7_93 < temp27_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_93, temp27_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_93 == temp27_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double x87_r7_95 =
                                                                    esi_1[2] + esi_1[3];
                                                                long double temp30_1 = var_1f8_1;
                                                                x87_r7_95 - temp30_1;
                                                                i = (x87_r7_95 < temp30_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_95, temp30_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_95 == temp30_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (*(&i + 1) & 1)
                                                                    break;

                                                                long double x87_r7_97 =
                                                                    *esi_1 - esi_1[3];
                                                                long double temp34_1 = var_1f4_1;
                                                                x87_r7_97 - temp34_1;
                                                                i = (x87_r7_97 < temp34_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_97, temp34_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_97 == temp34_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                long double x87_r7_99 =
                                                                    esi_1[1] - esi_1[3];
                                                                long double temp39_1 = var_1f0_1;
                                                                x87_r7_99 - temp39_1;
                                                                i = (x87_r7_99 < temp39_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_99, temp39_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_99 == temp39_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                long double x87_r7_101 =
                                                                    esi_1[2] - esi_1[3];
                                                                long double temp43_1 = var_1ec_1;
                                                                x87_r7_101 - temp43_1;
                                                                i = (x87_r7_101 < temp43_1 ? 1 : 0) << 8
                                                                    | (FCMP_UO(x87_r7_101, temp43_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_101 == temp43_1 ? 1 : 0)
                                                                    << 0xe;

                                                                if (!(*(&i + 1) & 0x41))
                                                                    break;

                                                                i = esi_1[5];
                                                            } while (i);

                                                            result_1 = result_3;
                                                        }

                                                        int16_t ecx_15 = *(esi_1 + 0x12);

                                                        if (ecx_15)
                                                        {
                                                            int32_t eax_18 = 0;
                                                            eax_18 = esi_1[4];
                                                            int32_t var_220_5 = eax_18;
                                                            int16_t* ebx_2 =
                                                                ebx_1[4] + (eax_18 << 3);
                                                            int16_t* var_25c_5 = ebx_2;

                                                            if (eax_18 < ecx_15 + eax_18)
                                                            {
                                                                while (true)
                                                                {
                                                                    int32_t ecx_20 = 0;
                                                                    ecx_20 = *ebx_2;
                                                                    int32_t edx_14 = 0;
                                                                    edx_14 = ebx_2[1];
                                                                    int32_t edi_2 = 0;
                                                                    edi_2 = ebx_2[2];
                                                                    float* ecx_22 =
                                                                        (ecx_20 << 4) + result_2;
                                                                    float* edx_16 =
                                                                        (edx_14 << 4) + result_2;
                                                                    float* edi_4 = (edi_2 << 4) + result_2;
                                                                    int32_t eax_20 = 0;
                                                                    eax_20 = ebx_2[3];
                                                                    int32_t ebx_4 = ebx_1[6];
                                                                    int32_t eax_21 = eax_20 * 3;

                                                                    if (*(ebx_4 + (eax_21 << 2) + 4)
                                                                        == 0xffff)
                                                                    {
                                                                        long double x87_r7_102 = var_200_1;
                                                                        long double temp29_1 = *ecx_22;
                                                                        x87_r7_102 - temp29_1;

                                                                        if (*(&(
                                                                            (x87_r7_102 < temp29_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_102, temp29_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_102 == temp29_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                        label_4c3e99:
                                                                            long double x87_r7_105 = var_1fc_1;
                                                                            long double temp32_1 = ecx_22[1];
                                                                            x87_r7_105 - temp32_1;

                                                                            if (*(&(
                                                                                (x87_r7_105 < temp32_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_105, temp32_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_105 == temp32_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            {
                                                                            label_4c3ec7:
                                                                                long double x87_r7_108 = var_1f8_1;
                                                                                long double temp36_1 = ecx_22[2];
                                                                                x87_r7_108 - temp36_1;

                                                                                if (*(&(
                                                                                    (x87_r7_108 < temp36_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_108, temp36_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_108 == temp36_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                {
                                                                                label_4c3ef5:
                                                                                    long double x87_r7_111 = var_1f4_1;
                                                                                    long double temp40_1 = *ecx_22;
                                                                                    x87_r7_111 - temp40_1;

                                                                                    if (!(*(&(
                                                                                        (x87_r7_111 < temp40_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_111, temp40_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_111 == temp40_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 1))
                                                                                    {
                                                                                    label_4c3f20:
                                                                                        long double x87_r7_114 = var_1f0_1;
                                                                                        long double temp44_1 = ecx_22[1];
                                                                                        x87_r7_114 - temp44_1;

                                                                                        if (!(*(&(
                                                                                            (x87_r7_114 < temp44_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_114, temp44_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_114 == temp44_1 ? 1 : 0)
                                                                                            << 0xe) + 1) & 1))
                                                                                        {
                                                                                        label_4c3f57:
                                                                                            long double x87_r7_117 = var_1ec_1;
                                                                                            long double temp47_1 = ecx_22[2];
                                                                                            x87_r7_117 - temp47_1;

                                                                                            if (!(*(&(
                                                                                                (x87_r7_117 < temp47_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_117, temp47_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_117 == temp47_1 ? 1 : 0)
                                                                                                << 0xe) + 1) & 1))
                                                                                            {
                                                                                            label_4c3f92:
                                                                                                float var_250_1 = *edi_4 - *ecx_22;
                                                                                                float var_24c_1 = edi_4[1] - ecx_22[1];
                                                                                                float var_248_1 = edi_4[2] - ecx_22[2];
                                                                                                float var_1e8_1 = *edx_16 - *ecx_22;
                                                                                                float var_1e4_1 = edx_16[1] - ecx_22[1];
                                                                                                long double x87_r7_131 =
                                                                                                    edx_16[2] - ecx_22[2];
                                                                                                float var_1e0_1 = x87_r7_131;
                                                                                                float var_258_2 = x87_r7_131 * var_24c_1
                                                                                                    - var_1e4_1 * var_248_1;
                                                                                                long double x87_r7_136 =
                                                                                                    var_1e0_1 * var_250_1
                                                                                                    - var_1e8_1 * var_248_1;
                                                                                                float var_23c_3 = -(x87_r7_136);
                                                                                                float var_228_1 = var_1e4_1 * var_250_1
                                                                                                    - var_1e8_1 * var_24c_1;
                                                                                                long double x87_r7_144 =
                                                                                                    var_228_1 * var_210_1
                                                                                                    + var_23c_3 * var_258_1
                                                                                                    + var_258_2 * var_25c_2;
                                                                                                long double temp50_1 = 0.0;
                                                                                                x87_r7_144 - temp50_1;
                                                                                                float var_1bc_1 = x87_r7_144;
                                                                                                bool c1_1 = /* bool c1_1 =
                                                                                                    unknown  {fst dword [esp+0xb4], st0} */;

                                                                                                if (!(*(&(
                                                                                                    (x87_r7_144 < temp50_1 ? 1 : 0) << 8
                                                                                                    | (c1_1 ? 1 : 0) << 9 | (
                                                                                                    FCMP_UO(x87_r7_144, temp50_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_144 == temp50_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 0x40))
                                                                                                {
                                                                                                    long double x87_r7_146 = (
                                                                                                        (ecx_22[2] - var_22c_2) * var_228_1
                                                                                                        + (ecx_22[1] - var_230_2) * var_23c_3
                                                                                                        + (*ecx_22 - var_234_2) * var_258_2)
                                                                                                        / x87_r7_144;
                                                                                                    float var_260_4 = x87_r7_146;
                                                                                                    long double temp53_1 = 0f;
                                                                                                    x87_r7_146 - temp53_1;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r7_146 < temp53_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_146, temp53_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_146 == temp53_1 ? 1 : 0)
                                                                                                        << 0xe) + 1) & 1))
                                                                                                    {
                                                                                                        long double x87_r7_147 = var_260_4;
                                                                                                        long double temp55_1 = 1f;
                                                                                                        x87_r7_147 - temp55_1;

                                                                                                        if (*(&(
                                                                                                            (x87_r7_147 < temp55_1 ? 1 : 0) << 8 | (
                                                                                                            FCMP_UO(x87_r7_147, temp55_1) ? 1 : 0)
                                                                                                            << 0xa
                                                                                                            | (x87_r7_147 == temp55_1 ? 1 : 0)
                                                                                                            << 0xe) + 1) & 0x41)
                                                                                                        {
                                                                                                            float var_20c_3 =
                                                                                                                var_260_4 * var_25c_2 + var_234_2;
                                                                                                            float var_208_3 =
                                                                                                                var_260_4 * var_258_1 + var_230_2;
                                                                                                            float var_204_3 =
                                                                                                                var_260_4 * var_210_1 + var_22c_2;
                                                                                                            long double x87_r7_157 = var_258_2;
                                                                                                            long double temp56_1 = 0f;
                                                                                                            x87_r7_157 - temp56_1;
                                                                                                            float var_1a4_1;

                                                                                                            var_1a4_1 = !(*(&(
                                                                                                                (x87_r7_157 < temp56_1 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r7_157, temp56_1) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r7_157 == temp56_1 ? 1 : 0)
                                                                                                                << 0xe) + 1) & 1) ? var_258_2
                                                                                                                : -(var_258_2);

                                                                                                            long double x87_r7_160 = var_23c_3;
                                                                                                            long double temp57_1 = 0f;
                                                                                                            x87_r7_160 - temp57_1;
                                                                                                            long double x87_r7_161 = var_23c_3;

                                                                                                            if (*(&(
                                                                                                                    (x87_r7_160 < temp57_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r7_160, temp57_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r7_160 == temp57_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                                x87_r7_161 = -(x87_r7_161);

                                                                                                            long double x87_r6_60 = var_228_1;
                                                                                                            long double temp58_1 = 0f;
                                                                                                            x87_r6_60 - temp58_1;
                                                                                                            long double x87_r6_61 = var_228_1;

                                                                                                            if (*(&(
                                                                                                                    (x87_r6_60 < temp58_1 ? 1 : 0) << 8 | (
                                                                                                                    FCMP_UO(x87_r6_60, temp58_1) ? 1 : 0)
                                                                                                                    << 0xa
                                                                                                                    | (x87_r6_60 == temp58_1 ? 1 : 0)
                                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                                x87_r6_61 = -(x87_r6_61);

                                                                                                            long double x87_r5_25 = var_1a4_1;
                                                                                                            x87_r5_25 - x87_r7_161;
                                                                                                            long double x87_r5_26;

                                                                                                            if (!(*(&(
                                                                                                                (x87_r5_25 < x87_r7_161 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(x87_r5_25, x87_r7_161) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (x87_r5_25 == x87_r7_161 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41))
                                                                                                            {
                                                                                                                x87_r5_26 = var_1a4_1;
                                                                                                                x87_r5_26 - x87_r6_61;
                                                                                                            }

                                                                                                            float var_260_5;

                                                                                                            if (*(&(
                                                                                                                (x87_r5_25 < x87_r7_161 ? 1 : 0) << 8
                                                                                                                | (FCMP_UO(x87_r5_25, x87_r7_161) ? 1
                                                                                                                : 0) << 0xa
                                                                                                                | (x87_r5_25 == x87_r7_161 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41 || *(&(
                                                                                                                (x87_r5_26 < x87_r6_61 ? 1 : 0) << 8 | (
                                                                                                                FCMP_UO(x87_r5_26, x87_r6_61) ? 1 : 0)
                                                                                                                << 0xa
                                                                                                                | (x87_r5_26 == x87_r6_61 ? 1 : 0)
                                                                                                                << 0xe | 0x3000) + 1) & 0x41)
                                                                                                            {
                                                                                                                x87_r7_161 - x87_r6_61;

                                                                                                                if (*(&(
                                                                                                                    (x87_r7_161 < x87_r6_61 ? 1 : 0) << 8
                                                                                                                    | (FCMP_UO(x87_r7_161, x87_r6_61) ? 1
                                                                                                                    : 0) << 0xa
                                                                                                                    | (x87_r7_161 == x87_r6_61 ? 1 : 0)
                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                {
                                                                                                                    x87_r7_144 = var_228_1;
                                                                                                                    long double temp59_1 = 0.0;
                                                                                                                    x87_r7_144 - temp59_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (x87_r7_144 < temp59_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_144, temp59_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_144 == temp59_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        float var_258_4 = var_208_3 - ecx_22[1];
                                                                                                                        float var_21c_3 = var_20c_3 - *ecx_22;
                                                                                                                        var_228_1 = (var_258_4 * var_250_1
                                                                                                                            - var_21c_3 * var_24c_1) / x87_r7_144;
                                                                                                                        long double x87_r7_188 = var_228_1;
                                                                                                                        long double temp62_1 = 0.0;
                                                                                                                        x87_r7_188 - temp62_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (x87_r7_188 < temp62_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_188, temp62_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_188 == temp62_1 ? 1 : 0)
                                                                                                                            << 0xe) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double x87_r7_189 = var_228_1;
                                                                                                                            long double temp65_1 = 1.0;
                                                                                                                            x87_r7_189 - temp65_1;

                                                                                                                            if (*(&(
                                                                                                                                (x87_r7_189 < temp65_1 ? 1 : 0) << 8 | (
                                                                                                                                FCMP_UO(x87_r7_189, temp65_1) ? 1 : 0)
                                                                                                                                << 0xa
                                                                                                                                | (x87_r7_189 == temp65_1 ? 1 : 0)
                                                                                                                                << 0xe) + 1) & 0x41)
                                                                                                                            {
                                                                                                                                long double x87_r7_190 = var_250_1;
                                                                                                                                long double temp68_1 = 0f;
                                                                                                                                x87_r7_190 - temp68_1;
                                                                                                                                long double x87_r7_191 = var_250_1;

                                                                                                                                if (*(&(
                                                                                                                                        (x87_r7_190 < temp68_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r7_190, temp68_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r7_190 == temp68_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1)
                                                                                                                                    x87_r7_191 = -(x87_r7_191);

                                                                                                                                long double x87_r6_102 = var_24c_1;
                                                                                                                                long double temp71_1 = 0f;
                                                                                                                                x87_r6_102 - temp71_1;
                                                                                                                                long double x87_r6_103 = var_24c_1;

                                                                                                                                if (*(&(
                                                                                                                                        (x87_r6_102 < temp71_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r6_102, temp71_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r6_102 == temp71_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3000) + 1) & 1)
                                                                                                                                    x87_r6_103 = -(x87_r6_103);

                                                                                                                                x87_r7_191 - x87_r6_103;

                                                                                                                                if (*(&(
                                                                                                                                    (x87_r7_191 < x87_r6_103 ? 1 : 0) << 8
                                                                                                                                    | (FCMP_UO(x87_r7_191, x87_r6_103) ? 1
                                                                                                                                    : 0) << 0xa
                                                                                                                                    | (x87_r7_191 == x87_r6_103 ? 1 : 0)
                                                                                                                                    << 0xe | 0x3800) + 1) & 0x41)
                                                                                                                                {
                                                                                                                                    long double x87_r7_196 = var_24c_1;
                                                                                                                                    long double temp74_1 = 0f;
                                                                                                                                    x87_r7_196 - temp74_1;

                                                                                                                                    if (!(*(&(
                                                                                                                                        (x87_r7_196 < temp74_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r7_196, temp74_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r7_196 == temp74_1 ? 1 : 0)
                                                                                                                                        << 0xe) + 1) & 0x40))
                                                                                                                                    {
                                                                                                                                        x87_r7_144 = (var_258_4
                                                                                                                                            - var_1e4_1 * var_228_1) / var_24c_1;
                                                                                                                                        goto label_4c4467;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    x87_r7_144 = (var_21c_3
                                                                                                                                        - var_1e8_1 * var_228_1) / var_250_1;
                                                                                                                                label_4c4467:
                                                                                                                                    long double temp76_1 = 0.0;
                                                                                                                                    x87_r7_144 - temp76_1;

                                                                                                                                    if (!(*(&(
                                                                                                                                        (x87_r7_144 < temp76_1 ? 1 : 0) << 8 | (
                                                                                                                                        FCMP_UO(x87_r7_144, temp76_1) ? 1 : 0)
                                                                                                                                        << 0xa
                                                                                                                                        | (x87_r7_144 == temp76_1 ? 1 : 0)
                                                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                                                    {
                                                                                                                                        long double x87_r6_110 =
                                                                                                                                            x87_r7_144 + var_228_1;
                                                                                                                                        long double temp78_1 = 1.0;
                                                                                                                                        x87_r6_110 - temp78_1;

                                                                                                                                        if (*(&(
                                                                                                                                                (x87_r6_110 < temp78_1 ? 1 : 0) << 8 | (
                                                                                                                                                FCMP_UO(x87_r6_110, temp78_1) ? 1 : 0)
                                                                                                                                                << 0xa
                                                                                                                                                | (x87_r6_110 == temp78_1 ? 1 : 0)
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
                                                                                                                    x87_r7_144 = x87_r7_136;
                                                                                                                    long double temp60_1 = 0.0;
                                                                                                                    x87_r7_144 - temp60_1;

                                                                                                                    if (!(*(&(
                                                                                                                        (x87_r7_144 < temp60_1 ? 1 : 0) << 8 | (
                                                                                                                        FCMP_UO(x87_r7_144, temp60_1) ? 1 : 0)
                                                                                                                        << 0xa
                                                                                                                        | (x87_r7_144 == temp60_1 ? 1 : 0)
                                                                                                                        << 0xe | 0x3800) + 1) & 0x40))
                                                                                                                    {
                                                                                                                        var_260_5 = var_204_3 - ecx_22[2];
                                                                                                                        float var_21c_2 = var_20c_3 - *ecx_22;
                                                                                                                        var_228_1 = (var_260_5 * var_250_1
                                                                                                                            - var_21c_2 * var_248_1) / x87_r7_144;
                                                                                                                        long double x87_r7_179 = var_228_1;
                                                                                                                        long double temp63_1 = 0.0;
                                                                                                                        x87_r7_179 - temp63_1;

                                                                                                                        if (!(*(&(
                                                                                                                            (x87_r7_179 < temp63_1 ? 1 : 0) << 8 | (
                                                                                                                            FCMP_UO(x87_r7_179, temp63_1) ? 1 : 0)
                                                                                                                            << 0xa
                                                                                                                            | (x87_r7_179 == temp63_1 ? 1 : 0)
                                                                                                                            << 0xe) + 1) & 1))
                                                                                                                        {
                                                                                                                            long double x87_r7_180 = var_228_1;
                                                                                                                            long double temp66_1 = 1.0;
                                                                                                                            x87_r7_180 - temp66_1;
