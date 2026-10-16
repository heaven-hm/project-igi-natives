#include "0049F700-Mesh_SkinBones.h"
/* 0x0049f700 Mesh_SkinBones full linked: callers=0 callees=11 */
int32_t* sub_49f700(int32_t* a1)

{
    int32_t* result = a1;
    float ebp = *result;
    float var_1bc = ebp;
    int32_t esi = *(ebp + 0x74);
    int32_t var_1cc = esi;

    if (esi)
    {
        uint32_t var_1d0;
        result = sub_4d06c0(ebp, &var_1d0);

        if (!result)
        {
            int32_t ebx_1 = sub_4cff70(ebp);
            result = *(ebp + 0xd4);

            if (!result)
            {
                ebx_1 = 0;
            label_49f760:
                void var_a8;

                if (!result)
                {
                    memcpy(&var_a8, &g_bcaae0, 0xa8);
                    void var_190;
                    memcpy(&var_190, &var_a8, 0xa8);
                    float var_150 = (&g_b81700)[*(ebp + 0xd4)];
                    float var_14c_1 =
                        g_bcabc4 * (&g_b81700)[*(ebp + 0xd4)] / (sub_491d40() * g_bcabc0);
                    int32_t var_130_1 = 0;
                    int32_t* var_1e8_2 = &var_190;
                    float var_144_1 = sub_491d40() * g_bcabc8 / var_150;
                    Transcontext_SetActiveTransContext(var_1e8_2);
                    esi = var_1cc;
                }

                void* eax_2 = *(esi + (ebx_1 << 2));
                void* esi_1 = *(*(eax_2 + 0xc) + 0xc);
                float var_1c8;
                int32_t* var_1e8_3 = &var_1c8;
                var_1c8 = *(ebp + 0x20) - g_bcab08;
                float var_1c4_1 = *(ebp + 0x28) - g_bcab10;
                long double x87_r7_16 = *(ebp + 0x30) - g_bcab18;
                float var_1b8;
                int32_t* var_1ec_1 = &var_1b8;
                void var_e8;
                int32_t* var_1f0_1 = &var_e8;
                int32_t var_194_1 = 0;
                var_1c8 = g_bcabec * var_1c8;
                float var_1c4_2 = g_bcabec * var_1c4_1;
                float var_1c0_1 = g_bcabec * x87_r7_16;
                long double x87_r7_18 = g_bcabec;
                var_1b8 = x87_r7_18;
                long double x87_r6_7 = 0f;
                float var_1b4_1 = x87_r6_7;
                float var_1b0_1 = x87_r6_7;
                float var_1ac_1 = x87_r6_7;
                float var_1a8_1 = x87_r7_18;
                float var_1a4_1 = x87_r6_7;
                float var_1a0_1 = x87_r6_7;
                float var_19c_1 = x87_r6_7;
                float var_198_1 = x87_r7_18;
                sub_4950f0(var_1f0_1, var_1ec_1, var_1e8_3);
                int32_t* eax_3 = g_5ca114;
                (*(*eax_3 + 0x2c))(eax_3, 1, &var_e8);
                sub_49b2d0(ebp + 0x20, *(esi_1 + 0x3c));

                if (*(esi_1 + 0x20) == 1)
                {
                    int32_t* edi_2 = *(esi_1 + 0x24);
                    void* esi_2 = edi_2[7];
                    int32_t eax_6 = sub_49b700(edi_2, var_1cc, ebp + 0x68, ebx_1);
                    int32_t ecx_3 = g_7205b0;
                    void* eax_7 = g_bcade8;

                    if (*(eax_7 + 4) != ecx_3)
                    {
                        *(eax_7 + 4) = ecx_3;
                        (*(g_bcade8 + (g_7205b0 << 2) + 0x14))(0);
                    }

                    void* eax_9 = g_bcad7c;
                    int32_t ecx_5 = g_7ac09c;

                    if (*(eax_9 + 4) != ecx_5)
                    {
                        *(eax_9 + 4) = ecx_5;
                        (*(g_bcad7c + (g_7ac09c << 2) + 0x14))(0);
                    }

                    void* eax_11 = g_bcadac;
                    int32_t ecx_6 = g_7234b8;

                    if (*(eax_11 + 4) != ecx_6)
                    {
                        *(eax_11 + 4) = ecx_6;
                        (*(g_bcadac + (g_7234b8 << 2) + 0x14))(0);
                    }

                    uint32_t eax_15 = var_1d0;
                    int32_t ecx_8 = g_bcade0;

                    if (!eax_15)
                        ecx_8 = g_bcacec;

                    void* edx_6 = g_bcadc4;

                    if (*(edx_6 + 4) != ecx_8)
                    {
                        int32_t eax_12 = g_bcade0;

                        if (!eax_15)
                            eax_12 = g_bcacec;

                        *(edx_6 + 4) = eax_12;
                        int32_t eax_14 = g_bcade0;

                        if (!var_1d0)
                            eax_14 = g_bcacec;

                        (*(g_bcadc4 + (eax_14 << 2) + 0x14))(0);
                    }

                    while (true)
                    {
                        int16_t eax_16 = *(esi_2 + 0x10);

                        if (eax_16 == 0xffff)
                        {
                            int32_t* eax_22 = g_5ca114;
                            (*(*eax_22 + 0x94))(eax_22, 0, 1, 3);
                            int32_t* eax_23 = g_5ca114;
                            (*(*eax_23 + 0x8c))(eax_23, 0, 0);
                            int32_t edx_16 = 0;
                            edx_16 = *(esi_2 + 0xc);
                            int32_t* eax_24 = g_5ca114;
                            int32_t edx_18 = 0;
                            edx_18 = *(esi_2 + 0x14);
                            int32_t edx_19 = 0;
                            edx_19 = *(esi_2 + 0x12);
                            (*(*eax_24 + 0x80))(eax_24, *edi_2, g_bcad90, edx_19 + eax_6,
                                edx_18, esi_2 + 0x1c, edx_16, 0);
                            int32_t* eax_25 = g_5ca114;
                            (*(*eax_25 + 0x94))(eax_25, 0, 1, 4);
                        }
                        else
                        {
                            int32_t* ecx_10 = g_5ca114;
                            (*(*ecx_10 + 0x8c))(ecx_10, 0,
                                *(*(*(eax_2 + 0x10) + (eax_16 << 2)) + 0x20));
                            int32_t edx_8 = 0;
                            edx_8 = *(esi_2 + 0xc);
                            int32_t* eax_20 = g_5ca114;
                            int32_t edx_10 = 0;
                            edx_10 = *(esi_2 + 0x14);
                            int32_t edx_11 = 0;
                            edx_11 = *(esi_2 + 0x12);
                            (*(*eax_20 + 0x80))(eax_20, *edi_2, g_bcad90, edx_11 + eax_6,
                                edx_10, esi_2 + 0x1c, edx_8, 0);
                            ebp = var_1bc;
                        }

                        int16_t eax_26 = *(esi_2 + 0xe);

                        if (eax_26 == 0xffff)
                            break;

                        esi_2 = esi_2 + eax_26 + 0x1c;
                    }
                }

                result = *(ebp + 0xd4);

                if (!result)
                    return Transcontext_SetActiveTransContext(&var_a8);
            }
            else if (ebx_1 != 0xffffffff)
                goto label_49f760;
        }
    }

    return result;
}
