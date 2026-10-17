// Original IGI.EXE function: SoundSys_Update3DPosition_2 (VA 0x004E4530; static CFG gate PASS, CFG score 0.924).
#include "SoundSys_Update3DPosition_2.h"
int32_t* SoundSys_Update3DPosition_2(float a1, int32_t* a2, double* a3, float* a4, float* a5, char a6, char a7, int32_t a8, char* a9 @ 0x28)

{
    int32_t __saved_ebp_1;
    int32_t saved_frame = __saved_ebp_1;
    int32_t __saved_ebx_1;
    int32_t saved_obj = __saved_ebx_1;
    int32_t __saved_esi_1;
    int32_t saved_src = __saved_esi_1;
    *(a1 + 0x5b4) = a6;
    *(a1 + 0x5b5) = a7;
    int32_t __saved_edi_1;
    int32_t saved_dst = __saved_edi_1;
    *(a1 + 0xa4) = 0;
    *(a1 + 0x59c) = a8;

    if (a6)
        *(a1 + 0x59c) = 1;

    int32_t* dstD = a3;
    int32_t* srcS = a2;
    double* v_138 = srcS;
    double v_118 = Sys_DispatchOpcode_11(v_138, dstD);
    v_138 = *a5 * v_118;
    int32_t v_144 = dstD[1];
    double v_68[0x4];
    Terrain_ConnectGraphNode_7(&v_68, *srcS, srcS[1], *dstD, *a4 * v_118, v_138);
    v_138 = a5[3] * v_118;
    int32_t v_144_1 = dstD[3];
    double v_48[0x4];
    Terrain_ConnectGraphNode_7(&v_48, srcS[2], srcS[3], dstD[2], a4[3] * v_118, v_138);
    v_138 = a5[6] * v_118;
    double v_140_3 = a4[6] * v_118;
    int32_t v_144_2 = dstD[5];
    double v_28[0x4];
    Terrain_ConnectGraphNode_7(&v_28, srcS[4], srcS[5], dstD[4], v_140_3, v_138);
    float v_74;
    float v_70;
    float v_6c;
    Sys_Atan2UndefinedInOrig(a4, &v_74, &v_70, &v_6c);
    float v_a4;
    float v_a0;
    float v_9c;
    Sys_Atan2UndefinedInOrig(a5, &v_a4, &v_a0, &v_9c);
    long double x87_r7_14 = *srcS + *dstD;
    int32_t valA8 = *(a1 + 0x59c);
    int32_t v_108 = valA8;
    double v_98 = x87_r7_14 * 0.5;
    double v_90 = (*(dstD + 8) + *(srcS + 8)) * 0.5;
    int32_t i = 0;
    long double x87_r7_21 = (*(dstD + 0x10) + *(srcS + 0x10)) * 0.5;
    *(a1 + 0xf8) = 0;
    int32_t i_6 = 0;
    double v_88 = x87_r7_21;
    float v_ec = 1f / v_108;
    float v_fc;
    float v_e4;
    float v_e0;
    double v_d0;
    double v_c8;

    if (valA8 >= 0)
    {
        do
        {
            int16_t valA9;
            valA9 = a6;
            long double x87_r7_25 = i_6 * v_ec;
            float v_dc_1 = x87_r7_25;
            long double x87_r7_40;

            if (!valA9)
            {
                long double x87_r6_18 = v_74;
                float v_f0_1 = x87_r6_18;
                long double x87_r5_3 = v_a4;
                v_108 = x87_r5_3;
                long double x87_r4_7 = v_a4 - v_74;
                long double f1_1 = 3.14159274f;
                x87_r4_7 - f1_1;

                if (!(*(&((x87_r4_7 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_7, f1_1) ? 1 : 0) << 0xa
                    | (x87_r4_7 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
                {
                    long double x87_r4_9;
                    long double f4_1;

                    do
                    {
                        x87_r6_18 = x87_r6_18 + 6.28318548f;
                        x87_r4_9 = v_a4 - x87_r6_18;
                        f4_1 = 3.14159274f;
                        x87_r4_9 - f4_1;
                    } while (!(*(&((x87_r4_9 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_9, f4_1) ? 1 : 0) << 0xa
                        | (x87_r4_9 == f4_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41));
                    v_f0_1 = x87_r6_18;
                }

                long double x87_r4_11 = v_a4 - x87_r6_18;
                long double f3_1 = -3.14159274f;
                x87_r4_11 - f3_1;
                valA9 = (x87_r4_11 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_11, f3_1) ? 1 : 0) << 0xa
                    | (x87_r4_11 == f3_1 ? 1 : 0) << 0xe | 0x2800;

                if (*(&valA9 + 1) & 1)
                {
                    do
                    {
                        x87_r5_3 = x87_r5_3 + 6.28318548f;
                        long double x87_r4_13 = x87_r5_3 - x87_r6_18;
                        long double f6_1 = -3.14159274f;
                        x87_r4_13 - f6_1;
                        valA9 = (x87_r4_13 < f6_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_13, f6_1) ? 1 : 0) << 0xa
                            | (x87_r4_13 == f6_1 ? 1 : 0) << 0xe | 0x2800;
                    } while (*(&valA9 + 1) & 1);

                    v_108 = x87_r5_3;
                }

                double v_118_1 = x87_r7_25;
                int32_t v_134_3 = *(&v_118_1 + 4);
                void* valA15 = a1 + i * 0xc;
                int32_t v_138_3 = v_118_1;
                *(&v_140_3 + 4) = &v_68;
                *(valA15 + 0x104) = Terrain_SampleHeightmap_7() - v_98;
                float* valA16 = a1 + ((i * 3 + 0x42) << 2);
                v_140_3 = *(&v_118_1 + 4);
                *valA16 = Terrain_SampleHeightmap_7(&v_48, v_118_1) - v_90;
                int32_t v_14c_3 = *(&v_118_1 + 4);
                *(valA15 + 0x10c) = Terrain_SampleHeightmap_7(&v_28, v_118_1) - v_88;

                if (!i)
                {
                    memcpy(a1 + 0x200, a4, 0x28);
                    i = i_6;
                    srcS = a2;
                }
                else if (i != *(a1 + 0x59c))
                {
                    int32_t v_134_4 = *(&v_118_1 + 4);
                    int32_t v_138_4 = v_118_1;
                    *(&v_140_3 + 4) = &v_68;
                    v_fc = Terrain_CalculateNormals_7();
                    v_140_3 = *(&v_118_1 + 4);
                    float v_f8_1 = Terrain_CalculateNormals_7(&v_48, v_118_1);
                    int32_t v_14c_4 = *(&v_118_1 + 4);
                    float v_f4_1 = Terrain_CalculateNormals_7(&v_28, v_118_1);
                    long double x87_r7_57 = v_fc;
                    long double f15_1 = 0f;
                    x87_r7_57 - f15_1;

                    if (!(*(&((x87_r7_57 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_57, f15_1) ? 1 : 0) << 0xa
                        | (x87_r7_57 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4e4b0b:
                        float* v_134_5 = &v_e0;
                        float* v_138_5 = &v_e4;
                        *(&v_140_3 + 4) = &v_fc;
                        Sys_ResolveSymbol_10();
                    }
                    else
                    {
                        long double x87_r7_58 = v_f8_1;
                        long double f17_1 = 0f;
                        x87_r7_58 - f17_1;

                        if (!(*(&((x87_r7_58 < f17_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_58, f17_1) ? 1 : 0) << 0xa
                                | (x87_r7_58 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e4b0b;

                        long double x87_r7_59 = v_f4_1;
                        long double f19_1 = 0f;
                        x87_r7_59 - f19_1;

                        if (!(*(&((x87_r7_59 < f19_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_59, f19_1) ? 1 : 0) << 0xa
                                | (x87_r7_59 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4e4b0b;

                        v_e4 = 0f;
                        v_e0 = 0f;
                    }

                    *(&v_140_3 + 4) = (v_108 - v_f0_1) * v_dc_1 + v_f0_1;
                    v_140_3 = a1 + i * 0x28 + 0x200;
                    Sys_ReadFileBlock_12(v_140_3, v_e4, v_e0);
                    v_fc = *(valA15 + 0x104) - *(valA15 + 0xf8);
                    long double x87_r7_69 = *(valA15 + 0x10c) - *(valA15 + 0x100);
                    float v_f4_2 = x87_r7_69;
                    long double x87_r6_29 = *valA16 - *(a1 + ((i * 3 + 0x3f) << 2));
                    long double x87_r5_10 = v_fc;
                    x87_r7_40 = sqrtl(x87_r5_10 * x87_r5_10 + x87_r6_29 * x87_r6_29
                        + x87_r7_69 * x87_r7_69);
                    *(a1 + (i << 2) + 0x544) = x87_r7_40;
                    *(a1 + 0xf8) = x87_r7_40 + *(a1 + 0xf8);
                }
                else
                {
                    memcpy(a1 + i * 0x28 + 0x200, a5, 0x28);
                    long double x87_r7_48 = *(valA15 + 0x104) - *(valA15 + 0xf8);
                    i = i_6;
                    srcS = a2;
                    long double x87_r6_23 = *valA16 - *(a1 + ((i_6 * 3 + 0x3f) << 2));
                    v_108 = *(valA15 + 0x10c) - *(valA15 + 0x100);
                    double v_118_2 = x87_r6_23;
                    long double x87_r7_52 =
                        sqrtl(x87_r7_48 * x87_r7_48 + v_118_2 * v_118_2 + v_108 * v_108);
                    *(a1 + (i_6 << 2) + 0x544) = x87_r7_52;
                    *(a1 + 0xf8) = x87_r7_52 + *(a1 + 0xf8);
                }
            }
            else
            {
                void* valA10 = a1 + i * 0xc;
                v_d0 = (a3[1] - *(srcS + 8)) * v_dc_1 + *(srcS + 8);
                v_c8 = (a3[2] - *(srcS + 0x10)) * v_dc_1 + *(srcS + 0x10);
                *(valA10 + 0x104) = (*a3 - *srcS) * x87_r7_25 + *srcS - v_98;
                *(a1 + ((i * 3 + 0x42) << 2)) = v_d0 - v_90;
                *(valA10 + 0x10c) = v_c8 - v_88;
                void* valA12 = a1 + i * 0x28;
                v_108 = valA12 + 0x200;
                *(valA12 + 0x200) = 0;
                *(valA12 + 0x204) = 0;
                *(a1 + ((i * 5 + 0x41) << 3)) = 0;
                __builtin_memset(valA12 + 0x20c, 0, 0x1c);
                long double x87_r7_35 = *a3 - *srcS;
                float v_b0 = x87_r7_35;
                float v_ac_1 = a3[1] - *(srcS + 8);
                float v_a8_1 = a3[2] - *(srcS + 0x10);
                long double f2_1 = 0f;
                x87_r7_35 - f2_1;
                float v_78;
                int32_t v_7c;

                if (!(*(&((x87_r7_35 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_35, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_35 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                {
                label_4e482c:
                    float* v_134_1 = &v_78;
                    int32_t* v_138_1 = &v_7c;
                    *(&v_140_3 + 4) = &v_b0;
                    Sys_ResolveSymbol_10();
                }
                else
                {
                    long double x87_r7_36 = v_ac_1;
                    long double f5_1 = 0f;
                    x87_r7_36 - f5_1;

                    if (!(*(&((x87_r7_36 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_36, f5_1) ? 1 : 0) << 0xa
                            | (x87_r7_36 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e482c;

                    long double x87_r7_37 = v_a8_1;
                    long double f7_1 = 0f;
                    x87_r7_37 - f7_1;

                    if (!(*(&((x87_r7_37 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_37, f7_1) ? 1 : 0) << 0xa
                            | (x87_r7_37 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                        goto label_4e482c;

                    v_7c = 0;
                    v_78 = 0f;
                }
                Sys_DispatchOpcode_12(v_108, v_78);

                if (!i)
                {
                    long double x87_r7_38 = v_a8_1;
                    long double x87_r6_16 = v_ac_1;
                    long double x87_r5_1 = v_b0;
                    x87_r7_40 =
                        sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_16 * x87_r6_16 + x87_r7_38 * x87_r7_38)
                        * v_ec;
                    *(a1 + 0x548) = x87_r7_40;
                    *(a1 + 0xf8) = x87_r7_40 + *(a1 + 0xf8);
                }
            }
            i += 1;
            i_6 = i;
        } while (i <= *(a1 + 0x59c));
    }

    *(a1 + (*(a1 + 0x59c) << 2) + 0x548) = 0;
    int32_t* result = DynObj_Missing(a9);
    v_108 = result;
    *(a1 + 0x6c) = result;

    if (result)
    {
        *(a1 + 0xfc) = 0;
        *(a1 + 0x100) = 0;
        int32_t i_7 = 0;

        if (result[0xf] > 0)
        {
            int32_t* result_1 = result;
            int32_t i_1;

            do
            {
                void* objC23 = *(*(*result_1 + 0xc) + 0xc);

                if (!*(objC23 + 0x20))
                {
                    void* tmpD23 = *(objC23 + 0x24);
                    int32_t j = 0;
                    float* objC24 = *(tmpD23 + 0x10);

                    if (*(tmpD23 + 0xc) > 0)
                    {
                        do
                        {
                            long double x87_r7_71 = *objC24;
                            long double f11_1 = *(a1 + 0xfc);
                            x87_r7_71 - f11_1;

                            if (*(&((x87_r7_71 < f11_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_71, f11_1) ? 1 : 0) << 0xa
                                    | (x87_r7_71 == f11_1 ? 1 : 0) << 0xe) + 1) & 1)
                                *(a1 + 0xfc) = *objC24;

                            long double x87_r7_72 = *objC24;
                            long double f14_1 = *(a1 + 0x100);
                            x87_r7_72 - f14_1;

                            if (!(*(&((x87_r7_72 < f14_1 ? 1 : 0) << 8
                                    | (FCMP_UO(x87_r7_72, f14_1) ? 1 : 0) << 0xa
                                    | (x87_r7_72 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                                *(a1 + 0x100) = *objC24;

                            j += 1;
                            objC24 = &objC24[8];
                        } while (j < *(tmpD23 + 0xc));

                        result = v_108;
                    }
                }

                i_1 = i_7 + 1;
                result_1 = &result_1[1];
                i_7 = i_1;
            } while (i_1 < result[0xf]);
        }

        float v_120_1;

        if (!*(a1 + 0x5b4))
        {
            v_120_1 = 0f;

            for (int32_t i_2 = 0; i_2 < 2; i_2 += 1)
            {
                int32_t v_138_9 = 0;
                *(&v_140_3 + 4) = 1;
                v_140_3 = i_2;
                int32_t v_144_5 = 0;
                void* valA56 = Display_SetDisplayMode_18(a1, 0, v_140_3, &v_108);
                int32_t j_2 = v_108;

                if (j_2 > 0)
                {
                    float* objC41 = valA56 + 4;
                    int32_t j_1;

                    do
                    {
                        long double x87_r7_90 = objC41[1];
                        long double x87_r6_49 = *objC41;
                        long double x87_r5_18 = objC41[-1];
                        long double x87_r4_32 = sqrtl(x87_r5_18 * x87_r5_18 + x87_r7_90 * x87_r7_90
                            + x87_r6_49 * x87_r6_49);
                        long double x87_r6_51 = v_120_1;
                        x87_r6_51 - x87_r4_32;

                        if (*(&((x87_r6_51 < x87_r4_32 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_51, x87_r4_32) ? 1 : 0) << 0xa
                                | (x87_r6_51 == x87_r4_32 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                            v_120_1 = x87_r4_32;

                        objC41 = &objC41[3];
                        j_1 = j_2;
                        j_2 -= 1;
                    } while (j_1 != 1);
                }

                long double x87_r7_93 = v_120_1;
                long double f9_1 = 1f;
                x87_r7_93 - f9_1;

                if (*(&((x87_r7_93 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_93, f9_1) ? 1 : 0) << 0xa
                        | (x87_r7_93 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    v_120_1 = 1f;
            }
        }
        else
        {
            float v_120 = 1f;

            if (!Sys_ResolveSymbol_11(srcS, a3))
            {
                long double x87_r7_74 = *a3 - *srcS;
                v_fc = x87_r7_74;
                float v_f8_3 = a3[1] - *(srcS + 8);
                float v_f4_3 = a3[2] - *(srcS + 0x10);
                long double f8_1 = 0f;
                x87_r7_74 - f8_1;

                if (*(&((x87_r7_74 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_74, f8_1) ? 1 : 0) << 0xa
                    | (x87_r7_74 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    long double x87_r7_75 = v_f8_3;
                    long double f10_1 = 0f;
                    x87_r7_75 - f10_1;

                    if (*(&((x87_r7_75 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_75, f10_1) ? 1 : 0) << 0xa
                        | (x87_r7_75 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                    {
                        long double x87_r7_76 = v_f4_3;
                        long double f13_1 = 0f;
                        x87_r7_76 - f13_1;

                        if (*(&((x87_r7_76 < f13_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_76, f13_1) ? 1 : 0) << 0xa
                            | (x87_r7_76 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        {
                            v_fc = 1f;
                            v_f8_3 = 0f;
                            v_f4_3 = 0f;
                        }
                    }
                }

                int32_t objC26 = *(a1 + 0x20c);
                v_d0 = *(a1 + 0x218);
                long double x87_r7_79 = 1f / (*(a1 + 0x100) - *(a1 + 0xfc));
                int32_t tmpD28 = *(a1 + 0x21c);
                int32_t v_d8 = *(a1 + 0x200);
                int32_t v_d4_1 = objC26;
                *(&v_c8 + 4) = tmpD28;
                *(&v_d0 + 4) = *(a1 + 0x204);
                v_c8 = *(a1 + 0x210);
                int32_t v_b8_1 = *(a1 + 0x220);
                int32_t v_c0_1 = *(a1 + 0x208);
                int32_t v_bc_1 = *(a1 + 0x214);
                int32_t v_b4_1 = *(a1 + 0x224);
                float valA39 = v_fc;
                memcpy(a1 + 0x70, &v_d8, 0x28);
                *(a1 + 0x70) = valA39;
                *(a1 + 0x74) = v_f8_3;
                *(a1 + 0x78) = v_f4_3;
                bool cond_8_1 = !*(a1 + 0x5b5);
                long double x87_r6_36 = x87_r7_79 * *(a1 + 0x70);
                v_108 = x87_r6_36;
                *(a1 + 0x70) = x87_r6_36;
                long double x87_r6_38 = x87_r7_79 * *(a1 + 0x74);
                float v_ec_1 = x87_r6_38;
                *(a1 + 0x74) = x87_r6_38;
                long double x87_r7_80 = x87_r7_79 * *(a1 + 0x78);
                *(a1 + 0x78) = x87_r7_80;

                if (!cond_8_1)
                {
                    *(a1 + 0x70) = -(v_108);
                    *(a1 + 0x74) = -(v_ec_1);
                    *(a1 + 0x78) = -(x87_r7_80);
                }

                int32_t valA43 = *(a1 + 0x7c);
                v_d8 = *(a1 + 0x70);
                int32_t v_d4_2 = valA43;
                v_d0 = *(a1 + 0x88);
                *(&v_d0 + 4) = *(a1 + 0x74);
                v_c8 = *(a1 + 0x80);
                *(&v_c8 + 4) = *(a1 + 0x8c);
                int32_t v_c0_2 = *(a1 + 0x78);
                int32_t v_bc_2 = *(a1 + 0x84);
                int32_t v_b8_2 = *(a1 + 0x90);
                int32_t v_b4_2 = *(a1 + 0x94);
                memcpy(a1 + 0x70, &v_d8, 0x28);
                long double x87_r7_83 = *(a1 + 0x78);
                long double x87_r6_43 = *(a1 + 0x74);
                long double x87_r5_12 = *(a1 + 0x70);
                long double x87_r4_23 =
                    sqrtl(x87_r5_12 * x87_r5_12 + x87_r6_43 * x87_r6_43 + x87_r7_83 * x87_r7_83);
                long double x87_r6_45 = *(a1 + 0x84);
                long double x87_r5_14 = *(a1 + 0x80);
                long double x87_r4_24 = *(a1 + 0x7c);
                v_e4 =
                    sqrtl(x87_r4_24 * x87_r4_24 + x87_r5_14 * x87_r5_14 + x87_r6_45 * x87_r6_45);
                long double x87_r6_47 = *(a1 + 0x90);
                long double x87_r5_16 = *(a1 + 0x8c);
                long double x87_r4_26 = *(a1 + 0x88);
                v_e0 =
                    sqrtl(x87_r4_26 * x87_r4_26 + x87_r5_16 * x87_r5_16 + x87_r6_47 * x87_r6_47);
                v_120 = x87_r4_23;
                long double f21_1 = v_e4;
                x87_r4_23 - f21_1;

                if (*(&((x87_r4_23 < f21_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_23, f21_1) ? 1 : 0) << 0xa
                        | (x87_r4_23 == f21_1 ? 1 : 0) << 0xe) + 1) & 1)
                    v_120 = v_e4;

                long double x87_r7_85 = v_120;
                long double f22_1 = v_e0;
                x87_r7_85 - f22_1;

                if (*(&((x87_r7_85 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_85, f22_1) ? 1 : 0) << 0xa
                        | (x87_r7_85 == f22_1 ? 1 : 0) << 0xe) + 1) & 1)
                    v_120 = v_e0;

                int32_t valA50 = *(a1 + 0x88);
                int32_t tmpD31 = *(a1 + 0x7c);
                v_d8 = *(a1 + 0x70);
                v_d0 = valA50;
                *(&v_d0 + 4) = *(a1 + 0x74);
                *(&v_c8 + 4) = *(a1 + 0x8c);
                int32_t v_d4_3 = tmpD31;
                int32_t v_c0_3 = *(a1 + 0x78);
                int32_t v_b8_3 = *(a1 + 0x90);
                v_c8 = *(a1 + 0x80);
                int32_t v_b4_3 = *(a1 + 0x94);
                int32_t v_bc_3 = *(a1 + 0x84);
                memcpy(a1 + 0x520, &v_d8, 0x28);
                Sys_ReadFileBlock_13(a1 + 0x520, a1 + 0x520);
            }

            void** objC40 = *(a1 + 0x6c);
            long double x87_r7_86 = 0f;
            int32_t i_10 = objC40[0xf];

            if (i_10 > 0)
            {
                int32_t i_8 = i_10;
                int32_t i_3;

                do
                {
                    void* tmpD35 = *(*(*objC40 + 0xc) + 0xc);
                    long double f12_1 = *(tmpD35 + 0x78);
                    x87_r7_86 - f12_1;

                    if (*(&((x87_r7_86 < f12_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_86, f12_1) ? 1 : 0) << 0xa
                            | (x87_r7_86 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        x87_r7_86 = *(tmpD35 + 0x78);

                    objC40 = &objC40[1];
                    i_3 = i_8;
                    i_8 -= 1;
                } while (i_3 != 1);
            }

            v_120_1 = x87_r7_86 * v_120 * 1.10000002f;
        }

        *(&v_140_3 + 4) = a1;
        v_140_3 = *(a1 + 0xf0);
        WorldObject_CommitTransform(v_140_3, &v_98, v_120_1);
        *(a1 + 0xf4) = v_120_1;
        Display_CloseDevice_18(a1);

        if (*(a1 + 0x5b0) != *(a1 + 0x6c) || a6)
        {
            int32_t** srcS4 = a1 + 0x5a0;
            int32_t i_9 = 2;
            int32_t i_4;

            do
            {
                result = *srcS4;

                if (result)
                {
                    result = Sys_ExecuteBytecode_2(result);
                    *srcS4 = nullptr;
                }

                srcS4 = &srcS4[2];
                i_4 = i_9;
                i_9 -= 1;
            } while (i_4 != 1);
            result = a6;

            if (!result)
                goto label_4e50ae;
        }
        else
        {
        label_4e50ae:
            result = *(a1 + 0x6c);
            int32_t i_5 = 0;

            if (result)
            {
                int32_t tmpD38 = *(a1 + 0xa4);
                int32_t* dstD7 = a1 + 0x5a0;
                int32_t v_10c_2 = tmpD38;
                int32_t v_11c_2 = 0;
                v_108 = 0;
                int32_t* v_f0_2 = dstD7;

                do
                {
                    result = *(*(*(*(*(a1 + 0x6c) + (tmpD38 << 2)) + 0xc) + 0xc) + 0x2c) + i_5;
                    g_a5e3f8 = result;

                    if (result[3])
                    {
                        int32_t v_134_13 = 0;
                        int32_t v_138_11 = 0;
                        *(&v_140_3 + 4) = 1;
                        v_140_3 = v_11c_2;
                        g_a5e3ec = Display_SetDisplayMode_18(a1, tmpD38, v_140_3, nullptr);

                        if (!*dstD7)
                        {
                            int32_t v_134_14 = 4;
                            int32_t valA68 = *(g_a5e3f8 + 0xc);
                            dstD7[1] = valA68;
                            *dstD7 = Mem_Alloc(valA68 * 0x18, 4);
                        }

                        int32_t objC46 = dstD7[1] * 0x18;
                        int32_t srcS7;
                        int32_t dstD9;
                        dstD9 =
                            memcpy(*dstD7, *(g_a5e3f8 + 0x1c), objC46 & 0xfffffffc);
                        memcpy(dstD9, srcS7, objC46 & 3);
                        g_a5e3f0 = v_f0_2;
                        SoundSys_EvaluateTrigger(a1, v_f0_2);
                        g_a5e374 = *v_f0_2;
                        g_a5e400 = 0;
                        result = SoundSys_LoadSoundDef_2();
                        i_5 = v_108;
                        tmpD38 = v_10c_2;
                        dstD7 = v_f0_2;
                    }

                    i_5 += 0x20;
                    dstD7 = &dstD7[2];
                    v_11c_2 += 1;
                    v_f0_2 = dstD7;
                    v_108 = i_5;
                } while (i_5 < 0x40);
            }
        }

        *(a1 + 0x5b0) = *(a1 + 0x6c);
    }

    return result;
}
