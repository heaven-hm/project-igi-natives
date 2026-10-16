#include "004D6D40-Render_DrawSplineMesh_11.h"
/* 0x004d6d40 Render_DrawSplineMesh_11 full linked: callers=1 callees=4 */
int32_t* sub_4d6d40(int32_t* a1)

{
    int32_t* result = a1;
    int32_t edi = *(result * 0xc + &g_a542f0);
    int32_t var_54 = edi;

    if (edi > 0)
    {
        int32_t eax_1 = result * 0x28;
        int32_t ecx_1 = *(eax_1 + 0xa53914);
        result = *(eax_1 + &g_a538f4);

        if (ecx_1 > 0)
        {
            int32_t* result_1 = result;
            int32_t var_60_1 = ecx_1;
            bool cond:1_1;

            do
            {
                void* eax_2 = *result;

                if (eax_2 && edi > 0)
                {
                    int32_t* ebx_2 = *(eax_2 + 0xc) + 4;
                    int32_t var_68_1 = edi;
                    bool cond:3_1;

                    do
                    {
                        int32_t esi_1 = ebx_2[-1];
                        int32_t var_6c_1 = esi_1;

                        if (esi_1 > 1 && !ebx_2[1])
                        {
                            int32_t ebp_1 = esi_1 << 3;
                            ebx_2[1] = Mem_Alloc(ebp_1, 4);

                            if (g_a54678)
                                ebx_2[2] = Mem_Alloc(ebp_1, 4);

                            int32_t ebp_2 = 0;

                            if (esi_1 > 0)
                            {
                                float* edi_1 = nullptr;

                                do
                                {
                                    int32_t temp1_1 = (ebp_2 + 1) % esi_1;

                                    if (temp1_1 || *(eax_2 + 7) & 0x80)
                                    {
                                        int32_t eax_14 = *ebx_2;
                                        a1 = nullptr;
                                        float var_3c = *(edi_1 + eax_14);
                                        float var_38_1 = *(edi_1 + eax_14 + 4);
                                        float var_34_1 = *(edi_1 + eax_14 + 8);
                                        int32_t var_2c_1 = 0;
                                        float var_30_1 = *(edi_1 + eax_14 + 0xc);
                                        int32_t edx_5 = ebx_2[1];
                                        int32_t esi_3 = temp1_1 * 0x34;
                                        float var_50 = *(esi_3 + eax_14);
                                        float var_4c_1 = *(esi_3 + eax_14 + 4);
                                        float var_48_1 = *(esi_3 + eax_14 + 8);
                                        float* eax_15 = edx_5 + (ebp_2 << 3);
                                        float var_44_1 = *(esi_3 + eax_14 + 0xc);
                                        int32_t var_40_1 = 0;
                                        sub_4b44d0(&a1, eax_15, &eax_15[1], &var_3c, &var_50);

                                        if (a1)
                                        {
                                            int32_t eax_17 = ebx_2[1];
                                            *(eax_17 + (ebp_2 << 3)) =
                                                *(eax_17 + (ebp_2 << 3)) + 6.28318548f;
                                        }

                                        if (g_a54678)
                                        {
                                            int32_t eax_20 = *ebx_2;
                                            float var_14 = *(edi_1 + eax_20 + 0x14);
                                            float var_10_1 = *(edi_1 + eax_20 + 0x18);
                                            float var_c_1 = *(edi_1 + eax_20 + 0x1c);
                                            int32_t var_4_1 = 0;
                                            float var_8_1 = *(edi_1 + eax_20 + 0x20);
                                            float var_28 = *(esi_3 + eax_20 + 0x24);
                                            float var_24_1 = *(esi_3 + eax_20 + 0x28);
                                            float var_20_1 = *(esi_3 + eax_20 + 0x2c);
                                            int32_t var_18_1 = 0;
                                            float var_1c_1 = *(esi_3 + eax_20 + 0x30);
                                            float* eax_21 = ebx_2[2] + (ebp_2 << 3);
                                            sub_4b44d0(&a1, eax_21, &eax_21[1], &var_14, &var_28);

                                            if (a1)
                                            {
                                                int32_t ecx_5 = ebx_2[2];
                                                *(ecx_5 + (ebp_2 << 3)) =
                                                    *(ecx_5 + (ebp_2 << 3)) + 6.28318548f;
                                            }
                                        }

                                        esi_1 = var_6c_1;
                                    }
                                    else
                                    {
                                        *(ebx_2[1] + (ebp_2 << 3)) = 0;
                                        *(ebx_2[1] + (ebp_2 << 3) + 4) = 0;

                                        if (g_a54678)
                                        {
                                            *(ebx_2[2] + (ebp_2 << 3)) = 0;
                                            *(ebx_2[2] + (ebp_2 << 3) + 4) = 0;
                                        }
                                    }

                                    ebp_2 += 1;
                                    edi_1 = &edi_1[0xd];
                                } while (ebp_2 < esi_1);

                                edi = var_54;
                            }
                        }

                        ebx_2 = &ebx_2[4];
                        cond:3_1 = var_68_1 != 1;
                        var_68_1 -= 1;
                    } while (cond:3_1);
                }

                result = &result_1[1];
                cond:1_1 = var_60_1 != 1;
                result_1 = result;
                var_60_1 -= 1;
            } while (cond:1_1);
        }
    }

    return result;
}
