// Original IGI.EXE function: Render_MagicObjectTypeSNotD (VA 0x004DFA50; static CFG gate PASS, CFG score 0.861).
#include "Render_MagicObjectTypeSNotD.h"
int32_t* Render_MagicObjectTypeSNotD(void* context)

{
    int32_t flagP;
    int32_t item_268 = flagP;
    int32_t* stack_ptr_1 = &item_268;
    int32_t* result = *(context + 0x6c);

    if (result)
    {
        result = Render_DrawSplineMesh_2(*result);
        stack_ptr_1 = &item_268;
        int32_t* result_1 = result;
        int32_t item_21c_1 = 0;

        if (result > 0)
        {
            int32_t context_val;
            int32_t item_26c_2 = context_val;
            int32_t source_val;
            int32_t item_270_1 = source_val;
            int32_t dest_val;
            int32_t item_274 = dest_val;
            int32_t* stack_ptr_2 = &item_274;

            while (true)
            {
                int32_t* temp_1 = *(context + 0x6c);
                char* context_1 = nullptr;
                *(stack_ptr_2 - 4) = stack_ptr_2[0x16];
                int32_t data_1 = *temp_1;
                stack_ptr_2[0x40] = 0;
                *(stack_ptr_2 - 8) = data_1;
                char* data_2 = Render_DrawBoneMesh_2();
                *(stack_ptr_2 + 0x15c) = *(data_2 + 0x10);
                *(stack_ptr_2 + 0x164) = *(data_2 + 0x14);
                *(stack_ptr_2 + 0x16c) = *(data_2 + 0x18);
                long double fpu_val_7_4 = *(data_2 + 0x10);
                *(stack_ptr_2 + 0x144) = fpu_val_7_4;
                long double fpu_val_6_1 = *(data_2 + 0x14);
                *(stack_ptr_2 + 0x14c) = fpu_val_6_1;
                long double fpu_val_5_1 = *(data_2 + 0x18);
                *(stack_ptr_2 + 0x154) = fpu_val_5_1;
                *(stack_ptr_2 + 0x1cc) = *(context + 0x74) * fpu_val_6_1 + *(context + 0x78) * fpu_val_5_1
                    + *(context + 0x70) * fpu_val_7_4;
                *(stack_ptr_2 + 0x1d4) = *(context + 0x80) * fpu_val_6_1 + *(context + 0x84) * fpu_val_5_1
                    + *(context + 0x7c) * fpu_val_7_4;
                *(stack_ptr_2 + 0x1dc) = *(context + 0x8c) * fpu_val_6_1 + *(context + 0x90) * fpu_val_5_1
                    + *(context + 0x88) * fpu_val_7_4;
                memcpy(&stack_ptr_2[0x51], &stack_ptr_2[0x73], 0x18);
                *(stack_ptr_2 + 0x144) = *(stack_ptr_2 + 0x1cc) + *(context + 0x20);
                *(stack_ptr_2 + 0x14c) = *(stack_ptr_2 + 0x14c) + *(context + 0x28);
                *(stack_ptr_2 + 0x154) = *(stack_ptr_2 + 0x154) + *(context + 0x30);
                long double fpu_val_7_12 = *(data_2 + 0x20);
                long double fpu_val_6_3 = *(data_2 + 0x2c);
                long double fpu_val_5_3 = *(data_2 + 0x38);
                int32_t entity_2 = *(data_2 + 0x1c);
                stack_ptr_2[0x42] = *(data_2 + 0x28);
                stack_ptr_2[0x41] = entity_2;
                long double fpu_val_4_14 = fpu_val_5_3 * stack_ptr_2[0x42];
                stack_ptr_2[0x43] = *(data_2 + 0x34);
                stack_ptr_2[0x4b] = fpu_val_4_14 - fpu_val_6_3 * stack_ptr_2[0x43];
                long double fpu_val_5_4 = fpu_val_5_3 * stack_ptr_2[0x41];
                long double fpu_val_4_17 = fpu_val_7_12 * stack_ptr_2[0x43];
                int32_t entity_4 = stack_ptr_2[0x42];
                stack_ptr_2[0x21] = stack_ptr_2[0x41];
                stack_ptr_2[0x23] = stack_ptr_2[0x43];
                stack_ptr_2[0x22] = entity_4;
                stack_ptr_2[0x4c] = -((fpu_val_5_4 - fpu_val_4_17));
                long double fpu_val_7_14 = fpu_val_6_3 * stack_ptr_2[0x41] - fpu_val_7_12 * stack_ptr_2[0x42];
                long double fpu_val_6_7 = stack_ptr_2[0x41];
                long double f1_1 = 0.0f;
                fpu_val_6_7 - f1_1;

                if (!(*(&((fpu_val_6_7 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_7, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_7 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                {
                label_4dfc68:
                    long double fpu_val_6_10 = stack_ptr_2[0x43];
                    long double fpu_val_5_7 = stack_ptr_2[0x42];
                    long double fpu_val_4_18 = stack_ptr_2[0x41];
                    long double fpu_val_6_12 = 1.0 /
                        sqrtl(fpu_val_4_18 * fpu_val_4_18 + fpu_val_5_7 * fpu_val_5_7 + fpu_val_6_10 * fpu_val_6_10);
                    stack_ptr_2[0x21] = stack_ptr_2[0x41] * fpu_val_6_12;
                    stack_ptr_2[0x22] = stack_ptr_2[0x22] * fpu_val_6_12;
                    stack_ptr_2[0x23] = stack_ptr_2[0x23] * fpu_val_6_12;
                }
                else
                {
                    long double fpu_val_6_8 = stack_ptr_2[0x42];
                    long double f2_1 = 0.0f;
                    fpu_val_6_8 - f2_1;

                    if (!(*(&((fpu_val_6_8 < f2_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_8, f2_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4dfc68;

                    long double fpu_val_6_9 = stack_ptr_2[0x43];
                    long double f4_1 = 0.0f;
                    fpu_val_6_9 - f4_1;

                    if (!(*(&((fpu_val_6_9 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_9, f4_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_9 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        goto label_4dfc68;
                }

                stack_ptr_2[4] = stack_ptr_2[0x4c] * stack_ptr_2[0x43] - fpu_val_7_14 * stack_ptr_2[0x42];
                long double fpu_val_6_18 = stack_ptr_2[0x4b] * stack_ptr_2[0x43];
                long double fpu_val_6_20 = fpu_val_7_14 * stack_ptr_2[0x41];
                stack_ptr_2[0x24] = stack_ptr_2[4];
                stack_ptr_2[5] = -((fpu_val_6_18 - fpu_val_6_20));
                long double fpu_val_7_19 = stack_ptr_2[0x4b] * stack_ptr_2[0x42];
                long double fpu_val_6_22 = stack_ptr_2[0x4c] * stack_ptr_2[0x41];
                stack_ptr_2[0x25] = stack_ptr_2[5];
                stack_ptr_2[6] = fpu_val_7_19 - fpu_val_6_22;
                long double fpu_val_7_22 = stack_ptr_2[6] * stack_ptr_2[0x22];
                long double fpu_val_6_24 = stack_ptr_2[5] * stack_ptr_2[0x23];
                stack_ptr_2[0x26] = stack_ptr_2[6];
                stack_ptr_2[0x13] = fpu_val_7_22 - fpu_val_6_24;
                long double fpu_val_7_25 = stack_ptr_2[6] * stack_ptr_2[0x21];
                long double fpu_val_6_26 = stack_ptr_2[4] * stack_ptr_2[0x23];
                stack_ptr_2[0x27] = stack_ptr_2[0x13];
                stack_ptr_2[0x14] = -((fpu_val_7_25 - fpu_val_6_26));
                long double fpu_val_7_29 = stack_ptr_2[5] * stack_ptr_2[0x21];
                long double fpu_val_6_28 = stack_ptr_2[4] * stack_ptr_2[0x22];
                stack_ptr_2[0x28] = stack_ptr_2[0x14];
                stack_ptr_2[0x15] = fpu_val_7_29 - fpu_val_6_28;
                long double fpu_val_7_31 = stack_ptr_2[4];
                long double f3_1 = 0.0f;
                fpu_val_7_31 - f3_1;
                stack_ptr_2[0x29] = stack_ptr_2[0x15];

                if (!(*(&((fpu_val_7_31 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_31, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_31 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4dfdf6:
                    long double fpu_val_7_34 = stack_ptr_2[4];
                    long double fpu_val_6_29 = stack_ptr_2[5];
                    long double fpu_val_5_17 = stack_ptr_2[6];
                    long double fpu_val_7_36 = 1.0 / sqrtl(fpu_val_5_17 * fpu_val_5_17
                        + fpu_val_6_29 * fpu_val_6_29 + fpu_val_7_34 * fpu_val_7_34);
                    stack_ptr_2[0x24] = stack_ptr_2[4] * fpu_val_7_36;
                    stack_ptr_2[0x25] = stack_ptr_2[0x25] * fpu_val_7_36;
                    stack_ptr_2[0x26] = stack_ptr_2[0x26] * fpu_val_7_36;
                }
                else
                {
                    long double fpu_val_7_32 = stack_ptr_2[5];
                    long double f5_1 = 0.0f;
                    fpu_val_7_32 - f5_1;

                    if (!(*(&((fpu_val_7_32 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_32, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_32 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4dfdf6;

                    long double fpu_val_7_33 = stack_ptr_2[6];
                    long double f7_1 = 0.0f;
                    fpu_val_7_33 - f7_1;

                    if (!(*(&((fpu_val_7_33 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_33, f7_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_33 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4dfdf6;
                }

                long double fpu_val_7_38 = stack_ptr_2[0x13];
                long double f6_1 = 0.0f;
                fpu_val_7_38 - f6_1;

                if (!(*(&((fpu_val_7_38 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_38, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_38 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4dfe82:
                    long double fpu_val_7_41 = stack_ptr_2[0x15];
                    long double fpu_val_6_37 = stack_ptr_2[0x14];
                    long double fpu_val_5_19 = stack_ptr_2[0x13];
                    long double fpu_val_7_43 = 1.0 / sqrtl(fpu_val_5_19 * fpu_val_5_19
                        + fpu_val_6_37 * fpu_val_6_37 + fpu_val_7_41 * fpu_val_7_41);
                    stack_ptr_2[0x27] = stack_ptr_2[0x13] * fpu_val_7_43;
                    stack_ptr_2[0x28] = stack_ptr_2[0x28] * fpu_val_7_43;
                    stack_ptr_2[0x29] = stack_ptr_2[0x29] * fpu_val_7_43;
                }
                else
                {
                    long double fpu_val_7_39 = stack_ptr_2[0x14];
                    long double f8_1 = 0.0f;
                    fpu_val_7_39 - f8_1;

                    if (!(*(&((fpu_val_7_39 < f8_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_39, f8_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_39 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4dfe82;

                    long double fpu_val_7_40 = stack_ptr_2[0x15];
                    long double f9_1 = 0.0f;
                    fpu_val_7_40 - f9_1;

                    if (!(*(&((fpu_val_7_40 < f9_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_40, f9_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_40 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4dfe82;
                }

                memcpy(&stack_ptr_2[0x67], &stack_ptr_2[0x21], 0x28);
                long double fpu_val_7_48 = stack_ptr_2[0x6a] * *(context + 0x74) + stack_ptr_2[0x6d] * *(context + 0x78)
                    + stack_ptr_2[0x67] * *(context + 0x70);
                stack_ptr_2[0x70] = 0;
                stack_ptr_2[0x17] = fpu_val_7_48;
                stack_ptr_2[0x18] = stack_ptr_2[0x6b] * *(context + 0x74) + stack_ptr_2[0x6e] * *(context + 0x78)
                    + stack_ptr_2[0x68] * *(context + 0x70);
                stack_ptr_2[0x19] = stack_ptr_2[0x6c] * *(context + 0x74) + stack_ptr_2[0x6f] * *(context + 0x78)
                    + stack_ptr_2[0x69] * *(context + 0x70);
                stack_ptr_2[0x1a] = stack_ptr_2[0x6a] * *(context + 0x80) + stack_ptr_2[0x6d] * *(context + 0x84)
                    + stack_ptr_2[0x67] * *(context + 0x7c);
                stack_ptr_2[0x1b] = stack_ptr_2[0x6b] * *(context + 0x80) + stack_ptr_2[0x6e] * *(context + 0x84)
                    + stack_ptr_2[0x68] * *(context + 0x7c);
                stack_ptr_2[0x1c] = stack_ptr_2[0x6c] * *(context + 0x80) + stack_ptr_2[0x6f] * *(context + 0x84)
                    + stack_ptr_2[0x69] * *(context + 0x7c);
                stack_ptr_2[0x1d] = stack_ptr_2[0x6a] * *(context + 0x8c) + stack_ptr_2[0x6d] * *(context + 0x90)
                    + stack_ptr_2[0x67] * *(context + 0x88);
                int32_t data_12 = *(context + 0x94) + 1;
                long double fpu_val_7_76 = stack_ptr_2[0x6b] * *(context + 0x8c) + stack_ptr_2[0x6e] * *(context + 0x90)
                    + stack_ptr_2[0x68] * *(context + 0x88);
                stack_ptr_2[0x20] = data_12;
                stack_ptr_2[0x1e] = fpu_val_7_76;
                stack_ptr_2[0x1f] = stack_ptr_2[0x6c] * *(context + 0x8c) + stack_ptr_2[0x6f] * *(context + 0x90)
                    + stack_ptr_2[0x69] * *(context + 0x88);
                memcpy(&stack_ptr_2[0x5d], &stack_ptr_2[0x17], 0x28);

                if (data_12 > 0x3e8)
                {
                    long double fpu_val_7_81 = stack_ptr_2[0x17];
                    long double f11_1 = 0.0f;
                    fpu_val_7_81 - f11_1;
                    int32_t entity_8 = stack_ptr_2[0x17];
                    stack_ptr_2[0x36] = stack_ptr_2[0x18];
                    stack_ptr_2[0x35] = entity_8;
                    stack_ptr_2[0x37] = stack_ptr_2[0x19];

                    if (!(*(&((fpu_val_7_81 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_81, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_81 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e00fd:
                        long double fpu_val_7_84 = stack_ptr_2[0x19];
                        long double fpu_val_6_81 = stack_ptr_2[0x18];
                        long double fpu_val_5_21 = stack_ptr_2[0x17];
                        long double fpu_val_7_86 = 1.0 / sqrtl(fpu_val_5_21 * fpu_val_5_21
                            + fpu_val_6_81 * fpu_val_6_81 + fpu_val_7_84 * fpu_val_7_84);
                        stack_ptr_2[0x35] = stack_ptr_2[0x17] * fpu_val_7_86;
                        stack_ptr_2[0x36] = stack_ptr_2[0x36] * fpu_val_7_86;
                        stack_ptr_2[0x37] = stack_ptr_2[0x37] * fpu_val_7_86;
                    }
                    else
                    {
                        long double fpu_val_7_82 = stack_ptr_2[0x18];
                        long double f13_1 = 0.0f;
                        fpu_val_7_82 - f13_1;

                        if (!(*(&((fpu_val_7_82 < f13_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_82, f13_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_82 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e00fd;

                        long double fpu_val_7_83 = stack_ptr_2[0x19];
                        long double f17_1 = 0.0f;
                        fpu_val_7_83 - f17_1;

                        if (!(*(&((fpu_val_7_83 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_83, f17_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_83 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e00fd;
                    }

                    stack_ptr_2[0xa] = stack_ptr_2[0x1e] * stack_ptr_2[0x19] - stack_ptr_2[0x1f] * stack_ptr_2[0x18];
                    long double fpu_val_7_92 = stack_ptr_2[0x1d] * stack_ptr_2[0x19];
                    long double fpu_val_6_92 = stack_ptr_2[0x1f] * stack_ptr_2[0x17];
                    stack_ptr_2[0x38] = stack_ptr_2[0xa];
                    stack_ptr_2[0xb] = -((fpu_val_7_92 - fpu_val_6_92));
                    long double fpu_val_7_96 = stack_ptr_2[0x1d] * stack_ptr_2[0x18];
                    long double fpu_val_6_94 = stack_ptr_2[0x1e] * stack_ptr_2[0x17];
                    stack_ptr_2[0x39] = stack_ptr_2[0xb];
                    stack_ptr_2[0xc] = fpu_val_7_96 - fpu_val_6_94;
                    long double fpu_val_7_99 = stack_ptr_2[0xc] * stack_ptr_2[0x36];
                    long double fpu_val_6_96 = stack_ptr_2[0xb] * stack_ptr_2[0x37];
                    stack_ptr_2[0x3a] = stack_ptr_2[0xc];
                    stack_ptr_2[0x10] = fpu_val_7_99 - fpu_val_6_96;
                    long double fpu_val_7_102 = stack_ptr_2[0xc] * stack_ptr_2[0x35];
                    long double fpu_val_6_98 = stack_ptr_2[0xa] * stack_ptr_2[0x37];
                    stack_ptr_2[0x3b] = stack_ptr_2[0x10];
                    stack_ptr_2[0x11] = -((fpu_val_7_102 - fpu_val_6_98));
                    long double fpu_val_7_106 = stack_ptr_2[0xb] * stack_ptr_2[0x35];
                    long double fpu_val_6_100 = stack_ptr_2[0xa] * stack_ptr_2[0x36];
                    stack_ptr_2[0x3c] = stack_ptr_2[0x11];
                    stack_ptr_2[0x12] = fpu_val_7_106 - fpu_val_6_100;
                    long double fpu_val_7_108 = stack_ptr_2[0xa];
                    long double f16_1 = 0.0f;
                    fpu_val_7_108 - f16_1;
                    stack_ptr_2[0x3d] = stack_ptr_2[0x12];

                    if (!(*(&((fpu_val_7_108 < f16_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_108, f16_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_108 == f16_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e0265:
                        long double fpu_val_7_111 = stack_ptr_2[0xa];
                        long double fpu_val_6_101 = stack_ptr_2[0xb];
                        long double fpu_val_5_23 = stack_ptr_2[0xc];
                        long double fpu_val_7_113 = 1.0 / sqrtl(fpu_val_5_23 * fpu_val_5_23
                            + fpu_val_6_101 * fpu_val_6_101 + fpu_val_7_111 * fpu_val_7_111);
                        stack_ptr_2[0x38] = stack_ptr_2[0xa] * fpu_val_7_113;
                        stack_ptr_2[0x39] = stack_ptr_2[0x39] * fpu_val_7_113;
                        stack_ptr_2[0x3a] = stack_ptr_2[0x3a] * fpu_val_7_113;
                    }
                    else
                    {
                        long double fpu_val_7_109 = stack_ptr_2[0xb];
                        long double f19_1 = 0.0f;
                        fpu_val_7_109 - f19_1;

                        if (!(*(&((fpu_val_7_109 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_109, f19_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_109 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e0265;

                        long double fpu_val_7_110 = stack_ptr_2[0xc];
                        long double f23_1 = 0.0f;
                        fpu_val_7_110 - f23_1;

                        if (!(*(&((fpu_val_7_110 < f23_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_110, f23_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_110 == f23_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e0265;
                    }

                    long double fpu_val_7_115 = stack_ptr_2[0x10];
                    long double f22_1 = 0.0f;
                    fpu_val_7_115 - f22_1;

                    if (!(*(&((fpu_val_7_115 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_115, f22_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_115 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e02f1:
                        long double fpu_val_7_118 = stack_ptr_2[0x12];
                        long double fpu_val_6_109 = stack_ptr_2[0x11];
                        long double fpu_val_5_25 = stack_ptr_2[0x10];
                        long double fpu_val_7_120 = 1.0 / sqrtl(fpu_val_5_25 * fpu_val_5_25
                            + fpu_val_6_109 * fpu_val_6_109 + fpu_val_7_118 * fpu_val_7_118);
                        stack_ptr_2[0x3b] = stack_ptr_2[0x10] * fpu_val_7_120;
                        stack_ptr_2[0x3c] = stack_ptr_2[0x3c] * fpu_val_7_120;
                        stack_ptr_2[0x3d] = stack_ptr_2[0x3d] * fpu_val_7_120;
                    }
                    else
                    {
                        long double fpu_val_7_116 = stack_ptr_2[0x11];
                        long double f25_1 = 0.0f;
                        fpu_val_7_116 - f25_1;

                        if (!(*(&((fpu_val_7_116 < f25_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_116, f25_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_116 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e02f1;

                        long double fpu_val_7_117 = stack_ptr_2[0x12];
                        long double f27_1 = 0.0f;
                        fpu_val_7_117 - f27_1;

                        if (!(*(&((fpu_val_7_117 < f27_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_117, f27_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_117 == f27_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e02f1;
                    }

                    memcpy(&stack_ptr_2[0x17], &stack_ptr_2[0x35], 0x28);
                    stack_ptr_2[0x20] = 0;
                }

                long double fpu_val_7_122 = stack_ptr_2[0x5d];
                int32_t entity_13 = stack_ptr_2[0x5e];
                long double f10_1 = 0.0f;
                fpu_val_7_122 - f10_1;
                stack_ptr_2[0x2b] = stack_ptr_2[0x5d];
                stack_ptr_2[0x2d] = stack_ptr_2[0x5f];
                stack_ptr_2[0x2c] = entity_13;

                if (!(*(&((fpu_val_7_122 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_122, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_122 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e03cd:
                    long double fpu_val_7_125 = stack_ptr_2[0x5f];
                    long double fpu_val_6_117 = stack_ptr_2[0x5e];
                    long double fpu_val_5_27 = stack_ptr_2[0x5d];
                    long double fpu_val_7_127 = 1.0 / sqrtl(fpu_val_5_27 * fpu_val_5_27
                        + fpu_val_6_117 * fpu_val_6_117 + fpu_val_7_125 * fpu_val_7_125);
                    stack_ptr_2[0x2b] = stack_ptr_2[0x5d] * fpu_val_7_127;
                    stack_ptr_2[0x2c] = stack_ptr_2[0x2c] * fpu_val_7_127;
                    stack_ptr_2[0x2d] = stack_ptr_2[0x2d] * fpu_val_7_127;
                }
                else
                {
                    long double fpu_val_7_123 = stack_ptr_2[0x5e];
                    long double f12_1 = 0.0f;
                    fpu_val_7_123 - f12_1;

                    if (!(*(&((fpu_val_7_123 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_123, f12_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_123 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e03cd;

                    long double fpu_val_7_124 = stack_ptr_2[0x5f];
                    long double f15_1 = 0.0f;
                    fpu_val_7_124 - f15_1;

                    if (!(*(&((fpu_val_7_124 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_124, f15_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_124 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e03cd;
                }

                stack_ptr_2[7] = stack_ptr_2[0x5f] * stack_ptr_2[0x64] - stack_ptr_2[0x5e] * stack_ptr_2[0x65];
                long double fpu_val_7_133 = stack_ptr_2[0x63] * stack_ptr_2[0x5f];
                long double fpu_val_6_128 = stack_ptr_2[0x5d] * stack_ptr_2[0x65];
                stack_ptr_2[0x2e] = stack_ptr_2[7];
                stack_ptr_2[8] = -((fpu_val_7_133 - fpu_val_6_128));
                long double fpu_val_7_137 = stack_ptr_2[0x63] * stack_ptr_2[0x5e];
                long double fpu_val_6_130 = stack_ptr_2[0x5d] * stack_ptr_2[0x64];
                stack_ptr_2[0x2f] = stack_ptr_2[8];
                stack_ptr_2[9] = fpu_val_7_137 - fpu_val_6_130;
                long double fpu_val_7_140 = stack_ptr_2[9] * stack_ptr_2[0x2c];
                long double fpu_val_6_132 = stack_ptr_2[8] * stack_ptr_2[0x2d];
                stack_ptr_2[0x30] = stack_ptr_2[9];
                stack_ptr_2[0xd] = fpu_val_7_140 - fpu_val_6_132;
                long double fpu_val_7_143 = stack_ptr_2[9] * stack_ptr_2[0x2b];
                long double fpu_val_6_134 = stack_ptr_2[7] * stack_ptr_2[0x2d];
                stack_ptr_2[0x31] = stack_ptr_2[0xd];
                stack_ptr_2[0xe] = -((fpu_val_7_143 - fpu_val_6_134));
                long double fpu_val_7_147 = stack_ptr_2[8] * stack_ptr_2[0x2b];
                long double fpu_val_6_136 = stack_ptr_2[7] * stack_ptr_2[0x2c];
                stack_ptr_2[0x32] = stack_ptr_2[0xe];
                stack_ptr_2[0xf] = fpu_val_7_147 - fpu_val_6_136;
                long double fpu_val_7_149 = stack_ptr_2[7];
                long double f14_1 = 0.0f;
                fpu_val_7_149 - f14_1;
                stack_ptr_2[0x33] = stack_ptr_2[0xf];

                if (!(*(&((fpu_val_7_149 < f14_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_149, f14_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_149 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e0565:
                    long double fpu_val_7_152 = stack_ptr_2[7];
                    long double fpu_val_6_137 = stack_ptr_2[8];
                    long double fpu_val_5_29 = stack_ptr_2[9];
                    long double fpu_val_7_154 = 1.0 / sqrtl(fpu_val_5_29 * fpu_val_5_29
                        + fpu_val_6_137 * fpu_val_6_137 + fpu_val_7_152 * fpu_val_7_152);
                    stack_ptr_2[0x2e] = stack_ptr_2[7] * fpu_val_7_154;
                    stack_ptr_2[0x2f] = stack_ptr_2[0x2f] * fpu_val_7_154;
                    stack_ptr_2[0x30] = stack_ptr_2[0x30] * fpu_val_7_154;
                }
                else
                {
                    long double fpu_val_7_150 = stack_ptr_2[8];
                    long double f18_1 = 0.0f;
                    fpu_val_7_150 - f18_1;

                    if (!(*(&((fpu_val_7_150 < f18_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_150, f18_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_150 == f18_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e0565;

                    long double fpu_val_7_151 = stack_ptr_2[9];
                    long double f21_1 = 0.0f;
                    fpu_val_7_151 - f21_1;

                    if (!(*(&((fpu_val_7_151 < f21_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_151, f21_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_151 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e0565;
                }

                long double fpu_val_7_156 = stack_ptr_2[0xd];
                long double f20_1 = 0.0f;
                fpu_val_7_156 - f20_1;

                if (!(*(&((fpu_val_7_156 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_156, f20_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_156 == f20_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e05f1:
                    long double fpu_val_7_159 = stack_ptr_2[0xf];
                    long double fpu_val_6_145 = stack_ptr_2[0xe];
                    long double fpu_val_5_31 = stack_ptr_2[0xd];
                    long double fpu_val_7_161 = 1.0 / sqrtl(fpu_val_5_31 * fpu_val_5_31
                        + fpu_val_6_145 * fpu_val_6_145 + fpu_val_7_159 * fpu_val_7_159);
                    stack_ptr_2[0x31] = stack_ptr_2[0xd] * fpu_val_7_161;
                    stack_ptr_2[0x32] = stack_ptr_2[0x32] * fpu_val_7_161;
                    stack_ptr_2[0x33] = stack_ptr_2[0x33] * fpu_val_7_161;
                }
                else
                {
                    long double fpu_val_7_157 = stack_ptr_2[0xe];
                    long double f24_1 = 0.0f;
                    fpu_val_7_157 - f24_1;

                    if (!(*(&((fpu_val_7_157 < f24_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_157, f24_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_157 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e05f1;

                    long double fpu_val_7_158 = stack_ptr_2[0xf];
                    long double f26_1 = 0.0f;
                    fpu_val_7_158 - f26_1;

                    if (!(*(&((fpu_val_7_158 < f26_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_158, f26_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_158 == f26_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e05f1;
                }

                memcpy(&stack_ptr_2[0x5d], &stack_ptr_2[0x2b], 0x28);
                int32_t entity_17 = g_a4433c;
                stack_ptr_2[0x66] = 0;
                stack_ptr_2[0x3f] = 0;

                if (entity_17 > 0)
                {
                    char* dest_6 = &g_b97e00;

                    while (true)
                    {
                        if (context_1)
                            goto label_4e06ff;

                        char* source_6 = dest_6;
                        char* data_26 = data_2;
                        int32_t data_28;

                        while (true)
                        {
                            char context_2 = *data_26;
                            char f28_1 = *source_6;
                            bool c_1 = context_2 < f28_1;

                            if (context_2 == f28_1)
                            {
                                if (!context_2)
                                {
                                    data_28 = 0;
                                    break;
                                }

                                context_2 = data_26[1];
                                char f31_1 = source_6[1];
                                c_1 = context_2 < f31_1;

                                if (context_2 == f31_1)
                                {
                                    data_26 = &data_26[2];
                                    source_6 = &source_6[2];

                                    if (context_2)
                                        continue;

                                    data_28 = 0;
                                    break;
                                }
                            }

                            data_28 = data_26 - data_26 + 1;
                            break;
                        }

                        if (data_28)
                            context_1 = stack_ptr_2[0x40];
                        else
                        {
                            context_1 = dest_6;
                            stack_ptr_2[0x40] = context_1;
                        }

                        int32_t data_30 = stack_ptr_2[0x3f] + 1;
                        dest_6 = &dest_6[0x28];
                        bool flag_4_1 = data_30 < g_a4433c;
                        stack_ptr_2[0x3f] = data_30;

                        if (!flag_4_1)
                            break;
                    }
                }

                if (entity_17 > 0 && context_1)
                {
                label_4e06ff:
                    int32_t temp_3 = *(context_1 + 0x24);
                    int32_t data_31 = *(context + 0x68);
                    int32_t entity_21 = stack_ptr_2[0x9f];
                    *(stack_ptr_2 - 4) = &context_1[0x10];
                    stack_ptr_2[0x72] = temp_3;
                    stack_ptr_2[0x4f] = &context_1[0x10];
                    stack_ptr_2[0x50] = data_31;
                    stack_ptr_2[0x71] = entity_21;
                    int32_t* data_32 = DynObj_Missing();

                    if (data_32)
                    {
                        void* data_33 = *(*data_32 + 0xc);
                        *(stack_ptr_2 - 4) = &stack_ptr_2[0x4f];
                        int32_t data_34 = *(*(data_33 + 0xc) + 0x98);
                        int32_t entity_23;
                        void* stack_ptr_14;

                        if (!data_34)
                        {
                            data_34 = *(context_1 + 0x20);
                            entity_23 = *(context + 0xe8);
                            *(stack_ptr_2 - 8) = data_34;
                            stack_ptr_14 = stack_ptr_2 - 8;
                        }
                        else
                        {
                            data_34 = g_548694;
                            entity_23 = *(context + 0x148);
                            *(stack_ptr_2 - 8) = data_34;
                            stack_ptr_14 = stack_ptr_2 - 8;
                        }

                        *(stack_ptr_14 - 4) = entity_23;
                        void* data_35 = QTask_HandleInput();
                        int32_t entity_24 = *(stack_ptr_14 + 0x284);
                        int32_t data_36 = *(context + 0x68);
                        stack_ptr_2 = stack_ptr_14 + 8;
                        stack_ptr_2[0x9c] = *(context_1 + 0x24);
                        stack_ptr_2[0x79] = &context_1[0x10];
                        stack_ptr_2[0x7a] = data_36;
                        stack_ptr_2[0x9b] = entity_24;
                        uint32_t data_38 = DynObj_InsertHashItem_6();
                        int32_t data_39 = 0;
                        data_39 = *(data_35 + 0x1c);
                        int32_t data_40 = *(((data_38 * 0x180 + data_39) << 2) + &g_a96ae0);

                        if (data_40)
                        {
                            *(stack_ptr_2 - 4) = &stack_ptr_2[0x79];
                            *(stack_ptr_2 - 8) = data_35;
                            data_40();
❓️                            stack_ptr_2 += 8;
                        }
                    }
                    else
                    {
                        *(stack_ptr_2 - 4) = &context_1[0x10];
                        *(stack_ptr_2 - 8) = "Magic object model "%s" not found";
                        Warning_Show();
                        stack_ptr_2 = stack_ptr_2;
                    }
                }
                else
                {
                    *(stack_ptr_2 - 4) = *(context + 0x6c) + 0x14;
                    *(stack_ptr_2 - 8) = data_2;
                    *(stack_ptr_2 - 0xc) = "Magic object type "%s" not defined (Created from model "%s")";
                    Warning_Show();
                }

                result = stack_ptr_2[0x16] + 1;
                bool flag_2_1 = result < stack_ptr_2[0x4e];
                stack_ptr_2[0x16] = result;

                if (!flag_2_1)
                    break;
            }

            *stack_ptr_2;
            stack_ptr_2[1];
            stack_ptr_2[2];
            stack_ptr_1 = &stack_ptr_2[3];
        }
    }

    *stack_ptr_1;
    return result;
}
