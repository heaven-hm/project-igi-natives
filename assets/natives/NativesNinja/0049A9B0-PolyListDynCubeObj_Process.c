#include "0049A9B0-PolyListDynCubeObj_Process.h"
/* 0x0049a9b0 PolyListDynCubeObj_Process full linked: callers=0 callees=8 */
int32_t sub_49a9b0(int32_t a1 @ ebp, void* a2)

{
    int32_t ebx;
    int32_t var_e8 = ebx;
    int32_t esi;
    int32_t var_f0 = esi;
    void* ebx_1 = *(a2 + 0xc);
    int32_t edi;
    int32_t var_f4 = edi;
    void* var_ac = ebx_1;
    int32_t var_d8 = 0x3f800000;
    int32_t var_d4 = 0x3f800000;
    int32_t var_d0 = 0x3f800000;
    int32_t var_cc = 0;
    int32_t var_c8 = 0;
    int32_t var_c4 = 0;

    if (*(ebx_1 + 0xa4))
    {
        long double x87_r7_1 = 0f;
        long double x87_r6_1 = 0f;
        int32_t i_3 = g_b041e8;
        float var_d4_1 = x87_r6_1;
        long double x87_r5_1 = 0f;
        float var_d0_1 = x87_r5_1;

        if (i_3 > 0)
        {
            int32_t* ecx_1 = g_b041e4;
            int32_t i_2 = i_3;
            int32_t i;

            do
            {
                void* eax_4 = *ecx_1 * g_b041f0 + g_b041e0;

                if (*(eax_4 + 0x25))
                {
                    x87_r7_1 = x87_r7_1 + *(eax_4 + 0xc);
                    x87_r6_1 = x87_r6_1 + *(eax_4 + 0x10);
                    x87_r5_1 = x87_r5_1 + *(eax_4 + 0x14);
                }

                ecx_1 = &ecx_1[1];
                i = i_2;
                i_2 -= 1;
            } while (i != 1);
            var_d0_1 = x87_r5_1;
            var_d4_1 = x87_r6_1;
        }

        float ecx_2 = g_b818ac;
        float eax_5 = g_b818b4;
        float edx_2 = g_b818b0;
        long double x87_r7_9 = ecx_2 + x87_r7_1 * 0.5f;
        long double temp1_1 = 1f;
        x87_r7_9 - temp1_1;

        if (!(*(&((x87_r7_9 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float var_d8_2 = 1f - ecx_2;

        long double x87_r7_13 = edx_2 + var_d4_1 * 0.5f;
        long double temp2_1 = 1f;
        x87_r7_13 - temp2_1;

        if (!(*(&((x87_r7_13 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_13 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float var_d4_3 = 1f - edx_2;

        long double x87_r7_17 = eax_5 + var_d0_1 * 0.5f;
        long double temp4_1 = 1f;
        x87_r7_17 - temp4_1;

        if (!(*(&((x87_r7_17 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_17 == temp4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            float var_d0_3 = 1f - eax_5;
    }

    void* eax_7 = g_bcade8;
    int32_t ecx_3 = g_72057c;

    if (*(eax_7 + 4) != ecx_3)
    {
        *(eax_7 + 4) = ecx_3;
        (*(g_bcade8 + (g_72057c << 2) + 0x14))(0);
    }

    void* eax_8 = g_bcad7c;
    int32_t ecx_5 = g_7205a4;

    if (*(eax_8 + 4) != ecx_5)
    {
        *(eax_8 + 4) = ecx_5;
        (*(g_bcad7c + (g_7205a4 << 2) + 0x14))(0);
    }

    void* eax_10 = g_bcadac;
    int32_t ecx_7 = g_7205a8;

    if (*(eax_10 + 4) != ecx_7)
    {
        *(eax_10 + 4) = ecx_7;
        (*(g_bcadac + (g_7205a8 << 2) + 0x14))(0);
    }

    int32_t* eax_12 = *(ebx_1 + 0x6c);
    double var_68;
    memcpy(&var_68, ebx_1 + 0x20, 0x18);
    var_68 = **eax_12 + var_68;
    double var_60;
    double var_60_1 = *(*eax_12 + 4) + var_60;
    int32_t* eax_14 = *(ebx_1 + 0xb4);
    float var_50 = 4096f;
    double var_58;
    double var_58_1 = *(*eax_12 + 8) + var_58;
    double* var_fc;

    if (eax_14 && *eax_14)
    {
        double* esi_3 = *eax_14;
        uint32_t eax_16 = sub_4d97e0();
        int32_t eax_17 = 0;
        eax_17 = *(esi_3 + 0x1c);
        int32_t eax_18 = *(((eax_16 * 0x180 + eax_17) << 2) + &g_a96ae0);

        if (eax_18)
        {
            double* var_f8_4 = &var_68;
            var_fc = esi_3;
            eax_18(var_fc, var_f8_4);
        }
    }

    var_fc = &var_68;
    sub_49b2d0(var_fc, var_50);
    int32_t* eax_19 = g_5ca114;
    int32_t ecx_10 = *eax_19;
    int32_t var_f8_6 = 0;
    var_fc = 0x89;
    (*(ecx_10 + 0x50))(eax_19, var_fc, var_f8_6);
    float var_a4 = *(ebx_1 + 0x20) - g_bcab08;
    float var_a0 = *(ebx_1 + 0x28) - g_bcab10;
    long double x87_r7_31 = *(ebx_1 + 0x30) - g_bcab18;
    float* var_f8_7 = &var_a4;
    var_a4 = g_bcabec * var_a4;
    long double x87_r6_6 = var_a0 * g_bcabec;
    float var_98;
    var_fc = &var_98;
    float var_a0_1 = x87_r6_6;
    float var_9c = x87_r7_31 * g_bcabec;
    memcpy(&var_98, ebx_1 + 0x70, 0x28);
    var_98 = var_98 * g_bcabec;
    float var_94;
    float var_94_1 = var_94 * g_bcabec;
    float var_90;
    float var_90_1 = var_90 * g_bcabec;
    float var_8c;
    float var_8c_1 = var_8c * g_bcabec;
    float var_88;
    float var_88_1 = var_88 * g_bcabec;
    float var_84;
    float var_84_1 = var_84 * g_bcabec;
    float var_80 = var_80 * g_bcabec;
    float var_7c;
    float var_7c_1 = var_7c * g_bcabec;
    float var_78;
    float var_78_1 = var_78 * g_bcabec;
    void var_40;
    sub_4950f0(&var_40, var_fc, var_f8_7);
    int32_t* eax_20 = g_5ca114;
    int32_t edx_10 = *eax_20;
    void* var_f8_8 = &var_40;
    var_fc = 1;
    (*(edx_10 + 0x2c))(eax_20, var_fc, var_f8_8);
    char eax_21 = *(ebx_1 + 0xa0);
    int32_t var_f8_11;
    int32_t* eax_24;
    int32_t edx_12;

    if (!(eax_21 & 8))
    {
        int32_t* eax_25 = g_5ca114;

        if (!(eax_21 & 0x10))
        {
            int32_t edx_14 = *eax_25;
            int32_t var_f8_15 = 1;
            var_fc = 0x1b;
            (*(edx_14 + 0x50))(eax_25, var_fc, var_f8_15);
            int32_t* eax_28 = g_5ca114;
            int32_t var_f8_16 = 5;
            var_fc = 0x13;
            (*(*eax_28 + 0x50))(eax_28, var_fc, var_f8_16);
            eax_24 = g_5ca114;
            var_f8_11 = 6;
            edx_12 = *eax_24;
            var_fc = 0x14;
            (*(edx_12 + 0x50))(eax_24, var_fc, var_f8_11);
        }
        else
        {
            int32_t ecx_12 = *eax_25;
            int32_t var_f8_12 = 1;
            var_fc = 0x1b;
            (*(ecx_12 + 0x50))(eax_25, var_fc, var_f8_12);
            int32_t* eax_26 = g_5ca114;
            int32_t var_f8_13 = 1;
            var_fc = 0x13;
            (*(*eax_26 + 0x50))(eax_26, var_fc, var_f8_13);
            int32_t* eax_27 = g_5ca114;
            int32_t var_f8_14 = 4;
            var_fc = 0x14;
            (*(*eax_27 + 0x50))(eax_27, var_fc, var_f8_14);
        }
    }
    else
    {
        int32_t* eax_22 = g_5ca114;
        int32_t var_f8_9 = 1;
        var_fc = 0x1b;
        (*(*eax_22 + 0x50))(eax_22, var_fc, var_f8_9);
        int32_t* eax_23 = g_5ca114;
        int32_t var_f8_10 = 2;
        var_fc = 0x13;
        (*(*eax_23 + 0x50))(eax_23, var_fc, var_f8_10);
        eax_24 = g_5ca114;
        var_f8_11 = 2;
        edx_12 = *eax_24;
        var_fc = 0x14;
        (*(edx_12 + 0x50))(eax_24, var_fc, var_f8_11);
    }
    int32_t var_44 = *(ebx_1 + 0x94) + g_bcab04 + 1;
    sub_4b4720(&g_720570);
    float var_70 = g_bcadc0 * 1.00999999f;
    int32_t eax_31 = sub_498070();
    var_fc = &var_70;
    (*((eax_31 << 2) + &g_a94e84))(var_fc);
    bool cond:6 = g_bcad88 + 0xc0 > g_bcad84;
    int32_t* eax_33 = g_bcad80;
    int32_t var_f8_18 = 0;
    int32_t ecx_16 = *eax_33;
    int32_t var_e4;
    var_fc = &var_e4;
    int32_t result;
    double** esp_1;
    int32_t edx_19;

    if (cond:6)
    {
        int32_t var_100_12 = 0x2020;
        result = (*(ecx_16 + 0xc))(eax_33, 0x2020);
        esp_1 = &var_fc;
        var_e4 = 0;
        g_bcad88 = 0xc0;

        if (!result)
        {
            edx_19 = a1;
        label_49aed6:
            int32_t ebp_1 = 0;

            if (edx_19)
            {
                int32_t edi_1 = 0;
                bool cond:7_1 = *(ebx_1 + 0x9c) <= 0;
                int32_t var_e8_1 = edx_19;
                int32_t var_c0 = 0;

                if (!cond:7_1)
                {
                    int32_t var_b0_1 = 0;
                    bool cond:15_1;

                    do
                    {
                        int32_t ecx_19 = *(ebx_1 + 0x6c);
                        void* eax_35 = esp_1[5];
                        esp_1[0x21] = ecx_19;
                        void* eax_36 = eax_35 + 0x10;
                        void* esi_6 = ecx_19 + ebp_1 + 0x18;
                        void* ecx_20 = ecx_19 + ebp_1 + 0xc;
                        esp_1[0x11] = 3;
                        int32_t i_1;

                        do
                        {
                            int32_t* ebx_2 = *(ecx_20 - 0xc);
                            int32_t* edx_20 = eax_36 - 0x10;
                            long double x87_r7_53 = esp_1[7];
                            esi_6 += 8;
                            *edx_20 = *ebx_2;
                            ecx_20 += 4;
                            eax_36 += 0x18;
                            edx_20[1] = ebx_2[1];
                            edx_20[2] = ebx_2[2];
                            float* edx_21 = *(ecx_20 - 4);
                            *(esp_1 + 0x34) = (x87_r7_53 * *edx_21 + esp_1[0xa]) * 255f;
                            int32_t ebx_4 = esp_1[0xd];
                            *(esp_1 + 0x34) = *(ecx_20 + 0x20) * 255f;
                            int32_t ebx_6 = (ebx_4 | esp_1[0xd] << 8) << 8;
                            *(esp_1 + 0x34) = (esp_1[8] * edx_21[1] + esp_1[0xb]) * 255f;
                            int32_t ebx_8 = (ebx_6 | esp_1[0xd]) << 8;
                            *(esp_1 + 0x34) = (esp_1[9] * edx_21[2] + esp_1[0xc]) * 255f;
                            *(eax_36 - 0x1c) = ebx_8 | esp_1[0xd];
                            *(eax_36 - 0x18) = *(esi_6 - 8);
                            *(eax_36 - 0x14) = *(esi_6 - 4);
                            i_1 = esp_1[0x11];
                            esp_1[0x11] = i_1 - 1;
                        } while (i_1 != 1);
                        int32_t ebp_7 = esp_1[0x13];
                        int32_t eax_37 = esp_1[0x21];
                        ebx_1 = esp_1[0x12];
                        edi_1 += 1;
                        void* ecx_21 = *(eax_37 + ebp_7 + 0x48);
                        int32_t esi_7;
                        int32_t edx_36;

                        if (!ecx_21)
                        {
                            esi_7 = esp_1[0xf];

                            if (esi_7 >= *(ebx_1 + 0x9c) - 1 || *(eax_37 + ebp_7 + 0x98)
                                || edi_1 >= 0x3f)
                            {
                                int32_t* eax_46 = g_5ca114;
                                *(esp_1 - 4) = 0;
                                *(esp_1 - 8) = 0;
                                *(esp_1 - 0xc) = eax_46;
                                (*(*eax_46 + 0x8c))();
                                int32_t* eax_47 = g_5ca114;
                                *(esp_1 - 4) = 3;
                                *(esp_1 - 8) = 4;
                                *(esp_1 - 0xc) = 0;
                                int32_t ecx_32 = *eax_47;
                                *(esp_1 - 0x10) = eax_47;
                                (*(ecx_32 + 0x94))();
                                int32_t* eax_48 = g_5ca114;
                                *(esp_1 - 4) = 3;
                                *(esp_1 - 8) = 1;
                                *(esp_1 - 0xc) = 0;
                                int32_t edx_38 = *eax_48;
                                *(esp_1 - 0x10) = eax_48;
                                (*(edx_38 + 0x94))();
                                int32_t* eax_49 = g_bcad80;
                                *(esp_1 - 4) = eax_49;
                                (*(*eax_49 + 0x10))();
                                int32_t* eax_50 = g_5ca114;
                                *(esp_1 - 4) = 0;
                                *(esp_1 - 8) = edi_1 * 3;
                                int32_t edx_39 = *eax_50;
                                *(esp_1 - 0xc) = esp_1[6];
                                *(esp_1 - 0x10) = g_bcad80;
                                *(esp_1 - 0x14) = 4;
                                *(esp_1 - 0x18) = eax_50;
                                (*(edx_39 + 0x7c))();
                                int32_t eax_51 = g_bcad84;
                                int32_t edx_41 = g_bcad88 + 0xc0;
                                *(esp_1 - 4) = 0;
                                int32_t* eax_52 = g_bcad80;
                                int32_t ecx_37 = *eax_52;
                                *(esp_1 - 8) = &esp_1[4];

                                if (edx_41 > eax_51)
                                {
                                    *(esp_1 - 0xc) = 0x2020;
                                    *(esp_1 - 0x10) = eax_52;
                                    result = (*(ecx_37 + 0xc))();
                                    esp_1 -= 8;
                                    esp_1[6] = 0;
                                    g_bcad88 = 0xc0;

                                    if (result)
                                        goto label_49b24e;

                                    edx_36 = esp_1[4];
                                }
                                else
                                {
                                    *(esp_1 - 0xc) = 0x1020;
                                    *(esp_1 - 0x10) = eax_52;
                                    result = (*(ecx_37 + 0xc))();
                                    esp_1 -= 8;
                                    int32_t ecx_38 = g_bcad88;
                                    int32_t edi_3 = esp_1[4];
                                    esp_1[6] = ecx_38;
                                    edx_36 = edi_3 + ecx_38 * 0x18;
                                    g_bcad88 = ecx_38 + 0xc0;
                                    esp_1[4] = edx_36;

                                    if (result)
                                        goto label_49b24e;
                                }

                                if (!edx_36)
                                    goto label_49b24e;

                                esp_1[5] = edx_36;
                                edi_1 = 0;
                            }
                            else
                                esp_1[5] = &esp_1[5][9];
                        }
                        else
                        {
                            esi_7 = esp_1[0xf];

                            if (esi_7 >= *(ebx_1 + 0x9c) - 1 || *(eax_37 + ebp_7 + 0x98) != ecx_21
                                || edi_1 >= 0x3f)
                            {
                                int32_t* eax_38 = g_5ca114;
                                *(esp_1 - 4) = *(ecx_21 + 0x20);
                                *(esp_1 - 8) = 0;
                                int32_t edx_28 = *eax_38;
                                *(esp_1 - 0xc) = eax_38;
                                (*(edx_28 + 0x8c))();
                                int32_t* eax_39 = g_5ca114;
                                *(esp_1 - 4) = 2;
                                *(esp_1 - 8) = 4;
                                *(esp_1 - 0xc) = 0;
                                int32_t edx_29 = *eax_39;
                                *(esp_1 - 0x10) = eax_39;
                                (*(edx_29 + 0x94))();
                                int32_t* eax_40 = g_5ca114;
                                *(esp_1 - 4) = 4;
                                *(esp_1 - 8) = 1;
                                *(esp_1 - 0xc) = 0;
                                int32_t ecx_23 = *eax_40;
                                *(esp_1 - 0x10) = eax_40;
                                (*(ecx_23 + 0x94))();
                                int32_t* eax_41 = g_bcad80;
                                *(esp_1 - 4) = eax_41;
                                (*(*eax_41 + 0x10))();
                                int32_t* eax_42 = g_5ca114;
                                *(esp_1 - 4) = 0;
                                *(esp_1 - 8) = edi_1 * 3;
                                int32_t ecx_24 = *eax_42;
                                *(esp_1 - 0xc) = esp_1[6];
                                *(esp_1 - 0x10) = g_bcad80;
                                *(esp_1 - 0x14) = 4;
                                *(esp_1 - 0x18) = eax_42;
                                (*(ecx_24 + 0x7c))();
                                bool cond:10_1 = g_bcad88 + 0xc0 > g_bcad84;
                                int32_t* eax_45 = g_bcad80;
                                *(esp_1 - 4) = 0;
                                *(esp_1 - 8) = &esp_1[4];
                                int32_t ecx_26 = *eax_45;

                                if (cond:10_1)
                                {
                                    *(esp_1 - 0xc) = 0x2020;
                                    *(esp_1 - 0x10) = eax_45;
                                    result = (*(ecx_26 + 0xc))();
                                    esp_1 -= 8;
                                    esp_1[6] = 0;
                                    g_bcad88 = 0xc0;

                                    if (result)
                                        goto label_49b24e;

                                    edx_36 = esp_1[4];
                                }
                                else
                                {
                                    *(esp_1 - 0xc) = 0x1020;
                                    *(esp_1 - 0x10) = eax_45;
                                    result = (*(ecx_26 + 0xc))();
                                    esp_1 -= 8;
                                    int32_t ecx_27 = g_bcad88;
                                    int32_t edi_2 = esp_1[4];
                                    esp_1[6] = ecx_27;
                                    edx_36 = edi_2 + ecx_27 * 0x18;
                                    g_bcad88 = ecx_27 + 0xc0;
                                    esp_1[4] = edx_36;

                                    if (result)
                                        goto label_49b24e;
                                }

                                if (!edx_36)
                                    goto label_49b24e;

                                esp_1[5] = edx_36;
                                edi_1 = 0;
                            }
                            else
                                esp_1[5] = &esp_1[5][9];
                        }
                        ebp_1 = ebp_7 + 0x50;
❓️❓️                        cond:15_1 = esi_7 + 1 < *(ebx_1 + 0x9c);
                        esp_1[0xf] = esi_7 + 1;
                        esp_1[0x13] = ebp_1;
                    } while (cond:15_1);
                }

                int32_t* eax_54 = g_bcad80;
                *(esp_1 - 4) = eax_54;
                (*(*eax_54 + 0x10))();
                esp_1[0xd] = esp_1[0x10];
                int32_t eax_55 = sub_498070();
                *(esp_1 - 4) = &esp_1[0xd];
                result = (*((eax_55 << 2) + &g_a94e84))();
            }
        }
    }
    else
    {
        int32_t var_100_11 = 0x1020;
        result = (*(ecx_16 + 0xc))(eax_33, 0x1020);
        esp_1 = &var_fc;
        int32_t ecx_17 = g_bcad88;
        var_e4 = ecx_17;
        edx_19 = a1 + ecx_17 * 0x18;
        g_bcad88 = ecx_17 + 0xc0;
        int32_t var_ec_1 = edx_19;

        if (!result)
            goto label_49aed6;
    }
❓️❓️label_49b24e:
    *esp_1;
    esp_1[1];
    esp_1[2];
    esp_1[3];
    return result;
}
