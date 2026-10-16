#include "004C9020-DynObj_LinkDynamicCube_9.h"
/* 0x004c9020 DynObj_LinkDynamicCube_9 full linked: callers=1 callees=6 */
int32_t sub_4c9020(int16_t* a1, double* a2, double* a3, char a4, int32_t* a5, int32_t a6)

{
    int32_t eax = g_ba2058;
    int32_t var_72c;
    char var_71c;
    float var_6f0;
    float var_6ec;
    float var_6d4;
    int32_t esi;

    if (!eax)
        esi = var_72c;
    else
    {
        int32_t eax_2 = eax * 0x30;
        var_6f0 = *(eax_2 + 0xba2048);
        long double x87_r7_2 = *(eax_2 + 0xba2050);
        esi = (&g_ba2058)[eax * 0xc];
        var_6d4 = (&g_ba2040)[eax * 6];
        var_72c = esi;
        var_6ec = x87_r7_2;
        var_71c = *(eax_2 + 0xba203c) + 3;
    }

    float var_6d0 = 1f;
    int16_t* edi = &a1[4];
    int16_t* ebx_1 = a1[1] + edi;
    int32_t eax_5 = a1[3] + a1[2];

    if (a6 & 0xfffffffc)
        var_6d0 = -1f;

    double var_6e8 = (0x40000000 >> (a4 & 0x1f)) * 0.041666666666666664;
    void* var_730;
    int32_t var_728;
    float var_718;
    double var_710;
    float var_700;
    void var_608;

    if (eax_5 > 0)
    {
        var_730 = &var_608;
        int32_t edx_3 = a6 & 4;
        int32_t ecx_8 = a6 & 1;
        int32_t var_6c8_1 = edx_3;
        int32_t var_6cc_1 = ecx_8;
        int32_t var_734_1 = eax_5;

        while (true)
        {
            int32_t eax_6 = 0;
            int32_t edi_1 = 0;
            eax_6 = ebx_1[1];
            edi_1 = *ebx_1;
            int32_t eax_8 = (eax_6 << 0x10) + edi_1;
            long double x87_r7_6 = ((eax_8 >> 0x1a) - 0x18) * var_6e8;
            double var_710_2 = ((eax_8 >> 0x14 & 0x3f) - 0x18) * var_6e8;
            double var_708_2 = ((eax_8 >> 0xe & 0x3f) - 0x18) * var_6e8;

            if (edx_3)
                x87_r7_6 = -(x87_r7_6);

            if (ecx_8)
            {
                var_700 = var_710_2;
                int32_t var_6fc_1 = *(&var_710_2 + 4);

                if (!(a6 & 2))
                {
                    var_710_2 = x87_r7_6;
                    x87_r7_6 = -(var_700);
                }
                else
                {
                    var_710_2 = -(x87_r7_6);
                    x87_r7_6 = var_700;
                }
            }
            else if (a6 & 2)
            {
                x87_r7_6 = -(x87_r7_6);
                var_710_2 = -(var_710_2);
            }

            var_718 = x87_r7_6 + *a2;
            var_710 = var_710_2 + a2[1];
            double var_708_3 = var_708_2 + a2[2];

            if (g_ba2058)
            {
                long double x87_r7_16 = (var_718 - var_6f0) * var_6d4;
                float var_738_4 = (var_710 - var_6ec) * var_6d4;
                var_728 = x87_r7_16;
                int32_t edx_4 = var_728;
                var_728 = var_738_4;
                int32_t eax_16 = var_728;
                var_728 = eax_16;
                long double x87_r7_17 = x87_r7_16 - edx_4;
                int32_t ecx_11 = (eax_16 << (var_71c & 0x1f)) + eax_16;
                long double x87_r6_15 = var_738_4 - var_728;
                int32_t ecx_13 = *(ecx_11 + edx_4 + 1 + esi);
                var_728 = *(ecx_11 + edx_4 + esi);
                long double x87_r5_1 = var_728;
                var_728 = ecx_13;
                long double x87_r4_1 = var_728;
                void* edi_16 = ((eax_16 + 1) << (var_71c & 0x1f)) + eax_16 + 1 + edx_4 + 1;
                var_728 = *(edi_16 + esi - 1);
                float var_738_5 = var_728;
                var_728 = *(edi_16 + esi);
                edx_3 = var_6c8_1;
                long double x87_r5_2 = x87_r5_1 + (x87_r4_1 - x87_r5_1) * x87_r7_17;
                double var_708_4 = (
                    (x87_r7_17 * (var_728 - var_738_5) + var_738_5 - x87_r5_2) * x87_r6_15
                    + x87_r5_2 - 64.0) * 256f + var_708_3;
            }

            memcpy(var_730, &var_718, 0x18);
            ebx_1 = &ebx_1[2];
            bool cond:7_1 = var_734_1 != 1;
            var_730 += 0x18;
            var_734_1 -= 1;

            if (!cond:7_1)
                break;

            esi = var_72c;
            ecx_8 = var_6cc_1;
        }
    }

    int32_t eax_22 = 0;
    eax_22 = edi[1];
    int32_t edx_7 = 0;
    edx_7 = *edi;
    int32_t var_71c_1 = 0;
    int32_t esi_3 = *a1;
    void* eax_24 = (eax_22 << 0x10) + edx_7;
    int32_t ecx_16 = 0;
    ecx_16 = *(&eax_24 + 1);
    var_730 = eax_24;
    int32_t eax_25 = 0;
    eax_25 = *(&var_730 + 2);
    uint32_t edx_11 = eax_24 * 0x18;
    int32_t ecx_18 = ecx_16 * 0x18;
    int32_t var_6f0_1 = 0;
    int32_t eax_27 = eax_25 * 0x18;
    int32_t var_6ec_1 = 0x43d00000;
    double var_6a4 =
        (*(&var_608 + edx_11) + *(&var_608 + ecx_18) + *(&var_608 + eax_27)) * 0.33333333333333331;
    void var_600;
    double var_69c_1 =
        (*(&var_600 + edx_11) + *(&var_600 + ecx_18) + *(&var_600 + eax_27)) * 0.33333333333333331;
    int64_t var_5f8[0xbe];
    double var_694_1 =
        (var_5f8[eax_24 * 3] + var_5f8[ecx_16 * 3] + var_5f8[eax_25 * 3]) * 0.33333333333333331;

    if (esi_3 > 0)
    {
        int16_t* ecx_19 = edi;
        int32_t var_734_2 = esi_3;
        int16_t* var_72c_1 = ecx_19;
        float var_6e0;
        double var_620;

        while (true)
        {
            int32_t eax_28 = 0;
            int32_t edx_12 = 0;
            eax_28 = ecx_19[1];
            edx_12 = *ecx_19;
            void* eax_30 = (eax_28 << 0x10) + edx_12;
            int32_t edx_13 = 0;
            edx_13 = *(&eax_30 + 1);
            var_730 = eax_30;
            int32_t edx_14 = 0;
            edx_14 = *(&var_730 + 2);
            uint32_t ecx_23 = eax_30 * 0x18;
            int32_t eax_33 = edx_13 * 0x18;
            int32_t __saved_edi;
            double var_650 = *(&var_608 + eax_33) - *(&__saved_edi + ecx_23 + 0x140);
            double var_648_1 = *(&var_600 + eax_33) - *(&__saved_edi + ecx_23 + 0x148);
            int32_t eax_35 = edx_14 * 0x18;
            double var_640_1 = var_5f8[edx_13 * 3] - *(&__saved_edi + ecx_23 + 0x150);
            double var_638 = *(&var_608 + eax_35) - *(&__saved_edi + ecx_23 + 0x140);
            double var_630_1 = *(&var_600 + eax_35) - *(&__saved_edi + ecx_23 + 0x148);
            double var_628_1 = var_5f8[edx_14 * 3] - *(&__saved_edi + ecx_23 + 0x150);
            double var_668;
            sub_4b3190(&var_668, &var_650, &var_638);
            long double x87_r7_43 = var_668;
            long double temp1_1 = 0.0;
            x87_r7_43 - temp1_1;
            double var_660;
            double var_658;

            if (!(*(&((x87_r7_43 < temp1_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_43, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_43 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
            label_4c94f4:
                sub_4b3100(&var_668);
                var_718 = var_650;
                float var_714_1 = var_648_1;
                var_710 = var_640_1;
                float var_68c = var_638;
                float var_688_1 = var_630_1;
                float var_684_1 = var_628_1;
                var_700 = var_668;
                float var_6fc_2 = var_660;
                float var_6f8_1 = var_658;
                float var_680 = *a3 - *(&__saved_edi + ecx_23 + 0x140);
                float var_67c_1 = a3[1] - *(&__saved_edi + ecx_23 + 0x148);
                float var_678_1 = a3[2] - *(&__saved_edi + ecx_23 + 0x150);
                float var_674 = var_6a4 - *a3;
                float var_670_1 = var_69c_1 - a3[1];
                float var_66c_1 = var_694_1 - a3[2];

                if (sub_4b2c70(&var_728, &var_680, &var_674, &var_700)
                    && sub_4b2d90(nullptr, nullptr, &var_728, &var_718, &var_68c, &var_700))
                {
                    double var_6bc = *(&__saved_edi + ecx_23 + 0x140) - *a3 + var_728;
                    float var_724;
                    double var_6b4_1 = *(&__saved_edi + ecx_23 + 0x148) - a3[1] + var_724;
                    float var_720;
                    long double x87_r7_75 = *(&__saved_edi + ecx_23 + 0x150) - a3[2] + var_720;
                    long double x87_r7_78 =
                        x87_r7_75 * x87_r7_75 + var_6b4_1 * var_6b4_1 + var_6bc * var_6bc;
                    long double x87_r6_27 = var_6f0_1;
                    x87_r6_27 - x87_r7_78;

                    if (!(*(&((x87_r6_27 < x87_r7_78 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_27, x87_r7_78) ? 1 : 0) << 0xa
                        | (x87_r6_27 == x87_r7_78 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    {
                        *(&var_6e8 + 4) = var_6fc_2;
                        var_6f0_1 = x87_r7_78;
                        var_71c_1 = 1;
                        var_6e8 = var_700;
                        var_6e0 = var_6f8_1;
                        memcpy(&var_620, &var_6bc, 0x18);
                    }
                }
            }
            else
            {
                long double x87_r7_44 = var_660;
                long double temp2_1 = 0.0;
                x87_r7_44 - temp2_1;

                if (!(*(&((x87_r7_44 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_44, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_44 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_4c94f4;

                long double x87_r7_45 = var_658;
                long double temp4_1 = 0.0;
                x87_r7_45 - temp4_1;

                if (!(*(&((x87_r7_45 < temp4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_45, temp4_1) ? 1 : 0) << 0xa
                        | (x87_r7_45 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    goto label_4c94f4;
            }
            bool cond:5_1 = var_734_2 != 1;
            var_72c_1 = &var_72c_1[2];
            var_734_2 -= 1;

            if (!cond:5_1)
                break;

            ecx_19 = var_72c_1;
        }

        if (var_71c_1)
        {
            double var_618;
            double var_610;
            long double x87_r7_84 =
                (var_6e0 * var_610 + *(&var_6e8 + 4) * var_618 + var_6e8 * var_620) * var_6d0;
            long double temp5 = 0.0;
            x87_r7_84 - temp5;

            if (*(&((x87_r7_84 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_84, temp5) ? 1 : 0) << 0xa
                | (x87_r7_84 == temp5 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                *a5 = 0;
                return 1;
            }

            *a5 = 1;
            return 1;
        }
    }

    *a5 = 0;
    return 1;
}
