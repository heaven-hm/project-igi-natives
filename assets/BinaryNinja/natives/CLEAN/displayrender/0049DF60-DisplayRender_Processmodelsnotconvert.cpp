// IGI native provenance: DisplayRender_Processmodelsnotconvert - 0x0049DF60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049DF60-DisplayRender_Processmodelsnotconvert.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_Processmodelsnotconvert.h"

int32_t* DisplayRender_Processmodelsnotconvert(int32_t* arg1)

{
    int32_t* result = arg1;
    float base_val = *result;
    void* source_ptr = *(base_val + 0x6c);

    if (source_ptr)
    {
        if (*(source_ptr + 0x3c))
        {
            int32_t var_208;
            result = Render_DrawSplineMesh(base_val, &var_208);

            if (!result)
            {
                result = DynObj_CreateMagicObject_16(base_val);
                int32_t* result_1 = result;

                if (!*(base_val + 0xec))
                {
                    result = nullptr;
                    result_1 = nullptr;
                label_49dfd1:
                    result = *(source_ptr + (result << 2));
                    int32_t* result_2 = result;
                    void* ecx_2 = *(result[3] + 0xc);

                    if (*(ecx_2 + 0x24))
                    {
                        Render_ClipMesh_2(result);
                        void var_a8;

                        if (!*(base_val + 0xec))
                        {
                            __builtin_memcpy(&var_a8, &g_bcaae0, 0xa8);
                            void var_190;
                            __builtin_memcpy(&var_190, &var_a8, 0xa8);
                            float var_150 = (&g_b81700)[*(base_val + 0xec)];
                            float var_14c_1 = g_bcabc4 * (&g_b81700)[*(base_val + 0xec)]
                                / (Display_ClearSurfaces_4() * g_bcabc0);
                            int32_t var_130_1 = 0;
                            float var_144_1 = Display_ClearSurfaces_4() * g_bcabc8 / var_150;
                            Transcontext_SetActiveTransContext(&var_190);
                        }

                        float var_204 = *(base_val + 0x20) - g_bcab08;
                        float var_200_1 = *(base_val + 0x28) - g_bcab10;
                        long double x87_r7_16 = *(base_val + 0x30) - g_bcab18;
                        var_204 = g_bcabec * var_204;
                        float var_200_2 = g_bcabec * var_200_1;
                        float var_1fc_1 = g_bcabec * x87_r7_16;
                        float var_1f8;
                        __builtin_memcpy(&var_1f8, base_val + 0x70, 0x28);
                        long double x87_r7_19 = g_bcabec * *(base_val + 0x98);
                        float var_218_1 = g_bcabec * *(base_val + 0x9c);
                        float var_214_1 = g_bcabec * *(base_val + 0xa0);
                        var_1f8 = var_1f8 * x87_r7_19;
                        float var_1f4;
                        float var_1f4_1 = var_1f4 * var_218_1;
                        float var_1f0;
                        float var_1f0_1 = var_1f0 * var_214_1;
                        float var_1ec;
                        float var_1ec_1 = var_1ec * x87_r7_19;
                        float var_1e8;
                        float var_1e8_1 = var_1e8 * var_218_1;
                        float var_1e4;
                        float var_1e4_1 = var_1e4 * var_214_1;
                        float var_1e0;
                        float var_1e0_1 = var_1e0 * x87_r7_19;
                        float var_1dc;
                        float var_1dc_1 = var_1dc * var_218_1;
                        float var_1d8;
                        float var_1d8_1 = var_1d8 * var_214_1;
                        void var_e8;
                        Display_SetGammaRamp_7(&var_e8, &var_1f8, &var_204);
                        int32_t* 5ca114_1 = g_5ca114;
                        (*(*5ca114_1 + 0x2c))(5ca114_1, 1, &var_e8);
                        int32_t var_1a0_1 = *(base_val + 0x94) + g_bcab04 + 1;
                        float var_1ac_1 = g_bcab00 * *(base_val + 0x88) + g_bcaafc * *(base_val + 0x7c)
                            + g_bcaaf8 * *(base_val + 0x70);
                        int32_t eax_4 = *(ecx_2 + 0x20);
                        float var_1a8_1 = g_bcab00 * *(base_val + 0x8c) + g_bcaafc * *(base_val + 0x80)
                            + g_bcaaf8 * *(base_val + 0x74);
                        float var_1a4_1 = g_bcab00 * *(base_val + 0x90) + g_bcaafc * *(base_val + 0x84)
                            + g_bcaaf8 * *(base_val + 0x78);
                        long double x87_r7_40 = (*(base_val + 0x30) - g_bcab18) * g_bcab00
                            + (*(base_val + 0x28) - g_bcab10) * g_bcaafc
                            + (*(base_val + 0x20) - g_bcab08) * g_bcaaf8;
                        float var_1c8_1 = x87_r7_40;

                        if (!eax_4)
                        {
                            int32_t* edi_1 = *(ecx_2 + 0x24);
                            int32_t 7205b0_1 = g_7205b0;
                            int32_t* var_228_1 = edi_1;
                            eax_4 = edi_1[9];
                            int32_t* esi_3 = edi_1[5];
                            void* bcade8_1 = g_bcade8;
                            int32_t* var_20c_1 = esi_3;

                            if (*(bcade8_1 + 4) != 7205b0_1)
                            {
                                *(bcade8_1 + 4) = 7205b0_1;
                                (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
                            }

                            void* bcad7c_1 = g_bcad7c;
                            int32_t 7ac09c_1 = g_7ac09c;

                            if (*(bcad7c_1 + 4) != 7ac09c_1)
                            {
                                *(bcad7c_1 + 4) = 7ac09c_1;
                                (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
                            }

                            void* bcadac_1 = g_bcadac;
                            int32_t 7234b8_1 = g_7234b8;

                            if (*(bcadac_1 + 4) != 7234b8_1)
                            {
                                *(bcadac_1 + 4) = 7234b8_1;
                                (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
                            }

                            int32_t edx_6 = var_208;
                            int32_t bcade0_3 = g_bcacec;
                            int32_t bcade0_1 = g_bcade0;

                            if (!edx_6)
                                bcade0_1 = bcade0_3;

                            void* bcadc4_2 = g_bcadc4;

                            if (*(bcadc4_2 + 4) != bcade0_1)
                            {
                                if (edx_6)
                                    bcade0_3 = g_bcade0;

                                *(bcadc4_2 + 4) = bcade0_3;
                                int32_t eax_8 = g_bcade0;

                                if (!var_208)
                                    eax_8 = g_bcacec;

                                (*(g_bcadc4 + (eax_8 << 2) + 0x14))(0);
                            }

                            if (esi_3)
                            {
                                while (true)
                                {
                                    if (*(esi_3 + 0x16))
                                    {
                                        float var_194_1 = var_20c_1[2] * var_1a4_1
                                            + var_20c_1[1] * var_1a8_1 + *var_20c_1 * var_1ac_1;
                                        int32_t eax_18 = Render_DrawBoneMesh_3(result_2);
                                        void* eax_19 = Sys_AllocateMemory_19(Display_SyncVSync_20,
                                            eax_18 + 0x68, var_194_1 + var_1c8_1);
                                        void* eax_20;

                                        eax_20 = !eax_18 ? nullptr : eax_19 + 0x68;

                                        int32_t* result_5 = result_2;
                                        *(eax_19 + 0x60) = eax_20;
                                        Render_DrawSplineMesh_3(result_5, eax_20);
                                        __builtin_memcpy(eax_19, base_val + 0x20, 0x18);
                                        __builtin_memcpy(eax_19 + 0x18, base_val + 0x70, 0x28);
                                        *(eax_19 + 0x40) = *(base_val + 0x98);
                                        *(eax_19 + 0x44) = *(base_val + 0x9c);
                                        int32_t* result_6 = result_2;
                                        *(eax_19 + 0x48) = *(base_val + 0xa0);
                                        *(eax_19 + 0x4c) = *(base_val + 0xd8);
                                        *(eax_19 + 0x50) = result_6;
                                        *(eax_19 + 0x54) = var_228_1;
                                        *(eax_19 + 0x58) = var_20c_1;
                                        esi_3 = var_20c_1;
                                        *(eax_19 + 0x5c) = *(base_val + 0xec);
                                        edi_1 = var_228_1;
                                    }
                                    else
                                    {
                                        Display_RestoreDevice_19(base_val, ecx_2);
                                        int16_t eax_11 = esi_3[4];

                                        if (eax_11 == 0xffff)
                                        {
                                            int32_t* 5ca114_3 = g_5ca114;
                                            (*(*5ca114_3 + 0x94))(5ca114_3, 0, 1, 3);
                                            int32_t* 5ca114_4 = g_5ca114;
                                            (*(*5ca114_4 + 0x8c))(5ca114_4, 0, 0);
                                            int32_t edx_18 = 0;
                                            edx_18 = esi_3[3];
                                            int32_t edx_20 = 0;
                                            edx_20 = esi_3[5];
                                            int32_t* 5ca114_5 = g_5ca114;
                                            int32_t edx_21 = 0;
                                            edx_21 = *(esi_3 + 0x12);
                                            (*(*5ca114_5 + 0x80))(5ca114_5, *edi_1, *edi_1[0xa],
                                                edx_21 + eax_4, edx_20, &esi_3[7], edx_18, 0);
                                            int32_t* 5ca114_6 = g_5ca114;
                                            (*(*5ca114_6 + 0x94))(5ca114_6, 0, 1, 4);
                                        }
                                        else
                                        {
                                            int32_t* 5ca114_14 = g_5ca114;
                                            (*(*5ca114_14 + 0x8c))(5ca114_14, 0,
                                                *(*(result_2[4] + (eax_11 << 2)) + 0x20));
                                            int32_t edx_9 = 0;
                                            edx_9 = esi_3[3];
                                            int32_t edx_11 = 0;
                                            edx_11 = esi_3[5];
                                            int32_t* 5ca114_2 = g_5ca114;
                                            int32_t edx_12 = 0;
                                            edx_12 = *(esi_3 + 0x12);
                                            (*(*5ca114_2 + 0x80))(5ca114_2, *edi_1, *edi_1[0xa],
                                                edx_12 + eax_4, edx_11, &esi_3[7], edx_9, 0);
                                        }
                                    }

                                    int16_t eax_23 = *(esi_3 + 0xe);

                                    if (eax_23 == 0xffff)
                                        break;

                                    esi_3 = esi_3 + eax_23 + 0x1c;
                                    var_20c_1 = esi_3;
                                }
                            }
                        }
                        else if (eax_4 == 3)
                        {
                            int32_t eax_25 = *(base_val + 0xdc);
                            int32_t eax_26;
                            int32_t edi_6;

                            if (eax_25)
                            {
                                edi_6 = result_1 * 0x24;
                                eax_26 = *(edi_6 + eax_25);
                            }

                            if (!eax_25 || !eax_26)
                            {
                                int32_t edi_12 = 0;
                                int32_t* esi_12 = *(ecx_2 + 0x24);
                                int32_t* var_224_4 = esi_12;
                                edi_12 = esi_12[0xb];
                                float* ebp_8 = esi_12[7];
                                int32_t var_228_3 = edi_12;
                                Display_SetDisplayMode_20(esi_12, nullptr);
                                void* bcade8_3 = g_bcade8;
                                int32_t 7205b0_2 = g_7205b0;

                                if (*(bcade8_3 + 4) != 7205b0_2)
                                {
                                    *(bcade8_3 + 4) = 7205b0_2;
                                    (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
                                }

                                void* bcad7c_3 = g_bcad7c;
                                int32_t 7ac09c_3 = g_7ac09c;

                                if (*(bcad7c_3 + 4) != 7ac09c_3)
                                {
                                    *(bcad7c_3 + 4) = 7ac09c_3;
                                    (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
                                }

                                void* bcadac_3 = g_bcadac;
                                int32_t 7234b8_2 = g_7234b8;

                                if (*(bcadac_3 + 4) != 7234b8_2)
                                {
                                    *(bcadac_3 + 4) = 7234b8_2;
                                    (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
                                }

                                int32_t eax_47 = var_208;
                                int32_t ecx_37 = g_bcade0;

                                if (!eax_47)
                                    ecx_37 = g_bcacec;

                                void* bcadc4_1 = g_bcadc4;

                                if (*(bcadc4_1 + 4) != ecx_37)
                                {
                                    int32_t eax_48 = g_bcade0;

                                    if (!eax_47)
                                        eax_48 = g_bcacec;

                                    *(bcadc4_1 + 4) = eax_48;
                                    int32_t eax_50 = g_bcade0;

                                    if (!var_208)
                                        eax_50 = g_bcacec;

                                    (*(g_bcadc4 + (eax_50 << 2) + 0x14))(0);
                                }

                                if (ebp_8)
                                {
                                    while (true)
                                    {
                                        if (ebp_8[6])
                                        {
                                            float ecx_43 = ebp_8[1];
                                            float var_23c_17 = ecx_43;
                                            void* eax_56 = Sys_AllocateMemory_19(
                                                Display_SwapBuffers_20, 0x68,
                                                ebp_8[2] * var_1a4_1 + ecx_43 * var_1a8_1
                                                    + *ebp_8 * var_1ac_1 + var_1c8_1);
                                            __builtin_memcpy(eax_56, base_val + 0x20, 0x18);
                                            __builtin_memcpy(eax_56 + 0x18, base_val + 0x70, 0x28);
                                            edi_12 = var_228_3;
                                            *(eax_56 + 0x40) = *(base_val + 0x98);
                                            *(eax_56 + 0x44) = *(base_val + 0x9c);
                                            *(eax_56 + 0x48) = *(base_val + 0xa0);
                                            int32_t* result_4 = result_2;
                                            *(eax_56 + 0x4c) = *(base_val + 0xd8);
                                            *(eax_56 + 0x50) = result_4;
                                            *(eax_56 + 0x54) = var_224_4;
                                            *(eax_56 + 0x58) = ebp_8;
                                            int32_t ecx_46 = *(base_val + 0xec);
                                            *(eax_56 + 0x60) = 0;
                                            *(eax_56 + 0x5c) = ecx_46;
                                            esi_12 = var_224_4;
                                        }
                                        else
                                        {
                                            Display_RestoreDevice_19(base_val, ecx_2);
                                            int16_t eax_52 = ebp_8[4];

                                            if (eax_52 == 0xffff)
                                            {
                                                int32_t* 5ca114_10 = g_5ca114;
                                                (*(*5ca114_10 + 0x94))(5ca114_10, 0, 1, 3);
                                                int32_t* 5ca114_11 = g_5ca114;
                                                (*(*5ca114_11 + 0x8c))(5ca114_11, 0, 0);
                                                int32_t edx_65 = 0;
                                                edx_65 = ebp_8[3];
                                                int32_t* 5ca114_12 = g_5ca114;
                                                int32_t edx_67 = 0;
                                                edx_67 = *(ebp_8 + 0x16);
                                                int32_t edx_68 = 0;
                                                edx_68 = ebp_8[5];
                                                (*(*5ca114_12 + 0x80))(5ca114_12, *esi_12,
                                                    *esi_12[0xc], edx_68 + edi_12, edx_67,
                                                    &ebp_8[8], edx_65, 0);
                                                int32_t* 5ca114_13 = g_5ca114;
                                                (*(*5ca114_13 + 0x94))(5ca114_13, 0, 1, 4);
                                            }
                                            else
                                            {
                                                int32_t* 5ca114_15 = g_5ca114;
                                                (*(*5ca114_15 + 0x8c))(5ca114_15, 0,
                                                    *(*(result_2[4] + (eax_52 << 2)) + 0x20));
                                                int32_t edx_56 = 0;
                                                edx_56 = ebp_8[3];
                                                edi_12 = var_228_3;
                                                int32_t edx_58 = 0;
                                                edx_58 = *(ebp_8 + 0x16);
                                                int32_t* 5ca114_9 = g_5ca114;
                                                int32_t edx_59 = 0;
                                                edx_59 = ebp_8[5];
                                                (*(*5ca114_9 + 0x80))(5ca114_9, *esi_12,
                                                    *esi_12[0xc], edx_59 + edi_12, edx_58,
                                                    &ebp_8[8], edx_56, 0);
                                            }
                                        }

                                        int16_t eax_58 = *(ebp_8 + 0xe);

                                        if (eax_58 == 0xffff)
                                            break;

                                        ebp_8 = eax_58 + ebp_8 + 0x20;
                                    }
                                }
                            }
                            else
                            {
                                int32_t* esi_7 = *(ecx_2 + 0x24);
                                int32_t eax_28 = 0;
                                int32_t* var_224_3 = esi_7;
                                eax_28 = esi_7[0xb];
                                int32_t* ebp_7 = esi_7[7];
                                uint32_t eax_30 = DynObj_LookupHashItem_16();
                                int32_t edx_31 = 0;
                                edx_31 = *(base_val + 0x1c);
                                (*(((eax_30 * 0x180 + edx_31) << 2) + &g_a96ae0))(base_val, 0);
                                Display_SetDisplayMode_20(esi_7, edi_6 + *(base_val + 0xdc));
                                void* bcade8_2 = g_bcade8;
                                int32_t 723504_1 = g_723504;

                                if (*(bcade8_2 + 4) != 723504_1)
                                {
                                    *(bcade8_2 + 4) = 723504_1;
                                    (*(g_bcade8 + (g_723504 << 2) + 0x14))(0);
                                }

                                void* bcad7c_2 = g_bcad7c;
                                int32_t 7ac09c_2 = g_7ac09c;

                                if (*(bcad7c_2 + 4) != 7ac09c_2)
                                {
                                    *(bcad7c_2 + 4) = 7ac09c_2;
                                    (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
                                }

                                void* bcadac_2 = g_bcadac;
                                int32_t 7addd4_1 = g_7addd4;

                                if (*(bcadac_2 + 4) != 7addd4_1)
                                {
                                    *(bcadac_2 + 4) = 7addd4_1;
                                    (*(g_bcadac + (g_7addd4 << 2) + 0x14))(0);
                                }

                                int32_t edx_34 = var_208;
                                uint32_t bcade0_4 = g_bcacec;
                                uint32_t bcade0_2 = g_bcade0;

                                if (!edx_34)
                                    bcade0_2 = bcade0_4;

                                void* bcadc4_3 = g_bcadc4;

                                if (*(bcadc4_3 + 4) != bcade0_2)
                                {
                                    if (edx_34)
                                        bcade0_4 = g_bcade0;

                                    *(bcadc4_3 + 4) = bcade0_4;
                                    int32_t eax_35 = g_bcade0;

                                    if (!var_208)
                                        eax_35 = g_bcacec;

                                    (*(g_bcadc4 + (eax_35 << 2) + 0x14))(0);
                                }

                                while (true)
                                {
                                    if (ebp_7[4] != 0xffff)
                                    {
                                        if (ebp_7[6])
                                        {
                                            float ecx_31 = *ebp_7;
                                            float var_23c_13 = ecx_31;
                                            bcade0_4 = Sys_AllocateMemory_19(
                                                Display_SwapBuffers_20, 0x68,
                                                ebp_7[2] * var_1a4_1 + ebp_7[1] * var_1a8_1
                                                    + ecx_31 * var_1ac_1 + var_1c8_1);
                                            __builtin_memcpy(bcade0_4, base_val + 0x20, 0x18);
                                            __builtin_memcpy(bcade0_4 + 0x18, base_val + 0x70, 0x28);
                                            *(bcade0_4 + 0x40) = *(base_val + 0x98);
                                            *(bcade0_4 + 0x44) = *(base_val + 0x9c);
                                            *(bcade0_4 + 0x48) = *(base_val + 0xa0);
                                            int32_t* result_3 = result_2;
                                            *(bcade0_4 + 0x4c) = *(base_val + 0xd8);
                                            *(bcade0_4 + 0x50) = result_3;
                                            *(bcade0_4 + 0x54) = var_224_3;
                                            *(bcade0_4 + 0x58) = ebp_7;
                                            *(bcade0_4 + 0x5c) = *(base_val + 0xec);
                                            *(bcade0_4 + 0x60) = eax_26;
                                        }
                                        else
                                        {
                                            Display_RestoreDevice_19(base_val, ecx_2);
                                            int32_t eax_36 = 0;
                                            eax_36 = *(ebp_7 + 0x12);
                                            int32_t eax_38 = 0;
                                            eax_38 = ebp_7[4];
                                            (*(**&g_5ca114 + 0x8c))(g_5ca114, 0,
                                                *(*(result_2[4] + (eax_38 << 2)) + 0x20));
                                            int32_t* 5ca114_7 = g_5ca114;
                                            (*(*5ca114_7 + 0x8c))(5ca114_7, 1,
                                                *(eax_26 + eax_36 * 0x2c + 0x5c));
                                            int32_t edx_39 = 0;
                                            edx_39 = ebp_7[3];
                                            int32_t edx_41 = 0;
                                            edx_41 = *(ebp_7 + 0x16);
                                            int32_t* 5ca114_8 = g_5ca114;
                                            int32_t edx_42 = 0;
                                            edx_42 = ebp_7[5];
                                            (*(*5ca114_8 + 0x80))(5ca114_8, *esi_7, *esi_7[0xc],
                                                edx_42 + eax_28, edx_41, &ebp_7[8], edx_39, 0);
                                        }
                                    }

                                    int16_t eax_43 = *(ebp_7 + 0xe);

                                    if (eax_43 == 0xffff)
                                        break;

                                    esi_7 = var_224_3;
                                    ebp_7 = eax_43 + ebp_7 + 0x20;
                                }
                            }
                        }

                        if (!*(base_val + 0xec))
                            Transcontext_SetActiveTransContext(&var_a8);

                        return Render_DrawRigidMesh_3(result_2);
                    }
                }
                else if (result != 0xffffffff)
                    goto label_49dfd1;
            }
        }
        else
        {
            void* __saved_ebp_1 = source_ptr + 0x14;
            Error_Show("model %s not converted");

            while (true)
                /* nop */
        }
    }

    return result;
}
