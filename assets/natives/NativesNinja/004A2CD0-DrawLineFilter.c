#include "004A2CD0-DrawLineFilter.h"
/* 0x004a2cd0 DrawLineFilter full linked: callers=0 callees=3 */
int32_t sub_4a2cd0(int32_t a1 @ ebp, void* a2)

{
    int32_t ebx;
    int32_t var_8c = ebx;
    int32_t result_1 = a1;
    int32_t esi;
    int32_t var_94 = esi;
    int32_t edi;
    int32_t var_98 = edi;
    long double x87_r7 = *(a2 + 0x2c);
    long double temp0 = g_bcadc0;
    x87_r7 - temp0;
    float var_78;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
        var_78 = g_bcadc0;
    else
        var_78 = *(a2 + 0x2c);

    int32_t* eax_2 = g_5ca114;
    void var_40;
    void* var_9c = &var_40;
    void* var_a0 = 3;
    (*(*eax_2 + 0x30))(eax_2, var_a0, var_9c);
    long double x87_r7_3 = g_bcabec * var_78;
    void* ecx_1 = g_bcade8;
    int32_t var_9c_1 = 0;
    var_a0 = 0x2f;
    float var_18;
    long double x87_r7_10 =
        (1f - g_bcada0 * 1f / x87_r7_3) * var_18 * (g_bcad8c - g_bcadb4) + g_bcadb4;
    *(ecx_1 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    float var_54 = x87_r7_10;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* eax_3 = g_5ca114;
    (*(*eax_3 + 0x50))(eax_3, var_a0, var_9c_1);
    int32_t* eax_4 = g_5ca114;
    int32_t var_9c_2 = 0;
    var_a0 = 0x1c;
    (*(*eax_4 + 0x50))(eax_4, var_a0, var_9c_2);
    int32_t* eax_5 = g_5ca114;
    int32_t var_9c_3 = 0;
    var_a0 = 0x1d;
    (*(*eax_5 + 0x50))(eax_5, var_a0, var_9c_3);
    int32_t* eax_6 = g_5ca114;
    int32_t var_9c_4 = 1;
    var_a0 = 0x16;
    (*(*eax_6 + 0x50))(eax_6, var_a0, var_9c_4);
    int32_t* eax_7 = g_5ca114;
    int32_t var_9c_5 = 0;
    var_a0 = 0x89;
    (*(*eax_7 + 0x50))(eax_7, var_a0, var_9c_5);
    int32_t* eax_8 = g_5ca114;
    int32_t var_9c_6 = 1;
    var_a0 = 0x1a;
    (*(*eax_8 + 0x50))(eax_8, var_a0, var_9c_6);
    int32_t* eax_9 = g_5ca114;
    int32_t var_9c_7 = 0;
    var_a0 = 0xf;
    (*(*eax_9 + 0x50))(eax_9, var_a0, var_9c_7);
    int32_t* eax_10 = g_5ca114;
    int32_t var_9c_8 = 4;
    var_a0 = 0x17;
    (*(*eax_10 + 0x50))(eax_10, var_a0, var_9c_8);
    int32_t* eax_11 = g_5ca114;
    int32_t var_9c_9 = 1;
    var_a0 = 7;
    (*(*eax_11 + 0x50))(eax_11, var_a0, var_9c_9);
    int32_t* eax_12 = g_5ca114;
    int32_t var_9c_10 = 0;
    var_a0 = 0xe;
    (*(*eax_12 + 0x50))(eax_12, var_a0, var_9c_10);
    int32_t* eax_13 = g_5ca114;
    int32_t var_9c_11 = 3;
    var_a0 = 4;
    int32_t var_a4_11 = 0;
    (*(*eax_13 + 0x94))(eax_13, 0, var_a0, var_9c_11);
    int32_t* eax_14 = g_5ca114;
    int32_t var_9c_12 = 2;
    var_a0 = 5;
    int32_t var_a4_12 = 0;
    (*(*eax_14 + 0x94))(eax_14, 0, var_a0, var_9c_12);
    int32_t* eax_15 = g_5ca114;
    int32_t var_9c_13 = 0;
    var_a0 = 6;
    int32_t var_a4_13 = 0;
    (*(*eax_15 + 0x94))(eax_15, 0, var_a0, var_9c_13);
    int32_t* eax_16 = g_5ca114;
    int32_t var_9c_14 = 3;
    var_a0 = 1;
    int32_t var_a4_14 = 0;
    (*(*eax_16 + 0x94))(eax_16, 0, var_a0, var_9c_14);
    int32_t* eax_17 = g_5ca114;
    int32_t var_9c_15 = 2;
    var_a0 = 2;
    int32_t var_a4_15 = 0;
    (*(*eax_17 + 0x94))(eax_17, 0, var_a0, var_9c_15);
    int32_t* eax_18 = g_5ca114;
    int32_t var_9c_16 = 0;
    var_a0 = 3;
    int32_t var_a4_16 = 0;
    (*(*eax_18 + 0x94))(eax_18, 0, var_a0, var_9c_16);
    int32_t* eax_19 = g_5ca114;
    int32_t var_9c_17 = 1;
    var_a0 = 1;
    int32_t var_a4_17 = 1;
    (*(*eax_19 + 0x94))(eax_19, 1, var_a0, var_9c_17);
    int32_t* eax_20 = g_5ca114;
    int32_t var_9c_18 = 0;
    var_a0 = nullptr;
    (*(*eax_20 + 0x8c))(eax_20, var_a0, var_9c_18);
    int32_t* eax_21 = g_5ca114;
    int32_t var_9c_19 = 1;
    var_a0 = 0x1b;
    (*(*eax_21 + 0x50))(eax_21, var_a0, var_9c_19);
    int32_t* eax_22 = g_5ca114;
    int32_t var_9c_20 = 5;
    var_a0 = 0x13;
    (*(*eax_22 + 0x50))(eax_22, var_a0, var_9c_20);
    int32_t* eax_23 = g_5ca114;
    int32_t ecx_13 = *eax_23;
    int32_t var_9c_21 = 6;
    var_a0 = 0x14;
    (*(ecx_13 + 0x50))(eax_23, var_a0, var_9c_21);
    bool cond:1 = g_bcad08 + 0xc8 > g_bcad04;
    int32_t* eax_26 = g_bcad00;
    int32_t var_68 = *(a2 + 0x30);
    int32_t ecx_15 = *eax_26;
    int32_t var_9c_22 = 0;
    void var_88;
    var_a0 = &var_88;
    int32_t result;
    void** esp_1;
    int32_t ebx_1;

    if (cond:1)
    {
        int32_t var_a4_23 = 0x2020;
        result = (*(ecx_15 + 0xc))(eax_26, 0x2020);
        esp_1 = &var_a0;
        ebx_1 = 0;
        g_bcad08 = 0xc8;

        if (!result)
        {
        label_4a2f6a:
            result = result_1;

            if (result)
            {
                int32_t edi_2 = 0;
                long double x87_r7_12 = g_bcabbc + 4f;
                long double x87_r6_3 = g_bcabc4 + g_bcabbc;
                x87_r6_3 - x87_r7_12;

                if (!(*(&((x87_r6_3 < x87_r7_12 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_12) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_12 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r6_19;
                    long double x87_r7_27;

                    do
                    {
                        if (edi_2 >= 0xc8)
                        {
                            int32_t* eax_38 = g_bcad00;
                            *(esp_1 - 4) = eax_38;
                            (*(*eax_38 + 0x10))();
                            int32_t* eax_39 = g_5ca114;
                            int32_t ecx_29 = g_bcad00;
                            *(esp_1 - 4) = 0;
                            *(esp_1 - 8) = edi_2;
                            int32_t edx_26 = *eax_39;
                            *(esp_1 - 0xc) = ebx_1;
                            *(esp_1 - 0x10) = ecx_29;
                            *(esp_1 - 0x14) = 2;
                            *(esp_1 - 0x18) = eax_39;
                            (*(edx_26 + 0x7c))();
                            int32_t eax_40 = g_bcad04;
                            int32_t edx_28 = g_bcad08 + 0xc8;
                            *(esp_1 - 4) = 0;
                            int32_t* eax_41 = g_bcad00;
                            int32_t ecx_30 = *eax_41;
                            *(esp_1 - 8) = &esp_1[4];

                            if (edx_28 > eax_40)
                            {
                                *(esp_1 - 0xc) = 0x2020;
                                *(esp_1 - 0x10) = eax_41;
                                result = (*(ecx_30 + 0xc))();
                                esp_1 -= 8;
                                ebx_1 = 0;
                                g_bcad08 = 0xc8;

                                if (result)
                                    goto label_4a351e;
                            }
                            else
                            {
                                *(esp_1 - 0xc) = 0x1020;
                                *(esp_1 - 0x10) = eax_41;
                                result = (*(ecx_30 + 0xc))();
                                esp_1 -= 8;
                                int32_t ecx_31 = g_bcad08;
                                ebx_1 = ecx_31;
                                int32_t edx_32 = esp_1[4] + ecx_31 * 0x1c;
                                g_bcad08 = ecx_31 + 0xc8;
                                esp_1[4] = edx_32;

                                if (result)
                                    goto label_4a351e;
                            }

                            result = esp_1[4];

                            if (!result)
                                goto label_4a351e;

                            edi_2 = 0;
                            esp_1[5] = esp_1[5] - 4f;
                        }
                        else
                        {
                            *(esp_1 + 0x18) = esp_1[5];
                            float* eax_29 = esp_1[4];
                            esp_1[9] = esp_1[6];
                            long double x87_r7_14 = esp_1[9];
                            *(esp_1 + 0x18) = g_bcabb8;
                            esp_1[9] = esp_1[6];
                            *eax_29 = esp_1[9];
                            *(esp_1[4] + 4) = x87_r7_14;
                            *(esp_1[4] + 8) = esp_1[0x11];
                            *(esp_1[4] + 0xc) = esp_1[0x12];
                            *(esp_1 + 0x18) = *(a2 + 0x20) * 255f;
                            int32_t ecx_20 = esp_1[6];
                            *(&ecx_20 + 1) |= 0x4c;
                            *(esp_1 + 0x18) = *(a2 + 0x24) * 255f;
                            void* edx_19 = esp_1[4];
                            int32_t ecx_23 = (ecx_20 << 8 | esp_1[6]) << 8;
                            *(esp_1 + 0x18) = *(a2 + 0x28) * 255f;
                            *(edx_19 + 0x10) = ecx_23 | esp_1[6];
                            float* eax_33 = esp_1[4] + 0x1c;
                            esp_1[4] = eax_33;
                            *(esp_1 + 0x18) = g_bcabc0 + g_bcabb8;
                            esp_1[9] = esp_1[6];
                            *eax_33 = esp_1[9];
                            *(esp_1[4] + 4) = x87_r7_14;
                            *(esp_1[4] + 8) = esp_1[0x11];
                            *(esp_1[4] + 0xc) = esp_1[0x12];
                            *(esp_1 + 0x18) = *(a2 + 0x20) * 255f;
                            int32_t edx_21 = esp_1[6];
                            *(&edx_21 + 1) |= 0x4c;
                            *(esp_1 + 0x18) = *(a2 + 0x24) * 255f;
                            int32_t edx_24 = (edx_21 << 8 | esp_1[6]) << 8;
                            *(esp_1 + 0x18) = *(a2 + 0x28) * 255f;
                            edi_2 += 2;
                            *(esp_1[4] + 0x10) = edx_24 | esp_1[6];
                            esp_1[4] += 0x1c;
                        }

❓️❓️                        long double x87_r7_26 = esp_1[5] + 4f;
                        esp_1[5] = x87_r7_26;
                        x87_r7_27 = x87_r7_26 + 4f;
                        x87_r6_19 = g_bcabc4 + g_bcabbc;
                        x87_r6_19 - x87_r7_27;
                    } while (!(*(&((x87_r6_19 < x87_r7_27 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_19, x87_r7_27) ? 1 : 0) << 0xa
                        | (x87_r6_19 == x87_r7_27 ? 1 : 0) << 0xe) + 1) & 1));
                }

                int32_t* eax_43 = g_bcad00;
                *(esp_1 - 4) = eax_43;
                result = (*(*eax_43 + 0x10))();

                if (edi_2 > 0)
                {
                    int32_t* eax_44 = g_5ca114;
                    int32_t ecx_34 = g_bcad00;
                    *(esp_1 - 4) = 0;
                    *(esp_1 - 8) = edi_2;
                    int32_t edx_33 = *eax_44;
                    *(esp_1 - 0xc) = ebx_1;
                    *(esp_1 - 0x10) = ecx_34;
                    *(esp_1 - 0x14) = 2;
                    *(esp_1 - 0x18) = eax_44;
                    result = (*(edx_33 + 0x7c))();
                }

❓️                long double x87_r7_28 = esp_1[0xc];
                long double temp1_1 = 0f;
                x87_r7_28 - temp1_1;
                result = (x87_r7_28 < temp1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_28, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_28 == temp1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double x87_r7_30 = esp_1[0xc] * 10f;
                    esp_1[8] = 0x3f800000;
                    long double temp2_1 = 1f;
                    x87_r7_30 - temp2_1;

                    if (*(&((x87_r7_30 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_30, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_30 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        esp_1[8] = 1f / x87_r7_30;
                        x87_r7_30 = 1f;
                    }

                    int32_t eax_46 = g_bcad04;
                    int32_t edx_35 = g_bcad08 + 0xc8;
                    *(esp_1 - 4) = 0;
                    *(esp_1 + 0x18) = x87_r7_30;
                    int32_t esi_2 = esp_1[6];
                    int32_t* eax_47 = g_bcad00;
                    esp_1[6] = esi_2;
                    *(esp_1 - 8) = &esp_1[4];
                    int32_t ecx_35 = *eax_47;
                    int32_t ebx_2;

                    if (edx_35 > eax_46)
                    {
                        *(esp_1 - 0xc) = 0x2020;
                        *(esp_1 - 0x10) = eax_47;
                        result = (*(ecx_35 + 0xc))();
                        esp_1 -= 8;
                        ebx_2 = 0;
                        g_bcad08 = 0xc8;

                        if (!result)
                        {
                        label_4a32af:
                            result = esp_1[4];

                            if (result)
                            {
                                int32_t edi_5 = 0;
                                long double x87_r7_32 = esp_1[8];
                                esp_1[5] = g_bcabbc;
                                esp_1[0xb] = x87_r7_32 + esp_1[5];
                                long double x87_r7_35 = g_bcabc4 + g_bcabbc;
                                long double temp3_1 = esp_1[0xb];
                                x87_r7_35 - temp3_1;

                                if (!(*(&((x87_r7_35 < temp3_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_35, temp3_1) ? 1 : 0) << 0xa
                                    | (x87_r7_35 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1))
                                {
                                    long double x87_r7_60;
                                    long double temp4_1;

                                    do
                                    {
                                        int32_t ebp = 0;

                                        if (esi_2 > 0)
                                        {
                                            do
                                            {
                                                if (edi_5 >= 0xc8)
                                                {
                                                    int32_t* eax_58 = g_bcad00;
                                                    *(esp_1 - 4) = eax_58;
                                                    (*(*eax_58 + 0x10))();
                                                    int32_t* eax_59 = g_5ca114;
                                                    int32_t edx_44 = g_bcad00;
                                                    *(esp_1 - 4) = 0;
                                                    *(esp_1 - 8) = edi_5;
                                                    int32_t ecx_45 = *eax_59;
                                                    *(esp_1 - 0xc) = ebx_2;
                                                    *(esp_1 - 0x10) = edx_44;
                                                    *(esp_1 - 0x14) = 2;
                                                    *(esp_1 - 0x18) = eax_59;
                                                    (*(ecx_45 + 0x7c))();
                                                    bool cond:6_1 =
                                                        g_bcad08 + 0xc8 > g_bcad04;
                                                    int32_t* eax_62 = g_bcad00;
                                                    *(esp_1 - 4) = 0;
                                                    *(esp_1 - 8) = &esp_1[4];
                                                    int32_t ecx_47 = *eax_62;

                                                    if (cond:6_1)
                                                    {
                                                        *(esp_1 - 0xc) = 0x2020;
                                                        *(esp_1 - 0x10) = eax_62;
                                                        result = (*(ecx_47 + 0xc))();
                                                        esp_1 -= 8;
                                                        ebx_2 = 0;
                                                        g_bcad08 = 0xc8;

                                                        if (result)
                                                            goto label_4a351e;
                                                    }
                                                    else
                                                    {
                                                        *(esp_1 - 0xc) = 0x1020;
                                                        *(esp_1 - 0x10) = eax_62;
                                                        result = (*(ecx_47 + 0xc))();
                                                        esp_1 -= 8;
                                                        int32_t ecx_48 = g_bcad08;
                                                        ebx_2 = ecx_48;
                                                        int32_t edx_48 = esp_1[4] + ecx_48 * 0x1c;
                                                        g_bcad08 = ecx_48 + 0xc8;
                                                        esp_1[4] = edx_48;

                                                        if (result)
                                                            goto label_4a351e;
                                                    }

                                                    result = esp_1[4];

                                                    if (!result)
                                                        goto label_4a351e;

                                                    edi_5 = 0;
                                                }
                                                else
                                                {
                                                    *(esp_1 + 0x24) = esp_1[5];
                                                    int32_t ecx_38 = esp_1[9];
                                                    *(esp_1 - 4) = 0x935bf0;
                                                    esp_1[9] = ecx_38;
                                                    esp_1[9] = esp_1[9];
                                                    long double x87_r7_39 =
                                                        sub_4b4770() * g_bcabc0;
                                                    float* edx_40 = esp_1[4];
                                                    *(esp_1 - 8) = 0x935bf0;
                                                    *edx_40 = x87_r7_39 + g_bcabb8;
                                                    *(esp_1[4] + 4) = esp_1[9];
                                                    *(esp_1[4] + 8) = esp_1[0x11];
                                                    *(esp_1[4] + 0xc) = esp_1[0x12];
                                                    long double x87_r7_45 = sub_4b4770() * 255f;
                                                    *(esp_1 - 0xc) = 0x935bf0;
                                                    *(esp_1 + 0x34) = x87_r7_45;
                                                    int32_t eax_51 = esp_1[0xd];
                                                    *(esp_1 + 0x34) = esp_1[0xc] * 255f;
                                                    int32_t esi_9 = ((esp_1[0xd] << 8 | eax_51) << 8
                                                        | eax_51) << 8 | eax_51;
                                                    *(esp_1[4] + 0x10) = esi_9;
                                                    esp_1[4] += 0x1c;
                                                    long double x87_r7_49 = sub_4b4770() * 50f;
                                                    float* eax_55 = esp_1[4];
                                                    *eax_55 = x87_r7_49 + eax_55[-7];
                                                    long double x87_r7_52 =
                                                        g_bcabc0 + g_bcabb8;
                                                    float* ecx_40 = esp_1[4];
                                                    long double temp5_1 = *ecx_40;
                                                    x87_r7_52 - temp5_1;

                                                    if (!(*(&((x87_r7_52 < temp5_1 ? 1 : 0) << 8
                                                            | (FCMP_UO(x87_r7_52, temp5_1) ? 1 : 0)
                                                            << 0xa | (x87_r7_52 == temp5_1 ? 1 : 0) << 0xe
                                                            | 0x3800) + 1) & 0x41))
                                                        x87_r7_52 = *ecx_40;

                                                    *ecx_40 = x87_r7_52;
                                                    *(esp_1[4] + 4) = esp_1[9];
                                                    *(esp_1[4] + 8) = esp_1[0x11];
                                                    *(esp_1[4] + 0xc) = esp_1[0x12];
                                                    *(esp_1[4] + 0x10) = esi_9;
                                                    esi_2 = esp_1[6];
                                                    esp_1[4] += 0x1c;
                                                    edi_5 += 2;
                                                }

❓️                                                ebp += 1;
                                            } while (ebp < esi_2);
                                        }

                                        long double x87_r7_57 = esp_1[8];
                                        esp_1[5] = esp_1[0xb];
                                        esp_1[0xb] = x87_r7_57 + esp_1[5];
                                        x87_r7_60 = g_bcabc4 + g_bcabbc;
                                        temp4_1 = esp_1[0xb];
                                        x87_r7_60 - temp4_1;
                                    } while (!(*(&((x87_r7_60 < temp4_1 ? 1 : 0) << 8
                                        | (FCMP_UO(x87_r7_60, temp4_1) ? 1 : 0) << 0xa
                                        | (x87_r7_60 == temp4_1 ? 1 : 0) << 0xe) + 1) & 1));
                                }

                                int32_t* eax_65 = g_bcad00;
                                *(esp_1 - 4) = eax_65;
                                result = (*(*eax_65 + 0x10))();

                                if (edi_5 > 0)
                                {
                                    int32_t* eax_66 = g_5ca114;
                                    int32_t ecx_51 = g_bcad00;
                                    *(esp_1 - 4) = 0;
                                    *(esp_1 - 8) = edi_5;
                                    int32_t edx_49 = *eax_66;
                                    *(esp_1 - 0xc) = ebx_2;
                                    *(esp_1 - 0x10) = ecx_51;
                                    *(esp_1 - 0x14) = 2;
                                    *(esp_1 - 0x18) = eax_66;
                                    result = (*(edx_49 + 0x7c))();
                                }
                            }
                        }
                    }
                    else
                    {
                        *(esp_1 - 0xc) = 0x1020;
                        *(esp_1 - 0x10) = eax_47;
                        result = (*(ecx_35 + 0xc))();
                        esp_1 -= 8;
                        int32_t ecx_36 = g_bcad08;
                        ebx_2 = ecx_36;
                        int32_t edx_39 = esp_1[4] + ecx_36 * 0x1c;
                        g_bcad08 = ecx_36 + 0xc8;
                        esp_1[4] = edx_39;

                        if (!result)
                            goto label_4a32af;
                    }
                }
            }
        }
    }
    else
    {
        int32_t var_a4_22 = 0x1020;
        result = (*(ecx_15 + 0xc))(eax_26, 0x1020);
        esp_1 = &var_a0;
        int32_t ecx_16 = g_bcad08;
        ebx_1 = ecx_16;
        g_bcad08 = ecx_16 + 0xc8;
        result_1 += ecx_16 * 0x1c;

        if (!result)
            goto label_4a2f6a;
    }
❓️label_4a351e:
    *esp_1;
    esp_1[1];
    esp_1[2];
    esp_1[3];
    return result;
}
