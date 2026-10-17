// IGI native provenance: DynObj_ParseConfigFile_16 - 0x004CFF70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004CFF70-DynObj_ParseConfigFile_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DynObj_ParseConfigFile_16.h"
int32_t DynObj_ParseConfigFile_16(float context)

{
    int32_t* entity_val = *(context + 0x74);

    if (!entity_val)
        return 0;

    long double fpu_val_7_1 = *(context + 0x20) - g_bcab08;
    void* temp_val = *entity_val;
    float item_10 = *(context + 0x28) - g_bcab10;
    void* temp_2 = *(*(temp_val + 0xc) + 0xc);
    int32_t source_val = entity_val[0xf];
    long double fpu_val_4_2 = g_bcab00 * (*(context + 0x30) - g_bcab18 + *(temp_2 + 0x38))
        + g_bcaafc * (item_10 + *(temp_2 + 0x34));
    long double fpu_val_4_3 = fpu_val_4_2 + g_bcaaf8 * (fpu_val_7_1 + *(temp_2 + 0x30));
    long double fpu_val_6_7 = *(context + 0xa0);
    int32_t data_1 = entity_val[9];

    if (data_1)
    {
        int32_t i = 0;
        context = g_bcab20 * (fpu_val_4_3 - fpu_val_6_7);
        long double fpu_val_7_21 = context;
        long double f1 = entity_val[0xe];
        fpu_val_7_21 - f1;
        data_1 = (fpu_val_7_21 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_21, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_21 == f1 ? 1 : 0) << 0xe;

        if (!(*(&data_1 + 1) & 0x41))
            return data_1 | 0xffffffff;

        long double fpu_val_7_22 = entity_val[0xa];
        long double f3 = 0.0f;
        fpu_val_7_22 - f3;

        if (*(&((fpu_val_7_22 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, f3) ? 1 : 0) << 0xa
            | (fpu_val_7_22 == f3 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            i = source_val - 1;

            if (i > 1)
                i = 1;
        }

        long double fpu_val_7_23 = context;
        long double f4 = entity_val[i + 0xa];
        fpu_val_7_23 - f4;
        void* entity_2 = &entity_val[i + 0xa];

        if (!(*(&((fpu_val_7_23 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_23, f4) ? 1 : 0) << 0xa
            | (fpu_val_7_23 == f4 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            while (i < source_val - 1)
            {
                long double fpu_val_7_24 = context;
                long double f7_1 = *(entity_2 + 4);
                fpu_val_7_24 - f7_1;
                entity_2 += 4;
                i += 1;

                if (*(&((fpu_val_7_24 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_24, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_24 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    break;
            }
        }

        return i;
    }

    int32_t i_2 = 0;
    float item_20 = (g_a4ee98 - fpu_val_6_7) * (1.0f - g_54835c) + fpu_val_6_7;
    long double fpu_val_7_4 = fpu_val_4_3 - item_20;
    context = fpu_val_7_4;
    long double f2 = 0.0f;
    fpu_val_7_4 - f2;

    if (!(*(&((fpu_val_7_4 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f2 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        float item_18_1 = 1.0f / context;
        float item_1c_1 = 1.0f / (g_a4ee84 * item_20);
        int32_t* data_3 = item_1c_1;
        int32_t* item_14 = data_3;

        if (source_val > 1)
        {
            long double fpu_val_7_10 = *(temp_2 + 0x60);
            data_3 = &entity_val[1];
            float* temp_3 = &item_10;
            int32_t i_3 = source_val - 1;
            int32_t i_1;

            do
            {
                void* context_1 = *data_3;
                data_3 = &data_3[1];
                temp_3 = &temp_3[1];
                i_1 = i_3;
                i_3 -= 1;
                long double fpu_val_6_10 = *(*(*(context_1 + 0xc) + 0xc) + 0x60) / fpu_val_7_10;
                temp_3[-1] = fpu_val_6_10 * fpu_val_6_10 * item_1c_1;
            } while (i_1 != 1);
        }

        long double fpu_val_7_13 = g_bcab20 * item_14;
        long double f5_1 = item_18_1;
        fpu_val_7_13 - f5_1;
        data_3 = (fpu_val_7_13 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f5_1) ? 1 : 0) << 0xa
            | (fpu_val_7_13 == f5_1 ? 1 : 0) << 0xe;

        if (!(*(&data_3 + 1) & 0x41))
        {
            void** entity_1 = &item_14;

            while (i_2 < source_val - 1)
            {
                long double fpu_val_7_15 = g_bcab20 * entity_1[1];
                entity_1 = &entity_1[1];
                i_2 += 1;
                long double f8_1 = item_18_1;
                fpu_val_7_15 - f8_1;
                data_3 = (fpu_val_7_15 < f8_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_15, f8_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_15 == f8_1 ? 1 : 0) << 0xe;

                if (*(&data_3 + 1) & 0x41)
                    break;
            }
        }

        if (i_2 == source_val - 1)
        {
            long double fpu_val_7_17 = g_bcab20 * context;
            long double fpu_val_6_13 = g_a4ee90 * item_20;
            fpu_val_6_13 - fpu_val_7_17;
            data_3 = (fpu_val_6_13 < fpu_val_7_17 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_13, fpu_val_7_17) ? 1 : 0) << 0xa
                | (fpu_val_6_13 == fpu_val_7_17 ? 1 : 0) << 0xe;

            if (*(&data_3 + 1) & 1)
                return data_3 | 0xffffffff;
        }
    }

    return i_2;
}
