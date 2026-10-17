// IGI native provenance: PhysicsRigid_ExecutePipeline_4D5180 - 0x004D5180 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D5180-PhysicsRigid_ExecutePipeline_4D5180.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsRigid_ExecutePipeline_4D5180.h"

int32_t PhysicsRigid_ExecutePipeline_4D5180(int32_t* arg1, int32_t* arg2, int32_t* arg3)

{
    int32_t dest_ptr = *arg2;

    if (*arg3 == dest_ptr)
        arg2[1] |= 0x20000;

    int32_t* esi_2 = (dest_ptr << 4) + *(arg3[3] + 0xc);
    int32_t base_val = *esi_2;
    int32_t* edx_1 = esi_2[1];

    if (base_val == 1)
    {
        *arg1 = *edx_1;
        arg1[1] = edx_1[1];
        arg1[2] = edx_1[2];
        arg1[3] = edx_1[3];
        arg1[4] = 0;
        return 0;
    }

    float frame_ptr = arg3[0xb];
    void* ebp_1 = arg3[0xc];
    int32_t ecx_4 = 0;
    int32_t eax_3 = 0;
    int32_t var_48 = 0;
    eax_3 = ebp_1;

    if (eax_3)
    {
        long double x87_r7_2 = frame_ptr - *(ebp_1 + 4);
        long double temp1_1 = 0f;
        x87_r7_2 - temp1_1;

        if (!(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
            ecx_4 = *(*(ebp_1 + 0xc) + (dest_ptr << 2));
    }

    float var_50;

    if (ecx_4 < base_val)
    {
        int32_t* ebp_2 = &edx_1[ecx_4 * 0xd + 4];

        do
        {
            var_50 = *ebp_2;
            long double x87_r7_3 = var_50;
            long double temp3_1 = frame_ptr;
            x87_r7_3 - temp3_1;

            if (!(*(&((x87_r7_3 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_3, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_3 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1))
                break;

            ecx_4 += 1;
            ebp_2 = &ebp_2[0xd];
        } while (ecx_4 < base_val);
    }

    long double x87_r7_4 = frame_ptr;
    long double temp2 = var_50;
    x87_r7_4 - temp2;
    int32_t ebx_1;

    if (!(*(&((x87_r7_4 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp2) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp2 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        ebx_1 = ecx_4 - 1;

        if (ecx_4 != base_val)
        {
            int32_t eax_19;

            if (ebx_1 >= 0)
            {
                eax_19 = var_48;
                var_50 = 1f - (var_50 - frame_ptr) / (var_50 - edx_1[ecx_4 * 0xd - 9]);
            }
            else
            {
                *arg1 = *edx_1;
                arg1[1] = edx_1[1];
                arg1[2] = edx_1[2];
                arg1[3] = edx_1[3];
                arg1[4] = 0;
                eax_19 = 1;
            }

            if (!eax_19)
                goto label_4d533c;
        }
        else
        {
            float* eax_15 = arg3[3];

            if (!(eax_15[1] & 0x80000000))
            {
                void* edx_5 = &edx_1[ecx_4 * 0xd];
                *arg1 = *(edx_5 - 0x34);
                arg1[1] = *(edx_5 - 0x30);
                arg1[2] = *(edx_5 - 0x2c);
                arg1[3] = *(edx_5 - 0x28);
                arg1[4] = 0;
            }
            else
            {
                ecx_4 = 0;
                var_50 = (frame_ptr - var_50) / (*eax_15 - var_50);
            label_4d533c:
                int32_t ebp_3 = esi_2[2];

                if (ebp_3)
                {
                    void* esi_6 = &edx_1[ecx_4 * 0xd];
                    float var_3c;
                    float var_38;
                    float var_34;
                    float var_30;
                    int32_t var_2c;

                    if (!g_a54678)
                    {
                        long double x87_r7_39 = *(ebp_3 + (ebx_1 << 3));
                        long double temp4_1 = 6.28318548f;
                        x87_r7_39 - temp4_1;
                        long double x87_r7_40 = *(ebp_3 + (ebx_1 << 3));
                        __builtin_memcpy(&var_3c, esi_6, 0x14);

                        if (!(*(&((x87_r7_39 < temp4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_39, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r7_39 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            x87_r7_40 = x87_r7_40 - 6.28318548f;
                            var_3c = -(var_3c);
                            var_38 = -(var_38);
                            var_34 = -(var_34);
                            var_30 = -(var_30);
                        }

                        long double temp6_1 = 0f;
                        x87_r7_40 - temp6_1;

                        if (!(*(&((x87_r7_40 < temp6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_40, temp6_1) ? 1 : 0) << 0xa
                            | (x87_r7_40 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        {
                            long double temp8_1 = 0.00999999978f;
                            x87_r7_40 - temp8_1;
                            long double x87_r6_47;
                            long double x87_r7_44;

                            if (!(*(&((x87_r7_40 < temp8_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_40, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_40 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            {
                                float var_4c_3 = x87_r7_40 * var_50;
                                long double st0_5;
                                bool c1_5;
                                bool c2_17;
                                st0_5 = __fsin(x87_r7_40 - var_4c_3);
                                x87_r7_44 = st0_5 * *(ebp_3 + (ebx_1 << 3) + 4);
                                long double st0_6;
                                bool c1_6;
                                bool c2_18;
                                st0_6 = __fsin(var_4c_3);
                                x87_r6_47 = st0_6 * *(ebp_3 + (ebx_1 << 3) + 4);
                            }
                            else
                            {
                                x87_r7_44 = 1f - var_50;
                                x87_r6_47 = var_50;
                            }

                            int32_t ecx_19 = ebx_1 * 0xd;
                            float* eax_37 = arg1;
                            void* edx_9 = &edx_1[ecx_19];
                            *eax_37 = x87_r6_47 * var_3c + x87_r7_44 * edx_1[ecx_19];
                            eax_37[1] = x87_r7_44 * *(edx_9 + 4) + x87_r6_47 * var_38;
                            eax_37[2] = x87_r7_44 * *(edx_9 + 8) + x87_r6_47 * var_34;
                            eax_37[3] = x87_r7_44 * *(edx_9 + 0xc) + x87_r6_47 * var_30;
                            eax_37[4] = *(edx_9 + 0x10) + var_2c + 1;
                        }
                        else
                            __builtin_memcpy(arg1, &edx_1[ebx_1 * 0xd], 0x14);
                    }
                    else
                    {
                        long double x87_r7_12 = *(ebp_3 + (ebx_1 << 3));
                        long double temp5_1 = 6.28318548f;
                        x87_r7_12 - temp5_1;
                        long double x87_r7_13 = *(ebp_3 + (ebx_1 << 3));
                        __builtin_memcpy(&var_3c, esi_6, 0x14);

                        if (!(*(&((x87_r7_12 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_12, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r7_12 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            x87_r7_13 = x87_r7_13 - 6.28318548f;
                            var_3c = -(var_3c);
                            var_38 = -(var_38);
                            var_34 = -(var_34);
                            var_30 = -(var_30);
                        }

                        long double temp7_1 = 0f;
                        x87_r7_13 - temp7_1;
                        float var_14;
                        void* edx_7;

                        if (!(*(&((x87_r7_13 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_13, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_13 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        {
                            long double temp9_1 = 0.00999999978f;
                            x87_r7_13 - temp9_1;
                            long double x87_r6_13;
                            long double x87_r7_17;

                            if (!(*(&((x87_r7_13 < temp9_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_13, temp9_1) ? 1 : 0) << 0xa
                                | (x87_r7_13 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            {
                                float var_4c_1 = x87_r7_13 * var_50;
                                long double st0_1;
                                bool c1_1;
                                bool c2_7;
                                st0_1 = __fsin(x87_r7_13 - var_4c_1);
                                x87_r7_17 = st0_1 * *(ebp_3 + (ebx_1 << 3) + 4);
                                long double st0_2;
                                bool c1_2;
                                bool c2_8;
                                st0_2 = __fsin(var_4c_1);
                                x87_r6_13 = st0_2 * *(ebp_3 + (ebx_1 << 3) + 4);
                            }
                            else
                            {
                                x87_r7_17 = 1f - var_50;
                                x87_r6_13 = var_50;
                            }

                            int32_t ecx_11 = ebx_1 * 0xd;
                            edx_7 = &edx_1[ecx_11];
                            int32_t var_4_1 = edx_1[ecx_11 + 4] + var_2c + 1;
                            var_14 = x87_r6_13 * var_3c + x87_r7_17 * edx_1[ecx_11];
                            float var_10_1 = x87_r7_17 * *(edx_7 + 4) + x87_r6_13 * var_38;
                            float var_c_1 = x87_r7_17 * *(edx_7 + 8) + x87_r6_13 * var_34;
                            float var_8_1 = x87_r7_17 * *(edx_7 + 0xc) + x87_r6_13 * var_30;
                        }
                        else
                        {
                            edx_7 = &edx_1[ebx_1 * 0xd];
                            __builtin_memcpy(&var_14, edx_7, 0x14);
                        }

                        __builtin_memcpy(&var_3c, esi_6 + 0x24, 0x14);
                        int32_t ecx_14 = esi_2[3];
                        long double x87_r7_23 = *(ecx_14 + (ebx_1 << 3));
                        float* ecx_15 = ecx_14 + (ebx_1 << 3);
                        long double temp10_1 = 6.28318548f;
                        x87_r7_23 - temp10_1;
                        long double x87_r7_24 = *ecx_15;

                        if (!(*(&((x87_r7_23 < temp10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_23, temp10_1) ? 1 : 0) << 0xa
                            | (x87_r7_23 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                        {
                            x87_r7_24 = x87_r7_24 - 6.28318548f;
                            var_3c = -(var_3c);
                            var_38 = -(var_38);
                            var_34 = -(var_34);
                            var_30 = -(var_30);
                        }

                        long double temp11_1 = 0f;
                        x87_r7_24 - temp11_1;
                        float var_28;
                        int32_t ecx_16;

                        if (!(*(&((x87_r7_24 < temp11_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_24, temp11_1) ? 1 : 0) << 0xa
                            | (x87_r7_24 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                        {
                            long double temp12_1 = 0.00999999978f;
                            x87_r7_24 - temp12_1;
                            long double x87_r6_30;
                            long double x87_r7_28;

                            if (!(*(&((x87_r7_24 < temp12_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_24, temp12_1) ? 1 : 0) << 0xa
                                | (x87_r7_24 == temp12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                            {
                                float var_4c_2 = x87_r7_24 * var_50;
                                long double st0_3;
                                bool c1_3;
                                bool c2_12;
                                st0_3 = __fsin(x87_r7_24 - var_4c_2);
                                x87_r7_28 = st0_3 * ecx_15[1];
                                long double st0_4;
                                bool c1_4;
                                bool c2_13;
                                st0_4 = __fsin(var_4c_2);
                                x87_r6_30 = st0_4 * ecx_15[1];
                            }
                            else
                            {
                                x87_r7_28 = 1f - var_50;
                                x87_r6_30 = var_50;
                            }

                            var_28 = x87_r7_28 * *(edx_7 + 0x14) + x87_r6_30 * var_3c;
                            float var_24_1 = x87_r7_28 * *(edx_7 + 0x18) + x87_r6_30 * var_38;
                            float var_20_1 = x87_r7_28 * *(edx_7 + 0x1c) + x87_r6_30 * var_34;
                            ecx_16 = *(edx_7 + 0x24) + var_2c + 1;
                            int32_t var_18_1 = ecx_16;
                            float var_1c_1 = x87_r7_28 * *(edx_7 + 0x20) + x87_r6_30 * var_30;
                        }
                        else
                            ecx_16 = __builtin_memcpy(&var_28, edx_7 + 0x14, 0x14);

                        int32_t var_64_1 = ecx_16;
                        long double x87_r7_36 = (1f - var_50) * var_50;
                        Render_ComputeNormals_7(arg1, &var_14, &var_28,
                            1f - (x87_r7_36 + x87_r7_36));
                    }
                }

                arg1[4] = 0;
            }
        }
    }
    else
    {
        ebx_1 = ecx_4;
        int32_t eax_12 = ecx_4 * 0xd;
        void* edx_3 = &edx_1[eax_12];
        *arg1 = edx_1[eax_12];
        arg1[1] = *(edx_3 + 4);
        arg1[2] = *(edx_3 + 8);
        arg1[3] = *(edx_3 + 0xc);
        arg1[4] = 0;
    }

    if (eax_3)
        *(*(arg3[0xc] + 0xc) + (*arg2 << 2)) = ebx_1;

    return 0;
}
