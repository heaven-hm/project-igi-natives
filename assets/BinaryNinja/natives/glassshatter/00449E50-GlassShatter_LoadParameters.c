// IGI native provenance: GlassShatter_LoadParameters - 0x00449E50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449E50-GlassShatter_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GlassShatter_LoadParameters.h"
int32_t GlassShatter_LoadParameters(float context)

{
    float source_val = context;
    int32_t i = 0;
    float item_18 = *(source_val + 0xa8) * -44.6008873f;
    float item_14 = *(source_val + 0xac) * -44.6008873f;
    float item_10 = *(source_val + 0xb0) * -44.6008873f;
    g_57c248 = *(source_val + 0xbc) * 0.0333333351f;
    void* data_val = *(source_val + 0x2b040);

    if (*(data_val + 0x9c) > 0)
    {
        int32_t temp_1 = 0;

        do
        {
            void* data_2 = *(data_val + 0x6c) + temp_1;
            i += 1;
            temp_1 += 0x50;
            *(data_2 + 0x30) = g_57c248;
            *(data_2 + 0x34) = g_57c248;
            *(data_2 + 0x38) = g_57c248;
            data_val = *(source_val + 0x2b040);
        } while (i < *(data_val + 0x9c));
    }

    int32_t i_1 = 0;

    if (*(source_val + 0xb8) > 0)
    {
        float* data_4 = source_val + 0xd8;
        int32_t* temp_2 = source_val + 0x17800;

        do
        {
            if (data_4[0x11])
            {
                long double fpu_val_7_9 = data_4[3] - *data_4;
                long double fpu_val_6_2 = data_4[4] - data_4[1];
                long double fpu_val_5_2 = data_4[5] - data_4[2];
                int32_t entity_1 = data_4[0xc];
                float item_54_1 = data_4[6] - *data_4;
                float item_50_1 = data_4[7] - data_4[1];
                float item_4c_1 = data_4[8] - data_4[2];
                float item_48_1 = data_4[9] - *data_4;
                float item_44_1 = data_4[0xa] - data_4[1];
                float item_40_1 = data_4[0xb] - data_4[2];
                long double fpu_val_4_16 = fpu_val_5_2 * *(entity_1 * 0x28 + 0x57c288)
                    + fpu_val_6_2 * *(entity_1 * 0x28 + 0x57c284)
                    + fpu_val_7_9 * *(entity_1 * 0x28 + &g_57c280);
                long double fpu_val_4_20 = fpu_val_7_9 * *(entity_1 * 0x28 + 0x57c28c)
                    + fpu_val_5_2 * *(entity_1 * 0x28 + 0x57c294)
                    + fpu_val_6_2 * *(entity_1 * 0x28 + 0x57c290);
                long double fpu_val_7_13 = fpu_val_7_9 * *(entity_1 * 0x28 + 0x57c298)
                    + fpu_val_5_2 * *(entity_1 * 0x28 + 0x57c2a0)
                    + fpu_val_6_2 * *(entity_1 * 0x28 + 0x57c29c);
                float item_30_1 = item_4c_1 * *(entity_1 * 0x28 + 0x57c288)
                    + item_50_1 * *(entity_1 * 0x28 + 0x57c284)
                    + item_54_1 * *(entity_1 * 0x28 + &g_57c280);
                float item_2c_1 = item_54_1 * *(entity_1 * 0x28 + 0x57c28c)
                    + item_4c_1 * *(entity_1 * 0x28 + 0x57c294)
                    + item_50_1 * *(entity_1 * 0x28 + 0x57c290);
                float item_28_1 = item_54_1 * *(entity_1 * 0x28 + 0x57c298)
                    + item_4c_1 * *(entity_1 * 0x28 + 0x57c2a0)
                    + item_50_1 * *(entity_1 * 0x28 + 0x57c29c);
                float item_24_1 = item_40_1 * *(entity_1 * 0x28 + 0x57c288)
                    + item_44_1 * *(entity_1 * 0x28 + 0x57c284)
                    + item_48_1 * *(entity_1 * 0x28 + &g_57c280);
                float item_20_1 = item_48_1 * *(entity_1 * 0x28 + 0x57c28c)
                    + item_40_1 * *(entity_1 * 0x28 + 0x57c294)
                    + item_44_1 * *(entity_1 * 0x28 + 0x57c290);
                float item_1c_1 = item_48_1 * *(entity_1 * 0x28 + 0x57c298)
                    + item_40_1 * *(entity_1 * 0x28 + 0x57c2a0)
                    + item_44_1 * *(entity_1 * 0x28 + 0x57c29c);
                float item_38_1 = *temp_2 * *(entity_1 * 0x28 + 0x57c290)
                    + temp_2[1] * *(entity_1 * 0x28 + 0x57c294)
                    + temp_2[-1] * *(entity_1 * 0x28 + 0x57c28c);
                long double fpu_val_6_38 =
                    *temp_2 * *(entity_1 * 0x28 + 0x57c29c) + *(entity_1 * 0x28 + 0x57c298) * temp_2[-1];
                long double fpu_val_5_42 = temp_2[1] * *(entity_1 * 0x28 + 0x57c2a0);
                temp_2[-1] = *(entity_1 * 0x28 + 0x57c288) * temp_2[1]
                    + temp_2[-1] * *(entity_1 * 0x28 + &g_57c280)
                    + *temp_2 * *(entity_1 * 0x28 + 0x57c284);
                *temp_2 = item_38_1;
                temp_2[1] = fpu_val_6_38 + fpu_val_5_42;
                long double fpu_val_6_41 = data_4[0xd] + *data_4;
                data_4[-3] = data_4[-6];
                int32_t flagP2 = data_4[-5];
                context = fpu_val_6_41;
                *data_4 = fpu_val_6_41;
                long double fpu_val_6_43 = data_4[0xe] + data_4[1];
                int32_t entity_8 = data_4[-4];
                data_4[-2] = flagP2;
                data_4[-1] = entity_8;
                float item_5c_1 = fpu_val_6_43;
                data_4[1] = fpu_val_6_43;
                long double fpu_val_6_45 = data_4[0xf] + data_4[2];
                float item_58_1 = fpu_val_6_45;
                data_4[2] = fpu_val_6_45;
                data_4[3] = context + fpu_val_4_16;
                data_4[4] = item_5c_1 + fpu_val_4_20;
                data_4[5] = item_58_1 + fpu_val_7_13;
                data_4[6] = context + item_30_1;
                data_4[7] = item_5c_1 + item_2c_1;
                data_4[8] = item_58_1 + item_28_1;
                data_4[9] = context + item_24_1;
                data_4[0xa] = item_5c_1 + item_20_1;
                data_4[0xb] = item_58_1 + item_1c_1;
                data_4[0xd] = item_18 + data_4[0xd];
                data_4[0xe] = item_14 + data_4[0xe];
                data_4[0xf] = item_10 + data_4[0xf];
            }

            i_1 += 1;
            data_4 = &data_4[0x18];
            temp_2 = &temp_2[0x14];
        } while (i_1 < *(source_val + 0xb8));
    }

    int32_t data_5 = *(source_val + 0xbc);
    int32_t result = data_5 - 1;
    *(source_val + 0xbc) = result;

    if (data_5 != 1)
        return result;

    return QTask_FindType(source_val);
}
