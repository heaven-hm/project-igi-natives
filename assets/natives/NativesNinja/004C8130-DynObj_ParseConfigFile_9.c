#include "004C8130-DynObj_ParseConfigFile_9.h"
/* 0x004c8130 DynObj_ParseConfigFile_9 full linked: callers=3 callees=7 */
uint32_t sub_4c8130(float a1, double* a2, void* const a3 @ 0x10, float a4, double* a5, double* a6 @ 0x20, char a7 @ 0x144)

{
    double* ebp;
    double* var_4 = ebp;
    sub_4a54a0(0x2574);
    int32_t* arg_184;
    int32_t* ebx = &arg_184;
    int32_t arg_48 = 0xffff;
    sub_4ce5c0(a1, a6);
    uint32_t result = a2;
    uint32_t result_1 = result;

    if (*(a1 + ((result + a6 * 0xfe) << 1) + 0x118))
    {
        void* const esi_1 = a3;
        void arg_56c;
        void arg_1370;

        if (a5 > 0)
        {
            double* edx_1 = a4;
            double* ecx_3 = esi_1 + 8;
            void* edi_1 = &arg_56c;
            double* esi_3 = edx_1 - a3;
            float* eax_2 = &arg_1370;
            var_4 = a5;
            bool cond:2_1;

            do
            {
                long double x87_r7_2 = *edx_1 - ecx_3[-1];
                edx_1 = &edx_1[3];
                eax_2[-1] = x87_r7_2;
                *eax_2 = *(esi_3 + ecx_3) - *ecx_3;
                long double x87_r7_6 = edx_1[-1] - ecx_3[1];
                eax_2[1] = x87_r7_6;
                ecx_3 = &ecx_3[3];
                long double x87_r6_1 = *eax_2;
                long double x87_r5_1 = eax_2[-1];
                eax_2 = &eax_2[3];
                edi_1 += 4;
                cond:2_1 = var_4 != 1;
                var_4 -= 1;
                *(edi_1 - 4) =
                    1f / (x87_r5_1 * x87_r5_1 + x87_r7_6 * x87_r7_6 + x87_r6_1 * x87_r6_1);
            } while (cond:2_1);
            esi_1 = a3;
        }

        long double x87_r7_9 = -1.7976931348623157e+308;
        float eax_3 = a5;
        int32_t arg_78 = 0xffffffff;
        double arg_ac = x87_r7_9;
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

        if (eax_3 > 0)
        {
            double* ecx_4 = esi_1 + 8;
            var_4 = &arg_1974 - esi_1;
            double* edx_4 = a4 - esi_1;
            arg_30 = eax_3;
            double* esi_8 = edx_4;
            double* edx_7 = nullptr;
            bool cond:15_1;

            do
            {
                long double x87_r6_3 = ecx_4[-1];
                long double temp2_1 = *(edx_7 + a4);
                x87_r6_3 - temp2_1;
                long double x87_r6_4;

                if (!(*(&((x87_r6_3 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_3, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                    x87_r6_4 = *(edx_7 + a4);
                else
                    x87_r6_4 = ecx_4[-1];

                arg_24 = x87_r6_4;
                *(&arg_196c + edx_7) = x87_r6_4;
                long double x87_r6_5 = *ecx_4;
                long double x87_r5_3 = *(esi_8 + ecx_4);
                x87_r5_3 - x87_r6_5;
                long double x87_r6_6;

                if (*(&((x87_r5_3 < x87_r6_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_3, x87_r6_5) ? 1 : 0) << 0xa
                        | (x87_r5_3 == x87_r6_5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r6_6 = *(esi_8 + ecx_4);
                else
                    x87_r6_6 = *ecx_4;

                arg_b4 = x87_r6_6;
                *(var_4 + ecx_4 - 8) = x87_r6_6;
                long double x87_r6_7 = ecx_4[1];
                long double x87_r5_4 = *(edx_7 + a4 + 0x10);
                x87_r5_4 - x87_r6_7;
                long double x87_r6_8;

                if (*(&((x87_r5_4 < x87_r6_7 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_4, x87_r6_7) ? 1 : 0) << 0xa
                        | (x87_r5_4 == x87_r6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r6_8 = *(edx_7 + a4 + 0x10);
                else
                    x87_r6_8 = ecx_4[1];

                arg_94 = x87_r6_8;
                *(var_4 + ecx_4) = x87_r6_8;
                long double x87_r6_9 = ecx_4[-1];
                long double temp3_1 = *(edx_7 + a4);
                x87_r6_9 - temp3_1;
                long double x87_r6_10;

                if (*(&((x87_r6_9 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_9, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r6_9 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                    x87_r6_10 = *(edx_7 + a4);
                else
                    x87_r6_10 = ecx_4[-1];

                *(&arg_76c + edx_7) = x87_r6_10;
                long double x87_r5_5 = *ecx_4;
                long double x87_r4_5 = *(esi_8 + ecx_4);
                x87_r4_5 - x87_r5_5;
                long double x87_r5_6;

                if (!(*(&((x87_r4_5 < x87_r5_5 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_5, x87_r5_5) ? 1 : 0) << 0xa
                        | (x87_r4_5 == x87_r5_5 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    x87_r5_6 = *(esi_8 + ecx_4);
                else
                    x87_r5_6 = *ecx_4;

                arg_4c = x87_r5_6;
                *(&arg_76c - esi_1 + ecx_4) = x87_r5_6;
                long double x87_r5_7 = ecx_4[1];
                long double x87_r4_6 = *(edx_7 + a4 + 0x10);
                x87_r4_6 - x87_r5_7;
                long double x87_r5_8;

                if (!(*(&((x87_r4_6 < x87_r5_7 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_6, x87_r5_7) ? 1 : 0) << 0xa
                        | (x87_r4_6 == x87_r5_7 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                    x87_r5_8 = *(edx_7 + a4 + 0x10);
                else
                    x87_r5_8 = ecx_4[1];

                arg_3c = x87_r5_8;
                *(&arg_774 - esi_1 + ecx_4) = x87_r5_8;
                long double x87_r5_9 = arg_24;
                long double temp6_1 = arg_78;
                x87_r5_9 - temp6_1;

                if (*(&((x87_r5_9 < temp6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r5_9, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r5_9 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                {
                    arg_7c = *(&arg_24 + 4);
                    esi_8 = edx_4;
                    arg_78 = arg_24;
                }

                long double x87_r5_10 = arg_b4;
                long double temp8_1 = 2.1219957904712067e-314;
                x87_r5_10 - temp8_1;

                if (*(&((x87_r5_10 < temp8_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_10, temp8_1) ? 1 : 0) << 0xa
                        | (x87_r5_10 == temp8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    arg_80 = arg_b4;

                long double x87_r5_12 = arg_94;
                long double temp10_1 = 2.1219957904712067e-314;
                x87_r5_12 - temp10_1;

                if (*(&((x87_r5_12 < temp10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r5_12, temp10_1) ? 1 : 0) << 0xa
                        | (x87_r5_12 == temp10_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    arg_88 = arg_94;

                long double temp12_1 = arg_9c;
                x87_r6_10 - temp12_1;

                if (!(*(&((x87_r6_10 < temp12_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_10, temp12_1) ? 1 : 0) << 0xa
                        | (x87_r6_10 == temp12_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
                    arg_9c = x87_r6_10;

                long double x87_r6_12 = arg_4c;
                long double temp15_1 = 2.1219957904712067e-314;
                x87_r6_12 - temp15_1;

                if (!(*(&((x87_r6_12 < temp15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_12, temp15_1) ? 1 : 0) << 0xa
                        | (x87_r6_12 == temp15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    arg_a4 = arg_4c;

                long double x87_r6_14 = arg_3c;
                x87_r6_14 - x87_r7_9;

                if (!(*(&((x87_r6_14 < x87_r7_9 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_14, x87_r7_9) ? 1 : 0) << 0xa
                        | (x87_r6_14 == x87_r7_9 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    x87_r7_9 = arg_3c;

                edx_7 = &edx_7[3];
                ecx_4 = &ecx_4[3];
                cond:15_1 = arg_30 != 1;
                arg_30 -= 1;
            } while (cond:15_1);
            arg_ac = x87_r7_9;
        }

        int32_t eax_16 = *(a1 + 0xde0);
        double* arg_64 = arg_78 + eax_16;
        int32_t ecx_7 = *(a1 + 0xde4);
        int32_t edx_11 = *(a1 + 0xde8);
        int32_t ecx_10 = *(result_1 + 0xa969e0);

        if (ecx_10 != 0xffffffff)
            arg_48 = 1 << (ecx_10 & 0x1f);

        sub_4ce620(a1, a6);
        int32_t eax_19 = *(a1 + (a6 << 2) + 0x28);
        int32_t arg_114;
        memcpy(&arg_114, eax_19, 0x40);
        int32_t ecx_12 = *(a1 + (a6 << 2) + 0xd0);
        int32_t arg_1c = ecx_12;
        arg_4c = arg_114;

        if (ecx_12 == 0x1e)
        {
            a5 = a7;
            memcpy(&arg_114, eax_19, 0x40);
            a7 = 0;
            int32_t i = 0;
            var_4 = 7;
            void arg_13c;
            int32_t* eax_20 = &arg_13c;
            void arg_120;
            int32_t* edi_8 = &arg_120;

            do
            {
                int32_t ecx_15 = *edi_8;
                *edi_8 = *eax_20;
                *eax_20 = ecx_15;
                edi_8 = &edi_8[1];
                eax_20 -= 4;
                char ecx_18 = a7 | (a5 >> (i & 0x1f) & 1) << (var_4 & 0x1f);
                i += 1;
                a7 = ecx_18;
                var_4 -= 1;
            } while (i < 4);
        }

        a2 = 1;
        long double x87_r7_11 = *(a1 + 0xde0);
        arg_184 = &arg_114;
        void* eax_21 = a6 * 3;
        char arg_18a = 0;
        int32_t esi_17 = (x87_r7_11 + *(a1 + (eax_21 << 3) + 0x40));
        int32_t arg_18c = esi_17;
        int32_t edi_9 = (*(a1 + 0xde4) + *(a1 + ((a6 * 3 + 9) << 3)));
        int32_t arg_190 = edi_9;
        result = arg_9c + eax_16 < esi_17;
        int64_t arg_c = *(a1 + 0xde8) + *(a1 + (eax_21 << 3) + 0x50);
        result = *(result + 0x548160);
        int32_t ecx_22 = arg_c;
        result &= a7;
        int32_t arg_194 = ecx_22;
        result &= *((arg_64 > esi_17) + 0x548164);
        result &= *((2.1219957904712067e-314 + ecx_7 < edi_9) + 0x548168);
        result &= *((2.1219957904712067e-314 + ecx_7 > edi_9) + 0x54816c);
        result &= *((x87_r7_9 + edx_11 < ecx_22) + 0x548170);
        result &= *((2.1219957904712067e-314 + edx_11 > ecx_22) + 0x548174);
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
        int16_t ecx_25 = arg_48;
        result ^= 1;
        int32_t edx_34 = arg_1c - 1;
        char arg_188 = result;
        int32_t arg_38 = edx_34;

        while (true)
        {
            result = *(ebx + 5);
            int32_t* arg_2c;

            if (result)
            {
                result = ebx[1];
                uint32_t edi_12 = result;
                arg_b4 = result;
                void* esi_20 = *(*ebx + (edi_12 << 2) + 0xc);
                uint8_t eax_34 = *(ebx + 5) ^ 1 << (edi_12 & 0x1f);
                *(ebx + 5) = eax_34;

                if (eax_34)
                {
                    if (!(eax_34 & 0xf))
                    {
                        if (!(eax_34 & 0x30))
                            ebx[1] = (*(ebx + 5) >> 6 & 1) + 6;
                        else
                            ebx[1] = (*(ebx + 5) >> 4 & 1) + 4;
                    }
                    else if (!(eax_34 & 3))
                        ebx[1] = (*(ebx + 5) >> 2 & 1) + 2;
                    else
                        ebx[1] = eax_34 & 1;

                    ebx[1] ^= 1;
                }

                arg_1c -= 1;
                edx_34 = ebx;
                a2 += 1;
                uint8_t eax_37 = *(esi_20 + 0x30);
                arg_38 -= 1;
                arg_4c u>>= 1;
                ebx[5] = esi_20;
                *(ebx + 0x19) = eax_37;
                arg_2c = &ebx[5];

                if (!*(edx_34 + 6))
                {
                    uint8_t var_5_1 = eax_37;
                    *(ebx + 0x1a) = 0;

                    if (eax_37)
                    {
                        uint32_t eax_41 = arg_b4 * 0xc;
                        ebx[7] = (*(eax_41 + 0x548000) << (arg_1c & 0x1f)) + *(edx_34 + 8);
                        int32_t eax_43 = *(eax_41 + 0x548008) << (arg_1c & 0x1f);
                        ebx[8] = (*(eax_41 + &g_548004) << (arg_1c & 0x1f)) + *(edx_34 + 0xc);
                        int32_t eax_44 = eax_43 + *(edx_34 + 0x10);
                        int32_t ecx_50 = ebx[7];
                        arg_94 = ecx_50;
                        ebx[9] = eax_44;
                        double* ebx_3 = ebx[8];
                        double arg_fc = ecx_50 - *(a1 + 0xde0);
                        double arg_104 = ebx_3 - *(a1 + 0xde4);
                        int32_t arg_e8 = 0;
                        double arg_10c = eax_44 - *(a1 + 0xde8);
                        long double x87_r7_32 = (arg_4c >> 1);
                        a6 = nullptr;
                        var_4 = &g_548004;
                        arg_3c = esi_20 + 0xc;
                        arg_30 = x87_r7_32;
                        a4 = x87_r7_32 * 1.73205078f;
                        uint8_t ebx_5;
                        bool cond:12_1;

                        do
                        {
                            double* ecx_52 = a6;
                            ebx_5 = var_5_1;
                            edx_34 = 1 << (ecx_52 & 0x1f);

                            if (ebx_5 & edx_34)
                            {
                                edx_34 = arg_48;
                                void* eax_49 = *arg_3c;
                                ecx_52 = *(eax_49 + 0x3a);
                                ecx_52 |= *(eax_49 + 0x38);

                                if (!(ecx_52 & edx_34))
                                {
                                label_4c8f75:
                                    edx_34 = 1;
                                    edx_34 = 1 << (a6 & 0x1f);
                                    edx_34 = ~edx_34;
                                    ebx_5 &= edx_34;
                                    var_5_1 = ebx_5;
                                }
                                else
                                {
                                    int32_t esi_22 = 0;
                                    a1 = 0f;
                                    double arg_c4 = ((a6 & 1) * 2 - 1) * arg_30 + arg_fc;
                                    double arg_cc = ((a6 & 2) - 1) * arg_30 + arg_104;
                                    double arg_d4 = ((a6 >> 1 & 2) - 1) * arg_30 + arg_10c;

                                    if (ebx_3 <= 0)
                                    {
                                        ebx_5 &= ~(1 << (a6 & 0x1f));
                                        var_5_1 = ebx_5;
                                    }
                                    else
                                    {
                                        float* ebx_6 = &arg_56c;
                                        arg_24 = &arg_196c - a3;
                                        float* edx_48 = &arg_1370;
                                        ecx_52 = a3 + 0x10;
                                        int32_t edi_25 = 0;

                                        do
                                        {
                                            if (a1)
                                                goto label_4c8d2f;

                                            long double x87_r7_44 = arg_c4 - ecx_52[-2];
                                            long double x87_r6_21 = arg_cc - ecx_52[-1];
                                            long double x87_r5_15 = arg_d4 - *ecx_52;
                                            arg_64 = x87_r5_15;
                                            double arg_ec = x87_r6_21;
                                            double arg_f4 = x87_r7_44;
                                            long double x87_r7_47 = x87_r5_15 * edx_48[1]
                                                + x87_r7_44 * edx_48[-1] + x87_r6_21 * *edx_48;
                                            long double x87_r6_27 = arg_f4 * arg_f4
                                                + arg_ec * arg_ec + arg_64 * arg_64
                                                - x87_r7_47 * x87_r7_47 * *ebx_6;
                                            long double x87_r5_29 = a4 * a4;
                                            x87_r5_29 - x87_r6_27;

                                            if (!(*(&((x87_r5_29 < x87_r6_27 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r5_29, x87_r6_27) ? 1 : 0) << 0xa
                                                | (x87_r5_29 == x87_r6_27 ? 1 : 0) << 0xe | 0x3800)
                                                + 1) & 1))
                                            {
                                                long double x87_r7_50 = a4 + arg_c4;
                                                long double temp17_1 = *(&arg_196c + edi_25);
                                                x87_r7_50 - temp17_1;

                                                if (!(*(&((x87_r7_50 < temp17_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_50, temp17_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_50 == temp17_1 ? 1 : 0) << 0xe) + 1)
                                                    & 1))
                                                {
                                                    long double x87_r7_52 = a4 + arg_cc;
                                                    long double temp18_1 = *(&arg_1974 + edi_25);
                                                    x87_r7_52 - temp18_1;

                                                    if (!(*(&((x87_r7_52 < temp18_1 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r7_52, temp18_1) ? 1 : 0)
                                                        << 0xa
                                                        | (x87_r7_52 == temp18_1 ? 1 : 0) << 0xe) + 1)
                                                        & 1))
                                                    {
                                                        long double x87_r7_54 = a4 + arg_d4;
                                                        long double temp20_1 = *(arg_24 + ecx_52);
                                                        x87_r7_54 - temp20_1;

                                                        if (!(*(&(
                                                            (x87_r7_54 < temp20_1 ? 1 : 0) << 8 | (
                                                            FCMP_UO(x87_r7_54, temp20_1) ? 1 : 0)
                                                            << 0xa
                                                            | (x87_r7_54 == temp20_1 ? 1 : 0)
                                                            << 0xe) + 1) & 1))
                                                        {
                                                            long double x87_r7_56 = arg_c4 - a4;
                                                            long double temp21_1 =
                                                                *(&arg_76c + edi_25);
                                                            x87_r7_56 - temp21_1;

                                                            if (*(&(
                                                                (x87_r7_56 < temp21_1 ? 1 : 0) << 8 | (
                                                                FCMP_UO(x87_r7_56, temp21_1) ? 1 : 0)
                                                                << 0xa
                                                                | (x87_r7_56 == temp21_1 ? 1 : 0)
                                                                << 0xe) + 1) & 0x41)
                                                            {
                                                                long double x87_r7_58 = arg_cc - a4;
                                                                long double temp22_1 =
                                                                    *(&arg_774 + edi_25);
                                                                x87_r7_58 - temp22_1;

                                                                if (*(&(
                                                                    (x87_r7_58 < temp22_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_58, temp22_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_58 == temp22_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
                                                                    long double x87_r7_60 = arg_d4 - a4;
                                                                    long double temp23_1 =
                                                                        *(ecx_52 + &arg_76c - a3);
                                                                    x87_r7_60 - temp23_1;

                                                                    if (*(&(
                                                                            (x87_r7_60 < temp23_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_60, temp23_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_60 == temp23_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        a1 = 1.40129846e-45f;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            esi_22 += 1;
                                            edx_48 = &edx_48[3];
                                            ebx_6 = &ebx_6[1];
                                            ecx_52 = &ecx_52[3];
                                            edi_25 += 0x18;
                                        } while (esi_22 < ebx_3);

                                        if (a1)
                                        {
                                        label_4c8d2f:
                                            ebx_5 = var_5_1;
                                        }
                                        else
                                        {
                                            ebx_5 = var_5_1 & ~(1 << (a6 & 0x1f));
                                            var_5_1 = ebx_5;
                                        }
                                    }

                                    edx_34 = *(*arg_3c + 0x3c);

                                    if (edx_34)
                                    {
                                        long double x87_r7_62 = arg_9c - arg_78;
                                        long double temp14_1 = 4.0;
                                        x87_r7_62 - temp14_1;
                                        long double x87_r6_29;
                                        long double temp16_1;

                                        if (*(&((x87_r7_62 < temp14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_62, temp14_1) ? 1 : 0) << 0xa
                                            | (x87_r7_62 == temp14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41)
                                        {
                                            x87_r6_29 =
                                                2.1219957904712067e-314 - 2.1219957904712067e-314;
                                            temp16_1 = 4.0;
                                            x87_r6_29 - temp16_1;
                                        }

                                        if (!(*(&((x87_r7_62 < temp14_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_62, temp14_1) ? 1 : 0) << 0xa
                                            | (x87_r7_62 == temp14_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41) || !(*(&((x87_r6_29 < temp16_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r6_29, temp16_1) ? 1 : 0) << 0xa
                                            | (x87_r6_29 == temp16_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x41))
                                        {
                                            char ecx_64 = arg_38;
                                            a3 = nullptr;
                                            arg_24 = (*(var_4 - 4) << (ecx_64 & 0x1f))
                                                - *(a1 + 0xde0) + arg_94;
                                            long double x87_r6_39 = arg_24;
                                            arg_24 = (*var_4 << (ecx_64 & 0x1f)) - *(a1 + 0xde4)
                                                + ebx_3;
                                            arg_c = **arg_3c;
                                            a1 = arg_c;
                                            __return_addr = *(edx_34 + 8) * 0.5f / a1;
                                            int32_t eax_79;
                                            eax_79 = sub_4e5ba0(edx_34,
                                                (arg_78 - x87_r6_39 + a1) * __return_addr,
                                                (2.1219957904712067e-314 - arg_24 + a1)
                                                    * __return_addr,
                                                __return_addr * x87_r7_62,
                                                (2.1219957904712067e-314 - 2.1219957904712067e-314)
                                                    * __return_addr);

                                            if (!eax_79)
                                                goto label_4c8f75;
                                        }
                                        else
                                        {
                                            int32_t arg_5c = 0;
                                            int32_t eax_67 = *(a1 + 0xde0);
                                            char ecx_60 = arg_38;
                                            arg_24 =
                                                (*(var_4 - 4) << (ecx_60 & 0x1f)) - eax_67 + arg_94;
                                            long double x87_r7_64 = arg_24;
                                            arg_24 = (*var_4 << (ecx_60 & 0x1f)) - eax_67 + ebx_3;
                                            int32_t eax_68 = *(edx_34 + 8);
                                            long double x87_r6_30 = arg_24;
                                            arg_24 = eax_68;
                                            a1 = **arg_3c;
                                            __return_addr = arg_24 * 0.5f / a1;
                                            arg_64 = (arg_78 - x87_r7_64 + a1) * __return_addr;
                                            ecx_52 = arg_64;
                                            arg_64 = (2.1219957904712067e-314 - x87_r6_30 + a1)
                                                * __return_addr;

                                            if (ecx_52 >= eax_68 || arg_64 >= eax_68)
                                                ebx_5 = var_5_1;
                                            else
                                            {
                                                int32_t eax_69;
                                                eax_69 = sub_4e5580(edx_34, ecx_52, arg_64);

                                                if (eax_69)
                                                    ebx_5 = var_5_1;
                                                else
                                                {
                                                    edx_34 = 1;
                                                    edx_34 = 1 << (a6 & 0x1f);
                                                    edx_34 = ~edx_34;
                                                    ebx_5 = var_5_1 & edx_34;
                                                    var_5_1 = ebx_5;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            cond:12_1 = var_4 + 0xc < 0x548064;
                            a6 += 1;
                            arg_3c = &arg_3c[1];
                            var_4 += 0xc;
                        } while (cond:12_1);
                        *(arg_2c + 5) = ebx_5;

                        if (ebx_5)
                        {
                            if (!(ebx_5 & 0xf))
                            {
                                if (!(ebx_5 & 0x30))
                                    ebx_5 = (ebx_5 >> 6 & 1) + 6;
                                else
                                    ebx_5 = (ebx_5 >> 4 & 1) + 4;
                            }
                            else if (!(ebx_5 & 3))
                                ebx_5 = (ebx_5 >> 2 & 1) + 2;
                            else
                                ebx_5 &= 1;

                            arg_2c[1] = ebx_5;
                            arg_2c[1] = ebx_5 ^ 1;
                        }
                    }
                }
                else
                {
                    *(ebx + 0x1a) = 1;

                    if (eax_37)
                    {
                        if (!(eax_37 & 0xf))
                        {
                            if (!(eax_37 & 0x30))
                            {
                                ebx[6] = (eax_37 >> 6 & 1) + 6;
                                ebx[6] = ((eax_37 >> 6 & 1) + 6) ^ 1;
                            }
                            else
                            {
                                ebx[6] = (eax_37 >> 4 & 1) + 4;
                                ebx[6] = ((eax_37 >> 4 & 1) + 4) ^ 1;
                            }
                        }
                        else if (!(eax_37 & 3))
                        {
                            ebx[6] = (eax_37 >> 2 & 1) + 2;
                            ebx[6] = ((eax_37 >> 2 & 1) + 2) ^ 1;
                        }
                        else
                        {
                            eax_37 &= 1;
                            ebx[6] = eax_37;
                            ebx[6] = eax_37 ^ 1;
                        }
                    }
                }
            }
            else
            {
                void* eax_25 = *ebx;
                edx_34 = *(eax_25 + 0x38);

                if (!*(ebx + 6))
                {
                    if (edx_34 & ecx_25)
                    {
                        for (void* i_1 = *(eax_25 + 0x2c); i_1; i_1 = *(i_1 + 0x58))
                        {
                            float eax_28 = *(i_1 + 0x44);
                            long double x87_r7_18 = *(i_1 + 0x20) - eax_28;
                            long double temp4_1 = arg_9c;
                            x87_r7_18 - temp4_1;

                            if (*(&((x87_r7_18 < temp4_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_18, temp4_1) ? 1 : 0) << 0xa
                                | (x87_r7_18 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            {
                                long double x87_r7_20 = eax_28 + *(i_1 + 0x20);
                                long double temp5_1 = arg_78;
                                x87_r7_20 - temp5_1;

                                if (!(*(&((x87_r7_20 < temp5_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_20, temp5_1) ? 1 : 0) << 0xa
                                    | (x87_r7_20 == temp5_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_22 = *(i_1 + 0x28) - eax_28;
                                    long double temp7_1 = 2.1219957904712067e-314;
                                    x87_r7_22 - temp7_1;

                                    if (*(&((x87_r7_22 < temp7_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_22, temp7_1) ? 1 : 0) << 0xa
                                        | (x87_r7_22 == temp7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                    {
                                        long double x87_r7_24 = eax_28 + *(i_1 + 0x28);
                                        long double temp9_1 = 2.1219957904712067e-314;
                                        x87_r7_24 - temp9_1;

                                        if (!(*(&((x87_r7_24 < temp9_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_24, temp9_1) ? 1 : 0) << 0xa
                                            | (x87_r7_24 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1))
                                        {
                                            long double x87_r7_26 = *(i_1 + 0x30) - eax_28;
                                            long double temp11_1 = arg_ac;
                                            x87_r7_26 - temp11_1;

                                            if (*(&((x87_r7_26 < temp11_1 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r7_26, temp11_1) ? 1 : 0) << 0xa
                                                | (x87_r7_26 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                                            {
                                                long double x87_r7_28 = eax_28 + *(i_1 + 0x30);
                                                long double temp13_1 = 2.1219957904712067e-314;
                                                x87_r7_28 - temp13_1;

                                                if (!(*(&((x87_r7_28 < temp13_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_28, temp13_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_28 == temp13_1 ? 1 : 0) << 0xe) + 1)
                                                    & 1))
                                                {
                                                    int32_t eax_30 = 0;
                                                    eax_30 = *(i_1 + 0x1c);

                                                    if (*(eax_30 * 0x30 + 0xaf5f0c) & arg_1c)
                                                    {
                                                        int32_t eax_31 = *(
                                                            ((result_2 * 0x180 + eax_30) << 2) +
                                                            &g_a96ae0);

                                                        if (eax_31)
                                                            eax_31(i_1, arg_c);
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
                else if (edx_34 & ecx_25)
                {
                    for (void* i_2 = *(eax_25 + 0x2c); i_2; i_2 = *(i_2 + 0x58))
                    {
                        int32_t eax_26 = 0;
                        eax_26 = *(i_2 + 0x1c);

                        if (*(eax_26 * 0x30 + 0xaf5f0c) & arg_1c)
                        {
                            int32_t eax_27 = *(((result_2 * 0x180 + eax_26) << 2) + &g_a96ae0);

                            if (eax_27)
                                eax_27(i_2, arg_c);
                        }
                    }
                }

                edx_34 = arg_38 + 1;
                arg_2c = ebx - 0x14;
                arg_1c += 1;
                arg_38 = edx_34;
                arg_4c <<= 1;
                a2 -= 1;
            }

            result = a2;

            if (!result)
                break;

            ecx_25 = arg_48;
            result_2 = result_1;
            ebx = arg_2c;
        }
    }

    return result;
}
