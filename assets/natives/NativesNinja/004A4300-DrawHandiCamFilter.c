#include "004A4300-DrawHandiCamFilter.h"
/* 0x004a4300 DrawHandiCamFilter full linked: callers=0 callees=4 */
int32_t sub_4a4300(int32_t a1 @ ebp, void* a2)

{
    int32_t ebx;
    int32_t var_b0 = ebx;
    int32_t result_1 = a1;
    int32_t esi;
    int32_t var_b8 = esi;
    int32_t edi;
    int32_t var_bc = edi;
    long double x87_r7 = *(a2 + 0x2c);
    long double temp0 = g_bcadc0;
    x87_r7 - temp0;
    float var_a0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
        var_a0 = g_bcadc0;
    else
        var_a0 = *(a2 + 0x2c);

    int32_t* eax_2 = g_5ca114;
    void var_40;
    void* var_c0 = &var_40;
    void* var_c4 = 3;
    (*(*eax_2 + 0x30))(eax_2, var_c4, var_c0);
    long double x87_r7_3 = g_bcabec * var_a0;
    void* eax_3 = g_bcade8;
    int32_t var_c0_1 = 0;
    var_c4 = 0x2f;
    float var_18;
    long double x87_r7_10 =
        (1f - g_bcada0 * 1f / x87_r7_3) * var_18 * (g_bcad8c - g_bcadb4) + g_bcadb4;
    *(eax_3 + 4) = 0xffffffff;
    *(g_bcad7c + 4) = 0xffffffff;
    float var_94 = x87_r7_10;
    *(g_bcadac + 4) = 0xffffffff;
    *(g_bcadc4 + 4) = 0xffffffff;
    int32_t* eax_5 = g_5ca114;
    (*(*eax_5 + 0x50))(eax_5, var_c4, var_c0_1);
    int32_t* eax_6 = g_5ca114;
    int32_t var_c0_2 = 0;
    var_c4 = 0x1c;
    (*(*eax_6 + 0x50))(eax_6, var_c4, var_c0_2);
    int32_t* eax_7 = g_5ca114;
    int32_t var_c0_3 = 0;
    var_c4 = 0x1d;
    (*(*eax_7 + 0x50))(eax_7, var_c4, var_c0_3);
    int32_t* eax_8 = g_5ca114;
    int32_t var_c0_4 = 1;
    var_c4 = 0x16;
    (*(*eax_8 + 0x50))(eax_8, var_c4, var_c0_4);
    int32_t* eax_9 = g_5ca114;
    int32_t var_c0_5 = 0;
    var_c4 = 0x89;
    (*(*eax_9 + 0x50))(eax_9, var_c4, var_c0_5);
    int32_t* eax_10 = g_5ca114;
    int32_t var_c0_6 = 1;
    var_c4 = 0x1a;
    (*(*eax_10 + 0x50))(eax_10, var_c4, var_c0_6);
    int32_t* eax_11 = g_5ca114;
    int32_t var_c0_7 = 0;
    var_c4 = 0xf;
    (*(*eax_11 + 0x50))(eax_11, var_c4, var_c0_7);
    int32_t* eax_12 = g_5ca114;
    int32_t var_c0_8 = 4;
    var_c4 = 0x17;
    (*(*eax_12 + 0x50))(eax_12, var_c4, var_c0_8);
    int32_t* eax_13 = g_5ca114;
    int32_t var_c0_9 = 0;
    var_c4 = 7;
    (*(*eax_13 + 0x50))(eax_13, var_c4, var_c0_9);
    int32_t* eax_14 = g_5ca114;
    int32_t var_c0_10 = 0;
    var_c4 = 0xe;
    (*(*eax_14 + 0x50))(eax_14, var_c4, var_c0_10);
    int32_t* eax_15 = g_5ca114;
    int32_t var_c0_11 = 3;
    var_c4 = 4;
    int32_t var_c8_11 = 0;
    (*(*eax_15 + 0x94))(eax_15, 0, var_c4, var_c0_11);
    int32_t* eax_16 = g_5ca114;
    int32_t var_c0_12 = 2;
    var_c4 = 5;
    int32_t var_c8_12 = 0;
    (*(*eax_16 + 0x94))(eax_16, 0, var_c4, var_c0_12);
    int32_t* eax_17 = g_5ca114;
    int32_t var_c0_13 = 0;
    var_c4 = 6;
    int32_t var_c8_13 = 0;
    (*(*eax_17 + 0x94))(eax_17, 0, var_c4, var_c0_13);
    int32_t* eax_18 = g_5ca114;
    int32_t var_c0_14 = 3;
    var_c4 = 1;
    int32_t var_c8_14 = 0;
    (*(*eax_18 + 0x94))(eax_18, 0, var_c4, var_c0_14);
    int32_t* eax_19 = g_5ca114;
    int32_t var_c0_15 = 2;
    var_c4 = 2;
    int32_t var_c8_15 = 0;
    (*(*eax_19 + 0x94))(eax_19, 0, var_c4, var_c0_15);
    int32_t* eax_20 = g_5ca114;
    int32_t var_c0_16 = 0;
    var_c4 = 3;
    int32_t var_c8_16 = 0;
    (*(*eax_20 + 0x94))(eax_20, 0, var_c4, var_c0_16);
    int32_t* eax_21 = g_5ca114;
    int32_t var_c0_17 = 1;
    var_c4 = 1;
    int32_t var_c8_17 = 1;
    (*(*eax_21 + 0x94))(eax_21, 1, var_c4, var_c0_17);
    int32_t* eax_22 = g_5ca114;
    int32_t var_c0_18 = 0;
    var_c4 = nullptr;
    (*(*eax_22 + 0x8c))(eax_22, var_c4, var_c0_18);
    int32_t* eax_23 = g_5ca114;
    int32_t var_c0_19 = 1;
    var_c4 = 0x1b;
    (*(*eax_23 + 0x50))(eax_23, var_c4, var_c0_19);
    int32_t* eax_24 = g_5ca114;
    int32_t var_c0_20 = 5;
    var_c4 = 0x13;
    (*(*eax_24 + 0x50))(eax_24, var_c4, var_c0_20);
    int32_t* eax_25 = g_5ca114;
    int32_t ecx_12 = *eax_25;
    int32_t var_c0_21 = 6;
    var_c4 = 0x14;
    (*(ecx_12 + 0x50))(eax_25, var_c4, var_c0_21);
    int32_t var_c0_22 = 0;
    bool cond:1 = g_bcad08 + 0xc8 > g_bcad04;
    int32_t* eax_27 = g_bcad00;
    int32_t ecx_13 = *eax_27;
    void var_ac;
    var_c4 = &var_ac;
    int32_t result;
    void** esp_1;
    int32_t ebp;

    if (cond:1)
    {
        int32_t var_c8_23 = 0x2020;
        result = (*(ecx_13 + 0xc))(eax_27, 0x2020);
        esp_1 = &var_c4;
        ebp = 0;
        g_bcad08 = 0xc8;

        if (!result)
        {
        label_4a458c:
            result = result_1;

            if (result)
            {
                int32_t ebx_2 = 0;
                long double x87_r7_12 = g_bcabbc + 4f;
                long double x87_r6_3 = g_bcabc4 + g_bcabbc;
                x87_r6_3 - x87_r7_12;

                if (!(*(&((x87_r6_3 < x87_r7_12 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_12) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_12 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r6_42;
                    long double x87_r7_28;

                    do
                    {
                        if (ebx_2 >= 0xc4)
                        {
                            int32_t* eax_49 = g_bcad00;
                            *(esp_1 - 4) = eax_49;
                            (*(*eax_49 + 0x10))();
                            int32_t* eax_50 = g_5ca114;
                            int32_t ecx_33 = g_bcad00;
                            *(esp_1 - 4) = 0;
                            *(esp_1 - 8) = ebx_2;
                            int32_t edx_38 = *eax_50;
                            *(esp_1 - 0xc) = ebp;
                            *(esp_1 - 0x10) = ecx_33;
                            *(esp_1 - 0x14) = 2;
                            *(esp_1 - 0x18) = eax_50;
                            (*(edx_38 + 0x7c))();
                            int32_t eax_51 = g_bcad04;
                            int32_t edx_40 = g_bcad08 + 0xc8;
                            *(esp_1 - 4) = 0;
                            int32_t* eax_52 = g_bcad00;
                            int32_t ecx_34 = *eax_52;
                            *(esp_1 - 8) = &esp_1[4];

                            if (edx_40 > eax_51)
                            {
                                *(esp_1 - 0xc) = 0x2020;
                                *(esp_1 - 0x10) = eax_52;
                                result = (*(ecx_34 + 0xc))();
                                esp_1 -= 8;
                                ebp = 0;
                                g_bcad08 = 0xc8;

                                if (result)
                                    goto label_4a4c7f;
                            }
                            else
                            {
                                *(esp_1 - 0xc) = 0x1020;
                                *(esp_1 - 0x10) = eax_52;
                                result = (*(ecx_34 + 0xc))();
                                esp_1 -= 8;
                                int32_t ecx_35 = g_bcad08;
                                ebp = ecx_35;
                                int32_t edx_44 = esp_1[4] + ecx_35 * 0x1c;
                                g_bcad08 = ecx_35 + 0xc8;
                                esp_1[4] = edx_44;

                                if (result)
                                    goto label_4a4c7f;
                            }

                            result = esp_1[4];

                            if (!result)
                                goto label_4a4c7f;

                            ebx_2 = 0;
                            esp_1[7] = esp_1[7] - 4f;
                        }
                        else
                        {
                            *(esp_1 + 0x14) = esp_1[7];
                            float* eax_30 = esp_1[4];
                            esp_1[5] = esp_1[5];
                            long double x87_r7_14 = esp_1[5];
                            *(esp_1 + 0x14) = g_bcabb8;
                            esp_1[5] = esp_1[5];
                            *eax_30 = esp_1[5];
                            *(esp_1[4] + 4) = x87_r7_14;
                            *(esp_1[4] + 8) = esp_1[0xa];
                            *(esp_1[4] + 0xc) = esp_1[0xb];
                            *(esp_1 + 0x14) = *(a2 + 0x20) * 255f;
                            int32_t ecx_18 = esp_1[5];
                            *(&ecx_18 + 1) |= 0x4c;
                            *(esp_1 + 0x14) = *(a2 + 0x24) * 255f;
                            void* edx_19 = esp_1[4];
                            int32_t ecx_21 = (ecx_18 << 8 | esp_1[5]) << 8;
                            *(esp_1 + 0x14) = *(a2 + 0x28) * 255f;
                            *(edx_19 + 0x10) = ecx_21 | esp_1[5];
                            float* eax_34 = esp_1[4] + 0x1c;
                            esp_1[4] = eax_34;
                            *(esp_1 + 0x14) = g_bcabc0 + g_bcabb8;
                            esp_1[5] = esp_1[5];
                            *eax_34 = esp_1[5];
                            *(esp_1[4] + 4) = x87_r7_14;
                            *(esp_1[4] + 8) = esp_1[0xa];
                            *(esp_1[4] + 0xc) = esp_1[0xb];
                            *(esp_1 + 0x14) = *(a2 + 0x20) * 255f;
                            int32_t edx_21 = esp_1[5];
                            *(&edx_21 + 1) |= 0x4c;
                            *(esp_1 + 0x14) = *(a2 + 0x24) * 255f;
                            int32_t edx_24 = (edx_21 << 8 | esp_1[5]) << 8;
                            *(esp_1 + 0x14) = *(a2 + 0x28) * 255f;
                            long double x87_r7_15 = x87_r7_14 + 1f;
                            *(esp_1[4] + 0x10) = edx_24 | esp_1[5];
                            void* eax_38 = esp_1[4];
                            *(esp_1 + 0x14) = g_bcabb8;
                            esp_1[5] = esp_1[5];
                            esp_1[4] = eax_38 + 0x1c;
                            *(eax_38 + 0x1c) = esp_1[5];
                            *(esp_1[4] + 4) = x87_r7_15;
                            *(esp_1[4] + 8) = esp_1[0xa];
                            *(esp_1[4] + 0xc) = esp_1[0xb];
                            *(esp_1 + 0x14) = *(a2 + 0x20) * 255f;
                            int32_t edx_27 = esp_1[5];
                            *(&edx_27 + 1) |= 0x4c;
                            *(esp_1 + 0x14) = *(a2 + 0x24) * 255f;
                            void* eax_42 = esp_1[4];
                            int32_t edx_30 = (edx_27 << 8 | esp_1[5]) << 8;
                            *(esp_1 + 0x14) = *(a2 + 0x28) * 255f;
                            *(eax_42 + 0x10) = edx_30 | esp_1[5];
                            float* eax_44 = esp_1[4] + 0x1c;
                            esp_1[4] = eax_44;
                            *(esp_1 + 0x14) = g_bcabc0 + g_bcabb8;
                            esp_1[5] = esp_1[5];
                            *eax_44 = esp_1[5];
                            *(esp_1[4] + 4) = x87_r7_15;
                            *(esp_1[4] + 8) = esp_1[0xa];
                            *(esp_1[4] + 0xc) = esp_1[0xb];
                            *(esp_1 + 0x14) = *(a2 + 0x20) * 255f;
                            int32_t edx_33 = esp_1[5];
                            *(&edx_33 + 1) |= 0x4c;
                            *(esp_1 + 0x14) = *(a2 + 0x24) * 255f;
                            int32_t edx_36 = (edx_33 << 8 | esp_1[5]) << 8;
                            *(esp_1 + 0x14) = *(a2 + 0x28) * 255f;
                            ebx_2 += 4;
                            *(esp_1[4] + 0x10) = edx_36 | esp_1[5];
                            esp_1[4] += 0x1c;
                        }

❓️❓️                        long double x87_r7_27 = esp_1[7] + 4f;
                        esp_1[7] = x87_r7_27;
                        x87_r7_28 = x87_r7_27 + 4f;
                        x87_r6_42 = g_bcabc4 + g_bcabbc;
                        x87_r6_42 - x87_r7_28;
                    } while (!(*(&((x87_r6_42 < x87_r7_28 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_42, x87_r7_28) ? 1 : 0) << 0xa
                        | (x87_r6_42 == x87_r7_28 ? 1 : 0) << 0xe) + 1) & 1));
                }

                int32_t* eax_54 = g_bcad00;
                *(esp_1 - 4) = eax_54;
                (*(*eax_54 + 0x10))();
                void* esp_18 = esp_1;

                if (ebx_2 > 0)
                {
                    int32_t* eax_55 = g_5ca114;
                    int32_t ecx_38 = g_bcad00;
                    *(esp_18 - 4) = 0;
                    *(esp_18 - 8) = ebx_2;
                    int32_t edx_45 = *eax_55;
                    *(esp_18 - 0xc) = ebp;
                    *(esp_18 - 0x10) = ecx_38;
                    *(esp_18 - 0x14) = 2;
                    *(esp_18 - 0x18) = eax_55;
                    (*(edx_45 + 0x7c))();
                }

                int32_t eax_56 = g_bcad04;
❓️                int32_t edx_47 = g_bcad08 + 0xc8;
                *(esp_18 - 4) = 0;
                int32_t* eax_57 = g_bcad00;
                int32_t ecx_39 = *eax_57;
                *(esp_18 - 8) = esp_18 + 0x10;
                int32_t esi_2;

                if (edx_47 > eax_56)
                {
                    *(esp_18 - 0xc) = 0x2020;
                    *(esp_18 - 0x10) = eax_57;
                    result = (*(ecx_39 + 0xc))();
                    esp_1 = esp_18 - 8;
                    esi_2 = 0;
                    g_bcad08 = 0xc8;

                    if (!result)
                    {
                    label_4a49af:
                        result = esp_1[4];

                        if (result)
                        {
                            __builtin_strncpy(&esp_1[0x14], "fff?", 4);
                            esp_1[0x15] = 0x3dcccccd;
                            __builtin_strncpy(&esp_1[0x16], "fff?", 4);
                            memcpy(&esp_1[0xf],
                                "\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3f\xcd\xcc\x4c\x3f\xcd\x"
                            "cc\xcc\x3d",
                                0x14);
                            memcpy(&esp_1[0x17],
                                "\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x"
                            "00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x00\x80\xbf",
                                0x20);

                            for (int32_t i = 0; i < 0x10; i += 4)
                            {
                                long double x87_r7_30 = *(esp_1 + i + 0x5c) * 50f;
                                long double x87_r6_44 = *(esp_1 + i + 0x6c) * 50f;
                                int32_t j = 0;
                                esp_1[7] = 0;

                                do
                                {
                                    *(esp_1 + 0x14) =
                                        g_bcabc0 * *(esp_1 + i + 0x4c) + g_bcabb8;
                                    esp_1[5] = esp_1[5];
                                    *esp_1[4] = esp_1[5];
                                    long double x87_r5_5 = esp_1[7];
                                    long double x87_r4_2 = x87_r5_5 * *(esp_1 + i + 0x6c);
                                    *(esp_1 + 0x14) =
                                        g_bcabc4 * *(esp_1 + i + 0x3c) + g_bcabbc;
                                    esp_1[5] = esp_1[5];
                                    *(esp_1[4] + 4) = esp_1[5] + x87_r4_2;
                                    *(esp_1[4] + 8) = esp_1[0xa];
                                    *(esp_1[4] + 0xc) = esp_1[0xb];
                                    *(esp_1[4] + 0x10) = 0xffffffff;
                                    long double x87_r3_9 = g_bcabc0 * *(esp_1 + i + 0x4c);
                                    float* ecx_50 = esp_1[4] + 0x1c;
                                    esp_1[4] = ecx_50;
                                    *(esp_1 + 0x14) = x87_r3_9 + g_bcabb8;
                                    esp_1[5] = esp_1[5];
                                    *ecx_50 = esp_1[5] + x87_r7_30;
                                    *(esp_1 + 0x14) =
                                        g_bcabc4 * *(esp_1 + i + 0x3c) + g_bcabbc;
                                    esp_1[5] = esp_1[5];
                                    *(esp_1[4] + 4) = esp_1[5] + x87_r4_2;
                                    *(esp_1[4] + 8) = esp_1[0xa];
                                    *(esp_1[4] + 0xc) = esp_1[0xb];
                                    long double x87_r5_6 = x87_r5_5 * *(esp_1 + i + 0x5c);
                                    *(esp_1[4] + 0x10) = 0xffffffff;
                                    long double x87_r4_7 = g_bcabc0 * *(esp_1 + i + 0x4c);
                                    float* ecx_57 = esp_1[4] + 0x1c;
                                    esp_1[4] = ecx_57;
                                    *(esp_1 + 0x14) = x87_r4_7 + g_bcabb8;
                                    esp_1[5] = esp_1[5];
                                    *ecx_57 = esp_1[5] + x87_r5_6;
                                    *(esp_1 + 0x14) =
                                        g_bcabc4 * *(esp_1 + i + 0x3c) + g_bcabbc;
                                    esp_1[5] = esp_1[5];
                                    *(esp_1[4] + 4) = esp_1[5];
                                    *(esp_1[4] + 8) = esp_1[0xa];
                                    *(esp_1[4] + 0xc) = esp_1[0xb];
                                    *(esp_1[4] + 0x10) = 0xffffffff;
                                    long double x87_r4_18 = g_bcabc0 * *(esp_1 + i + 0x4c);
                                    float* ecx_64 = esp_1[4] + 0x1c;
                                    esp_1[4] = ecx_64;
                                    *(esp_1 + 0x14) = x87_r4_18 + g_bcabb8;
                                    esp_1[5] = esp_1[5];
                                    *ecx_64 = esp_1[5] + x87_r5_6;
                                    *(esp_1 + 0x14) =
                                        g_bcabc4 * *(esp_1 + i + 0x3c) + g_bcabbc;
                                    esp_1[5] = esp_1[5];
                                    *(esp_1[4] + 4) = esp_1[5] + x87_r6_44;
                                    *(esp_1[4] + 8) = esp_1[0xa];
                                    *(esp_1[4] + 0xc) = esp_1[0xb];
                                    *(esp_1[4] + 0x10) = 0xffffffff;
                                    j += 1;
                                    esp_1[4] += 0x1c;
                                    esp_1[7] = j;
                                } while (j < 2);
                            }

                            int32_t* eax_58 = g_bcad00;
                            *(esp_1 - 4) = eax_58;
                            (*(*eax_58 + 0x10))();
                            int32_t* eax_59 = g_5ca114;
                            int32_t edx_53 = g_bcad00;
                            *(esp_1 - 4) = 0;
                            *(esp_1 - 8) = 0x20;
                            int32_t ecx_70 = *eax_59;
                            *(esp_1 - 0xc) = esi_2;
                            *(esp_1 - 0x10) = edx_53;
                            *(esp_1 - 0x14) = 2;
                            *(esp_1 - 0x18) = eax_59;
                            result = (*(ecx_70 + 0x7c))();
                        }
                    }
                }
                else
                {
                    *(esp_18 - 0xc) = 0x1020;
                    *(esp_18 - 0x10) = eax_57;
                    result = (*(ecx_39 + 0xc))();
                    esp_1 = esp_18 - 8;
                    int32_t ecx_40 = g_bcad08;
                    esi_2 = ecx_40;
                    int32_t edx_51 = esp_1[4] + ecx_40 * 0x1c;
                    g_bcad08 = ecx_40 + 0xc8;
                    esp_1[4] = edx_51;

                    if (!result)
                        goto label_4a49af;
                }
            }
        }
    }
    else
    {
        int32_t var_c8_22 = 0x1020;
        result = (*(ecx_13 + 0xc))(eax_27, 0x1020);
        esp_1 = &var_c4;
        int32_t ecx_14 = g_bcad08;
        ebp = ecx_14;
        g_bcad08 = ecx_14 + 0xc8;
        result_1 += ecx_14 * 0x1c;

        if (!result)
            goto label_4a458c;
    }
❓️label_4a4c7f:
    *esp_1;
    esp_1[1];
    esp_1[2];
    esp_1[3];
    return result;
}
