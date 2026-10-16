#include "004A3940-DrawBandFilter.h"
/* 0x004a3940 DrawBandFilter full linked: callers=0 callees=12 */
float sub_4a3940(int32_t* a1) __location("eax")

{
    int32_t ebx;
    int32_t var_210 = ebx;
    float* ebp;
    float* var_214 = ebp;
    int32_t esi;
    int32_t var_218 = esi;
    float* edi;
    float* var_21c = edi;
    int32_t* esp = &var_21c;
    long double x87_r7 = a1[8];
    long double temp0 = g_bcadc0;
    x87_r7 - temp0;
    float result;
    result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;
    float result_1;

    if (*(&result + 1) & 0x41)
    {
        result = g_bcadc0;
        result_1 = result;
    }
    else
        result_1 = a1[8];

    long double x87_r7_2 = a1[0xa];
    long double temp1 = 0f;
    x87_r7_2 - temp1;
    result = (x87_r7_2 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        int32_t* eax = g_5ca114;
        void var_1d0;
        void* var_220_1 = &var_1d0;
        int32_t* var_224 = 3;
        (*(*eax + 0x30))(eax, var_224, var_220_1);
        void* ecx_2 = g_bcade8;
        long double x87_r7_5 = 1f / (g_bcabec * result_1);
        int32_t var_220_2 = 0;
        var_224 = 0x2f;
        float var_1a8;
        long double x87_r7_11 =
            (1f - g_bcada0 * x87_r7_5) * var_1a8 * (g_bcad8c - g_bcadb4) + g_bcadb4;
        *(ecx_2 + 4) = 0xffffffff;
        *(g_bcad7c + 4) = 0xffffffff;
        float var_1e4_1 = x87_r7_11;
        *(g_bcadac + 4) = 0xffffffff;
        *(g_bcadc4 + 4) = 0xffffffff;
        int32_t* eax_1 = g_5ca114;
        (*(*eax_1 + 0x50))(eax_1, var_224, var_220_2);
        int32_t* eax_2 = g_5ca114;
        int32_t var_220_3 = 0;
        var_224 = 0x1c;
        (*(*eax_2 + 0x50))(eax_2, var_224, var_220_3);
        int32_t* eax_3 = g_5ca114;
        int32_t var_220_4 = 0;
        var_224 = 0x1d;
        (*(*eax_3 + 0x50))(eax_3, var_224, var_220_4);
        int32_t* eax_4 = g_5ca114;
        int32_t var_220_5 = 1;
        var_224 = 0x16;
        (*(*eax_4 + 0x50))(eax_4, var_224, var_220_5);
        int32_t* eax_5 = g_5ca114;
        int32_t var_220_6 = 0;
        var_224 = 0x89;
        (*(*eax_5 + 0x50))(eax_5, var_224, var_220_6);
        int32_t* eax_6 = g_5ca114;
        int32_t var_220_7 = 1;
        var_224 = 0x1a;
        (*(*eax_6 + 0x50))(eax_6, var_224, var_220_7);
        int32_t* eax_7 = g_5ca114;
        int32_t var_220_8 = 0;
        var_224 = 0xf;
        (*(*eax_7 + 0x50))(eax_7, var_224, var_220_8);
        int32_t* eax_8 = g_5ca114;
        int32_t var_220_9 = 4;
        var_224 = 0x17;
        (*(*eax_8 + 0x50))(eax_8, var_224, var_220_9);
        int32_t* eax_9 = g_5ca114;
        int32_t var_220_10 = 0;
        var_224 = 7;
        (*(*eax_9 + 0x50))(eax_9, var_224, var_220_10);
        int32_t* eax_10 = g_5ca114;
        int32_t var_220_11 = 0;
        var_224 = 0xe;
        (*(*eax_10 + 0x50))(eax_10, var_224, var_220_11);
        int32_t* eax_11 = g_5ca114;
        int32_t var_220_12 = 1;
        var_224 = 0xc;
        int32_t var_228_12 = 0;
        int32_t ecx_9 = *eax_11;
        int32_t* var_22c = eax_11;
        (*(ecx_9 + 0x94))(var_22c, var_228_12, var_224, var_220_12);
        int32_t* eax_12 = g_5ca114;
        int32_t var_220_13 = 1;
        var_224 = 0x12;
        int32_t var_228_13 = 0;
        int32_t edx_8 = *eax_12;
        var_22c = eax_12;
        (*(edx_8 + 0x94))(var_22c, var_228_13, var_224, var_220_13);
        int32_t* eax_13 = g_5ca114;
        int32_t var_220_14 = 0;
        var_224 = 0xb;
        int32_t var_228_14 = 0;
        int32_t ecx_10 = *eax_13;
        var_22c = eax_13;
        (*(ecx_10 + 0x94))(var_22c, var_228_14, var_224, var_220_14);
        int32_t* eax_14 = g_5ca114;
        int32_t var_220_15 = 2;
        var_224 = 4;
        int32_t var_228_15 = 0;
        int32_t edx_9 = *eax_14;
        var_22c = eax_14;
        (*(edx_9 + 0x94))(var_22c, var_228_15, var_224, var_220_15);
        int32_t* eax_15 = g_5ca114;
        int32_t var_220_16 = 2;
        var_224 = 5;
        int32_t var_228_16 = 0;
        int32_t ecx_11 = *eax_15;
        var_22c = eax_15;
        (*(ecx_11 + 0x94))(var_22c, var_228_16, var_224, var_220_16);
        int32_t* eax_16 = g_5ca114;
        int32_t var_220_17 = 0;
        var_224 = 6;
        int32_t var_228_17 = 0;
        int32_t edx_10 = *eax_16;
        var_22c = eax_16;
        (*(edx_10 + 0x94))(var_22c, var_228_17, var_224, var_220_17);
        int32_t* eax_17 = g_5ca114;
        int32_t var_220_18 = 2;
        var_224 = 1;
        int32_t var_228_18 = 0;
        int32_t ecx_12 = *eax_17;
        var_22c = eax_17;
        (*(ecx_12 + 0x94))(var_22c, var_228_18, var_224, var_220_18);
        int32_t* eax_18 = g_5ca114;
        int32_t var_220_19 = 2;
        var_224 = 2;
        int32_t var_228_19 = 0;
        int32_t edx_11 = *eax_18;
        var_22c = eax_18;
        (*(edx_11 + 0x94))(var_22c, var_228_19, var_224, var_220_19);
        int32_t* eax_19 = g_5ca114;
        int32_t var_220_20 = 0;
        var_224 = 3;
        int32_t var_228_20 = 0;
        int32_t ecx_13 = *eax_19;
        var_22c = eax_19;
        (*(ecx_13 + 0x94))(var_22c, var_228_20, var_224, var_220_20);
        int32_t* eax_20 = g_5ca114;
        int32_t var_220_21 = 1;
        var_224 = 1;
        int32_t edx_12 = *eax_20;
        int32_t var_228_21 = 1;
        var_22c = eax_20;
        (*(edx_12 + 0x94))(var_22c, var_228_21, var_224, var_220_21);
        int32_t* eax_21 = g_5ca114;
        int32_t var_220_22 = 1;
        var_224 = 0x1b;
        (*(*eax_21 + 0x50))(eax_21, var_224, var_220_22);
        int32_t* eax_22 = g_5ca114;
        int32_t var_220_23 = 9;
        var_224 = 0x13;
        (*(*eax_22 + 0x50))(eax_22, var_224, var_220_23);
        int32_t* eax_23 = g_5ca114;
        int32_t var_220_24 = 1;
        var_224 = 0x14;
        (*(*eax_23 + 0x50))(eax_23, var_224, var_220_24);
        float var_1f4_1 = g_bcabc4 * 0.0500000007f;
        int64_t var_208_1 = g_bcabbc;
        long double x87_r7_15 = var_208_1;
        var_208_1 = x87_r7_15;
        float var_190 = x87_r7_15;
        long double x87_r6_3 = a1[0x14];
        long double temp2_1 = 45.0;
        x87_r6_3 - temp2_1;

        if (!(*(&((x87_r6_3 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_3, temp2_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_15 = x87_r7_15 + var_1f4_1 * 0.5f;

        float var_18c_1 = x87_r7_15;
        long double x87_r7_16 = x87_r7_15 + var_1f4_1;
        result_1 = g_bcabc4;
        float ebp_1 = 2.80259693e-45f;
        float var_1f0_2 = 2.80259693e-45f;
        float var_1fc_1 = result_1 + var_208_1;
        long double temp3_1 = var_1fc_1;
        x87_r7_16 - temp3_1;

        if (*(&((x87_r7_16 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_16 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        {
            void var_188;
            float* ecx_16 = &var_188;
            long double temp4_1;

            do
            {
                *ecx_16 = x87_r7_16;
                x87_r7_16 = x87_r7_16 + var_1f4_1;
                ebp_1 += 1;
                ecx_16 = &ecx_16[1];
                temp4_1 = var_1fc_1;
                x87_r7_16 - temp4_1;
            } while (*(&((x87_r7_16 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_16, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_16 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1);
            var_1f0_2 = ebp_1;
        }

        (&var_190)[ebp_1] = var_1fc_1;
        char eax_28 = QHash_ValueGet();
        sub_4a2600(a1);
        var_224 = a1;
        sub_4a2720(var_224);

        if (!eax_28)
            QHash_ValueSet();

        int32_t var_220_26 = 0x935c10;
        var_224 = 3;
        int32_t var_228_25 = 0x10;
        var_22c = 0x10;
        sub_4b2450(&a1[0xb], 0, 0x40, var_22c, var_228_25, var_224, var_220_26);

        if (!eax_28)
            sub_4b0d50();

        int32_t* eax_34 = g_5ca114;
        int32_t edx_15 = a1[0x13];
        var_224 = nullptr;
        (*(*eax_34 + 0x8c))(eax_34, var_224, edx_15);
        bool cond:0_1 = g_bcad08 + 0x64 > g_bcad04;
        int32_t* eax_37 = g_bcad00;
        int32_t var_20c = 0;
        int32_t var_220_28 = 0;
        int32_t ecx_19 = *eax_37;
        var_224 = &var_20c;

        if (cond:0_1)
        {
            int32_t var_228_28 = 0x2020;
            var_22c = eax_37;
            result = (*(ecx_19 + 0xc))(var_22c, var_228_28);
            esp = &var_224;
            *(&var_208_1 + 4) = 0;
            g_bcad08 = 0x64;

            if (!result)
            {
            label_4a3d0f:

                if (var_214)
                {
                    uint32_t edi_2 = 0;

                    if (ebp_1 > 1)
                    {
                        long double x87_r7_20 = var_1fc_1 * 0.0625f;
                        void var_194;
                        int32_t* eax_38 = &var_194;
                        uint32_t i_2 = ebp_1 >> 1;
                        edi_2 = i_2 * 6;
                        uint32_t i;

                        do
                        {
                            var_210 = g_bcabb8;
                            int32_t var_210_1 = var_210;
                            *var_214 = var_210_1;
                            var_214[1] = *eax_38;
                            float var_1ec;
                            var_214[2] = var_1ec;
                            float var_1e8;
                            var_214[3] = var_1e8;
                            var_214[5] = 0;
                            var_214[6] = 0;
                            var_210_1 = g_bcabb8;
                            float* ecx_30 = &var_214[7];
                            int32_t var_210_2 = var_210_1;
                            var_214 = ecx_30;
                            *ecx_30 = var_210_2 + g_bcabc0;
                            var_214[1] = *eax_38;
                            var_214[2] = var_1ec;
                            var_214[3] = var_1e8;
                            var_214[5] = g_bcabc0 * 0.0625f;
                            var_214[6] = 0;
                            var_210_2 = g_bcabb8;
                            float* ecx_37 = &var_214[7];
                            int32_t var_210_3 = var_210_2;
                            var_214 = ecx_37;
                            *ecx_37 = var_210_3 + g_bcabc0;
                            var_214[1] = eax_38[1];
                            var_214[2] = var_1ec;
                            var_214[3] = var_1e8;
                            var_214[5] = g_bcabc0 * 0.0625f;
                            var_214[6] = x87_r7_20;
                            var_210_3 = g_bcabb8;
                            float* ecx_44 = &var_214[7];
                            int32_t var_210_4 = var_210_3;
                            var_214 = ecx_44;
                            *ecx_44 = var_210_4;
                            var_214[1] = eax_38[1];
                            eax_38 = &eax_38[2];
                            var_214[2] = var_1ec;
                            var_214[3] = var_1e8;
                            var_214[5] = 0;
                            var_214[6] = x87_r7_20;
                            var_210_4 = g_bcabb8;
                            int32_t var_210_5 = var_210_4;
                            float* ecx_51 = &var_214[7];
                            var_214 = ecx_51;
                            *ecx_51 = var_210_5 + g_bcabc0;
                            var_214[1] = eax_38[-1];
                            var_214[2] = var_1ec;
                            var_214[3] = var_1e8;
                            var_214[5] = g_bcabc0 * 0.0625f;
                            var_214[6] = x87_r7_20;
                            var_210_5 = g_bcabb8;
                            float* ecx_58 = &var_214[7];
                            var_210 = var_210_5;
                            var_214 = ecx_58;
                            *ecx_58 = var_210;
                            var_214[1] = eax_38[-2];
                            var_214[2] = var_1ec;
                            var_214[3] = var_1e8;
                            var_214[5] = 0;
                            var_214[6] = 0;
                            i = i_2;
                            i_2 -= 1;
                            var_214 = &var_214[7];
                        } while (i != 1);
                        float var_1f8;
                        ebp_1 = var_1f8;
                    }

                    int32_t* eax_39 = g_bcad00;
                    (*(*eax_39 + 0x10))(eax_39);
                    int32_t* eax_40 = g_5ca114;
                    int32_t var_228_30 = 0;
                    var_22c = edi_2;
                    (*(*eax_40 + 0x7c))(eax_40, 4, g_bcad00, *(&var_208_1 + 4), var_22c,
                        var_228_30);
                    *(&var_208_1 + 3) = QHash_ValueGet();
                    sub_4a26c0(a1);
                    var_22c = a1;
                    sub_4a2720(var_22c);

                    if (!*(&var_208_1 + 3))
                        QHash_ValueSet();

                    int32_t var_228_32 = 0x935c10;
                    var_22c = 3;
                    sub_4b2450(&a1[0xb], 0, 0x40, 0x10, 0x10, var_22c, var_228_32);

                    if (!*(&var_208_1 + 3))
                        sub_4b0d50();

                    int32_t* eax_47 = g_5ca114;
                    int32_t edx_23 = a1[0x13];
                    var_22c = nullptr;
                    (*(*eax_47 + 0x8c))(eax_47, var_22c, edx_23);
                    bool cond:4_1 = g_bcad08 + 0x64 > g_bcad04;
                    int32_t* eax_50 = g_bcad00;
                    var_214 = nullptr;
                    int32_t var_228_34 = 0;
                    int32_t ecx_69 = *eax_50;
                    var_22c = &var_214;
                    int32_t edi_4;

                    if (cond:4_1)
                    {
                        result = (*(ecx_69 + 0xc))(eax_50, 0x2020);
                        esp = &var_22c;
                        edi_4 = 0;
                        g_bcad08 = 0x64;

                        if (!result)
                        {
                        label_4a406f:

                            if (var_21c)
                            {
                                uint32_t esi_3 = 0;

                                if (ebp_1 > 0)
                                {
                                    long double x87_r7_23 = *(&var_208_1 + 4) * 0.0625f;
                                    void var_1a0;
                                    int32_t* eax_51 = &var_1a0;
                                    uint32_t i_3 = (ebp_1 + 1) >> 1;
                                    esi_3 = i_3 * 6;
                                    uint32_t i_1;

                                    do
                                    {
                                        var_218 = g_bcabb8;
                                        int32_t var_218_1 = var_218;
                                        *var_21c = var_218_1;
                                        var_21c[1] = *eax_51;
                                        var_21c[2] = var_1f4_1;
                                        var_21c[3] = var_1f0_2;
                                        var_21c[5] = 0;
                                        var_21c[6] = 0;
                                        var_218_1 = g_bcabb8;
                                        float* ecx_80 = &var_21c[7];
                                        int32_t var_218_2 = var_218_1;
                                        var_21c = ecx_80;
                                        *ecx_80 = var_218_2 + g_bcabc0;
                                        var_21c[1] = *eax_51;
                                        var_21c[2] = var_1f4_1;
                                        var_21c[3] = var_1f0_2;
                                        var_21c[5] = g_bcabc0 * 0.0625f;
                                        var_21c[6] = 0;
                                        var_218_2 = g_bcabb8;
                                        float* ecx_87 = &var_21c[7];
                                        int32_t var_218_3 = var_218_2;
                                        var_21c = ecx_87;
                                        *ecx_87 = var_218_3 + g_bcabc0;
                                        var_21c[1] = eax_51[1];
                                        var_21c[2] = var_1f4_1;
                                        var_21c[3] = var_1f0_2;
                                        var_21c[5] = g_bcabc0 * 0.0625f;
                                        var_21c[6] = x87_r7_23;
                                        var_218_3 = g_bcabb8;
                                        float* ecx_94 = &var_21c[7];
                                        int32_t var_218_4 = var_218_3;
                                        var_21c = ecx_94;
                                        *ecx_94 = var_218_4;
                                        var_21c[1] = eax_51[1];
                                        eax_51 = &eax_51[2];
                                        var_21c[2] = var_1f4_1;
                                        var_21c[3] = var_1f0_2;
                                        var_21c[5] = 0;
                                        var_21c[6] = x87_r7_23;
                                        var_218_4 = g_bcabb8;
                                        int32_t var_218_5 = var_218_4;
                                        float* ecx_101 = &var_21c[7];
                                        var_21c = ecx_101;
                                        *ecx_101 = var_218_5 + g_bcabc0;
                                        var_21c[1] = eax_51[-1];
                                        var_21c[2] = var_1f4_1;
                                        var_21c[3] = var_1f0_2;
                                        var_21c[5] = g_bcabc0 * 0.0625f;
                                        var_21c[6] = x87_r7_23;
                                        var_218_5 = g_bcabb8;
                                        float* ecx_108 = &var_21c[7];
                                        var_218 = var_218_5;
                                        var_21c = ecx_108;
                                        *ecx_108 = var_218;
                                        var_21c[1] = eax_51[-2];
                                        var_21c[2] = var_1f4_1;
                                        var_21c[3] = var_1f0_2;
                                        var_21c[5] = 0;
                                        var_21c[6] = 0;
                                        i_1 = i_3;
                                        i_3 -= 1;
                                        var_21c = &var_21c[7];
                                    } while (i_1 != 1);
                                }

                                int32_t* eax_52 = g_bcad00;
                                (*(*eax_52 + 0x10))(eax_52);
                                int32_t* eax_53 = g_5ca114;
                                result =
                                    (*(*eax_53 + 0x7c))(eax_53, 4, g_bcad00, edi_4, esi_3, 0);
                                esp = &var_22c;
                            }
                        }
                    }
                    else
                    {
                        result = (*(ecx_69 + 0xc))(eax_50, 0x1020);
                        esp = &var_22c;
                        int32_t ecx_70 = g_bcad08;
                        float* esi_2 = var_21c;
                        edi_4 = ecx_70;
                        g_bcad08 = ecx_70 + 0x64;
                        var_21c = &esi_2[ecx_70 * 7];

                        if (!result)
                            goto label_4a406f;
                    }
                }
            }
        }
        else
        {
            int32_t var_228_27 = 0x1020;
            var_22c = eax_37;
            result = (*(ecx_19 + 0xc))(var_22c, var_228_27);
            esp = &var_224;
            int32_t ecx_20 = g_bcad08;
            float* edi_1 = var_214;
            *(&var_208_1 + 4) = ecx_20;
            g_bcad08 = ecx_20 + 0x64;
            var_214 = &edi_1[ecx_20 * 7];

            if (!result)
                goto label_4a3d0f;
        }
    }

❓️❓️    *esp;
    esp[1];
    esp[2];
    esp[3];
    return result;
}
