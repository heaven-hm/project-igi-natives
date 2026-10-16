#include "00523D40-Light_RenderLensflare_3.h"
/* 0x00523d40 Light_RenderLensflare_3 full linked: callers=1 callees=35 */
int32_t* sub_523d40(void* a1, int32_t a2, int32_t a3 @ 0x10, int32_t a4, int32_t a5)

{
    void* eax_1 = *(*(a1 + 0xc) + 0xc);

    if (*(eax_1 + 0x20) == 3)
    {
        void* ebx_1 = *(eax_1 + 0x24);
        int32_t i = 0;
        void* var_488_1 = ebx_1;

        if (*(ebx_1 + 8) && ebx_1)
        {
            int32_t var_538 = a4;
            int32_t var_53c = a3;
            *(ebx_1 + 0x28) = 0;
            sub_5210c0();
            int32_t var_540 = 0xa83a20;
            void var_200;
            Game_DataSymbolLoad(&var_200, "%s/%s_%05d.olm");
            int32_t eax_3;
            void* ecx_1;
            eax_3 = sub_4b5b60(&var_200);

            if (eax_3)
            {
                void* var_53c_1 = &var_200;
                int32_t* eax_4 = Resource_Load(eax_3, &var_200, ecx_1, nullptr);

                if (*eax_4 != 0x3df5c28f)
                    Resource_Flush(eax_4);
                else
                {
                    float* ecx_2 = *(*(a1 + 0xc) + 0xc);
                    long double x87_r7_1 = *ecx_2;
                    long double temp2_1 = eax_4[1];
                    x87_r7_1 - temp2_1;

                    if (!(*(&((x87_r7_1 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        Resource_Flush(eax_4);
                    else
                    {
                        int32_t eax_7;
                        int32_t edx_3;
                        eax_7 = sub_52d630(&ecx_2[1], &eax_4[2]);

                        if (eax_7 >= 0)
                            Resource_Flush(eax_4);
                        else
                        {
                            int32_t eax_8 = *(ebx_1 + 4);

                            if (eax_8 != eax_4[0xb])
                                Resource_Flush(eax_4);
                            else if (!a5)
                            {
                                void* var_53c_4 = &var_200;
                                int32_t* eax_16 = Resource_Load(eax_8, edx_3, &var_200, nullptr);
                                int32_t eax_17 = eax_16[0xb];
                                eax_16[0xe] = 0;
                                eax_16[9] = 1;
                                eax_16[0xa] = 0;
                                void* ebx_2 = &eax_16[eax_17 * 0xb + 0xf];

                                if (eax_17 > 0)
                                {
                                    int16_t* edi_1 = eax_16 + 0x66;

                                    do
                                    {
                                        int32_t edx_9 = edi_1[-1] * *edi_1;
                                        *(edi_1 - 6) = ebx_2;
                                        ebx_2 += edx_9 << 2;
                                        sub_525320(&edi_1[-0x15]);
                                        i += 1;
                                        edi_1 = &edi_1[0x16];
                                    } while (i < eax_16[0xb]);
                                }

                                int32_t ecx_10 = g_a839f4;
                                g_a83b4c += eax_16[0xc];
                                g_a839f4 = ecx_10 + eax_16[0xd];
                                return eax_16;
                            }
                        }
                    }
                }
            }

            int32_t* esi_2 = Mem_Alloc(*(ebx_1 + 4) * 0x2c + 0x3c, 4);
            int32_t* var_468 = esi_2;
            esi_2[0xb] = *(ebx_1 + 4);
            esi_2[0xe] = Mem_Alloc(*(ebx_1 + 4) * 0x28, 4);
            esi_2[9] = 0;
            esi_2[0xa] = 1;
            g_a83d28 = 1;
            esi_2[0xc] = 0;
            esi_2[0xd] = 0;
            esi_2[1] = 0x3dcccccd;
            *esi_2 = 0x3df5c28f;
            sub_52d440(&esi_2[2]);
            int32_t i_4 = 0;

            if (esi_2[0xb] > 0)
            {
                while (true)
                {
                    int32_t ebx_3 = esi_2[0xe];
                    int16_t* eax_23 = *(ebx_1 + 0x18) + (i << 3);
                    int32_t* edi_4 = &esi_2[i * 0xb + 0xf];
                    int32_t* var_404_1 = edi_4;
                    int32_t* ebx_4;

                    ebx_4 = !ebx_3 ? nullptr : ebx_3 + i * 0x28;

                    int16_t edx_12 = *eax_23;
                    edi_4[0xa] = edx_12;
                    int16_t eax_24 = eax_23[1];
                    *(edi_4 + 0x2a) = eax_24;
                    int32_t* var_464_1 = ebx_4;
                    void* eax_28 = Mem_Alloc((eax_24 * edx_12) << 2, 4);
                    int32_t ecx_15 = 0;
                    bool cond:2_1 = *(edi_4 + 0x2a) <= 0;
                    edi_4[9] = eax_28;
                    int32_t var_4f0_1 = 0;

                    if (!cond:2_1)
                    {
                        bool cond:5_1;

                        do
                        {
                            int32_t i_1 = 0;

                            if (edi_4[0xa] > 0)
                            {
                                do
                                {
                                    i_1 += 1;
                                    *(edi_4[9] + (ecx_15 << 2)) = 0xffffffff;
                                    ecx_15 += 1;
                                } while (i_1 < edi_4[0xa]);
                            }

                            cond:5_1 = var_4f0_1 + 1 < *(edi_4 + 0x2a);
                            var_4f0_1 += 1;
                        } while (cond:5_1);
                    }

                    sub_525320(edi_4);

                    if (ebx_4)
                    {
                        ebx_4[2] = Mem_Alloc(*(edi_4 + 0x2a) * edi_4[0xa] * 0xc, 4);
                        ebx_4[3] = Mem_Alloc(*(edi_4 + 0x2a) * edi_4[0xa] * 0xc, 4);
                        ebx_4[4] = Mem_Alloc((*(edi_4 + 0x2a) * edi_4[0xa]) << 2, 4);
                        ebx_4[9] = Mem_Alloc((*(edi_4 + 0x2a) * edi_4[0xa]) << 2, 4);
                        *ebx_4 = Mem_Alloc(*(edi_4 + 0x2a) * edi_4[0xa] * 0xc, 4);
                        ebx_4[1] = Mem_Alloc(*(edi_4 + 0x2a) * edi_4[0xa] * 0xc, 4);
                        ebx_4[5] = Mem_Alloc(*(edi_4 + 0x2a) * edi_4[0xa], 4);
                        ebx_4[6] = Mem_Alloc(*(edi_4 + 0x2a) * edi_4[0xa], 4);
                        ebx_4[7] = g_a83b4c;
                        int32_t i_2 = 0;
                        int32_t ebp_1 = 0;
                        ebx_4[8] = 0;
                        int32_t i_3 = 0;
                        int32_t var_494_1 = 0;

                        if (*(edi_4 + 0x2a) > 0)
                        {
                            do
                            {
                                int32_t edx_29 = edi_4[0xa];
                                int32_t eax_54 = 0;
                                int32_t var_520_1 = edx_29;
                                int32_t var_518_1 = 0;

                                if (edx_29 > 0)
                                {
                                    float var_418_1 = i_3;
                                    float var_434_1 = i_2 + 1;
                                    int32_t ecx_78;

                                    do
                                    {
                                        long double x87_r7_4 = var_520_1;
                                        int32_t* var_454_1 = nullptr;
                                        int32_t* var_4bc_1 = nullptr;
                                        void* var_48c_2 = nullptr;
                                        void* var_520_2 = nullptr;
                                        float var_444_1 = 3.40282347e+38f;
                                        float var_500_1 = var_518_1 / x87_r7_4;
                                        int32_t eax_56 = ebx_4[4];
                                        float var_4f4_1 = *(edi_4 + 0x2a);
                                        float var_4fc_1 = var_418_1 / var_4f4_1;
                                        float var_510_1 = (eax_54 + 1) / x87_r7_4;
                                        float var_50c_1 = var_434_1 / var_4f4_1;
                                        float var_4d8 = (var_510_1 + var_500_1) * 0.5f;
                                        float var_4d4_1 = (var_50c_1 + var_4fc_1) * 0.5f;
                                        *(eax_56 + (ebp_1 << 2)) = 0;
                                        void* ecx_25 = *(var_488_1 + 0x1c);
                                        float var_40c;
                                        float var_408;

                                        while (true)
                                        {
                                            int32_t edx_31 = 0;
                                            edx_31 = *(ecx_25 + 0xc);
                                            void* esi_4 = ecx_25 + 0x20;
                                            void* var_508_1 = ecx_25;
                                            void* var_4f4_2 = esi_4;
                                            int32_t var_44c_1 = 0;

                                            if (edx_31 / 3 > 0)
                                            {
                                                while (true)
                                                {
                                                    int16_t edx_34 = *(ecx_25 + 0x14);
                                                    int16_t eax_60 = *(esi_4 + 2) + edx_34;
                                                    int16_t ecx_26 = edx_34 + *esi_4;
                                                    int16_t esi_5 = *(esi_4 + 4) + edx_34;

                                                    if (ecx_26 != eax_60 && eax_60 != esi_5
                                                        && esi_5 != ecx_26)
                                                    {
                                                        int32_t ecx_27 = 0;
                                                        ecx_27 = *(var_508_1 + 0x12);

                                                        if (ecx_27 == i_4)
                                                        {
                                                            int32_t ecx_28 = *(var_488_1 + 0x14);
                                                            float* ebx_5 = ecx_28 + ecx_26 * 0x28;
                                                            long double x87_r7_14 = ebx_5[8];
                                                            long double temp4_1 = var_500_1;
                                                            x87_r7_14 - temp4_1;
                                                            float* ebp_2 = ecx_28 + eax_60 * 0x28;
                                                            float* var_4ec = &ebx_5[8];
                                                            float* edx_37 = &ebp_2[8];
                                                            float* var_4e8_1 = edx_37;
                                                            float* ecx_29 = ecx_28 + esi_5 * 0x28;
                                                            float* ecx_30 = &ecx_29[8];
                                                            float* var_4e4_1 = ecx_30;

                                                            if (!(*(&(
                                                                (x87_r7_14 < temp4_1 ? 1 : 0) << 8
                                                                | (FCMP_UO(x87_r7_14, temp4_1) ? 1 : 0)
                                                                << 0xa | (x87_r7_14 == temp4_1 ? 1 : 0)
                                                                << 0xe) + 1) & 1))
                                                            {
                                                            label_5242bc:
                                                                long double x87_r7_17 = ebx_5[8];
                                                                long double temp6_1 = var_510_1;
                                                                x87_r7_17 - temp6_1;

                                                                if (*(&(
                                                                        (x87_r7_17 < temp6_1 ? 1 : 0) << 8
                                                                        | (FCMP_UO(x87_r7_17, temp6_1) ? 1 : 0)
                                                                        << 0xa | (x87_r7_17 == temp6_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    goto label_5242ef;

                                                                long double x87_r7_18 = *edx_37;
                                                                long double temp10_1 = var_510_1;
                                                                x87_r7_18 - temp10_1;

                                                                if (*(&(
                                                                        (x87_r7_18 < temp10_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_18, temp10_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_18 == temp10_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 0x41)
                                                                    goto label_5242ef;

                                                                long double x87_r7_19 = *ecx_30;
                                                                long double temp15_1 = var_510_1;
                                                                x87_r7_19 - temp15_1;

                                                                if (*(&(
                                                                    (x87_r7_19 < temp15_1 ? 1 : 0) << 8 | (
                                                                    FCMP_UO(x87_r7_19, temp15_1) ? 1 : 0)
                                                                    << 0xa
                                                                    | (x87_r7_19 == temp15_1 ? 1 : 0)
                                                                    << 0xe) + 1) & 0x41)
                                                                {
                                                                    ecx_30 = var_4e4_1;
                                                                    edx_37 = var_4e8_1;
                                                                label_5242ef:
                                                                    long double x87_r7_20 = ebx_5[9];
                                                                    long double temp9_1 = var_4fc_1;
                                                                    x87_r7_20 - temp9_1;

                                                                    if (!(*(&(
                                                                            (x87_r7_20 < temp9_1 ? 1 : 0) << 8
                                                                            | (FCMP_UO(x87_r7_20, temp9_1) ? 1 : 0)
                                                                            << 0xa | (x87_r7_20 == temp9_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        goto label_524325;

                                                                    long double x87_r7_21 = edx_37[1];
                                                                    long double temp14_1 = var_4fc_1;
                                                                    x87_r7_21 - temp14_1;

                                                                    if (!(*(&(
                                                                            (x87_r7_21 < temp14_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_21, temp14_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_21 == temp14_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 1))
                                                                        goto label_524325;

                                                                    long double x87_r7_22 = ecx_30[1];
                                                                    long double temp19_1 = var_4fc_1;
                                                                    x87_r7_22 - temp19_1;

                                                                    if (!(*(&(
                                                                        (x87_r7_22 < temp19_1 ? 1 : 0) << 8 | (
                                                                        FCMP_UO(x87_r7_22, temp19_1) ? 1 : 0)
                                                                        << 0xa
                                                                        | (x87_r7_22 == temp19_1 ? 1 : 0)
                                                                        << 0xe) + 1) & 1))
                                                                    {
                                                                        ecx_30 = var_4e4_1;
                                                                        edx_37 = var_4e8_1;
                                                                    label_524325:
                                                                        long double x87_r7_23 = ebx_5[9];
                                                                        long double temp13_1 = var_50c_1;
                                                                        x87_r7_23 - temp13_1;

                                                                        if (*(&(
                                                                                (x87_r7_23 < temp13_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_23, temp13_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_23 == temp13_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_524365;

                                                                        long double x87_r7_24 = edx_37[1];
                                                                        long double temp18_1 = var_50c_1;
                                                                        x87_r7_24 - temp18_1;

                                                                        if (*(&(
                                                                                (x87_r7_24 < temp18_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r7_24, temp18_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r7_24 == temp18_1 ? 1 : 0)
                                                                                << 0xe) + 1) & 0x41)
                                                                            goto label_524365;

                                                                        long double x87_r7_25 = ecx_30[1];
                                                                        long double temp20_1 = var_50c_1;
                                                                        x87_r7_25 - temp20_1;

                                                                        if (*(&(
                                                                            (x87_r7_25 < temp20_1 ? 1 : 0) << 8 | (
                                                                            FCMP_UO(x87_r7_25, temp20_1) ? 1 : 0)
                                                                            << 0xa
                                                                            | (x87_r7_25 == temp20_1 ? 1 : 0)
                                                                            << 0xe) + 1) & 0x41)
                                                                        {
                                                                            ecx_30 = var_4e4_1;
                                                                            edx_37 = var_4e8_1;
                                                                        label_524365:
                                                                            int32_t var_514_1 = 1;
                                                                            long double x87_r7_29 = (ecx_30[1]
                                                                                - ebx_5[9]) * (*edx_37 - ebx_5[8])
                                                                                - (edx_37[1] - ebx_5[9])
                                                                                * (*ecx_30 - ebx_5[8]);
                                                                            long double temp17_1 = 0f;
                                                                            x87_r7_29 - temp17_1;

                                                                            if (*(&(
                                                                                    (x87_r7_29 < temp17_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_29, temp17_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_29 == temp17_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41)
                                                                                var_514_1 = 0;

                                                                            void var_3c0;
                                                                            __builtin_memset(&var_3c0, 0, 0x40);
                                                                            float var_430_1 =
                                                                                sub_4b2950(&ebx_5[8], var_4e8_1);
                                                                            float var_42c_1 =
                                                                                sub_4b2950(var_4e8_1, var_4e4_1);
                                                                            long double st0_3 =
                                                                                sub_4b2950(var_4e4_1, &ebx_5[8]);
                                                                            long double x87_r6_16 =
                                                                                (st0_3 + var_42c_1 + var_430_1) * 0.5f;
                                                                            long double x87_r6_18 = (x87_r6_16
                                                                                - st0_3) * (x87_r6_16 - var_42c_1)
                                                                                * (x87_r6_16 - var_430_1) * x87_r6_16;
                                                                            long double temp21_1 = 0f;
                                                                            x87_r6_18 - temp21_1;
                                                                            float var_470_1;

                                                                            var_470_1 = *(&(
                                                                                (x87_r6_18 < temp21_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r6_18, temp21_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r6_18 == temp21_1 ? 1 : 0)
                                                                                << 0xe | 0x3800) + 1) & 1 ? 0f
                                                                                : sqrtl(x87_r6_18);

                                                                            long double x87_r7_41 =
                                                                                ebp_2[2] - ebx_5[2];
                                                                            long double x87_r6_22 =
                                                                                ebp_2[1] - ebx_5[1];
                                                                            long double x87_r5_9 = *ebp_2 - *ebx_5;
                                                                            long double x87_r4_5 = sqrtl(
                                                                                x87_r5_9 * x87_r5_9
                                                                                + x87_r6_22 * x87_r6_22
                                                                                + x87_r7_41 * x87_r7_41);
                                                                            long double x87_r6_25 =
                                                                                ecx_29[2] - ebp_2[2];
                                                                            long double x87_r5_12 =
                                                                                ecx_29[1] - ebp_2[1];
                                                                            long double x87_r4_7 = *ecx_29 - *ebp_2;
                                                                            long double x87_r3_9 = sqrtl(
                                                                                x87_r4_7 * x87_r4_7
                                                                                + x87_r5_12 * x87_r5_12
                                                                                + x87_r6_25 * x87_r6_25);
                                                                            long double x87_r5_15 =
                                                                                ebx_5[2] - ecx_29[2];
                                                                            long double x87_r4_10 =
                                                                                ebx_5[1] - ecx_29[1];
                                                                            long double x87_r3_11 =
                                                                                *ebx_5 - *ecx_29;
                                                                            long double x87_r2_9 = sqrtl(
                                                                                x87_r3_11 * x87_r3_11
                                                                                + x87_r4_10 * x87_r4_10
                                                                                + x87_r5_15 * x87_r5_15);
                                                                            long double x87_r4_15 =
                                                                                (x87_r2_9 + x87_r3_9 + x87_r4_5) * 0.5f;
                                                                            long double x87_r3_17 = (x87_r4_15
                                                                                - x87_r2_9) * (x87_r4_15 - x87_r3_9)
                                                                                * (x87_r4_15 - x87_r4_5) * x87_r4_15;
                                                                            long double temp22_1 = 0f;
                                                                            x87_r3_17 - temp22_1;
                                                                            float var_458_1;

                                                                            var_458_1 = *(&(
                                                                                (x87_r3_17 < temp22_1 ? 1 : 0) << 8 | (
                                                                                FCMP_UO(x87_r3_17, temp22_1) ? 1 : 0)
                                                                                << 0xa
                                                                                | (x87_r3_17 == temp22_1 ? 1 : 0)
                                                                                << 0xe | 0x3800) + 1) & 1 ? 0f
                                                                                : sqrtl(x87_r3_17);

                                                                            float var_380 = var_500_1;
                                                                            float var_37c_1 = var_4fc_1;
                                                                            float var_378_1 = var_510_1;
                                                                            float var_370 = var_500_1;
                                                                            float var_374_1 = var_4fc_1;
                                                                            float var_36c_1 = var_50c_1;
                                                                            float var_364_1 = var_4fc_1;
                                                                            float var_368_1 = var_510_1;
                                                                            float var_360_1 = var_510_1;
                                                                            float var_358_1 = var_500_1;
                                                                            int32_t edi_6 = 2;
                                                                            int32_t ecx_36 = 1;
                                                                            void** esi_7 = &var_4ec;
                                                                            float var_35c_1 = var_50c_1;
                                                                            float var_354_1 = var_50c_1;
                                                                            int32_t var_4f8_1 = 2;
                                                                            int32_t var_450_1 = 1;
                                                                            void** var_524_2 = &var_4ec;

                                                                            do
                                                                            {
                                                                                float* edx_45;
                                                                                float* ebx_6;

                                                                                if (!var_514_1)
                                                                                {
                                                                                    ebx_6 = (&var_4ec)[ecx_36 % 3];
                                                                                    edx_45 = *esi_7;
                                                                                }
                                                                                else
                                                                                {
                                                                                    ebx_6 = *esi_7;
                                                                                    edx_45 = (&var_4ec)[ecx_36 % 3];
                                                                                }

                                                                                float var_51c_1 = edx_45;
                                                                                float var_4e0_1 = *edx_45 - *ebx_6;
                                                                                float var_4dc_1 = edx_45[1] - ebx_6[1];

                                                                                if (edi_6 > 0)
                                                                                {
                                                                                    float* ebp_3 = &var_380;
                                                                                    int32_t* var_490_1 = &var_3c0;
                                                                                    float* var_504_1 = &var_380;
                                                                                    int32_t __saved_esi;
                                                                                    float* var_46c_1 =
                                                                                        &(&__saved_esi)[edi_6 * 6 + 0x6f];
                                                                                    int32_t var_448_1 = edi_6;
                                                                                    bool cond:15_1;

                                                                                    do
                                                                                    {
                                                                                        if (!*var_490_1)
                                                                                        {
                                                                                            long double x87_r7_50 = var_4dc_1;
                                                                                            long double temp24_1 = 0f;
                                                                                            x87_r7_50 - temp24_1;
                                                                                            long double x87_r7_51 = var_4dc_1;
                                                                                            int32_t edx_48 = 0;

                                                                                            if (*(&(
                                                                                                    (x87_r7_50 < temp24_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_50, temp24_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_50 == temp24_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3800) + 1) & 1)
                                                                                                x87_r7_51 = -(x87_r7_51);

                                                                                            long double x87_r6_28 = var_4e0_1;
                                                                                            long double temp25_1 = 0f;
                                                                                            x87_r6_28 - temp25_1;
                                                                                            long double x87_r6_29 = var_4e0_1;

                                                                                            if (*(&(
                                                                                                    (x87_r6_28 < temp25_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r6_28, temp25_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r6_28 == temp25_1 ? 1 : 0)
                                                                                                    << 0xe | 0x3000) + 1) & 1)
                                                                                                x87_r6_29 = -(x87_r6_29);

                                                                                            x87_r7_51 - x87_r6_29;
                                                                                            void var_3f0;

                                                                                            if (!(*(&(
                                                                                                (x87_r7_51 < x87_r6_29 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_51, x87_r6_29) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_51 == x87_r6_29 ? 1 : 0)
                                                                                                << 0xe | 0x3800) + 1) & 0x41))
                                                                                            {
                                                                                                int32_t* ecx_38 = &var_3f0;
                                                                                                float* esi_8 = ebp_3;
                                                                                                int32_t j_7 = 3;
                                                                                                int32_t j;

                                                                                                do
                                                                                                {
                                                                                                    long double x87_r7_58 = (esi_8[1]
                                                                                                        - ebx_6[1]) * var_4e0_1 / var_4dc_1
                                                                                                        + *ebx_6;
                                                                                                    long double x87_r6_31 = ebx_6[1];
                                                                                                    long double temp32_1 = *(var_51c_1 + 4);
                                                                                                    x87_r6_31 - temp32_1;
                                                                                                    long double temp33_1 = *esi_8;
                                                                                                    x87_r7_58 - temp33_1;
                                                                                                    int16_t eax_91 =
                                                                                                        (x87_r7_58 < temp33_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_58, temp33_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_58 == temp33_1 ? 1 : 0)
                                                                                                        << 0xe;
                                                                                                    int32_t eax_92;

                                                                                                    if (!(*(&(
                                                                                                        (x87_r6_31 < temp32_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r6_31, temp32_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r6_31 == temp32_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 1))
                                                                                                    {
                                                                                                        if (*(&eax_91 + 1) & 1)
                                                                                                            eax_92 = 0;
                                                                                                        else
                                                                                                            eax_92 = 1;
                                                                                                    }
                                                                                                    else if (!(*(&eax_91 + 1) & 0x41))
                                                                                                        eax_92 = 0;
                                                                                                    else
                                                                                                        eax_92 = 1;

                                                                                                    *ecx_38 = eax_92;
                                                                                                    edx_48 += eax_92;
                                                                                                    esi_8 = &esi_8[2];
                                                                                                    ecx_38 = &ecx_38[1];
                                                                                                    j = j_7;
                                                                                                    j_7 -= 1;
                                                                                                } while (j != 1);
                                                                                                goto label_524721;
                                                                                            }

                                                                                            long double x87_r7_59 = var_4e0_1;
                                                                                            long double temp29_1 = 0f;
                                                                                            x87_r7_59 - temp29_1;

                                                                                            if (*(&(
                                                                                                    (x87_r7_59 < temp29_1 ? 1 : 0) << 8 | (
                                                                                                    FCMP_UO(x87_r7_59, temp29_1) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r7_59 == temp29_1 ? 1 : 0)
                                                                                                    << 0xe) + 1) & 0x40)
                                                                                                *var_490_1 = 1;
                                                                                            else
                                                                                            {
                                                                                                int32_t* ecx_39 = &var_3f0;
                                                                                                float* esi_9 = &ebp_3[1];
                                                                                                int32_t j_8 = 3;
                                                                                                int32_t j_1;

                                                                                                do
                                                                                                {
                                                                                                    long double x87_r7_64 = (esi_9[-1]
                                                                                                        - *ebx_6) * var_4dc_1 / var_4e0_1
                                                                                                        + ebx_6[1];
                                                                                                    long double x87_r6_32 = *ebx_6;
                                                                                                    long double temp35_1 = *var_51c_1;
                                                                                                    x87_r6_32 - temp35_1;
                                                                                                    long double temp36_1 = *esi_9;
                                                                                                    x87_r7_64 - temp36_1;
                                                                                                    int16_t eax_94 =
                                                                                                        (x87_r7_64 < temp36_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r7_64, temp36_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r7_64 == temp36_1 ? 1 : 0)
                                                                                                        << 0xe;
                                                                                                    int32_t eax_95;

                                                                                                    if (*(&(
                                                                                                        (x87_r6_32 < temp35_1 ? 1 : 0) << 8 | (
                                                                                                        FCMP_UO(x87_r6_32, temp35_1) ? 1 : 0)
                                                                                                        << 0xa
                                                                                                        | (x87_r6_32 == temp35_1 ? 1 : 0)
                                                                                                        << 0xe | 0x3800) + 1) & 0x41)
                                                                                                    {
                                                                                                        if (*(&eax_94 + 1) & 1)
                                                                                                            eax_95 = 0;
                                                                                                        else
                                                                                                            eax_95 = 1;
                                                                                                    }
                                                                                                    else if (!(*(&eax_94 + 1) & 0x41))
                                                                                                        eax_95 = 0;
                                                                                                    else
                                                                                                        eax_95 = 1;

                                                                                                    *ecx_39 = eax_95;
                                                                                                    edx_48 += eax_95;
                                                                                                    esi_9 = &esi_9[2];
                                                                                                    ecx_39 = &ecx_39[1];
                                                                                                    j_1 = j_8;
                                                                                                    j_8 -= 1;
                                                                                                } while (j_1 != 1);
                                                                                            label_524721:

                                                                                                if (edx_48)
                                                                                                {
                                                                                                    if (edx_48 == 3)
                                                                                                        *var_490_1 = 1;
                                                                                                    else if (edx_48 != 2)
                                                                                                    {
                                                                                                        int32_t j_2 = 0;
                                                                                                        int32_t* ecx_44 = &var_3f0;
                                                                                                        int32_t j_5;

                                                                                                        do
                                                                                                        {
                                                                                                            if (*ecx_44)
                                                                                                                j_5 = j_2;

                                                                                                            j_2 += 1;
                                                                                                            ecx_44 = &ecx_44[1];
                                                                                                        } while (j_2 < 3);

                                                                                                        int32_t temp1_5 = (j_5 + 1) % 3;
                                                                                                        float edi_8 = &var_504_1[temp1_5 * 2];
                                                                                                        var_46c_1[-2] = var_504_1[temp1_5 * 2];
                                                                                                        var_46c_1[-1] = *(edi_8 + 4);
                                                                                                        float* esi_15 = &var_504_1[j_5 * 2];
                                                                                                        float ebp_5 =
                                                                                                            &var_504_1[(j_5 + 2) % 3 * 2];
                                                                                                        sub_5251d0(var_46c_1, ebp_5, esi_15,
                                                                                                            ebx_6, var_51c_1);
                                                                                                        sub_5251d0(&var_46c_1[2], edi_8,
                                                                                                            esi_15, ebx_6, var_51c_1);
                                                                                                        var_4f8_1 += 1;
                                                                                                        var_46c_1 = &var_46c_1[6];
                                                                                                        sub_5251d0(esi_15, ebp_5, esi_15,
                                                                                                            ebx_6, var_51c_1);
                                                                                                        ebp_3 = var_504_1;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        int32_t j_3 = 0;
                                                                                                        int32_t* ecx_41 = &var_3f0;
                                                                                                        int32_t j_6;

                                                                                                        do
                                                                                                        {
                                                                                                            if (!*ecx_41)
                                                                                                                j_6 = j_3;

                                                                                                            j_3 += 1;
                                                                                                            ecx_41 = &ecx_41[1];
                                                                                                        } while (j_3 < 3);

                                                                                                        float* esi_11 = &ebp_3[j_6 * 2];
                                                                                                        float eax_100 =
                                                                                                            &ebp_3[(j_6 + 1) % 3 * 2];
                                                                                                        sub_5251d0(eax_100, eax_100, esi_11,
                                                                                                            ebx_6, var_51c_1);
                                                                                                        float* eax_101 =
                                                                                                            &ebp_3[(j_6 + 2) % 3 * 2];
                                                                                                        sub_5251d0(eax_101, eax_101, esi_11,
                                                                                                            ebx_6, var_51c_1);
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }

                                                                                        ebp_3 = &ebp_3[6];
                                                                                        cond:15_1 = var_448_1 != 1;
                                                                                        var_504_1 = ebp_3;
                                                                                        var_490_1 = &var_490_1[1];
                                                                                        var_448_1 -= 1;
                                                                                    } while (cond:15_1);
                                                                                    edi_6 = var_4f8_1;
                                                                                    ecx_36 = var_450_1;
                                                                                    esi_7 = var_524_2;
                                                                                }

                                                                                ecx_36 += 1;
                                                                                esi_7 = &esi_7[1];
                                                                                var_450_1 = ecx_36;
                                                                                var_524_2 = esi_7;
                                                                            } while (ecx_36 - 1 < 3);

                                                                            if (!var_4bc_1)
                                                                            {
                                                                                int32_t ebx_7 = 1;
                                                                                void** edi_11 = &var_4ec;
                                                                                int32_t esi_16 = 1;

                                                                                do
                                                                                {
                                                                                    float* ecx_49;
                                                                                    float* edx_62;

                                                                                    if (!var_514_1)
                                                                                    {
                                                                                        ecx_49 = (&var_4ec)[esi_16 % 3];
                                                                                        edx_62 = *edi_11;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        ecx_49 = *edi_11;
                                                                                        edx_62 = (&var_4ec)[esi_16 % 3];
                                                                                    }

                                                                                    long double x87_r7_66 =
                                                                                        *edx_62 - *ecx_49;
                                                                                    long double x87_r6_34 =
                                                                                        edx_62[1] - ecx_49[1];
                                                                                    long double temp28_1 = 0f;
                                                                                    x87_r6_34 - temp28_1;
                                                                                    long double x87_r5_18 = x87_r6_34;

                                                                                    if (*(&(
                                                                                            (x87_r6_34 < temp28_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r6_34, temp28_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r6_34 == temp28_1 ? 1 : 0)
                                                                                            << 0xe | 0x2800) + 1) & 1)
                                                                                        x87_r5_18 = -(x87_r5_18);

                                                                                    long double temp31_1 = 0f;
                                                                                    x87_r7_66 - temp31_1;
                                                                                    long double x87_r4_18 = x87_r7_66;

                                                                                    if (*(&(
                                                                                            (x87_r7_66 < temp31_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r7_66, temp31_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r7_66 == temp31_1 ? 1 : 0)
                                                                                            << 0xe | 0x2000) + 1) & 1)
                                                                                        x87_r4_18 = -(x87_r4_18);

                                                                                    x87_r5_18 - x87_r4_18;
                                                                                    int16_t eax_120;

                                                                                    if (*(&(
                                                                                        (x87_r5_18 < x87_r4_18 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r5_18, x87_r4_18) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r5_18 == x87_r4_18 ? 1 : 0)
                                                                                        << 0xe | 0x2800) + 1) & 0x41)
                                                                                    {
                                                                                        long double temp37_1 = 0f;
                                                                                        x87_r7_66 - temp37_1;

                                                                                        if (*(&(
                                                                                                (x87_r7_66 < temp37_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r7_66, temp37_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r7_66 == temp37_1 ? 1 : 0)
                                                                                                << 0xe | 0x3000) + 1) & 0x40)
                                                                                            ebx_7 = 0;
                                                                                        else
                                                                                        {
                                                                                            long double x87_r5_26 =
                                                                                                (var_4d8 - *ecx_49) * x87_r6_34;
                                                                                            long double x87_r6_42 =
                                                                                                x87_r5_26 / x87_r5_26 + ecx_49[1];
                                                                                            long double x87_r6_45 = *ecx_49;
                                                                                            long double temp40_1 = *edx_62;
                                                                                            x87_r6_45 - temp40_1;
                                                                                            long double temp41_1 = var_4d4_1;
                                                                                            x87_r6_42 - temp41_1;
                                                                                            eax_120 =
                                                                                                (x87_r6_42 < temp41_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r6_42, temp41_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r6_42 == temp41_1 ? 1 : 0)
                                                                                                << 0xe;

                                                                                            if (*(&(
                                                                                                (x87_r6_45 < temp40_1 ? 1 : 0) << 8 | (
                                                                                                FCMP_UO(x87_r6_45, temp40_1) ? 1 : 0)
                                                                                                << 0xa
                                                                                                | (x87_r6_45 == temp40_1 ? 1 : 0)
                                                                                                << 0xe | 0x3800) + 1) & 0x41)
                                                                                            {
                                                                                                if (*(&eax_120 + 1) & 1)
                                                                                                    ebx_7 &= 1;
                                                                                                else
                                                                                                    ebx_7 = 0;
                                                                                            }
                                                                                            else if (!(*(&eax_120 + 1) & 0x41))
                                                                                                ebx_7 &= 1;
                                                                                            else
                                                                                                ebx_7 = 0;
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        long double x87_r6_37 = x87_r7_66
                                                                                            * (var_4d4_1 - ecx_49[1]) / x87_r6_34
                                                                                            + *ecx_49;
                                                                                        long double x87_r6_40 = ecx_49[1];
                                                                                        long double temp38_1 = edx_62[1];
                                                                                        x87_r6_40 - temp38_1;
                                                                                        long double temp39_1 = var_4d8;
                                                                                        x87_r6_37 - temp39_1;
                                                                                        eax_120 =
                                                                                            (x87_r6_37 < temp39_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r6_37, temp39_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r6_37 == temp39_1 ? 1 : 0)
                                                                                            << 0xe;

                                                                                        if (!(*(&(
                                                                                            (x87_r6_40 < temp38_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r6_40, temp38_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r6_40 == temp38_1 ? 1 : 0)
                                                                                            << 0xe | 0x3800) + 1) & 1))
                                                                                        {
                                                                                            if (*(&eax_120 + 1) & 1)
                                                                                                ebx_7 &= 1;
                                                                                            else
                                                                                                ebx_7 = 0;
                                                                                        }
                                                                                        else if (!(*(&eax_120 + 1) & 0x41))
                                                                                            ebx_7 &= 1;
                                                                                        else
                                                                                            ebx_7 = 0;
                                                                                    }
                                                                                    esi_16 += 1;
                                                                                    edi_11 = &edi_11[1];
                                                                                } while (esi_16 - 1 < 3);

                                                                                if (ebx_7)
                                                                                {
                                                                                    int32_t var_414 = ecx_26;
                                                                                    int16_t var_410_1 = esi_5;
                                                                                    var_4bc_1 = &var_414;
                                                                                    var_520_2 = var_508_1;
                                                                                }
                                                                            }

                                                                            float var_484_1 = 0f;

                                                                            if (var_4f8_1 > 0)
                                                                            {
                                                                                int32_t* ebp_6 = &var_3c0;
                                                                                float* esi_17 = &var_370;
                                                                                int32_t var_524_3 = var_4f8_1;
                                                                                bool cond:17_1;

                                                                                do
                                                                                {
                                                                                    if (!*ebp_6)
                                                                                    {
                                                                                        float var_424_1 =
                                                                                            sub_4b2950(&esi_17[-4], &esi_17[-2]);
                                                                                        float var_420_1 =
                                                                                            sub_4b2950(&esi_17[-2], esi_17);
                                                                                        long double st0_6 =
                                                                                            sub_4b2950(esi_17, &esi_17[-4]);
                                                                                        long double x87_r6_50 =
                                                                                            (st0_6 + var_420_1 + var_424_1) * 0.5f;
                                                                                        long double x87_r6_52 = (x87_r6_50
                                                                                            - st0_6) * (x87_r6_50 - var_420_1)
                                                                                            * (x87_r6_50 - var_424_1) * x87_r6_50;
                                                                                        long double temp27_1 = 0f;
                                                                                        x87_r6_52 - temp27_1;
                                                                                        long double x87_r7_82;

                                                                                        x87_r7_82 = *(&(
                                                                                            (x87_r6_52 < temp27_1 ? 1 : 0) << 8 | (
                                                                                            FCMP_UO(x87_r6_52, temp27_1) ? 1 : 0)
                                                                                            << 0xa
                                                                                            | (x87_r6_52 == temp27_1 ? 1 : 0)
                                                                                            << 0xe | 0x3800) + 1) & 1 ? 0f
                                                                                            : sqrtl(x87_r6_52);

                                                                                        var_484_1 = x87_r7_82 + var_484_1;
                                                                                    }

                                                                                    ebp_6 = &ebp_6[1];
                                                                                    esi_17 = &esi_17[6];
                                                                                    cond:17_1 = var_524_3 != 1;
                                                                                    var_524_3 -= 1;
                                                                                } while (cond:17_1);
                                                                                long double x87_r7_85 = var_484_1;
                                                                                long double temp30_1 = 0f;
                                                                                x87_r7_85 - temp30_1;

                                                                                if (!(*(&(
                                                                                    (x87_r7_85 < temp30_1 ? 1 : 0) << 8 | (
                                                                                    FCMP_UO(x87_r7_85, temp30_1) ? 1 : 0)
                                                                                    << 0xa
                                                                                    | (x87_r7_85 == temp30_1 ? 1 : 0)
                                                                                    << 0xe) + 1) & 0x41))
                                                                                {
                                                                                    long double x87_r7_86 = var_470_1;
                                                                                    long double temp34_1 = 0f;
                                                                                    x87_r7_86 - temp34_1;

                                                                                    if (!(*(&(
                                                                                        (x87_r7_86 < temp34_1 ? 1 : 0) << 8 | (
                                                                                        FCMP_UO(x87_r7_86, temp34_1) ? 1 : 0)
                                                                                        << 0xa
                                                                                        | (x87_r7_86 == temp34_1 ? 1 : 0)
                                                                                        << 0xe) + 1) & 0x40))
                                                                                    {
                                                                                        float* eax_130 =
                                                                                            var_464_1[4] + (var_494_1 << 2);
                                                                                        *eax_130 =
                                                                                            var_484_1 * var_458_1 / var_470_1
                                                                                            + *eax_130;
                                                                                    }

                                                                                    float* var_504_2 = &var_380;
                                                                                    int32_t* var_514_2 = &var_3c0;
                                                                                    int32_t var_524_4 = var_4f8_1;
                                                                                    bool cond:22_1;

                                                                                    do
                                                                                    {
                                                                                        if (!*var_514_2)
                                                                                        {
                                                                                            float* esi_18 = var_504_2;
                                                                                            int32_t j_9 = 3;
                                                                                            int32_t j_4;

                                                                                            do
                                                                                            {
                                                                                                long double st0_7 =
                                                                                                    sub_4b2950(esi_18, &var_4d8);
                                                                                                long double x87_r6_55 = var_444_1;
                                                                                                x87_r6_55 - st0_7;

                                                                                                if (!(*(&(
                                                                                                    (x87_r6_55 < st0_7 ? 1 : 0) << 8
                                                                                                    | (FCMP_UO(x87_r6_55, st0_7) ? 1 : 0)
                                                                                                    << 0xa
                                                                                                    | (x87_r6_55 == st0_7 ? 1 : 0) << 0xe
                                                                                                    | 0x3800) + 1) & 0x41))
                                                                                                {
                                                                                                    float eax_133 = *esi_18;
                                                                                                    var_444_1 = st0_7;
                                                                                                    int16_t var_3fc_1 = esi_5;
                                                                                                    float ecx_62 = esi_18[1];
                                                                                                    int32_t var_400 = ecx_26;
                                                                                                    var_454_1 = &var_400;
                                                                                                    var_48c_2 = var_508_1;
                                                                                                    var_40c = eax_133;
                                                                                                    var_408 = ecx_62;
                                                                                                }
