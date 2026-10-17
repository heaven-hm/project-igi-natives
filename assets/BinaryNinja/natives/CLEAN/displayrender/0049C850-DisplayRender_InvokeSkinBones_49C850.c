// IGI native provenance: DisplayRender_InvokeSkinBones_49C850 - 0x0049C850 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049C850-DisplayRender_InvokeSkinBones_49C850.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DisplayRender_InvokeSkinBones_49C850.h"

int32_t* DisplayRender_InvokeSkinBones_49C850(int32_t* arg1)

{
    int32_t* result = arg1;
    float frame_ptr = *result;
    int32_t source_ptr = *(frame_ptr + 0x6c);

    if (source_ptr)
    {
        int32_t var_8c;
        result = Render_SkinBones(frame_ptr, &var_8c);

        if (!result)
        {
            result = Render_DrawRigidMesh(frame_ptr);

            if (result != 0xffffffff)
            {
                void* result_val = *(source_ptr + (result << 2));
                void* esi_1 = *(*(result_val + 0xc) + 0xc);
                float var_84 = *(frame_ptr + 0x20) - g_bcab08;
                float var_80_1 = *(frame_ptr + 0x28) - g_bcab10;
                long double x87_r7_6 = *(frame_ptr + 0x30) - g_bcab18;
                int32_t var_50_1 = 0;
                var_84 = g_bcabec * var_84;
                float var_80_2 = g_bcabec * var_80_1;
                float var_7c_1 = g_bcabec * x87_r7_6;
                long double x87_r7_8 = g_bcabec;
                float var_74 = x87_r7_8;
                long double x87_r6_7 = 0f;
                float var_70_1 = x87_r6_7;
                float var_6c_1 = x87_r6_7;
                float var_68_1 = x87_r6_7;
                float var_64_1 = x87_r7_8;
                float var_60_1 = x87_r6_7;
                float var_5c_1 = x87_r6_7;
                float var_58_1 = x87_r6_7;
                float var_54_1 = x87_r7_8;
                void var_40;
                Display_SetGammaRamp_7(&var_40, &var_74, &var_84);
                int32_t* 5ca114_1 = g_5ca114;
                (*(*5ca114_1 + 0x2c))(5ca114_1, 1, &var_40);
                result = *(esi_1 + 0x20);

                if (!result)
                {
                    int32_t* esi_2 = *(esi_1 + 0x24);
                    void* ebx_1 = esi_2[5];
                    int32_t eax_1;
                    void* ebp_1;
                    int32_t* esi_3;
                    eax_1 = Display_CheckCapabilities_19(esi_2, frame_ptr);
                    int32_t 7205b0_1 = g_7205b0;
                    void* bcade8_1 = g_bcade8;

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

                    int32_t edx_4 = var_8c;
                    int32_t bcade0_2 = g_bcacec;
                    int32_t bcade0_1 = g_bcade0;

                    if (!edx_4)
                        bcade0_1 = bcade0_2;

                    void* bcadc4_1 = g_bcadc4;

                    if (*(bcadc4_1 + 4) != bcade0_1)
                    {
                        if (edx_4)
                            bcade0_2 = g_bcade0;

                        *(bcadc4_1 + 4) = bcade0_2;
                        int32_t eax_5 = g_bcade0;

                        if (!var_8c)
                            eax_5 = g_bcacec;

                        (*(g_bcadc4 + (eax_5 << 2) + 0x14))(0);
                    }

                    while (true)
                    {
                        if (*(ebx_1 + 0x16))
                        {
                            long double x87_r4_4 = g_bcab00 * (*(ebp_1 + 0x30) - g_bcab18)
                                + g_bcaafc * (*(ebp_1 + 0x28) - g_bcab10)
                                + g_bcaaf8 * (*(ebp_1 + 0x20) - g_bcab08);
                            result = Sys_AllocateMemory_19(DisplayRender_ExecutePipeline_49D0B0,
                                0x30, x87_r4_4);
                            __builtin_memcpy(result, ebp_1 + 0x20, 0x18);
                            int32_t ecx_9 = *(ebp_1 + 0xd8);
                            result[7] = result_val;
                            result[6] = ecx_9;
                            result[8] = esi_2;
                            result[9] = ebx_1;
                            result[0xa] = ebp_1;
                            esi_3 = esi_2;
                        }
                        else
                        {
                            Display_RestoreDevice_19(ebp_1, esi_1);
                            int16_t eax_7 = *(ebx_1 + 0x10);

                            if (eax_7 == 0xffff)
                            {
                                int32_t* 5ca114_3 = g_5ca114;
                                (*(*5ca114_3 + 0x94))(5ca114_3, 0, 1, 3);
                                int32_t* 5ca114_4 = g_5ca114;
                                (*(*5ca114_4 + 0x8c))(5ca114_4, 0, 0);
                                int32_t edx_15 = 0;
                                edx_15 = *(ebx_1 + 0xc);
                                int32_t edx_17 = 0;
                                edx_17 = *(ebx_1 + 0x14);
                                int32_t* 5ca114_5 = g_5ca114;
                                int32_t edx_18 = 0;
                                edx_18 = *(ebx_1 + 0x12);
                                (*(*5ca114_5 + 0x80))(5ca114_5, *esi_3, g_bcad90, edx_18 + eax_1,
                                    edx_17, ebx_1 + 0x1c, edx_15, 0);
                                int32_t* 5ca114_6 = g_5ca114;
                                result = (*(*5ca114_6 + 0x94))(5ca114_6, 0, 1, 4);
                            }
                            else
                            {
                                int32_t* 5ca114_7 = g_5ca114;
                                (*(*5ca114_7 + 0x8c))(5ca114_7, 0,
                                    *(*(*(result_val + 0x10) + (eax_7 << 2)) + 0x20));
                                int32_t edx_7 = 0;
                                edx_7 = *(ebx_1 + 0xc);
                                int32_t edx_9 = 0;
                                edx_9 = *(ebx_1 + 0x14);
                                int32_t* 5ca114_2 = g_5ca114;
                                int32_t edx_10 = 0;
                                edx_10 = *(ebx_1 + 0x12);
                                result = (*(*5ca114_2 + 0x80))(5ca114_2, *esi_3, g_bcad90,
                                    edx_10 + eax_1, edx_9, ebx_1 + 0x1c, edx_7, 0);
                            }
                        }

                        result = *(ebx_1 + 0xe);

                        if (result == 0xffff)
                            break;

                        ebx_1 = ebx_1 + (result & 0xffff) + 0x1c;
                    }
                }
            }
        }
    }

    return result;
}
