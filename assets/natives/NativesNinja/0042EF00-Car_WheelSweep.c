#include "0042EF00-Car_WheelSweep.h"
/* 0x0042ef00 Car_WheelSweep full linked: callers=1 callees=10 */
int32_t Car_WheelSweep(float* a1)

{
    void* eax = a1[0x6d];
    int32_t ecx = 0;
    float esi = 0f;
    void* edi = *(eax + 0x2d4);
    float var_a90 = 0f;
    void* var_a8c = edi;
    int32_t result_1 = 0;
    int32_t var_a60 = 0xffffffff;
    int32_t var_a5c = 0xffefffff;
    int32_t var_a88 = 0;
    double var_a78;
    int32_t var_a70;
    double var_a68;
    void var_8c8;

    if (*(edi + 0x118) > 0)
    {
        char* var_a9c_1 = &a1[0x1d7];
        float* edx_2 = edi + 0x128;
        int32_t* var_a84_1 = &var_8c8;
        float* var_a94_1 = edx_2;
        int32_t var_a98_1 = 0;
        bool cond:1_1;

        do
        {
            int32_t eax_5 = edx_2[-1];

            if (eax_5 >= 0 && *var_a9c_1)
            {
                long double x87_r7_2 = *edx_2 + 2048.0;
                int32_t edx_4 = eax_5 * 7;
                void* edx_5 = &a1[edx_4 * 2];
                int32_t __saved_edi;
                *(&__saved_edi + ecx + 0x60) = a1[edx_4 * 2 + 0x72];
                void var_a40;
                *(&var_a40 + ecx) = *(edx_5 + 0x1cc);
                long double x87_r6_3 = *(edx_5 + 0x1d0);
                void var_a38;
                *(&var_a38 + ecx) = x87_r6_3;
                var_a78 = a1[0x1c] * *(&__saved_edi + ecx + 0x60) + a1[0x1e] * x87_r6_3
                    + a1[0x1d] * *(&var_a40 + ecx);
                var_a70 = a1[0x1f] * *(&__saved_edi + ecx + 0x60) + a1[0x21] * x87_r6_3
                    + a1[0x20] * *(&var_a40 + ecx);
                var_a68 = a1[0x22] * *(&__saved_edi + ecx + 0x60) + a1[0x24] * x87_r6_3
                    + a1[0x23] * *(&var_a40 + ecx);
                memcpy(&__saved_edi + ecx + 0x60, &var_a78, 0x18);
                *(&__saved_edi + ecx + 0x60) = *(a1 + 0x20) + *(&__saved_edi + ecx + 0x60);
                int32_t ecx_1 = var_a98_1;
                *(&var_a40 + ecx_1) = *(a1 + 0x28) + *(&var_a40 + ecx_1);
                long double x87_r6_10 = *(a1 + 0x30) + *(&var_a38 + ecx_1);
                *(&var_a38 + ecx_1) = x87_r6_10;
                int32_t eax_4 = var_a98_1 + 0x18;
                var_a98_1 = eax_4;
                *(&var_a38 + ecx_1) = *var_a94_1 + x87_r6_10 + 4096.0;
                memcpy(&__saved_edi + ecx_1 + 0x220, &__saved_edi + ecx + 0x60, 0x18);
                void var_890;
                *(&var_890 + eax_4) = *(&var_890 + eax_4) - x87_r7_2 - 4096.0;
                float esi_4 = var_a90;
                *(edx_5 + 0x1d4) = 0;
                *var_a84_1 = var_a88;
                var_a90 = esi_4 + 1;
                var_a84_1 = &var_a84_1[1];
                edx_2 = var_a94_1;
                edi = var_a8c;
                ecx = eax_4;
            }

            if (!*var_a9c_1)
                a1[eax_5 * 0xe + 0x75] = 1;

            var_a9c_1 = &var_a9c_1[0x1c];
            edx_2 = &edx_2[5];
            cond:1_1 = var_a88 + 1 < *(edi + 0x118);
            var_a88 += 1;
            var_a94_1 = edx_2;
        } while (cond:1_1);
        esi = var_a90;
    }

    float* var_a4c = a1;
    void var_a50;
    double var_a48;
    double var_888[0x30];
    void var_708;
    int32_t result = sub_4cc2a0(Level_StartMission_4(), &var_708, &var_a48, &var_888, esi, 0xc,
        &var_a50, 0xffffffff);

    if (esi > 0)
    {
        void var_6a8;
        double* var_a9c_2 = &var_6a8;
        int32_t* var_a94_2 = &var_8c8;
        float var_a88_1 = esi;

        while (true)
        {
            float var_a98_2 = 0f;
            float esi_12 = *var_a94_2;
            int32_t ecx_4 = esi_12 * 5;
            var_a90 = *(edi + (ecx_4 << 2) + 0x128);
            int32_t ecx_5 = 0;
            float edi_3 = *(edi + (ecx_4 << 2) + 0x124);
            int32_t edx_8 = 0;

            if (var_a9c_2[-1])
            {
                long double x87_r7_4 = *var_a9c_2;
                long double temp1_1 = 4096.0;
                x87_r7_4 - temp1_1;
                int32_t var_a84_2;

                if (*(&((x87_r7_4 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    long double x87_r7_6 = 4096.0 - *var_a9c_2;
                    long double x87_r6_15 = var_a60;
                    var_a98_2 = var_a90;
                    ecx_5 = 1;
                    x87_r6_15 - x87_r7_6;
                    result_1 = 1;
                    var_a84_2 = 1;

                    if (1 & *(&((x87_r6_15 < x87_r7_6 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_15, x87_r7_6) ? 1 : 0) << 0xa
                            | (x87_r6_15 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1))
                        var_a60 = x87_r7_6;

                    goto label_42f236;
                }

                long double x87_r7_7 = *var_a9c_2;
                long double temp3_1 = 4096.0;
                x87_r7_7 - temp3_1;

                if (!(*(&((x87_r7_7 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_7, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double x87_r7_9 = var_a90 + 4096f;
                    long double temp4_1 = *var_a9c_2;
                    x87_r7_9 - temp4_1;

                    if (!(*(&((x87_r7_9 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_9, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_9 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    {
                        var_a84_2 = 1;
                        var_a98_2 = x87_r7_9 - *var_a9c_2;
                    label_42f236:
                        long double x87_r7_13 = var_a98_2 / var_a90;
                        var_a78 = 0;
                        *(&var_a78 + 4) = 0;
                        var_a70 = x87_r7_13 * *(var_a8c + ((esi_12 * 5 + 0x4b) << 2)) * *(eax + 8)
                            * 44.6008873f;

                        if (ecx_5)
                            var_a70 = (2f - *var_a9c_2 * 0.000244140625) * var_a70;

                        int32_t edx_13 = edi_3 * 7;
                        *(&var_a70 + 4) = a1[edx_13 * 2 + 0x72];
                        var_a68 = a1[edx_13 * 2 + 0x73];
                        *(&var_a68 + 4) = a1[edx_13 * 2 + 0x74];
                        sub_4ecf50(&a1[0x3c], &var_a78);
                        edx_8 = var_a84_2;
                    }
                }
            }

            int32_t eax_25 = edi_3 * 7;
            long double x87_r7_23 = a1[eax_25 * 2 + 0x7c] - var_a98_2;
            void* edi_4 = &a1[eax_25 * 2];
            long double temp0_1 = 0f;
            x87_r7_23 - temp0_1;

            if (*(&((x87_r7_23 < temp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_23, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_23 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_23 = -(x87_r7_23);

            long double temp2_1 = 0.00100000005f;
            x87_r7_23 - temp2_1;

            if (!(*(&((x87_r7_23 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_23, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_23 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double x87_r7_24 = *(edi_4 + 0x1f0);
                long double x87_r6_19 = var_a98_2;
                x87_r6_19 - x87_r7_24;
                long double x87_r7_26;

                x87_r7_26 = *(&((x87_r6_19 < x87_r7_24 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_19, x87_r7_24) ? 1 : 0) << 0xa
                    | (x87_r6_19 == x87_r7_24 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41
                    ? x87_r7_24 * 0.0500000007f + var_a98_2 * 0.949999988f : var_a98_2;

                *(edi_4 + 0x1f0) = x87_r7_26;
            }

            void* ecx_10 = &a1[esi_12 * 7];
            *(ecx_10 + 0x75d) = edx_8;
            *(edi_4 + 0x1d6) = edx_8;

            if (edx_8)
            {
                *(ecx_10 + 0x760) = var_a9c_2[-5];
                *(ecx_10 + 0x764) = *(var_a9c_2 - 0x24);
                *(ecx_10 + 0x768) = var_a9c_2[-4];
                long double x87_r7_28 = *(ecx_10 + 0x760);
                long double temp6_1 = 0f;
                x87_r7_28 - temp6_1;

                if (!(*(&((x87_r7_28 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_28, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_28 == temp6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_42f3a9:
                    long double x87_r7_31 = *(ecx_10 + 0x768);
                    long double x87_r6_22 = *(ecx_10 + 0x764);
                    long double x87_r5_16 = *(ecx_10 + 0x760);
                    long double x87_r7_33 = 1.0 / sqrtl(x87_r5_16 * x87_r5_16
                        + x87_r6_22 * x87_r6_22 + x87_r7_31 * x87_r7_31);
                    *(ecx_10 + 0x760) = *(ecx_10 + 0x760) * x87_r7_33;
                    *(ecx_10 + 0x764) = *(ecx_10 + 0x764) * x87_r7_33;
                    *(ecx_10 + 0x768) = *(ecx_10 + 0x768) * x87_r7_33;
                }
                else
                {
                    long double x87_r7_29 = *(ecx_10 + 0x764);
                    long double temp7_1 = 0f;
                    x87_r7_29 - temp7_1;

                    if (!(*(&((x87_r7_29 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_29 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_42f3a9;

                    long double x87_r7_30 = *(ecx_10 + 0x768);
                    long double temp8_1 = 0f;
                    x87_r7_30 - temp8_1;

                    if (!(*(&((x87_r7_30 < temp8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_30, temp8_1) ? 1 : 0) << 0xa
                            | (x87_r7_30 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_42f3a9;
                }

                *(ecx_10 + 0x76c) = *(edi_4 + 0x1c8);
                *(ecx_10 + 0x770) = *(edi_4 + 0x1cc);
                *(ecx_10 + 0x774) = *(edi_4 + 0x1d0);
                *(ecx_10 + 0x774) = *(ecx_10 + 0x774) + 1638.40002f;
                a1[0x6e] = 1;
                Car_WheelDrive(a1, esi_12, edi_3);
            }

            bool cond:4_1 = var_a88_1 != 1;
            var_a94_2 = &var_a94_2[1];
            var_a9c_2 = &var_a9c_2[0xe];
            var_a88_1 -= 1;

            if (!cond:4_1)
                break;

            edi = var_a8c;
        }

        result = result_1;

        if (result)
        {
            memcpy(&var_a78, &a1[8], 0x18);
            double var_a68_1 = var_a68 + var_a60;
            long double x87_r7_39 = a1[0x27];
            long double x87_r6_30 = a1[0x28];
            x87_r6_30 - x87_r7_39;
            long double x87_r7_40;

            if (!(*(&((x87_r6_30 < x87_r7_39 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_30, x87_r7_39) ? 1 : 0) << 0xa
                    | (x87_r6_30 == x87_r7_39 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_40 = a1[0x28];
            else
                x87_r7_40 = a1[0x27];

            long double x87_r6_31 = a1[0x26];
            x87_r6_31 - x87_r7_40;
            long double x87_r7_42;

            if (*(&((x87_r6_31 < x87_r7_40 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_31, x87_r7_40) ? 1 : 0) << 0xa
                | (x87_r6_31 == x87_r7_40 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r7_43 = a1[0x27];
                long double x87_r6_32 = a1[0x28];
                x87_r6_32 - x87_r7_43;

                if (!(*(&((x87_r6_32 < x87_r7_43 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_32, x87_r7_43) ? 1 : 0) << 0xa
                        | (x87_r6_32 == x87_r7_43 ? 1 : 0) << 0xe) + 1) & 1))
                    x87_r7_42 = a1[0x28];
                else
                    x87_r7_42 = a1[0x27];
            }
            else
                x87_r7_42 = a1[0x26];

            float var_aac_4 = sub_4d0950(a1[0x1b]) * x87_r7_42;
            return sub_4c6940(Level_StartMission_4(), a1, &var_a78, var_aac_4);
        }
    }

    return result;
}
