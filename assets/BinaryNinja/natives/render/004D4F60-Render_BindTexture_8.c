// IGI native provenance: Render_BindTexture_8 - 0x004D4F60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D4F60-Render_BindTexture_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_BindTexture_8.h"
int32_t* Render_BindTexture_8(int32_t* context, int32_t* param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)

{
    int32_t data_1 = param_4 * 0x28;
    int32_t* result;

    if (!*(data_1 + 0xa53910))
    {
        result = context;
        result[0xc] = 0;
    }
    else
    {
        int32_t source_1 = *(data_1 + 0xa53900);
        void* entity_4 =
            *(*(data_1 + &g_a538fc) + (source_1 << 2)) * *(data_1 + 0xa53908) + *(data_1 + 0xa538f8);
        *(*(data_1 + &g_a5390c) + entity_4) = source_1;
        *(data_1 + 0xa53900) += 1;
        result = context;
        result[0xc] = entity_4;
        *(entity_4 + 0xc) = entity_4 + 0x10;
        *result[0xc] = param_4;
        *(result[0xc] + 4) = 0;
        *(result[0xc] + 8) = 0;
        int32_t temp_1 = *(param_4 * 0xc + &g_a542f0);
        int32_t entity_8 = 0;

        if (temp_1 > 0)
        {
            do
            {
                entity_8 += 1;
                *(*(result[0xc] + 0xc) + (entity_8 << 2) - 4) = 0;
            } while (entity_8 < temp_1);
        }
    }

    *result = param_5;
    result[1] = param_6;
    result[3] = param_2;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[2] = param_3;
    int32_t* temp_4 = param_2[2];

    if (!(param_3 & 2))
    {
        int32_t* temp_8 = temp_4[1];
        result[4] = *temp_8;
        result[5] = temp_8[1];
        result[6] = temp_8[2];
        int32_t entity_13 = g_a54658;
        result[0xb] = 0;
        result[0xa] = entity_13;
        return result;
    }

    int32_t* temp_6 = temp_4[1] + *temp_4 * 0x28 - 0x28;
    result[4] = *temp_6;
    result[5] = temp_6[1];
    result[6] = temp_6[2];
    result[0xa] = -(g_a54658);
    result[0xb] = *param_2;
    return result;
}
