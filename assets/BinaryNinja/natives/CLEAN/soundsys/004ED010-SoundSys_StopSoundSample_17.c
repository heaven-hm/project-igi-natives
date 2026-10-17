// IGI native provenance: SoundSys_StopSoundSample_17 - 0x004ED010 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ED010-SoundSys_StopSoundSample_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_StopSoundSample_17.h"
void* SoundSys_StopSoundSample_17(void* context)

{
    int32_t data_val = g_a5ef9c;
    long double fpu7 = 0.0f;
    int32_t entity_2 = data_val * 0xb0;
    int32_t context_val = 0;
    int32_t i_1 = *(entity_2 + 0xbc20a4);
    void* temp_val = *(entity_2 + 0xbc20a8);
    int32_t source_1 = data_val * 0x28;
    float item_c = 0.0f;
    float item_4 = 0.0f;
    float item_8 = 0.0f;

    if (i_1 > 0)
    {
        int32_t i;

        do
        {
            int32_t data_1 = *(temp_val + 4);

            if (data_1 == 1)
            {
                if (*(*(temp_val + 8) + 0xc28c62) & 0x80)
                    context_val |= *temp_val;
            }
            else if (data_1 == 2)
            {
                if (*(temp_val + 8) & *(source_1 + &g_bcaa20))
                    context_val |= *temp_val;
            }
            else if (data_1 == 3 && *(temp_val + 8) & *g_c28f8c)
                context_val |= *temp_val;

            temp_val += 0xc;
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    float data_7 = *(entity_2 + 0xbc20ac);

    if (data_7 == 2)
    {
        item_c = *(source_1 + 0xbcaa0c);
        fpu7 = *(source_1 + 0xbcaa08);
        item_4 = *(source_1 + 0xbcaa18);
        item_8 = *(source_1 + 0xbcaa1c);
    }
    else if (data_7 == 3)
    {
        fpu7 = g_c28f84;
        item_c = g_c28f88;
    }

    if (!(context_val & 0x10))
    {
        long double fpu_val_6_7 = *(entity_2 + 0xbc20b0);

        if (!(context_val & 0x20))
        {
            long double f5_1 = 0.0f;
            fpu_val_6_7 - f5_1;

            if (!(*(&((fpu_val_6_7 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_7, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_6_7 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double fpu_val_6_15 = *(entity_2 + 0xbc20b0);
                long double f9_1 = 0.0f;
                fpu_val_6_15 - f9_1;

                if (!(*(&((fpu_val_6_15 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_15, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_15 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double fpu_val_6_17 = *(entity_2 + 0xbc20b0) - *(entity_2 + 0xbc20e0);
                    *(entity_2 + 0xbc20b0) = fpu_val_6_17;
                    long double f14_1 = 0.0f;
                    fpu_val_6_17 - f14_1;

                    if (*(&((fpu_val_6_17 < f14_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_17, f14_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_17 == f14_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(entity_2 + 0xbc20b0) = 0;
                }
            }
            else
            {
                long double fpu_val_6_14 = *(entity_2 + 0xbc20e0) + *(entity_2 + 0xbc20b0);
                *(entity_2 + 0xbc20b0) = fpu_val_6_14;
                long double f10_1 = 0.0f;
                fpu_val_6_14 - f10_1;

                if (!(*(&((fpu_val_6_14 < f10_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_14, f10_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_14 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(entity_2 + 0xbc20b0) = 0;
            }
        }
        else
        {
            long double f6_1 = *(entity_2 + 0xbc20c0);
            fpu_val_6_7 - f6_1;

            if (!(*(&((fpu_val_6_7 < f6_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_7, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_6_7 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double fpu_val_6_10 = *(entity_2 + 0xbc20b0);
                long double f11_1 = *(entity_2 + 0xbc20c0);
                fpu_val_6_10 - f11_1;

                if (!(*(&((fpu_val_6_10 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_10, f11_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_10 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double fpu_val_6_12 = *(entity_2 + 0xbc20b0) - *(entity_2 + 0xbc20d0);
                    *(entity_2 + 0xbc20b0) = fpu_val_6_12;
                    long double f15_1 = *(entity_2 + 0xbc20c0);
                    fpu_val_6_12 - f15_1;

                    if (*(&((fpu_val_6_12 < f15_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_12, f15_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_12 == f15_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(entity_2 + 0xbc20b0) = *(entity_2 + 0xbc20c0);
                }
            }
            else
            {
                long double fpu_val_6_9 = *(entity_2 + 0xbc20d0) + *(entity_2 + 0xbc20b0);
                *(entity_2 + 0xbc20b0) = fpu_val_6_9;
                long double f12_1 = *(entity_2 + 0xbc20c0);
                fpu_val_6_9 - f12_1;

                if (!(*(&((fpu_val_6_9 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_9, f12_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_9 == f12_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(entity_2 + 0xbc20b0) = *(entity_2 + 0xbc20c0);
            }
        }
    }
    else
    {
        long double fpu_val_6_1 = -(*(entity_2 + 0xbc20c0));
        long double f4_1 = *(entity_2 + 0xbc20b0);
        fpu_val_6_1 - f4_1;

        if (*(&((fpu_val_6_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f4_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double f7_1 = *(entity_2 + 0xbc20b0);
            fpu_val_6_1 - f7_1;

            if (*(&((fpu_val_6_1 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                long double fpu_val_6_6 = *(entity_2 + 0xbc20b0) - *(entity_2 + 0xbc20d0);
                *(entity_2 + 0xbc20b0) = fpu_val_6_6;
                float item_10_2 = -(*(entity_2 + 0xbc20c0));
                long double f13_1 = item_10_2;
                fpu_val_6_6 - f13_1;

                if (*(&((fpu_val_6_6 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_6, f13_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_6 == f13_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(entity_2 + 0xbc20b0) = item_10_2;
            }
        }
        else
        {
            long double fpu_val_6_4 = *(entity_2 + 0xbc20d0) + *(entity_2 + 0xbc20b0);
            *(entity_2 + 0xbc20b0) = fpu_val_6_4;
            float item_10_1 = -(*(entity_2 + 0xbc20c0));
            long double f8_1 = item_10_1;
            fpu_val_6_4 - f8_1;

            if (!(*(&((fpu_val_6_4 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_4, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_4 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(entity_2 + 0xbc20b0) = item_10_1;
        }
    }

    if (!(context_val & 0x40))
    {
        long double fpu_val_6_25 = *(entity_2 + 0xbc20b4);

        if (!(context_val & 0x80))
        {
            long double f17_1 = 0.0f;
            fpu_val_6_25 - f17_1;

            if (!(*(&((fpu_val_6_25 < f17_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_25, f17_1) ? 1 : 0) << 0xa
                | (fpu_val_6_25 == f17_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double fpu_val_6_33 = *(entity_2 + 0xbc20b4);
                long double f21_1 = 0.0f;
                fpu_val_6_33 - f21_1;

                if (!(*(&((fpu_val_6_33 < f21_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_33, f21_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_33 == f21_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double fpu_val_6_35 = *(entity_2 + 0xbc20b4) - *(entity_2 + 0xbc20e4);
                    *(entity_2 + 0xbc20b4) = fpu_val_6_35;
                    long double f27_1 = 0.0f;
                    fpu_val_6_35 - f27_1;

                    if (*(&((fpu_val_6_35 < f27_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_35, f27_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_35 == f27_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(entity_2 + 0xbc20b4) = 0;
                }
            }
            else
            {
                long double fpu_val_6_32 = *(entity_2 + 0xbc20e4) + *(entity_2 + 0xbc20b4);
                *(entity_2 + 0xbc20b4) = fpu_val_6_32;
                long double f22_1 = 0.0f;
                fpu_val_6_32 - f22_1;

                if (!(*(&((fpu_val_6_32 < f22_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_32, f22_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_32 == f22_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(entity_2 + 0xbc20b4) = 0;
            }
        }
        else
        {
            long double f18_1 = *(entity_2 + 0xbc20c0);
            fpu_val_6_25 - f18_1;

            if (!(*(&((fpu_val_6_25 < f18_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_25, f18_1) ? 1 : 0) << 0xa
                | (fpu_val_6_25 == f18_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double fpu_val_6_28 = *(entity_2 + 0xbc20b4);
                long double f23_1 = *(entity_2 + 0xbc20c0);
                fpu_val_6_28 - f23_1;

                if (!(*(&((fpu_val_6_28 < f23_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_28, f23_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_28 == f23_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                {
                    long double fpu_val_6_30 = *(entity_2 + 0xbc20b4) - *(entity_2 + 0xbc20d4);
                    *(entity_2 + 0xbc20b4) = fpu_val_6_30;
                    long double f28_1 = *(entity_2 + 0xbc20c0);
                    fpu_val_6_30 - f28_1;

                    if (*(&((fpu_val_6_30 < f28_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_6_30, f28_1) ? 1 : 0) << 0xa
                            | (fpu_val_6_30 == f28_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        *(entity_2 + 0xbc20b4) = *(entity_2 + 0xbc20c0);
                }
            }
            else
            {
                long double fpu_val_6_27 = *(entity_2 + 0xbc20d4) + *(entity_2 + 0xbc20b4);
                *(entity_2 + 0xbc20b4) = fpu_val_6_27;
                long double f24_1 = *(entity_2 + 0xbc20c0);
                fpu_val_6_27 - f24_1;

                if (!(*(&((fpu_val_6_27 < f24_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_27, f24_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_27 == f24_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                    *(entity_2 + 0xbc20b4) = *(entity_2 + 0xbc20c0);
            }
        }
    }
    else
    {
        long double fpu_val_6_19 = -(*(entity_2 + 0xbc20c0));
        long double f16_1 = *(entity_2 + 0xbc20b4);
        fpu_val_6_19 - f16_1;

        if (*(&((fpu_val_6_19 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_19, f16_1) ? 1 : 0) << 0xa
            | (fpu_val_6_19 == f16_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
        {
            long double f19_1 = *(entity_2 + 0xbc20b4);
            fpu_val_6_19 - f19_1;

            if (*(&((fpu_val_6_19 < f19_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_19, f19_1) ? 1 : 0) << 0xa
                | (fpu_val_6_19 == f19_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            {
                long double fpu_val_6_24 = *(entity_2 + 0xbc20b4) - *(entity_2 + 0xbc20d4);
                *(entity_2 + 0xbc20b4) = fpu_val_6_24;
                float item_10_4 = -(*(entity_2 + 0xbc20c0));
                long double f26_1 = item_10_4;
                fpu_val_6_24 - f26_1;

                if (*(&((fpu_val_6_24 < f26_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_24, f26_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_24 == f26_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    *(entity_2 + 0xbc20b4) = item_10_4;
            }
        }
        else
        {
            long double fpu_val_6_22 = *(entity_2 + 0xbc20d4) + *(entity_2 + 0xbc20b4);
            *(entity_2 + 0xbc20b4) = fpu_val_6_22;
            float item_10_3 = -(*(entity_2 + 0xbc20c0));
            long double f20_1 = item_10_3;
            fpu_val_6_22 - f20_1;

            if (!(*(&((fpu_val_6_22 < f20_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_22, f20_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_22 == f20_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                *(entity_2 + 0xbc20b4) = item_10_3;
        }
    }

    float item_10_5 = fpu7 + *(entity_2 + 0xbc20b0);
    float item_c_1 = item_c + *(entity_2 + 0xbc20b4);
    long double fpu_val_7_6 = -1.0f;
    long double f25 = item_10_5;
    fpu_val_7_6 - f25;

    if (*(&((fpu_val_7_6 < f25 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f25) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f25 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_7 = 1.0f;
        long double f29_1 = item_10_5;
        fpu_val_7_7 - f29_1;

        if (*(&((fpu_val_7_7 < f29_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f29_1) ? 1 : 0) << 0xa
                | (fpu_val_7_7 == f29_1 ? 1 : 0) << 0xe) + 1) & 1)
            item_10_5 = 1.0f;
    }
    else
        item_10_5 = -1.0f;

    long double fpu_val_7_8 = -1.0f;
    long double f30 = item_c_1;
    fpu_val_7_8 - f30;

    if (*(&((fpu_val_7_8 < f30 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f30) ? 1 : 0) << 0xa
        | (fpu_val_7_8 == f30 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_9 = 1.0f;
        long double f31_1 = item_c_1;
        fpu_val_7_9 - f31_1;

        if (*(&((fpu_val_7_9 < f31_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f31_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f31_1 ? 1 : 0) << 0xe) + 1) & 1)
            item_c_1 = 1.0f;
    }
    else
        item_c_1 = -1.0f;

    long double fpu_val_7_11 = item_4 + *(entity_2 + 0xbc20b8);
    float item_8_1 = item_8 + *(entity_2 + 0xbc20bc);
    long double fpu_val_6_38 = 0.0f;
    fpu_val_6_38 - fpu_val_7_11;

    if (*(&((fpu_val_6_38 < fpu_val_7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_38, fpu_val_7_11) ? 1 : 0) << 0xa
        | (fpu_val_6_38 == fpu_val_7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_6_39 = 1.0f;
        fpu_val_6_39 - fpu_val_7_11;

        if (*(&((fpu_val_6_39 < fpu_val_7_11 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_39, fpu_val_7_11) ? 1 : 0) << 0xa
                | (fpu_val_6_39 == fpu_val_7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            fpu_val_7_11 = 1.0f;
    }
    else
        fpu_val_7_11 = 0.0f;

    *(context + 4) = item_10_5;
    *(context + 0x1c) = context_val;
    *(context + 0xc) = fpu_val_7_11;
    *(context + 8) = item_c_1;
    *(context + 0x10) = item_8_1;
    return context;
}
