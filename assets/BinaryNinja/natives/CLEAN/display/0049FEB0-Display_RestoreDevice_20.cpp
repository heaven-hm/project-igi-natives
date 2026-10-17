// IGI native provenance: Display_RestoreDevice_20 - 0x0049FEB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049FEB0-Display_RestoreDevice_20.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_RestoreDevice_20.h"
int32_t* Display_RestoreDevice_20(float context)

{
    int32_t* flagP = context;
    char item_19 = 1;
    float data_val = flagP[1];
    float* source_val = *flagP;
    float item_14 = -(data_val);
    long double fpu_val_7_2 = source_val[2];
    long double f0 = item_14;
    fpu_val_7_2 - f0;

    if (!(*(&((fpu_val_7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        item_19 = 0;

    float entity_val = g_bcaddc;
    float temp_val = g_bcadcc;
    long double fpu_val_7_4 = data_val + source_val[2];
    long double f1 = entity_val;
    fpu_val_7_4 - f1;

    if (!(*(&((fpu_val_7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_6 = source_val[2] - data_val;
        long double f2_1 = temp_val;
        fpu_val_7_6 - f2_1;

        if (*(&((fpu_val_7_6 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            char item_1d = 1;
            long double fpu_val_7_10 = (*source_val - g_b46ce4 * source_val[2]) * g_b817a4;
            long double fpu_val_6_3 = (*source_val - g_b46d1c * source_val[2]) * g_b46d20;
            context = fpu_val_6_3;
            float item_10 = (source_val[1] - g_b816fc * source_val[2]) * g_b46d18;
            float item_c = (source_val[1] - g_b8179c * source_val[2]) * g_b46ce8;
            long double f3 = item_14;
            fpu_val_7_10 - f3;

            if (!(*(&((fpu_val_7_10 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f3) ? 1 : 0) << 0xa
                    | (fpu_val_7_10 == f3 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
                item_1d = 0;

            long double f4 = data_val;
            fpu_val_6_3 - f4;
            char item_1c = 1;

            if (*(&((fpu_val_6_3 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f4) ? 1 : 0) << 0xa
                    | (fpu_val_6_3 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                item_1c = 0;

            long double fpu_val_6_4 = item_10;
            long double f5 = item_14;
            fpu_val_6_4 - f5;
            char item_1b = 1;

            if (!(*(&((fpu_val_6_4 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f5) ? 1 : 0) << 0xa
                    | (fpu_val_6_4 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                item_1b = 0;

            long double fpu_val_6_5 = item_c;
            long double f6 = data_val;
            fpu_val_6_5 - f6;
            char item_1a = 1;
            int16_t data_1 = (fpu_val_6_5 < f6 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_5, f6) ? 1 : 0) << 0xa | (fpu_val_6_5 == f6 ? 1 : 0) << 0xe
                | 0x3800;

            if (*(&data_1 + 1) & 0x41)
                item_1a = 0;

            int32_t* dest_val = flagP[2];

            if (dest_val)
            {
                long double f7_1 = data_val;
                fpu_val_7_10 - f7_1;
                char context_1;

                context_1 = *(&((fpu_val_7_10 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_10, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_10 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_11 = context;
                long double f8_1 = item_14;
                fpu_val_7_11 - f8_1;
                context = 1;

                if (!(*(&((fpu_val_7_11 < f8_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_11, f8_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_11 == f8_1 ? 1 : 0) << 0xe) + 1) & 1))
                    context = 0;

                long double fpu_val_7_12 = item_10;
                long double f9_1 = data_val;
                fpu_val_7_12 - f9_1;
                char temp_1;

                temp_1 = *(&((fpu_val_7_12 < f9_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_12, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_12 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

                long double fpu_val_7_13 = item_c;
                long double f10_1 = item_14;
                fpu_val_7_13 - f10_1;
                char entity_1;

                entity_1 = !(*(&((fpu_val_7_13 < f10_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_13, f10_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_13 == f10_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                long double fpu_val_7_15 = data_val + 409.600006f;
                long double f11_1 = source_val[2];
                fpu_val_7_15 - f11_1;
                data_1 = (fpu_val_7_15 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_15, f11_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_15 == f11_1 ? 1 : 0) << 0xe;

                if (!(*(&data_1 + 1) & 1))
                    data_1 = 0;
                else
                    data_1 = 1;

                int32_t data_2;

                data_2 = !context_1 || !context || !temp_1 || !entity_1 || !data_1 ? 0 : 1;

                *dest_val = data_2;
                long double fpu_val_7_17 = source_val[2] - data_val;
                long double f12_1 = entity_val;
                fpu_val_7_17 - f12_1;
                long double fpu_val_7_19;
                long double f13_1;

                if (!(*(&((fpu_val_7_17 < f12_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_17, f12_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_17 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    fpu_val_7_19 = data_val + source_val[2];
                    f13_1 = temp_val;
                    fpu_val_7_19 - f13_1;
                }

                if (*(&((fpu_val_7_17 < f12_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_17, f12_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_17 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41 || !(*(&(
                        (fpu_val_7_19 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_19, f13_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_19 == f13_1 ? 1 : 0) << 0xe) + 1) & 1))
                    *flagP[2] = 0;
                else
                {
                    int32_t* data_4 = flagP[2];
                    *data_4 &= 1;
                }
            }

            data_1 = item_1d;

            if (!data_1)
            {
                data_1 = item_1c;

                if (!data_1)
                {
                    data_1 = item_1b;

                    if (!data_1)
                    {
                        data_1 = item_1a;

                        if (!data_1)
                        {
                            data_1 = item_19;

                            if (!data_1)
                            {
                                flagP[3] = 0;
                                return 0;
                            }
                        }
                    }
                }
            }

            flagP[3] = 1;
            return 1;
        }
    }

    int32_t* result = flagP[2];

    if (result)
        *result = 0;

    flagP[3] = 1;
    return result;
}
