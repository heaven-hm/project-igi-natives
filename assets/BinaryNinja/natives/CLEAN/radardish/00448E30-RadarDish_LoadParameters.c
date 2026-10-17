// IGI native provenance: RadarDish_LoadParameters - 0x00448E30 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00448E30-RadarDish_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RadarDish_LoadParameters.h"
void* RadarDish_LoadParameters(void* context)

{
    int32_t* i = *(context + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* source_1 = *i;
            void* data_4;

            if (!source_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *source_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & source_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            int32_t data_val = *((data_5 << 2) + &g_a970e0);

            if (data_val)
            {
                data_val(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    long double fpu7 = *(context + 0x140);
    long double f0 = *(context + 0x13c);
    fpu7 - f0;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double fpu_val_7_1 = *(context + 0x140);
        long double f2_1 = *(context + 0x13c);
        fpu_val_7_1 - f2_1;

        if (!(*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double fpu_val_7_5 = *(context + 0x140);
            long double f4_1 = *(context + 0x13c);
            fpu_val_7_5 - f4_1;

            if (!(*(&((fpu_val_7_5 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_5, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                long double fpu_val_7_8 = *(context + 0x140) - *(*(context + 0x138) + 0x24) * 0.0333333351f;
                *(context + 0x140) = fpu_val_7_8;
                long double f6_1 = *(context + 0x13c);
                fpu_val_7_8 - f6_1;

                if (*(&((fpu_val_7_8 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_8, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_8 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                {
                    i = *(context + 0x13c);
                    *(context + 0x140) = i;
                }
            }
        }
        else
        {
            i = *(context + 0x138);
            long double fpu_val_7_4 = i[9] * 0.0333333351f + *(context + 0x140);
            *(context + 0x140) = fpu_val_7_4;
            long double f5_1 = *(context + 0x13c);
            fpu_val_7_4 - f5_1;

            if (!(*(&((fpu_val_7_4 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                *(context + 0x140) = *(context + 0x13c);
        }
    }

    long double fpu_val_7_11 = *(context + 0x140) * 0.0333333351f + *(context + 0x144);
    *(context + 0x144) = fpu_val_7_11;
    long double f1 = 360.0f;
    fpu_val_7_11 - f1;

    if (!(*(&((fpu_val_7_11 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_11 == f1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_13;
        long double f3_1;

        do
        {
            fpu_val_7_13 = *(context + 0x144) - 360.0f;
            *(context + 0x144) = fpu_val_7_13;
            f3_1 = 360.0f;
            fpu_val_7_13 - f3_1;
        } while (!(*(&((fpu_val_7_13 < f3_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_13, f3_1) ? 1 : 0) << 0xa | (fpu_val_7_13 == f3_1 ? 1 : 0) << 0xe)
            + 1) & 1));
    }

    int32_t* i_1 = i;
    float item_50;
    Sys_DispatchOpcode_12(&item_50, *(context + 0x144) * 0.0174532924f);
    float item_44;
    float item_38;
    float item_28 = item_44 * *(context + 0x14c) + item_38 * *(context + 0x150) + item_50 * *(context + 0x148);
    float item_4c;
    float item_40;
    float item_34;
    float item_24 = item_40 * *(context + 0x14c) + item_34 * *(context + 0x150) + item_4c * *(context + 0x148);
    float item_48;
    float item_3c;
    float item_30;
    float item_20 = item_3c * *(context + 0x14c) + item_30 * *(context + 0x150) + item_48 * *(context + 0x148);
    float item_1c = item_38 * *(context + 0x15c) + item_50 * *(context + 0x154) + item_44 * *(context + 0x158);
    float item_18 = item_34 * *(context + 0x15c) + item_4c * *(context + 0x154) + item_40 * *(context + 0x158);
    float item_14 = item_30 * *(context + 0x15c) + item_48 * *(context + 0x154) + item_3c * *(context + 0x158);
    float item_10 = item_44 * *(context + 0x164) + item_38 * *(context + 0x168) + item_50 * *(context + 0x160);
    void* result = *(context + 0x178);
    int32_t item_2c;
    int32_t item_4 = *(context + 0x16c) + item_2c + 1;
    float item_c = item_40 * *(context + 0x164) + item_34 * *(context + 0x168) + item_4c * *(context + 0x160);
    float item_8 = item_3c * *(context + 0x164) + item_30 * *(context + 0x168) + item_48 * *(context + 0x160);
    memcpy(context + 0x70, &item_28, 0x28);

    if (result)
    {
        *(result + 4) = *(context + 0x140) / *(*(context + 0x138) + 0x20);
        void* context_1 = *(context + 0x178);
        long double fpu_val_7_54 = *(context_1 + 4);
        long double f8_1 = 0.0f;
        fpu_val_7_54 - f8_1;
        result = (fpu_val_7_54 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_54, f8_1) ? 1 : 0) << 0xa
            | (fpu_val_7_54 == f8_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            *(context_1 + 4) = 0;
            return result;
        }

        long double fpu_val_7_55 = *(context_1 + 4);
        long double f9_1 = 1.0f;
        fpu_val_7_55 - f9_1;
        result = (fpu_val_7_55 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_55, f9_1) ? 1 : 0) << 0xa
            | (fpu_val_7_55 == f9_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
            *(context_1 + 4) = 0x3f800000;
    }

    return result;
}
