#include "004D14E0-Render_ShouldHaveAllocatedD.h"
/* 0x004d14e0 Render_ShouldHaveAllocatedD full linked: callers=1 callees=10 */
int32_t sub_4d14e0(void* a1)

{
    double* eax_1 = *(g_a44344 + 0xdfc);
    int32_t var_5bc;

    if (!eax_1)
        var_5bc = 0xe0000000;
    else
        var_5bc = *eax_1;

    int16_t eax_2 = g_c10380;
    void* ebx = a1;
    void* var_5a8 = &g_b16d10;
    uint32_t eax_3 = eax_2;
    g_b12b80 = 0;
    int32_t eax_4 = g_b16c6c;
    int32_t var_61c = 0;
    int32_t var_5d4 = 0;
    int32_t edx = *(ebx + 0xc);
    uint32_t ecx_3 = eax_2 - 1;
    int32_t* var_5ac = &g_b12c60;
    sub_4c5810();
    float ecx_4 = g_bcab20;
    float edx_1 = g_bcab24;
    long double st1;
    bool c1;
    st1 = __fpatan(1, ecx_4);
    int32_t i = 0;
    void var_448;
    memcpy(&var_448, &g_b12be0, 0x40);
    char* ecx_5 = &g_548060;
    long double st0;
    bool c1_1;
    bool c2;
    st0 = __fcos(st1);
    float var_5dc = 1.73210001f / st0 * 1.07374182e+09f;
    long double st1_1;
    bool c1_2;
    st1_1 = __fpatan(1, edx_1);
    long double st0_1;
    bool c1_3;
    bool c2_1;
    st0_1 = __fcos(st1_1);
    float var_5f8 = 1.73210001f / st0_1 * 1.07374182e+09f;

    do
    {
        char edx_2 = *ecx_5;
        ecx_5 = &ecx_5[4];
        char var_488[0x40];
        var_488[i] = edx_2;
        i += 1;
    } while (i < 0x40);

    long double x87_r7_12 = g_bcab08;
    float var_5a0 = g_bcab10;
    float var_59c = g_bcab18;
    float var_570;
    memcpy(&var_570, &g_bcaae0, 0x28);
    int32_t var_634_2 = x87_r7_12;
    int32_t eax_7 = -((var_634_2 + g_b12bc0));
    int32_t var_634_3 = var_5a0;
    int32_t eax_10 = -((g_b12bc4 + var_634_3));
    int32_t var_634_4 = var_59c;
    int32_t eax_12 = -((var_634_4 + g_b12bc8));
    long double x87_r7_15 = eax_7;
    long double x87_r6_4 = eax_10;
    long double x87_r5 = eax_12;
    float var_56c;
    float var_568;
    float var_5a4 = var_568 * x87_r5 + var_56c * x87_r6_4 + var_570 * x87_r7_15;
    int32_t var_634_5 = var_5a4;
    int32_t ecx_9 = 0;
    float var_564;
    float var_560;
    float var_55c;
    float var_558;
    float var_554;
    float var_550;
    int32_t var_548;
    int32_t var_544;
    int32_t var_540;

    for (int32_t i_1 = 0; i_1 < 0x60; )
    {
        *(&var_548 + i_1) = 0xc0000000;

        if (ecx_9 & 1)
            memcpy(&var_548 + i_1, "\x00\x00\x00\x40\x00\x00\x00\xc0", 8);

        if (ecx_9 & 2)
            memcpy(&var_544 + i_1, "\x00\x00\x00\x40\x00\x00\x00\xc0", 8);

        if (ecx_9 & 4)
            *(&var_540 + i_1) = 0x40000000;

        long double x87_r7_17 = *(&var_548 + i_1);
        long double x87_r6_8 = *(&var_544 + i_1);
        long double x87_r5_2 = *(&var_540 + i_1);
        i_1 += 0xc;
        ecx_9 += 1;
        var_5a4 = x87_r5_2 * var_568 + x87_r6_8 * var_56c + x87_r7_17 * var_570;
        float var_5a0_2 = x87_r5_2 * var_55c + x87_r6_8 * var_560 + x87_r7_17 * var_564;
        void var_4f4;
        *(&var_4f4 + i_1) = var_5a4;
        void var_4f0;
        *(&var_4f0 + i_1) = var_5a0_2;
        void var_4ec;
        *(&var_4ec + i_1) = x87_r5_2 * var_550 + x87_r6_8 * var_554 + x87_r7_17 * var_558;
    }

    void* eax_14 = *(ebx + 0xc);
    int32_t var_404 = 0;
    void* var_408;

    if (eax_14)
    {
        char ecx_10 = *(eax_14 + 0x38) & 0xf0;
        var_408 = eax_14 + 0x20;
        *(eax_14 + 0x38) = ecx_10;
        var_404 = 2;
    }

    int32_t ecx_11 = 0xa;
    void* eax_16 = nullptr;
    int32_t var_62c = 0xa;
    float* var_63c = &var_5a4;
    void* var_620 = nullptr;

    do
    {
        void* edx_6 = *(ebx + (*(0x54843a + ecx_11) << 2) + 0x10);

        if (edx_6)
        {
            memcpy(eax_16 + 0xa4ef38, edx_6, 0x40);
            *(edx_6 + 0xc) = *(eax_16 + 0xa4ef60);
            *(edx_6 + 0x10) = *(eax_16 + 0xa4ef5c);
            *(edx_6 + 0x14) = *(eax_16 + 0xa4ef58);
            *(edx_6 + 0x18) = *(eax_16 + 0xa4ef54);
            *(edx_6 + 0x1c) = *(eax_16 + 0xa4ef50);
            *(edx_6 + 0x20) = *(eax_16 + 0xa4ef4c);
            *(edx_6 + 0x24) = *(eax_16 + 0xa4ef48);
            *(edx_6 + 0x28) = *(eax_16 + 0xa4ef44);
            int32_t eax_18 = 0;
            eax_18 = *(edx_6 + 0x30);
            char ecx_21 = ((((((eax_18 >> 1 & 1) + ((eax_18 & 1) << 1)) << 1) + (eax_18 >> 2 & 1))
                << 1) + (eax_18 >> 3 & 1)) << 1;
            ebx = a1;
            ecx_21 = ((((((ecx_21 + (eax_18 >> 4 & 1)) << 1) + (eax_18 >> 5 & 1)) << 1)
                + (eax_18 >> 6 & 1)) << 1) + (eax_18 >> 7 & 1);
            eax_16 = var_620;
            *(edx_6 + 0x30) = ecx_21;
            ecx_11 = var_62c;
            *(eax_16 + 0xa5374c) = edx_6;
            var_404 |= 1 << (ecx_11 & 0x1f);
            *var_63c = eax_16 + 0xa53740;
        }

        ecx_11 += 1;
        eax_16 += 0x40;
        var_63c = &var_63c[1];
        var_62c = ecx_11;
        var_620 = eax_16;
    } while (ecx_11 - 0xa < 5);

    int32_t var_4e8;
    int32_t var_604_1 = var_634_5 - var_4e8;
    int32_t var_614_1 = eax_10 - var_544;
    int32_t var_610_1 = eax_7 - var_548;
    int32_t* i_2 = &var_408;
    int32_t var_4e4;
    int32_t var_600_1 = var_55c * x87_r5 + var_560 * x87_r6_4 + var_564 * x87_r7_15 - var_4e4;
    int32_t var_4e0;
    int32_t var_608_1 = var_550 * x87_r5 + var_554 * x87_r6_4 + var_558 * x87_r7_15 - var_4e0;
    int32_t var_60c_1 = eax_12 - var_540;
    int32_t ebx_19 = 0xffffffff;
    void** i_6 = &var_408;
    int32_t var_5e0 = 0;
    int32_t var_634_10;

    do
    {
        int32_t eax_41 = i_2[1];
        int32_t edx_18 = eax_41 >> 7 & 7;
        int32_t ecx_27 = eax_41 >> 0xa;
        int32_t __saved_edi;
        int32_t* edi_7 = &(&__saved_edi)[edx_18 * 3 + 0x58];
        int32_t var_624_1 = edx_18;
        int32_t* var_5fc_1 = edi_7;

        if (!(eax_41 & 1))
        {
            eax_41 |= 1;
            i_2[1] = eax_41;
            int32_t var_638_1 = 0;
            int32_t var_5d8_1 = 0;
            void* var_57c;

            if (eax_41 & 2)
            {
                void* ecx_44 = *i_2;
                var_57c = ecx_44;
                var_638_1 = eax_41 >> 4 & 7;
                int32_t eax_44 = 0;
                eax_44 = *(ecx_44 + 0x18);
                var_5d8_1 = eax_44;
            }

            int32_t var_5cc_1 = 0;
            g_b12bb8 = 0;

            if (ecx_27)
            {
                float* ecx_45 = &var_5a4;
                int32_t var_63c_2 = 1;
                float* var_62c_2 = &var_5a4;
                int32_t var_620_1 = 5;
                bool cond:10_1;

                do
                {
                    if (ecx_27 & var_63c_2)
                    {
                        float eax_48 = *(*ecx_45 + (edx_18 << 2) + 0xc);
                        *ecx_45 = eax_48;
                        int32_t ecx_46 = 0;
                        ecx_46 = *(eax_48 + 0x30);
                        float var_628_1 = eax_48;
                        var_5cc_1 |= ecx_46;

                        if (*(eax_48 + 0x38) & 0x80)
                        {
                            void* j = *(eax_48 + 0x2c);

                            do
                            {
                                if (*(j + 0x5c) & 0x80)
                                {
                                    int32_t edx_30 = 0;
                                    edx_30 = *(j + 0x1c);
                                    (*((edx_30 << 2) + &g_a9c4e0))(j, *(j + 0x48));
                                    edx_18 = var_624_1;
                                    eax_48 = var_628_1;
                                }

                                j = *(j + 0x58);
                            } while (j);
                        }

                        if (*(eax_48 + 0x38) & 1)
                        {
                            void* j_1 = *(eax_48 + 0x2c);

                            do
                            {
                                if (*(j_1 + 0x5c) & 1 && !*(j_1 + 0x60))
                                {
                                    *(g_b12c58 + 4) = j_1;
                                    **&g_b12c58 = 4;
                                    int32_t ecx_52 = g_b12c20 + 1;
                                    g_b12c58 += 8;
                                    g_b12c20 = ecx_52;
                                }

                                j_1 = *(j_1 + 0x58);
                            } while (j_1);
                        }

                        ecx_45 = var_62c_2;
                    }

                    ecx_45 = &ecx_45[1];
                    var_63c_2 <<= 1;
                    cond:10_1 = var_620_1 != 1;
                    var_62c_2 = ecx_45;
                    var_620_1 -= 1;
                } while (cond:10_1);
            }

            ebx_19 += 1;
            var_5e0 -= 1;
            int32_t var_5f0_1 = ebx_19;
            var_604_1 += *var_5fc_1 >> (ebx_19 & 0x1f);
            char ecx_56 = ebx_19;
            var_5dc = var_5dc * 0.5f;
            var_608_1 += var_5fc_1[2] >> (ecx_56 & 0x1f);
            var_600_1 += var_5fc_1[1] >> (ecx_56 & 0x1f);
            var_610_1 += (&__saved_edi)[edx_18 * 3 + 0x40] >> (ebx_19 & 0x1f);
            var_5f8 = var_5f8 * 0.5f;
            var_614_1 += (&__saved_edi)[edx_18 * 3 + 0x41] >> (ebx_19 & 0x1f);
            var_60c_1 += (&__saved_edi)[edx_18 * 3 + 0x42] >> (ebx_19 & 0x1f);
            int32_t* edx_41 = &var_4e8;
            char* var_5c0_1 = &(&__saved_edi)[var_638_1 * 2 + 0x70];
            int32_t* var_5fc_2 = &var_4e8;

            if (g_b12bb8)
                var_5d8_1 = 0;

            int32_t* edi_27 = &var_548 - &var_4e8;
            int32_t var_620_2 = 0;
            int32_t var_63c_3 = 1;
            int32_t* var_62c_3 = 0xc;
            int32_t* var_624_3 = edi_27;

            do
            {
                int32_t ecx_68 = *var_5c0_1;
                var_5c0_1 = &var_5c0_1[1];
                int32_t eax_66 = 1 << (ecx_68 & 0x1f);
                int32_t ecx_70 = var_63c_3 & var_5cc_1;

                if (ecx_70)
                    goto label_4d1e7c;

                if (var_5d8_1 & eax_66)
                {
                    ebx_19 = var_5f0_1;
                label_4d1e7c:
                    long double x87_r7_28 = (edx_41[2] >> ((ebx_19 + 1) & 0x1f)) + var_608_1;
                    float var_638_2 = x87_r7_28;
                    long double x87_r6_16 = 64.0 - var_5f8;
                    x87_r6_16 - x87_r7_28;

                    if (*(&((x87_r6_16 < x87_r7_28 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_16, x87_r7_28) ? 1 : 0) << 0xa
                        | (x87_r6_16 == x87_r7_28 ? 1 : 0) << 0xe) + 1) & 1)
                    {
                        long double x87_r7_29 = (*edx_41 >> ((ebx_19 + 1) & 0x1f)) + var_604_1;
                        long double x87_r6_19 = var_638_2 * ecx_4 + var_5dc;
                        x87_r7_29 - x87_r6_19;

                        if (*(&((x87_r7_29 < x87_r6_19 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_29, x87_r6_19) ? 1 : 0) << 0xa
                            | (x87_r7_29 == x87_r6_19 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                        {
                            long double x87_r6_20 = -(x87_r6_19);
                            x87_r7_29 - x87_r6_20;

                            if (!(*(&((x87_r7_29 < x87_r6_20 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_29, x87_r6_20) ? 1 : 0) << 0xa
                                | (x87_r7_29 == x87_r6_20 ? 1 : 0) << 0xe) + 1) & 0x41))
                            {
                                x87_r7_29 = (edx_41[1] >> ((ebx_19 + 1) & 0x1f)) + var_600_1;
                                x87_r6_19 = var_638_2 * edx_1 + var_5f8;
                                x87_r7_29 - x87_r6_19;

                                if (*(&((x87_r7_29 < x87_r6_19 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_29, x87_r6_19) ? 1 : 0) << 0xa
                                    | (x87_r7_29 == x87_r6_19 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                                {
                                    long double x87_r6_24 = -(x87_r6_19);
                                    x87_r7_29 - x87_r6_24;

                                    if (!(*(&((x87_r7_29 < x87_r6_24 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_29, x87_r6_24) ? 1 : 0) << 0xa
                                        | (x87_r7_29 == x87_r6_24 ? 1 : 0) << 0xe) + 1) & 0x41))
                                    {
                                        int32_t ebx_25 = (*(edi_27 + edx_41 + 8)
                                            >> ((ebx_19 + 1) & 0x1f)) + var_60c_1;
                                        int32_t eax_80 = 0x40000000 >> ((ebx_19 + 1) & 0x1f);

                                        if (eax_80 + ebx_25 + var_634_4 >= var_5bc)
                                        {
                                            int32_t edx_44 = (*(edi_27 + edx_41 + 4)
                                                >> ((ebx_19 + 1) & 0x1f)) + var_614_1;
                                            int32_t esi_9 = (*(edi_27 + edx_41)
                                                >> ((ebx_19 + 1) & 0x1f)) + var_610_1;
                                            var_634_10 = edx_44;
                                            int32_t eax_84 = esi_9;

                                            if (esi_9 < 0)
                                                eax_84 = -(eax_84);

                                            if (edx_44 < 0)
                                                edx_44 = -(edx_44);

                                            if (edx_44 > eax_84)
                                                eax_84 = edx_44;

                                            int32_t ecx_72 = ebx_25;

                                            if (ebx_25 < 0)
                                                ecx_72 = -(ecx_72);

                                            if (ecx_72 > eax_84)
                                                eax_84 = ecx_72;

                                            int32_t var_638_3 = 0;
                                            int32_t var_628_6 = 0;
                                            int32_t eax_86 =
                                                (eax_84 - eax_80) >> ((var_5e0 + 0x19) & 0x1f);

                                            if (ecx_70)
                                            {
                                                long double x87_r7_33 = eax_86 * g_bcab20;
                                                long double temp3_1 = 9600f;
                                                x87_r7_33 - temp3_1;

                                                if (*(&((x87_r7_33 < temp3_1 ? 1 : 0) << 8
                                                    | (FCMP_UO(x87_r7_33, temp3_1) ? 1 : 0) << 0xa
                                                    | (x87_r7_33 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                                                {
                                                    int32_t edi_29 = 1;
                                                    float* ecx_76 = &var_5a4;
                                                    int32_t var_5ec_2 = 5;
                                                    bool cond:21_1;

                                                    do
                                                    {
                                                        if (ecx_27 & edi_29)
                                                        {
                                                            float eax_89 = *ecx_76;

                                                            if (*(eax_89 + 0x30) & var_63c_3)
                                                            {
                                                                int32_t* edx_46 = var_62c_3;
                                                                void* eax_90 = *(edx_46 + eax_89);
                                                                edx_46 = *(eax_90 + 0x3a);
                                                                edx_46 |= *(eax_90 + 0x38);

                                                                if (edx_46 & 0x183)
                                                                {
                                                                    var_628_6 = 1;
                                                                    var_638_3 |= edi_29 << 0xa;
                                                                }
                                                            }
                                                        }

                                                        ecx_76 = &ecx_76[1];
                                                        edi_29 <<= 1;
                                                        cond:21_1 = var_5ec_2 != 1;
                                                        var_5ec_2 -= 1;
                                                    } while (cond:21_1);
                                                }
                                            }

                                            void* var_5b4;
                                            void* eax_98;

                                            if (var_5d8_1 & eax_66)
                                            {
                                                int32_t eax_96 = 0;
                                                eax_96 = *(var_57c + (ecx_68 << 1));
                                                eax_98 = (eax_96 << 5) + edx;
                                                void* const edx_50 = nullptr;
                                                edx_50 = *(ecx_68 + var_57c + 0x10);
                                                var_5b4 = eax_98;
                                                int32_t ecx_80 = *(edx_50 +
                                                    &(&__saved_edi)[var_638_1 * 2 + 0x80]);

                                                if (eax_86 < eax_4 && var_5f0_1 + 1 < 0x10)
                                                {
                                                    var_638_3 |= ecx_80 << 4 | 2;
                                                    goto label_4d22bd;
                                                }

                                                if (var_5f0_1 + 1 > 6)
                                                {
                                                    int32_t esi_10 = esi_9 + var_634_2;
                                                    int32_t ebx_26 = ebx_25 + var_634_4;
                                                    int32_t edi_32 = var_634_10 + var_634_3;
                                                    int32_t eax_110 = ((((ebx_26 >> 2 & 0x1ffc000)
                                                        ^ (esi_10 & 0x1ffc000)) >> 3
                                                        ^ (edi_32 & 0x3ff800)) >> 5
                                                        ^ ((ebx_26 ^ edi_32 ^ esi_10) & 0x1ffc0)) >> 6;
                                                    int32_t ecx_89 = eax_110 * 0x1c;
                                                    int32_t edx_63 = *(ecx_89 + 0xb04350);

                                                    if (edx_63 != 0xffffffff)
                                                    {
                                                        while (ecx_3 != edx_63
                                                            || *(ecx_89 + &g_b04340) != esi_10
                                                            || *(ecx_89 + 0xb04344) != edi_32
                                                            || *(ecx_89 + 0xb04348) != ebx_26)
                                                        {
                                                            eax_110 = (eax_110 + 1) & 0x7ff;
                                                            ecx_89 = eax_110 * 0x1c;
                                                            edx_63 = *(ecx_89 + 0xb04350);

                                                            if (edx_63 == 0xffffffff)
                                                                break;
                                                        }
                                                    }

                                                    int32_t edx_64 = 1;

                                                    if (ecx_3 == *(eax_110 * 0x1c + 0xb04350))
                                                    {
                                                        int32_t ecx_95 =
                                                            *(eax_110 * 0x1c + &g_b04358);
                                                        *(eax_110 * 0x1c + 0xb04350) = eax_3;
                                                        edx_64 = 0;

                                                        if (!ecx_95)
                                                        {
                                                            Error_Show("Should have allocated data "
                                                            "for cube existing previous frame");

                                                            while (true)
                                                                /* nop */
                                                        }
                                                        else
                                                        {
                                                            *var_5ac = ecx_95;
                                                            var_5ac = &var_5ac[1];
                                                            var_5d4 += 1;
                                                        }
                                                    }
                                                    else if (*(eax_110 * 0x1c + &g_b04358))
                                                    {
                                                        Error_Show("Should't have allocate hash data! ERROR!");

                                                        while (true)
                                                            /* nop */
                                                    }
                                                    else
                                                    {
                                                        *(eax_110 * 0x1c + 0xb04354) = 3;
                                                        *(eax_110 * 0x1c + 0xb0434c) = eax_86;
                                                        *(eax_110 * 0x1c + &g_b04340) = esi_10;
                                                        *(eax_110 * 0x1c + 0xb04344) = edi_32;
                                                        *(eax_110 * 0x1c + 0xb04348) = ebx_26;
                                                        *(eax_110 * 0x1c + 0xb04350) = eax_3;
                                                    }

                                                    if (var_61c > 0xfff)
                                                        g_b12b80 += 1;
                                                    else if (edx_64)
                                                    {
                                                        int32_t edx_66 = g_ba5060;
                                                        *(var_5a8 - 4) =
                                                            eax_110 * 0x1c + &g_b04340;
                                                        int32_t eax_113 = g_b97d24;
                                                        *(var_5a8 - 8) = edx_66;
                                                        int32_t* ecx_104;

                                                        if (!eax_113)
                                                        {
                                                            ecx_104 = var_5a8 - 0xc;
                                                            *ecx_104 = g_ba2058 << 0x10 | 0xffff;
                                                        }
                                                        else
                                                        {
                                                            ecx_104 = var_5a8 - 0xc;
                                                            *ecx_104 =
                                                                *((eax_113 << 2) + &g_b97b1c)
                                                                | g_ba2058 << 0x10;
                                                        }

                                                        *(ecx_104 - 4) = *(var_5b4 + 0x1c);
                                                        *(ecx_104 - 8) = ecx_80;
                                                        *(ecx_104 - 0xc) = var_5f0_1 + 1;
                                                        *(ecx_104 - 0x14) = ebx_26;
                                                        *(ecx_104 - 0x1c) = edi_32;
                                                        *(ecx_104 - 0x24) = esi_10;
                                                        var_5a8 = &ecx_104[0xf];
                                                        var_61c += 1;
                                                    }
                                                }
                                            }

                                            if (!var_628_6)
                                            {
                                                edx_41 = var_5fc_2;
                                                i_2 = i_6;
                                            }
                                            else
                                            {
                                                eax_98 = var_5b4;
                                            label_4d22bd:
                                                i_2 = &i_6[2];
                                                edx_41 = var_5fc_2;
                                                i_6 = i_2;
                                                i_2[1] = var_620_2 << 7 | var_638_3;
                                                *i_2 = eax_98;
                                            }

                                            edi_27 = var_624_3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                edx_41 = &edx_41[3];
                ebx_19 = var_5f0_1;
                var_5fc_2 = edx_41;
                var_620_2 += 1;
                var_63c_3 <<= 1;
                var_62c_3 = &var_62c_3[1];
            } while (&var_62c_3[1] < 0x2c);
        }
        else
        {
            if (ecx_27)
            {
                int32_t var_63c_1 = 1;
                float* var_618 = &var_5a4;
                int32_t var_62c_1 = 5;
                bool cond:8_1;

                do
                {
                    if (ecx_27 & var_63c_1)
                    {
                        float eax_27 = *var_618;
                        float var_624_2 = eax_27;
                        bool cond:9_1 = !(*(eax_27 + 0x38) & 0x100);
                        *var_618 = *(eax_27 + 8);

                        if (!cond:9_1)
                        {
                            void* j_2 = *(eax_27 + 0x2c);

                            do
                            {
                                if (*(j_2 + 0x5c) & 0x100)
                                {
                                    int32_t ecx_31 = 0;
                                    ecx_31 = *(j_2 + 0x1c);
                                    (*((ecx_31 << 2) + &g_a9cae0))(j_2, *(j_2 + 0x48));
                                    eax_27 = var_624_2;
                                }

                                j_2 = *(j_2 + 0x58);
                            } while (j_2);
                        }

                        if (*(eax_27 + 0x38) & 2)
                        {
                            void* j_3 = *(eax_27 + 0x2c);

                            do
                            {
                                if (*(j_3 + 0x5c) & 2 && !*(j_3 + 0x60))
                                {
                                    *(g_b12c58 + 4) = j_3;
                                    **&g_b12c58 = 5;
                                    g_b12c58 += 8;
                                    g_b12c20 += 1;
                                }

                                j_3 = *(j_3 + 0x58);
                            } while (j_3);
                        }

                        edi_7 = var_5fc_1;
                    }

                    var_63c_1 <<= 1;
                    cond:8_1 = var_62c_1 != 1;
                    var_618 = &var_618[1];
                    var_62c_1 -= 1;
                } while (cond:8_1);
            }

            long double x87_r7_20 = var_5dc;
            var_604_1 -= *edi_7 >> (ebx_19 & 0x1f);
            char ecx_35 = ebx_19;
            var_5dc = x87_r7_20 + x87_r7_20;
            long double x87_r7_22 = var_5f8;
            var_600_1 -= edi_7[1] >> (ecx_35 & 0x1f);
            var_5f8 = x87_r7_22 + x87_r7_22;
            var_608_1 -= edi_7[2] >> (ecx_35 & 0x1f);
            var_610_1 -= (&__saved_edi)[edx_18 * 3 + 0x40] >> (ebx_19 & 0x1f);
            char ecx_41 = ebx_19;
            var_614_1 -= (&__saved_edi)[edx_18 * 3 + 0x41] >> (ecx_41 & 0x1f);
            ebx_19 -= 1;
            i_2 -= 8;
            var_60c_1 -= (&__saved_edi)[edx_18 * 3 + 0x42] >> (ecx_41 & 0x1f);
            var_5e0 += 1;
            i_6 = i_2;
        }
    } while (i_2 >= &var_408);

    void* edx_75 = nullptr;

    for (int32_t i_3 = 0xa4ef38; i_3 < 0xa4f078; )
    {
        int32_t edi_33 = *(a1 + (*(edx_75 + 0x548444) << 2) + 0x10);

        if (edi_33)
            memcpy(edi_33, i_3, 0x40);

        i_3 += 0x40;
        edx_75 += 1;
    }

    g_b16ca4 = var_61c;
    int32_t* ecx_118 = &g_b04358;
    int32_t edx_78 = eax_3 & 0xffff0000;
    int32_t esi_16 = eax_3 & 0xffff;
    g_b16c9c = var_5d4;
    var_634_10 = edx_78;
    int32_t var_5e4_1 = esi_16;
    int32_t i_5 = 0;
    int32_t* var_61c_1 = &g_b04358;
    int32_t i_4;

    do
    {
        int32_t eax_127 = ecx_118[-2];

        if ((edx_78 == (eax_127 & 0xffff0000) && eax_127 != esi_16)
            || (eax_127 & 0xffff) + 1 < esi_16)
        {
            int32_t eax_130 = *ecx_118;

            if (eax_130)
            {
                int32_t edx_79 = ecx_118[-1];
                int32_t eax_135;
                int32_t edx_80;

                if (!edx_79)
                {
                    int32_t* esi_17 = g_b12b74;
                    edx_80 = *(esi_17 + eax_130);
                    int32_t eax_132 = g_b12b68 - 1;
                    g_b12b68 = eax_132;

                    if (edx_80 != eax_132)
                    {
                        int32_t ecx_119 = g_b12b64;
                        eax_135 = *(ecx_119 + (eax_132 << 2)) * g_b12b70 + g_b12b60;
                        int32_t edi_39 = *(ecx_119 + (edx_80 << 2));
                        int32_t esi_18 = *(esi_17 + eax_135);
                        *(ecx_119 + (edx_80 << 2)) = *(ecx_119 + (esi_18 << 2));
                        *(g_b12b64 + (esi_18 << 2)) = edi_39;
                        *(g_b12b74 + eax_135) = edx_80;
                        ecx_118 = var_61c_1;
                    }
                }
                else if (edx_79 == 1)
                {
                    int32_t* esi_19 = g_b12c54;
                    edx_80 = *(esi_19 + eax_130);
                    int32_t eax_137 = g_b12c48 - 1;
                    g_b12c48 = eax_137;

                    if (edx_80 != eax_137)
                    {
                        int32_t ecx_122 = g_b12c44;
                        eax_135 = *(ecx_122 + (eax_137 << 2)) * g_b12c50 + g_b12c40;
                        int32_t edi_41 = *(ecx_122 + (edx_80 << 2));
                        int32_t esi_20 = *(esi_19 + eax_135);
                        *(ecx_122 + (edx_80 << 2)) = *(ecx_122 + (esi_20 << 2));
                        *(g_b12c44 + (esi_20 << 2)) = edi_41;
                        *(g_b12c54 + eax_135) = edx_80;
                        ecx_118 = var_61c_1;
                    }
                }
                else if (edx_79 != 2)
                {
                    Error_Show("Illegal alloc info");

                    while (true)
                        /* nop */
                }
                else
                {
                    int32_t* esi_21 = g_b16cd4;
                    edx_80 = *(esi_21 + eax_130);
                    int32_t eax_141 = g_b16cc8 - 1;
                    g_b16cc8 = eax_141;

                    if (edx_80 != eax_141)
                    {
                        int32_t ecx_124 = g_b16cc4;
                        eax_135 = *(ecx_124 + (eax_141 << 2)) * g_b16cd0 + g_b16cc0;
                        int32_t edi_43 = *(ecx_124 + (edx_80 << 2));
                        int32_t esi_22 = *(esi_21 + eax_135);
                        *(ecx_124 + (edx_80 << 2)) = *(ecx_124 + (esi_22 << 2));
                        *(g_b16cc4 + (esi_22 << 2)) = edi_43;
                        *(g_b16cd4 + eax_135) = edx_80;
                        ecx_118 = var_61c_1;
                    }
                }
                *ecx_118 = 0;
            }

            esi_16 = var_5e4_1;
            edx_78 = var_634_10;
            ecx_118[-2] = 0xffffffff;
        }

        ecx_118 = &ecx_118[7];
        i_4 = i_5 + 1;
        var_61c_1 = ecx_118;
        i_5 = i_4;
    } while (i_4 < 0x800);

    return i_4;
}
