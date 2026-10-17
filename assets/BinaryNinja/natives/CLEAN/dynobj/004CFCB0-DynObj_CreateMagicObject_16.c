// IGI native provenance: DynObj_CreateMagicObject_16 - 0x004CFCB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CFCB0-DynObj_CreateMagicObject_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_CreateMagicObject_16.h"
int32_t DynObj_CreateMagicObject_16(float context)

{
    int32_t* context_val = *(context + 0x6c);

    if (!context_val)
        return 0;

    void* temp_val = *context_val;
    void* entity_val = *(*(temp_val + 0xc) + 0xc);
    long double fpu_val_4_2 = g_bcab00 * (*(context + 0x30) - g_bcab18 + *(entity_val + 0x38))
        + g_bcaafc * (*(context + 0x28) - g_bcab10 + *(entity_val + 0x34));
    long double fpu_val_4_3 = fpu_val_4_2 + g_bcaaf8 * (*(context + 0x20) - g_bcab08 + *(entity_val + 0x30));
    long double fpu_val_6_7 = *(context + 0x98);
    long double fpu_val_5_3 = *(context + 0x9c);
    fpu_val_5_3 - fpu_val_6_7;
    long double fpu_val_6_8;

    if (!(*(&((fpu_val_5_3 < fpu_val_6_7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_3, fpu_val_6_7) ? 1 : 0) << 0xa
            | (fpu_val_5_3 == fpu_val_6_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        fpu_val_6_8 = *(context + 0x9c);
    else
        fpu_val_6_8 = *(context + 0x98);

    long double fpu_val_5_4 = *(context + 0xa0);
    fpu_val_6_8 - fpu_val_5_4;
    long double fpu_val_6_11;

    if (*(&((fpu_val_6_8 < fpu_val_5_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, fpu_val_5_4) ? 1 : 0) << 0xa
            | (fpu_val_6_8 == fpu_val_5_4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        fpu_val_6_11 = *(context + 0xa0);
    else
    {
        long double fpu_val_6_10 = *(context + 0x98);
        long double fpu_val_5_6 = *(context + 0x9c);
        fpu_val_5_6 - fpu_val_6_10;

        if (!(*(&((fpu_val_5_6 < fpu_val_6_10 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_6, fpu_val_6_10) ? 1 : 0) << 0xa
                | (fpu_val_5_6 == fpu_val_6_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            fpu_val_6_11 = *(context + 0x9c);
        else
            fpu_val_6_11 = *(context + 0x98);
    }

    int32_t data_16 = context_val[9];
    int32_t flagP = context_val[0xf];
    long double fpu_val_6_12 = fpu_val_6_11 * *(entity_val + 0x3c);

    if (data_16)
    {
        int32_t i = 0;
        context = g_bcab20 * (fpu_val_4_3 - fpu_val_6_12) * g_548370;
        long double fpu_val_7_23 = context;
        long double f1 = context_val[0xe];
        fpu_val_7_23 - f1;
        data_16 = (fpu_val_7_23 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_23 == f1 ? 1 : 0) << 0xe;

        if (!(*(&data_16 + 1) & 0x41))
            return data_16 | 0xffffffff;

        long double fpu_val_7_24 = context_val[0xa];
        long double f3 = 0.0f;
        fpu_val_7_24 - f3;

        if (*(&((fpu_val_7_24 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_24, f3) ? 1 : 0) << 0xa
            | (fpu_val_7_24 == f3 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            i = flagP - 1;

            if (i > 1)
                i = 1;
        }

        long double fpu_val_7_25 = context;
        long double f4 = context_val[i + 0xa];
        fpu_val_7_25 - f4;
        void* temp_2 = &context_val[i + 0xa];

        if (!(*(&((fpu_val_7_25 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_25, f4) ? 1 : 0) << 0xa
            | (fpu_val_7_25 == f4 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            while (i < flagP - 1)
            {
                long double fpu_val_7_26 = context;
                long double f6_1 = *(temp_2 + 4);
                fpu_val_7_26 - f6_1;
                temp_2 += 4;
                i += 1;

                if (*(&((fpu_val_7_26 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_26, f6_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_26 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    break;
            }
        }

        return i;
    }

    int32_t i_1 = 0;
    float item_28 = (g_a4ee98 - fpu_val_6_12) * (1.0f - g_54835c) + fpu_val_6_12;
    long double fpu_val_7_5 = (fpu_val_4_3 - item_28) * g_548370;
    context = fpu_val_7_5;
    long double f2 = 0.0f;
    fpu_val_7_5 - f2;

    if (!(*(&((fpu_val_7_5 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_5 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        int32_t dest_1 = 1;
        float item_20_1 = 1.0f / context;
        float item_24_1 = 1.0f / (g_a4ee80 * item_28);
        float data_4 = item_24_1;
        float item_14 = data_4;

        if (flagP > 1)
        {
            int32_t* source_1 = &context_val[1];

            do
            {
                if (*(*(*(*source_1 + 0xc) + 0xc) + 0x60) > *(entity_val + 0x60))
                {
                    int32_t item_3c_1 = *(temp_val + 8);
                    int32_t item_40_1 = dest_1;
                    Warning_Show("Detail level %d is more complex than level 0 for model %s.");
                }

                temp_val = *context_val;
                dest_1 += 1;
                source_1 = &source_1[1];
                entity_val = *(*(temp_val + 0xc) + 0xc);
                data_4 = &item_14 - context_val;
                long double fpu_val_7_12 = *(*(*(source_1[-1] + 0xc) + 0xc) + 0x60) / *(entity_val + 0x60);
                *(data_4 + source_1 - 4) = fpu_val_7_12 * fpu_val_7_12 * item_24_1;
            } while (dest_1 < flagP);

            i_1 = 0;
        }

        long double fpu_val_7_15 = g_bcab20 * item_14;
        long double f5_1 = item_20_1;
        fpu_val_7_15 - f5_1;
        data_4 = (fpu_val_7_15 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_15, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_15 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&data_4 + 1) & 0x41))
        {
            float* entity_2 = &item_14;

            while (i_1 < flagP - 1)
            {
                long double fpu_val_7_17 = g_bcab20 * entity_2[1];
                entity_2 = &entity_2[1];
                i_1 += 1;
                long double f7_1 = item_20_1;
                fpu_val_7_17 - f7_1;
                data_4 = (fpu_val_7_17 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_17, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_17 == f7_1 ? 1 : 0) << 0xe;

                if (*(&data_4 + 1) & 0x41)
                    break;
            }
        }

        if (i_1 == flagP - 1)
        {
            long double fpu_val_7_19 = g_bcab20 * context;
            long double fpu_val_6_18 = g_a4ee8c * item_28;
            fpu_val_6_18 - fpu_val_7_19;
            data_4 = (fpu_val_6_18 < fpu_val_7_19 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_18, fpu_val_7_19) ? 1 : 0) << 0xa
                | (fpu_val_6_18 == fpu_val_7_19 ? 1 : 0) << 0xe;

            if (*(&data_4 + 1) & 1)
                return data_4 | 0xffffffff;
        }
    }

    return i_1;
}
