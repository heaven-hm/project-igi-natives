#include "0050F070-Physics_Offscreenbuffersprit.h"
/* 0x0050f070 Physics_Offscreenbuffersprit full linked: callers=1 callees=1 */
int32_t sub_50f070(void* a1)

{
    int32_t eax_4 = g_bcaaa8;

    if (eax_4)
    {
        int32_t edx_1 = *(a1 + 0x10);
        int32_t eax = *(a1 + 0x12);
        long double x87_r7_1 = edx_1;
        int32_t var_88_1 = x87_r7_1 * *(a1 + 0x44);
        long double x87_r6_3 = eax;
        int32_t var_88_2 = x87_r6_3 * *(a1 + 0x48);
        int32_t eax_2 = x87_r7_1 * *(a1 + 0x64) - var_88_1;
        eax_4 = x87_r6_3 * *(a1 + 0x68) - var_88_2;
        int32_t edi_2 = *(a1 + 0x50);
        int32_t var_88_6 = *(a1 + 0x4c);
        int32_t var_88_7 = g_bcaac0;
        int32_t* var_74_1 = g_bcaaa8 + ((g_bcaaa0 * edi_2 + var_88_6) << 2);
        int32_t var_88_8 = g_bcaac4;
        int32_t ebx_6 = g_bcaac8 + var_88_7;
        int64_t var_88_10 = g_bcaacc;
        int32_t ebx_8 = var_88_10 + var_88_8;

        if (var_88_6 < ebx_6 && edi_2 < ebx_8 && var_88_6 + eax_2 >= var_88_7
            && edi_2 + eax_4 >= var_88_8)
        {
            int32_t var_78_2;

            if (*(a1 + 0x58) == 0x3f800000 && *(a1 + 0x5c) == 0x3f800000)
                var_78_2 = 1;

            if (*(a1 + 0x58) != 0x3f800000 || *(a1 + 0x5c) != 0x3f800000
                    || *(a1 + 0x60) != 0x3f800000)
                var_78_2 = 0;

            if (!*(a1 + 0x40))
            {
                int32_t edx_7 = *(a1 + 0x16);

                if (edx_7 == 2)
                {
                    int32_t ebx_16 = *(a1 + 0x18) + ((*(a1 + 0x14) * var_88_2) & 0xfffffffe);
                    int32_t var_70_3 = ebx_16;

                    if (eax_4 > 0)
                    {
                        int32_t var_7c_4 = edi_2;
                        int32_t var_80_6 = eax_4;
                        bool cond:5_1;

                        do
                        {
                            if (edi_2 >= var_88_8 && edi_2 < ebx_8 && eax_2 > 0)
                            {
                                int32_t edx_34 = var_88_1;
                                int32_t esi_6 = var_88_6;
                                int32_t* edi_11 = var_74_1;
                                int32_t var_6c_3 = eax_2;
                                int16_t* ebx_17 = ebx_16 + (edx_34 << 1);
                                bool cond:7_1;

                                do
                                {
                                    if (esi_6 >= var_88_7 && esi_6 < ebx_6)
                                    {
                                        edx_34 = *ebx_17;

                                        if (*(&edx_34 + 1) & 0x80)
                                        {
                                            int32_t eax_46;

                                            if (!var_78_2)
                                            {
                                                eax_46 = (((edx_34 >> 5 & 0x1f) * *(a1 + 0x5c))
                                                    | ((edx_34 >> 0xa & 0x1f) * *(a1 + 0x58))
                                                    << 8) << 8;
                                                edx_34 = (edx_34 & 0x1f) * *(a1 + 0x60);
                                            }
                                            else
                                            {
                                                int32_t edx_35 = edx_34 & 0xffff;
                                                eax_46 = ((edx_35 & 0x7c00) << 3 | (edx_35 & 0x3e0))
                                                    << 3;
                                                edx_34 = edx_35 & 0x1f;
                                            }

                                            *edi_11 = (eax_46 | edx_34) << 3;
                                        }
                                    }

                                    ebx_17 = &ebx_17[1];
                                    esi_6 += 1;
                                    edi_11 = &edi_11[1];
                                    cond:7_1 = var_6c_3 != 1;
                                    var_6c_3 -= 1;
                                } while (cond:7_1);
                                edi_2 = var_7c_4;
                                ebx_16 = var_70_3;
                            }

                            var_74_1 = &var_74_1[g_bcaaa0];
                            edi_2 += 1;
                            eax_4 = var_80_6 - 1;
                            cond:5_1 = var_80_6 != 1;
                            ebx_16 += *(a1 + 0x14) & 0xfffffffe;
                            var_7c_4 = edi_2;
                            var_70_3 = ebx_16;
                            var_80_6 = eax_4;
                        } while (cond:5_1);
                    }
                }
                else if (edx_7 == 3)
                {
                    int32_t var_78_3 = *(a1 + 0x18) + ((*(a1 + 0x14) * var_88_2) & 0xfffffffc);

                    if (eax_4 > 0)
                    {
                        int32_t var_70_2 = edi_2;
                        int32_t var_7c_3 = eax_4;
                        int32_t eax_39;
                        bool cond:6_1;

                        do
                        {
                            if (edi_2 >= var_88_8 && edi_2 < ebx_8 && eax_2 > 0)
                            {
                                int32_t ebx_15 = var_88_6;
                                int32_t* esi_4 = var_74_1;
                                int32_t* ebp_19 = var_78_3 + (var_88_1 << 2);
                                int32_t var_6c_2 = eax_2;
                                bool cond:8_1;

                                do
                                {
                                    if (ebx_15 >= var_88_7 && ebx_15 < ebx_6)
                                    {
                                        int32_t edx_15 = *ebp_19;
                                        int32_t var_2c_1 = 0;
                                        long double x87_r7_18 = (edx_15 >> 0x18) * 0.00392156886f;
                                        long double temp6_1 = 0f;
                                        x87_r7_18 - temp6_1;

                                        if (!(*(&((x87_r7_18 < temp6_1 ? 1 : 0) << 8
                                            | (FCMP_UO(x87_r7_18, temp6_1) ? 1 : 0) << 0xa
                                            | (x87_r7_18 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1)
                                            & 0x40))
                                        {
                                            int32_t var_4_1 = 0;
                                            int32_t var_1c_1 = 0;
                                            long double x87_r6_6 = 1f - x87_r7_18;
                                            int32_t var_c_1 = 0;
                                            int32_t eax_28 = *esi_4;
                                            int32_t var_24_1 = 0;
                                            int32_t var_14_1 = 0;
                                            float var_40_1 = (edx_15 >> 0x10) * *(a1 + 0x58)
                                                * x87_r7_18 * 0.00392156886f;
                                            var_88_10 = eax_28 & 0xff;
                                            *(&var_88_10 + 4) = 0;
                                            float var_38_1 = (edx_15 >> 8) * *(a1 + 0x5c)
                                                * x87_r7_18 * 0.00392156886f;
                                            float var_5c_1 = (edx_15 & 0xff) * *(a1 + 0x60)
                                                * x87_r7_18 * 0.00392156886f;
                                            long double x87_r6_9 =
                                                (eax_28 >> 0x10) * x87_r6_6 * 0.00392156886f
                                                + var_40_1;
                                            long double x87_r5_22 = 0f;
                                            x87_r5_22 - x87_r6_9;

                                            if (*(&((x87_r5_22 < x87_r6_9 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r5_22, x87_r6_9) ? 1 : 0) << 0xa
                                                | (x87_r5_22 == x87_r6_9 ? 1 : 0) << 0xe | 0x3000) + 1)
                                                & 0x41)
                                            {
                                                long double x87_r5_23 = 1f;
                                                x87_r5_23 - x87_r6_9;

                                                if (*(&((x87_r5_23 < x87_r6_9 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r5_23, x87_r6_9) ? 1 : 0)
                                                        << 0xa | (x87_r5_23 == x87_r6_9 ? 1 : 0) << 0xe
                                                        | 0x3000) + 1) & 1)
                                                    x87_r6_9 = 1f;
                                            }
                                            else
                                                x87_r6_9 = 0f;

                                            var_40_1 = x87_r6_9 * 255f;
                                            long double x87_r6_14 =
                                                (eax_28 >> 8) * x87_r6_6 * 0.00392156886f
                                                + var_38_1;
                                            long double x87_r5_24 = 0f;
                                            x87_r5_24 - x87_r6_14;

                                            if (*(&((x87_r5_24 < x87_r6_14 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r5_24, x87_r6_14) ? 1 : 0) << 0xa
                                                | (x87_r5_24 == x87_r6_14 ? 1 : 0) << 0xe | 0x3000)
                                                + 1) & 0x41)
                                            {
                                                long double x87_r5_25 = 1f;
                                                x87_r5_25 - x87_r6_14;

                                                if (*(&((x87_r5_25 < x87_r6_14 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r5_25, x87_r6_14) ? 1 : 0)
                                                        << 0xa | (x87_r5_25 == x87_r6_14 ? 1 : 0) << 0xe
                                                        | 0x3000) + 1) & 1)
                                                    x87_r6_14 = 1f;
                                            }
                                            else
                                                x87_r6_14 = 0f;

                                            var_38_1 = x87_r6_14 * 255f;
                                            long double x87_r7_20 =
                                                var_88_10 * x87_r6_6 * 0.00392156886f + var_5c_1;
                                            long double x87_r6_18 = 0f;
                                            x87_r6_18 - x87_r7_20;

                                            if (*(&((x87_r6_18 < x87_r7_20 ? 1 : 0) << 8
                                                | (FCMP_UO(x87_r6_18, x87_r7_20) ? 1 : 0) << 0xa
                                                | (x87_r6_18 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800)
                                                + 1) & 0x41)
                                            {
                                                long double x87_r6_19 = 1f;
                                                x87_r6_19 - x87_r7_20;

                                                if (*(&((x87_r6_19 < x87_r7_20 ? 1 : 0) << 8
                                                        | (FCMP_UO(x87_r6_19, x87_r7_20) ? 1 : 0)
                                                        << 0xa | (x87_r6_19 == x87_r7_20 ? 1 : 0) << 0xe
                                                        | 0x3800) + 1) & 1)
                                                    x87_r7_20 = 1f;
                                            }
                                            else
                                                x87_r7_20 = 0f;

                                            var_5c_1 = x87_r7_20 * 255f;
                                            *esi_4 = (var_40_1 << 8 | var_38_1) << 8 | var_5c_1;
                                        }
                                    }

                                    ebx_15 += 1;
                                    ebp_19 = &ebp_19[1];
                                    esi_4 = &esi_4[1];
                                    cond:8_1 = var_6c_2 != 1;
                                    var_6c_2 -= 1;
                                } while (cond:8_1);
                                edi_2 = var_70_2;
                            }

                            var_74_1 = &var_74_1[g_bcaaa0];
                            edi_2 += 1;
                            var_70_2 = edi_2;
                            var_78_3 += *(a1 + 0x14) & 0xfffffffc;
                            eax_39 = var_7c_3 - 1;
                            cond:6_1 = var_7c_3 != 1;
                            var_7c_3 = eax_39;
                        } while (cond:6_1);
                        return eax_39;
                    }
                }
                else
                {
                    Error_Show("
                        OffscreenBufferSprite_RenderSprite() : Texture type not supported.");

                    while (true)
                        /* nop */
                }
            }
            else
            {
                int32_t eax_5 = *(a1 + 0x38);
                char* esi_2 = *(a1 + 0x18);
                eax_4 = eax;
                char* var_70_1 = esi_2;
                int32_t var_6c_1 = 0;

                if (eax_4 > 0)
                {
                    int32_t eax_6 = edi_2;
                    int32_t var_7c_2 = eax_6;
                    bool cond:4_1;

                    do
                    {
                        if (eax_6 >= var_88_8 && eax_6 < ebx_8)
                        {
                            int32_t edi_3 = 0;

                            if (edx_1 > 0)
                            {
                                int32_t* ebx_12 = var_74_1;
                                void* ebp_13 = var_88_6 - esi_2;
                                void* var_60_2 = ebp_13;

                                do
                                {
                                    void* eax_7 = esi_2 + ebp_13;

                                    if (eax_7 >= var_88_7 && eax_7 < ebx_6)
                                    {
                                        int32_t eax_9;

                                        if (!var_78_2)
                                        {
                                            int32_t edx_4 = eax_5;
                                            int32_t eax_10 = 0;
                                            eax_10 = *esi_2;
                                            edx_4 = *(edx_4 + (eax_10 << 1));
                                            int32_t eax_16 = (((edx_4 >> 5 & 0x3f) * *(a1 + 0x5c))
                                                | ((edx_4 >> 0xb) * *(a1 + 0x58)) << 9) << 7;
                                            eax_9 =
                                                (eax_16 | ((edx_4 & 0x1f) * *(a1 + 0x60))) << 3;
                                        }
                                        else
                                        {
                                            int32_t edx_3 = 0;
                                            edx_3 = *esi_2;
                                            eax_9 = 0;
                                            eax_9 = *(eax_5 + (edx_3 << 1));
                                        }

                                        ebp_13 = var_60_2;
                                        *ebx_12 = eax_9;
                                    }

                                    edx_1 = *(a1 + 0x10);
                                    edi_3 += 1;
                                    esi_2 = &esi_2[1];
                                    ebx_12 = &ebx_12[1];
                                } while (edi_3 < edx_1);

                                esi_2 = var_70_1;
                                eax_6 = var_7c_2;
                            }
                        }

                        var_74_1 = &var_74_1[g_bcaaa0];
                        esi_2 = &esi_2[*(a1 + 0x14)];
                        eax_6 += 1;
                        cond:4_1 = var_6c_1 + 1 < *(a1 + 0x12);
                        var_70_1 = esi_2;
                        var_6c_1 += 1;
                        var_7c_2 = eax_6;
                    } while (cond:4_1);
                    return eax_6;
                }
            }
        }
    }

    return eax_4;
}
