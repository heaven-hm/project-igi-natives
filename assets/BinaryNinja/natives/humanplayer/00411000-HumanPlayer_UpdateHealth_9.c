// IGI native provenance: HumanPlayer_UpdateHealth_9 - 0x00411000 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00411000-HumanPlayer_UpdateHealth_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanPlayer_UpdateHealth_9.h"
int32_t* HumanPlayer_UpdateHealth_9(int32_t* context)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t* source_val = context;
    int32_t context_val = 0xffffffff;
    long double fpu7 = source_val[0x83];
    long double f0 = 0.0f;
    fpu7 - f0;
    int32_t* data_val;
    data_val = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        long double fpu_val_7_1 = source_val[0x5b];
        long double f2_1 = 0.0f;
        fpu_val_7_1 - f2_1;
        data_val = (fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x40)
            context_val = 0;
    }

    long double fpu_val_7_2 = source_val[0x84];
    long double f1 = 0.0f;
    fpu_val_7_2 - f1;
    data_val = (fpu_val_7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f1 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        long double fpu_val_7_3 = source_val[0x5c];
        long double f4_1 = 0.0f;
        fpu_val_7_3 - f4_1;
        data_val = (fpu_val_7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x40)
            context_val = 1;
    }

    long double fpu_val_7_4 = source_val[0x85];
    long double f3 = 0.0f;
    fpu_val_7_4 - f3;
    data_val = (fpu_val_7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f3 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        long double fpu_val_7_5 = source_val[0x5d];
        long double f6_1 = 0.0f;
        fpu_val_7_5 - f6_1;
        data_val = (fpu_val_7_5 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f6_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x40)
            context_val = 2;
    }

    long double fpu_val_7_6 = source_val[0x86];
    long double f5 = 0.0f;
    fpu_val_7_6 - f5;
    data_val = (fpu_val_7_6 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f5 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        long double fpu_val_7_7 = source_val[0x5e];
        long double f8_1 = 0.0f;
        fpu_val_7_7 - f8_1;
        data_val = (fpu_val_7_7 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f8_1) ? 1 : 0) << 0xa
            | (fpu_val_7_7 == f8_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x40)
            context_val = 3;
    }

    long double fpu_val_7_8 = source_val[0x87];
    long double f7 = 0.0f;
    fpu_val_7_8 - f7;
    data_val = (fpu_val_7_8 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f7) ? 1 : 0) << 0xa
        | (fpu_val_7_8 == f7 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        long double fpu_val_7_9 = source_val[0x5f];
        long double f10_1 = 0.0f;
        fpu_val_7_9 - f10_1;
        data_val = (fpu_val_7_9 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f10_1) ? 1 : 0) << 0xa
            | (fpu_val_7_9 == f10_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x40)
            context_val = 4;
    }

    long double fpu_val_7_10 = source_val[0x88];
    long double f9 = 0.0f;
    fpu_val_7_10 - f9;
    data_val = (fpu_val_7_10 < f9 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f9) ? 1 : 0) << 0xa
        | (fpu_val_7_10 == f9 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        long double fpu_val_7_11 = source_val[0x60];
        long double f12_1 = 0.0f;
        fpu_val_7_11 - f12_1;
        data_val = (fpu_val_7_11 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f12_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f12_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x40)
            context_val = 5;
    }

    long double fpu_val_7_12 = source_val[0x89];
    long double f11 = 0.0f;
    fpu_val_7_12 - f11;
    data_val = (fpu_val_7_12 < f11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f11) ? 1 : 0) << 0xa
        | (fpu_val_7_12 == f11 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        long double fpu_val_7_13 = source_val[0x61];
        long double f14_1 = 0.0f;
        fpu_val_7_13 - f14_1;
        data_val = (fpu_val_7_13 < f14_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f14_1) ? 1 : 0) << 0xa
            | (fpu_val_7_13 == f14_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x40)
            context_val = 6;
    }

    long double fpu_val_7_14 = source_val[0x8a];
    long double f13 = 0.0f;
    fpu_val_7_14 - f13;
    data_val = (fpu_val_7_14 < f13 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f13) ? 1 : 0) << 0xa
        | (fpu_val_7_14 == f13 ? 1 : 0) << 0xe;

    if (!(*(&data_val + 1) & 0x40))
    {
        long double fpu_val_7_15 = source_val[0x62];
        long double f16_1 = 0.0f;
        fpu_val_7_15 - f16_1;
        data_val = (fpu_val_7_15 < f16_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_15, f16_1) ? 1 : 0) << 0xa
            | (fpu_val_7_15 == f16_1 ? 1 : 0) << 0xe;

        if (*(&data_val + 1) & 0x40)
            context_val = 7;
    }

    long double fpu_val_7_16 = source_val[0x8b];
    long double f15 = 0.0f;
    fpu_val_7_16 - f15;
    data_val = (fpu_val_7_16 < f15 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_16, f15) ? 1 : 0) << 0xa
        | (fpu_val_7_16 == f15 ? 1 : 0) << 0xe;

    if (*(&data_val + 1) & 0x40)
    {
    label_41118c:

        if (context_val != 0xffffffff)
            goto label_41119b;
    }
    else
    {
        long double fpu_val_7_17 = source_val[0x63];
        long double f17_1 = 0.0f;
        fpu_val_7_17 - f17_1;
        data_val = (fpu_val_7_17 < f17_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_17, f17_1) ? 1 : 0) << 0xa
            | (fpu_val_7_17 == f17_1 ? 1 : 0) << 0xe;

        if (!(*(&data_val + 1) & 0x40))
            goto label_41118c;

        context_val = 8;
    label_41119b:

        if (context_val != source_val[0x354])
            source_val[0x355] = 0;

        int32_t dest_1 = context_val * 9;
        context = nullptr;
        data_val = *((dest_1 << 2) + &g_56e0a0);

        if (data_val > 0)
        {
            while (true)
            {
                int32_t data_1 = source_val[0x355];
                int32_t entity_2 = *(((data_1 + context_val * 9) << 2) + &g_56e0a4);
                source_val[0x355] = data_1 + 1;

                if (data_1 + 1 >= *((dest_1 << 2) + &g_56e0a0))
                    source_val[0x355] = 0;

                data_val = HumanPlayer_UpdateMotion_11(source_val, entity_2);

                if (data_val)
                {
                    source_val[0x79] = entity_2;
                    break;
                }

                int32_t* data_4 = context + 1;
                context = data_4;

                if (data_4 >= *((dest_1 << 2) + &g_56e0a0))
                {
                    source_val[0x354] = context_val;
                    return data_4;
                }
            }
        }

        source_val[0x354] = context_val;
    }

    return data_val;
}
