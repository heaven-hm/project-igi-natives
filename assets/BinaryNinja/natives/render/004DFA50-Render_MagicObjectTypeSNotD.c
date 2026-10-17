// Original IGI.EXE function: Render_MagicObjectTypeSNotD (VA 0x004DFA50; static CFG gate PASS, CFG score 0.861).
#include "Render_MagicObjectTypeSNotD.h"
int32_t* Render_MagicObjectTypeSNotD(void* a1)

{
    int32_t flagP;
    int32_t v_268 = flagP;
    int32_t* esp_1 = &v_268;
    int32_t* result = *(a1 + 0x6c);

    if (result)
    {
        result = Render_DrawSplineMesh_2(*result);
        esp_1 = &v_268;
        int32_t* result_1 = result;
        int32_t v_21c_1 = 0;

        if (result > 0)
        {
            int32_t ctxB;
            int32_t v_26c_2 = ctxB;
            int32_t srcS;
            int32_t v_270_1 = srcS;
            int32_t dstD;
            int32_t v_274 = dstD;
            int32_t* esp_2 = &v_274;

            while (true)
            {
                int32_t* tmpD1 = *(a1 + 0x6c);
                char* ctxB1 = nullptr;
                *(esp_2 - 4) = esp_2[0x16];
                int32_t valA1 = *tmpD1;
                esp_2[0x40] = 0;
                *(esp_2 - 8) = valA1;
                char* valA2 = Render_DrawBoneMesh_2();
                *(esp_2 + 0x15c) = *(valA2 + 0x10);
                *(esp_2 + 0x164) = *(valA2 + 0x14);
                *(esp_2 + 0x16c) = *(valA2 + 0x18);
                long double x87_r7_4 = *(valA2 + 0x10);
                *(esp_2 + 0x144) = x87_r7_4;
                long double x87_r6_1 = *(valA2 + 0x14);
                *(esp_2 + 0x14c) = x87_r6_1;
                long double x87_r5_1 = *(valA2 + 0x18);
                *(esp_2 + 0x154) = x87_r5_1;
                *(esp_2 + 0x1cc) = *(a1 + 0x74) * x87_r6_1 + *(a1 + 0x78) * x87_r5_1
                    + *(a1 + 0x70) * x87_r7_4;
                *(esp_2 + 0x1d4) = *(a1 + 0x80) * x87_r6_1 + *(a1 + 0x84) * x87_r5_1
                    + *(a1 + 0x7c) * x87_r7_4;
                *(esp_2 + 0x1dc) = *(a1 + 0x8c) * x87_r6_1 + *(a1 + 0x90) * x87_r5_1
                    + *(a1 + 0x88) * x87_r7_4;
                memcpy(&esp_2[0x51], &esp_2[0x73], 0x18);
                *(esp_2 + 0x144) = *(esp_2 + 0x1cc) + *(a1 + 0x20);
                *(esp_2 + 0x14c) = *(esp_2 + 0x14c) + *(a1 + 0x28);
                *(esp_2 + 0x154) = *(esp_2 + 0x154) + *(a1 + 0x30);
                long double x87_r7_12 = *(valA2 + 0x20);
                long double x87_r6_3 = *(valA2 + 0x2c);
                long double x87_r5_3 = *(valA2 + 0x38);
                int32_t objC2 = *(valA2 + 0x1c);
                esp_2[0x42] = *(valA2 + 0x28);
                esp_2[0x41] = objC2;
                long double x87_r4_14 = x87_r5_3 * esp_2[0x42];
                esp_2[0x43] = *(valA2 + 0x34);
                esp_2[0x4b] = x87_r4_14 - x87_r6_3 * esp_2[0x43];
                long double x87_r5_4 = x87_r5_3 * esp_2[0x41];
                long double x87_r4_17 = x87_r7_12 * esp_2[0x43];
                int32_t objC4 = esp_2[0x42];
                esp_2[0x21] = esp_2[0x41];
                esp_2[0x23] = esp_2[0x43];
                esp_2[0x22] = objC4;
                esp_2[0x4c] = -((x87_r5_4 - x87_r4_17));
                long double x87_r7_14 = x87_r6_3 * esp_2[0x41] - x87_r7_12 * esp_2[0x42];
                long double x87_r6_7 = esp_2[0x41];
                long double f1_1 = 0f;
                x87_r6_7 - f1_1;

                if (!(*(&((x87_r6_7 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_7, f1_1) ? 1 : 0) << 0xa
                    | (x87_r6_7 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                label_4dfc68:
                    long double x87_r6_10 = esp_2[0x43];
                    long double x87_r5_7 = esp_2[0x42];
                    long double x87_r4_18 = esp_2[0x41];
                    long double x87_r6_12 = 1.0 /
                        sqrtl(x87_r4_18 * x87_r4_18 + x87_r5_7 * x87_r5_7 + x87_r6_10 * x87_r6_10);
                    esp_2[0x21] = esp_2[0x41] * x87_r6_12;
                    esp_2[0x22] = esp_2[0x22] * x87_r6_12;
                    esp_2[0x23] = esp_2[0x23] * x87_r6_12;
                }
                else
                {
                    long double x87_r6_8 = esp_2[0x42];
                    long double f2_1 = 0f;
                    x87_r6_8 - f2_1;

                    if (!(*(&((x87_r6_8 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_8, f2_1) ? 1 : 0) << 0xa
                            | (x87_r6_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4dfc68;

                    long double x87_r6_9 = esp_2[0x43];
                    long double f4_1 = 0f;
                    x87_r6_9 - f4_1;

                    if (!(*(&((x87_r6_9 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_9, f4_1) ? 1 : 0) << 0xa
                            | (x87_r6_9 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4dfc68;
                }

                esp_2[4] = esp_2[0x4c] * esp_2[0x43] - x87_r7_14 * esp_2[0x42];
                long double x87_r6_18 = esp_2[0x4b] * esp_2[0x43];
                long double x87_r6_20 = x87_r7_14 * esp_2[0x41];
                esp_2[0x24] = esp_2[4];
                esp_2[5] = -((x87_r6_18 - x87_r6_20));
                long double x87_r7_19 = esp_2[0x4b] * esp_2[0x42];
                long double x87_r6_22 = esp_2[0x4c] * esp_2[0x41];
                esp_2[0x25] = esp_2[5];
                esp_2[6] = x87_r7_19 - x87_r6_22;
                long double x87_r7_22 = esp_2[6] * esp_2[0x22];
                long double x87_r6_24 = esp_2[5] * esp_2[0x23];
                esp_2[0x26] = esp_2[6];
                esp_2[0x13] = x87_r7_22 - x87_r6_24;
                long double x87_r7_25 = esp_2[6] * esp_2[0x21];
                long double x87_r6_26 = esp_2[4] * esp_2[0x23];
                esp_2[0x27] = esp_2[0x13];
                esp_2[0x14] = -((x87_r7_25 - x87_r6_26));
                long double x87_r7_29 = esp_2[5] * esp_2[0x21];
                long double x87_r6_28 = esp_2[4] * esp_2[0x22];
                esp_2[0x28] = esp_2[0x14];
                esp_2[0x15] = x87_r7_29 - x87_r6_28;
                long double x87_r7_31 = esp_2[4];
                long double f3_1 = 0f;
                x87_r7_31 - f3_1;
                esp_2[0x29] = esp_2[0x15];

                if (!(*(&((x87_r7_31 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4dfdf6:
                    long double x87_r7_34 = esp_2[4];
                    long double x87_r6_29 = esp_2[5];
                    long double x87_r5_17 = esp_2[6];
                    long double x87_r7_36 = 1.0 / sqrtl(x87_r5_17 * x87_r5_17
                        + x87_r6_29 * x87_r6_29 + x87_r7_34 * x87_r7_34);
                    esp_2[0x24] = esp_2[4] * x87_r7_36;
                    esp_2[0x25] = esp_2[0x25] * x87_r7_36;
                    esp_2[0x26] = esp_2[0x26] * x87_r7_36;
                }
                else
                {
                    long double x87_r7_32 = esp_2[5];
                    long double f5_1 = 0f;
                    x87_r7_32 - f5_1;

                    if (!(*(&((x87_r7_32 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_32, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_32 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4dfdf6;

                    long double x87_r7_33 = esp_2[6];
                    long double f7_1 = 0f;
                    x87_r7_33 - f7_1;

                    if (!(*(&((x87_r7_33 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_33, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_33 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4dfdf6;
                }

                long double x87_r7_38 = esp_2[0x13];
                long double f6_1 = 0f;
                x87_r7_38 - f6_1;

                if (!(*(&((x87_r7_38 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_38, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_38 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4dfe82:
                    long double x87_r7_41 = esp_2[0x15];
                    long double x87_r6_37 = esp_2[0x14];
                    long double x87_r5_19 = esp_2[0x13];
                    long double x87_r7_43 = 1.0 / sqrtl(x87_r5_19 * x87_r5_19
                        + x87_r6_37 * x87_r6_37 + x87_r7_41 * x87_r7_41);
                    esp_2[0x27] = esp_2[0x13] * x87_r7_43;
                    esp_2[0x28] = esp_2[0x28] * x87_r7_43;
                    esp_2[0x29] = esp_2[0x29] * x87_r7_43;
                }
                else
                {
                    long double x87_r7_39 = esp_2[0x14];
                    long double f8_1 = 0f;
                    x87_r7_39 - f8_1;

                    if (!(*(&((x87_r7_39 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_39, f8_1) ? 1 : 0) << 0xa
                            | (x87_r7_39 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4dfe82;

                    long double x87_r7_40 = esp_2[0x15];
                    long double f9_1 = 0f;
                    x87_r7_40 - f9_1;

                    if (!(*(&((x87_r7_40 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_40, f9_1) ? 1 : 0) << 0xa
                            | (x87_r7_40 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4dfe82;
                }

                memcpy(&esp_2[0x67], &esp_2[0x21], 0x28);
                long double x87_r7_48 = esp_2[0x6a] * *(a1 + 0x74) + esp_2[0x6d] * *(a1 + 0x78)
                    + esp_2[0x67] * *(a1 + 0x70);
                esp_2[0x70] = 0;
                esp_2[0x17] = x87_r7_48;
                esp_2[0x18] = esp_2[0x6b] * *(a1 + 0x74) + esp_2[0x6e] * *(a1 + 0x78)
                    + esp_2[0x68] * *(a1 + 0x70);
                esp_2[0x19] = esp_2[0x6c] * *(a1 + 0x74) + esp_2[0x6f] * *(a1 + 0x78)
                    + esp_2[0x69] * *(a1 + 0x70);
                esp_2[0x1a] = esp_2[0x6a] * *(a1 + 0x80) + esp_2[0x6d] * *(a1 + 0x84)
                    + esp_2[0x67] * *(a1 + 0x7c);
                esp_2[0x1b] = esp_2[0x6b] * *(a1 + 0x80) + esp_2[0x6e] * *(a1 + 0x84)
                    + esp_2[0x68] * *(a1 + 0x7c);
                esp_2[0x1c] = esp_2[0x6c] * *(a1 + 0x80) + esp_2[0x6f] * *(a1 + 0x84)
                    + esp_2[0x69] * *(a1 + 0x7c);
                esp_2[0x1d] = esp_2[0x6a] * *(a1 + 0x8c) + esp_2[0x6d] * *(a1 + 0x90)
                    + esp_2[0x67] * *(a1 + 0x88);
                int32_t valA12 = *(a1 + 0x94) + 1;
                long double x87_r7_76 = esp_2[0x6b] * *(a1 + 0x8c) + esp_2[0x6e] * *(a1 + 0x90)
                    + esp_2[0x68] * *(a1 + 0x88);
                esp_2[0x20] = valA12;
                esp_2[0x1e] = x87_r7_76;
                esp_2[0x1f] = esp_2[0x6c] * *(a1 + 0x8c) + esp_2[0x6f] * *(a1 + 0x90)
                    + esp_2[0x69] * *(a1 + 0x88);
                memcpy(&esp_2[0x5d], &esp_2[0x17], 0x28);

                if (valA12 > 0x3e8)
                {
                    long double x87_r7_81 = esp_2[0x17];
                    long double f11_1 = 0f;
                    x87_r7_81 - f11_1;
                    int32_t objC8 = esp_2[0x17];
                    esp_2[0x36] = esp_2[0x18];
                    esp_2[0x35] = objC8;
                    esp_2[0x37] = esp_2[0x19];

                    if (!(*(&((x87_r7_81 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_81, f11_1) ? 1 : 0) << 0xa
                        | (x87_r7_81 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e00fd:
                        long double x87_r7_84 = esp_2[0x19];
                        long double x87_r6_81 = esp_2[0x18];
                        long double x87_r5_21 = esp_2[0x17];
                        long double x87_r7_86 = 1.0 / sqrtl(x87_r5_21 * x87_r5_21
                            + x87_r6_81 * x87_r6_81 + x87_r7_84 * x87_r7_84);
                        esp_2[0x35] = esp_2[0x17] * x87_r7_86;
                        esp_2[0x36] = esp_2[0x36] * x87_r7_86;
                        esp_2[0x37] = esp_2[0x37] * x87_r7_86;
                    }
                    else
                    {
                        long double x87_r7_82 = esp_2[0x18];
                        long double f13_1 = 0f;
                        x87_r7_82 - f13_1;

                        if (!(*(&((x87_r7_82 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_82, f13_1) ? 1 : 0) << 0xa
                                | (x87_r7_82 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e00fd;

                        long double x87_r7_83 = esp_2[0x19];
                        long double f17_1 = 0f;
                        x87_r7_83 - f17_1;

                        if (!(*(&((x87_r7_83 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_83, f17_1) ? 1 : 0) << 0xa
                                | (x87_r7_83 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e00fd;
                    }

                    esp_2[0xa] = esp_2[0x1e] * esp_2[0x19] - esp_2[0x1f] * esp_2[0x18];
                    long double x87_r7_92 = esp_2[0x1d] * esp_2[0x19];
                    long double x87_r6_92 = esp_2[0x1f] * esp_2[0x17];
                    esp_2[0x38] = esp_2[0xa];
                    esp_2[0xb] = -((x87_r7_92 - x87_r6_92));
                    long double x87_r7_96 = esp_2[0x1d] * esp_2[0x18];
                    long double x87_r6_94 = esp_2[0x1e] * esp_2[0x17];
                    esp_2[0x39] = esp_2[0xb];
                    esp_2[0xc] = x87_r7_96 - x87_r6_94;
                    long double x87_r7_99 = esp_2[0xc] * esp_2[0x36];
                    long double x87_r6_96 = esp_2[0xb] * esp_2[0x37];
                    esp_2[0x3a] = esp_2[0xc];
                    esp_2[0x10] = x87_r7_99 - x87_r6_96;
                    long double x87_r7_102 = esp_2[0xc] * esp_2[0x35];
                    long double x87_r6_98 = esp_2[0xa] * esp_2[0x37];
                    esp_2[0x3b] = esp_2[0x10];
                    esp_2[0x11] = -((x87_r7_102 - x87_r6_98));
                    long double x87_r7_106 = esp_2[0xb] * esp_2[0x35];
                    long double x87_r6_100 = esp_2[0xa] * esp_2[0x36];
                    esp_2[0x3c] = esp_2[0x11];
                    esp_2[0x12] = x87_r7_106 - x87_r6_100;
                    long double x87_r7_108 = esp_2[0xa];
                    long double f16_1 = 0f;
                    x87_r7_108 - f16_1;
                    esp_2[0x3d] = esp_2[0x12];

                    if (!(*(&((x87_r7_108 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_108, f16_1) ? 1 : 0) << 0xa
                        | (x87_r7_108 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e0265:
                        long double x87_r7_111 = esp_2[0xa];
                        long double x87_r6_101 = esp_2[0xb];
                        long double x87_r5_23 = esp_2[0xc];
                        long double x87_r7_113 = 1.0 / sqrtl(x87_r5_23 * x87_r5_23
                            + x87_r6_101 * x87_r6_101 + x87_r7_111 * x87_r7_111);
                        esp_2[0x38] = esp_2[0xa] * x87_r7_113;
                        esp_2[0x39] = esp_2[0x39] * x87_r7_113;
                        esp_2[0x3a] = esp_2[0x3a] * x87_r7_113;
                    }
                    else
                    {
                        long double x87_r7_109 = esp_2[0xb];
                        long double f19_1 = 0f;
                        x87_r7_109 - f19_1;

                        if (!(*(&((x87_r7_109 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_109, f19_1) ? 1 : 0) << 0xa
                                | (x87_r7_109 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e0265;

                        long double x87_r7_110 = esp_2[0xc];
                        long double f23_1 = 0f;
                        x87_r7_110 - f23_1;

                        if (!(*(&((x87_r7_110 < f23_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_110, f23_1) ? 1 : 0) << 0xa
                                | (x87_r7_110 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e0265;
                    }

                    long double x87_r7_115 = esp_2[0x10];
                    long double f22_1 = 0f;
                    x87_r7_115 - f22_1;

                    if (!(*(&((x87_r7_115 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_115, f22_1) ? 1 : 0) << 0xa
                        | (x87_r7_115 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e02f1:
                        long double x87_r7_118 = esp_2[0x12];
                        long double x87_r6_109 = esp_2[0x11];
                        long double x87_r5_25 = esp_2[0x10];
                        long double x87_r7_120 = 1.0 / sqrtl(x87_r5_25 * x87_r5_25
                            + x87_r6_109 * x87_r6_109 + x87_r7_118 * x87_r7_118);
                        esp_2[0x3b] = esp_2[0x10] * x87_r7_120;
                        esp_2[0x3c] = esp_2[0x3c] * x87_r7_120;
                        esp_2[0x3d] = esp_2[0x3d] * x87_r7_120;
                    }
                    else
                    {
                        long double x87_r7_116 = esp_2[0x11];
                        long double f25_1 = 0f;
                        x87_r7_116 - f25_1;

                        if (!(*(&((x87_r7_116 < f25_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_116, f25_1) ? 1 : 0) << 0xa
                                | (x87_r7_116 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e02f1;

                        long double x87_r7_117 = esp_2[0x12];
                        long double f27_1 = 0f;
                        x87_r7_117 - f27_1;

                        if (!(*(&((x87_r7_117 < f27_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_117, f27_1) ? 1 : 0) << 0xa
                                | (x87_r7_117 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e02f1;
                    }

                    memcpy(&esp_2[0x17], &esp_2[0x35], 0x28);
                    esp_2[0x20] = 0;
                }

                long double x87_r7_122 = esp_2[0x5d];
                int32_t objC13 = esp_2[0x5e];
                long double f10_1 = 0f;
                x87_r7_122 - f10_1;
                esp_2[0x2b] = esp_2[0x5d];
                esp_2[0x2d] = esp_2[0x5f];
                esp_2[0x2c] = objC13;

                if (!(*(&((x87_r7_122 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_122, f10_1) ? 1 : 0) << 0xa
                    | (x87_r7_122 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e03cd:
                    long double x87_r7_125 = esp_2[0x5f];
                    long double x87_r6_117 = esp_2[0x5e];
                    long double x87_r5_27 = esp_2[0x5d];
                    long double x87_r7_127 = 1.0 / sqrtl(x87_r5_27 * x87_r5_27
                        + x87_r6_117 * x87_r6_117 + x87_r7_125 * x87_r7_125);
                    esp_2[0x2b] = esp_2[0x5d] * x87_r7_127;
                    esp_2[0x2c] = esp_2[0x2c] * x87_r7_127;
                    esp_2[0x2d] = esp_2[0x2d] * x87_r7_127;
                }
                else
                {
                    long double x87_r7_123 = esp_2[0x5e];
                    long double f12_1 = 0f;
                    x87_r7_123 - f12_1;

                    if (!(*(&((x87_r7_123 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_123, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_123 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e03cd;

                    long double x87_r7_124 = esp_2[0x5f];
                    long double f15_1 = 0f;
                    x87_r7_124 - f15_1;

                    if (!(*(&((x87_r7_124 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_124, f15_1) ? 1 : 0) << 0xa
                            | (x87_r7_124 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e03cd;
                }

                esp_2[7] = esp_2[0x5f] * esp_2[0x64] - esp_2[0x5e] * esp_2[0x65];
                long double x87_r7_133 = esp_2[0x63] * esp_2[0x5f];
                long double x87_r6_128 = esp_2[0x5d] * esp_2[0x65];
                esp_2[0x2e] = esp_2[7];
                esp_2[8] = -((x87_r7_133 - x87_r6_128));
                long double x87_r7_137 = esp_2[0x63] * esp_2[0x5e];
                long double x87_r6_130 = esp_2[0x5d] * esp_2[0x64];
                esp_2[0x2f] = esp_2[8];
                esp_2[9] = x87_r7_137 - x87_r6_130;
                long double x87_r7_140 = esp_2[9] * esp_2[0x2c];
                long double x87_r6_132 = esp_2[8] * esp_2[0x2d];
                esp_2[0x30] = esp_2[9];
                esp_2[0xd] = x87_r7_140 - x87_r6_132;
                long double x87_r7_143 = esp_2[9] * esp_2[0x2b];
                long double x87_r6_134 = esp_2[7] * esp_2[0x2d];
                esp_2[0x31] = esp_2[0xd];
                esp_2[0xe] = -((x87_r7_143 - x87_r6_134));
                long double x87_r7_147 = esp_2[8] * esp_2[0x2b];
                long double x87_r6_136 = esp_2[7] * esp_2[0x2c];
                esp_2[0x32] = esp_2[0xe];
                esp_2[0xf] = x87_r7_147 - x87_r6_136;
                long double x87_r7_149 = esp_2[7];
                long double f14_1 = 0f;
                x87_r7_149 - f14_1;
                esp_2[0x33] = esp_2[0xf];

                if (!(*(&((x87_r7_149 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_149, f14_1) ? 1 : 0) << 0xa
                    | (x87_r7_149 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e0565:
                    long double x87_r7_152 = esp_2[7];
                    long double x87_r6_137 = esp_2[8];
                    long double x87_r5_29 = esp_2[9];
                    long double x87_r7_154 = 1.0 / sqrtl(x87_r5_29 * x87_r5_29
                        + x87_r6_137 * x87_r6_137 + x87_r7_152 * x87_r7_152);
                    esp_2[0x2e] = esp_2[7] * x87_r7_154;
                    esp_2[0x2f] = esp_2[0x2f] * x87_r7_154;
                    esp_2[0x30] = esp_2[0x30] * x87_r7_154;
                }
                else
                {
                    long double x87_r7_150 = esp_2[8];
                    long double f18_1 = 0f;
                    x87_r7_150 - f18_1;

                    if (!(*(&((x87_r7_150 < f18_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_150, f18_1) ? 1 : 0) << 0xa
                            | (x87_r7_150 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e0565;

                    long double x87_r7_151 = esp_2[9];
                    long double f21_1 = 0f;
                    x87_r7_151 - f21_1;

                    if (!(*(&((x87_r7_151 < f21_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_151, f21_1) ? 1 : 0) << 0xa
                            | (x87_r7_151 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e0565;
                }

                long double x87_r7_156 = esp_2[0xd];
                long double f20_1 = 0f;
                x87_r7_156 - f20_1;

                if (!(*(&((x87_r7_156 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_156, f20_1) ? 1 : 0) << 0xa
                    | (x87_r7_156 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e05f1:
                    long double x87_r7_159 = esp_2[0xf];
                    long double x87_r6_145 = esp_2[0xe];
                    long double x87_r5_31 = esp_2[0xd];
                    long double x87_r7_161 = 1.0 / sqrtl(x87_r5_31 * x87_r5_31
                        + x87_r6_145 * x87_r6_145 + x87_r7_159 * x87_r7_159);
                    esp_2[0x31] = esp_2[0xd] * x87_r7_161;
                    esp_2[0x32] = esp_2[0x32] * x87_r7_161;
                    esp_2[0x33] = esp_2[0x33] * x87_r7_161;
                }
                else
                {
                    long double x87_r7_157 = esp_2[0xe];
                    long double f24_1 = 0f;
                    x87_r7_157 - f24_1;

                    if (!(*(&((x87_r7_157 < f24_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_157, f24_1) ? 1 : 0) << 0xa
                            | (x87_r7_157 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e05f1;

                    long double x87_r7_158 = esp_2[0xf];
                    long double f26_1 = 0f;
                    x87_r7_158 - f26_1;

                    if (!(*(&((x87_r7_158 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_158, f26_1) ? 1 : 0) << 0xa
                            | (x87_r7_158 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e05f1;
                }

                memcpy(&esp_2[0x5d], &esp_2[0x2b], 0x28);
                int32_t objC17 = g_a4433c;
                esp_2[0x66] = 0;
                esp_2[0x3f] = 0;

                if (objC17 > 0)
                {
                    char* dstD6 = &g_b97e00;

                    while (true)
                    {
                        if (ctxB1)
                            goto label_4e06ff;

                        char* srcS6 = dstD6;
                        char* valA26 = valA2;
                        int32_t valA28;

                        while (true)
                        {
                            char ctxB2 = *valA26;
                            char f28_1 = *srcS6;
                            bool c_1 = ctxB2 < f28_1;

                            if (ctxB2 == f28_1)
                            {
                                if (!ctxB2)
                                {
                                    valA28 = 0;
                                    break;
                                }

                                ctxB2 = valA26[1];
                                char f31_1 = srcS6[1];
                                c_1 = ctxB2 < f31_1;

                                if (ctxB2 == f31_1)
                                {
                                    valA26 = &valA26[2];
                                    srcS6 = &srcS6[2];

                                    if (ctxB2)
                                        continue;

                                    valA28 = 0;
                                    break;
                                }
                            }

                            valA28 = valA26 - valA26 + 1;
                            break;
                        }

                        if (valA28)
                            ctxB1 = esp_2[0x40];
                        else
                        {
                            ctxB1 = dstD6;
                            esp_2[0x40] = ctxB1;
                        }

                        int32_t valA30 = esp_2[0x3f] + 1;
                        dstD6 = &dstD6[0x28];
                        bool cond_4_1 = valA30 < g_a4433c;
                        esp_2[0x3f] = valA30;

                        if (!cond_4_1)
                            break;
                    }
                }

                if (objC17 > 0 && ctxB1)
                {
                label_4e06ff:
                    int32_t tmpD3 = *(ctxB1 + 0x24);
                    int32_t valA31 = *(a1 + 0x68);
                    int32_t objC21 = esp_2[0x9f];
                    *(esp_2 - 4) = &ctxB1[0x10];
                    esp_2[0x72] = tmpD3;
                    esp_2[0x4f] = &ctxB1[0x10];
                    esp_2[0x50] = valA31;
                    esp_2[0x71] = objC21;
                    int32_t* valA32 = DynObj_Missing();

                    if (valA32)
                    {
                        void* valA33 = *(*valA32 + 0xc);
                        *(esp_2 - 4) = &esp_2[0x4f];
                        int32_t valA34 = *(*(valA33 + 0xc) + 0x98);
                        int32_t objC23;
                        void* esp_14;

                        if (!valA34)
                        {
                            valA34 = *(ctxB1 + 0x20);
                            objC23 = *(a1 + 0xe8);
                            *(esp_2 - 8) = valA34;
                            esp_14 = esp_2 - 8;
                        }
                        else
                        {
                            valA34 = g_548694;
                            objC23 = *(a1 + 0x148);
                            *(esp_2 - 8) = valA34;
                            esp_14 = esp_2 - 8;
                        }

                        *(esp_14 - 4) = objC23;
                        void* valA35 = QTask_HandleInput();
                        int32_t objC24 = *(esp_14 + 0x284);
                        int32_t valA36 = *(a1 + 0x68);
                        esp_2 = esp_14 + 8;
                        esp_2[0x9c] = *(ctxB1 + 0x24);
                        esp_2[0x79] = &ctxB1[0x10];
                        esp_2[0x7a] = valA36;
                        esp_2[0x9b] = objC24;
                        uint32_t valA38 = DynObj_InsertHashItem_6();
                        int32_t valA39 = 0;
                        valA39 = *(valA35 + 0x1c);
                        int32_t valA40 = *(((valA38 * 0x180 + valA39) << 2) + &g_a96ae0);

                        if (valA40)
                        {
                            *(esp_2 - 4) = &esp_2[0x79];
                            *(esp_2 - 8) = valA35;
                            valA40();
❓️                            esp_2 += 8;
                        }
                    }
                    else
                    {
                        *(esp_2 - 4) = &ctxB1[0x10];
                        *(esp_2 - 8) = "Magic object model "%s" not found";
                        Warning_Show();
                        esp_2 = esp_2;
                    }
                }
                else
                {
                    *(esp_2 - 4) = *(a1 + 0x6c) + 0x14;
                    *(esp_2 - 8) = valA2;
                    *(esp_2 - 0xc) = "Magic object type "%s" not defined (Created from model "%s")";
                    Warning_Show();
                }

                result = esp_2[0x16] + 1;
                bool cond_2_1 = result < esp_2[0x4e];
                esp_2[0x16] = result;

                if (!cond_2_1)
                    break;
            }

            *esp_2;
            esp_2[1];
            esp_2[2];
            esp_1 = &esp_2[3];
        }
    }

    *esp_1;
    return result;
}
