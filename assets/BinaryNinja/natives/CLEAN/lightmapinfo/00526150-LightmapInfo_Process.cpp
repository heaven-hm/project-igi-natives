// IGI native provenance: LightmapInfo_Process - 0x00526150 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00526150-LightmapInfo_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LightmapInfo_Process.h"
int32_t LightmapInfo_Process(void* context, int32_t* param_2)

{
    int32_t* dest_val = param_2;
    void* context_val = context;
    int32_t* i = nullptr;
    int32_t* source_val = *(dest_val[1] + 0xc8) + *dest_val * 0xc + 4;
    param_2 = nullptr;
    int32_t result;

    do
    {
        float item_24;
        float item_20;
        float item_1c;

        if (!i)
        {
            item_24 = *(context_val + 0x30);
            item_20 = *(context_val + 0x34);
            item_1c = *(context_val + 0x38);
        }
        else if (i == 1)
        {
            item_24 = *(context_val + 0x3c);
            item_20 = *(context_val + 0x40);
            item_1c = *(context_val + 0x44);
        }

        int32_t temp_6 = 0;
        long double fpu_val_7_2 = *(*(dest_val[1] + 0x88) + 8) * 0.000244140625f;
        result = source_val[2];
        long double fpu_val_7_3 = fpu_val_7_2 + fpu_val_7_2;
        int32_t result_1 = result;
        long double fpu_val_7_4 = fpu_val_7_3 * fpu_val_7_3;
        item_24 = fpu_val_7_4 * item_24;
        item_20 = fpu_val_7_4 * item_20;
        item_1c = fpu_val_7_4 * item_1c;

        if (result > 0)
        {
            do
            {
                int32_t data_11 = *source_val;
                float item_30_1 = item_24;
                long double fpu_val_7_7 = item_24 * *(data_11 + (temp_6 << 2));
                float item_2c_2 = item_20 * *(data_11 + (temp_6 << 2));
                long double fpu_val_6_9 = item_1c * *(data_11 + (temp_6 << 2));
                int32_t entity_4 = *(source_val[1] + (temp_6 << 2));
                temp_6 += 1;
                float* data_14 = *(dest_val[2] + (entity_4 << 2));
                float* entity_5 = *(dest_val[3] + (entity_4 << 2));
                float item_30_2 = fpu_val_7_7 + fpu_val_7_7;
                long double fpu_val_7_9 = item_2c_2;
                float item_18_1 = item_30_2;
                float item_c_1 = item_30_2;
                float item_2c_3 = fpu_val_7_9 + fpu_val_7_9;
                long double fpu_val_7_11 = fpu_val_6_9;
                float item_28_3 = fpu_val_7_11 + fpu_val_7_11;
                long double fpu_val_7_14 = item_30_2 * 0.5f;
                *data_14 = fpu_val_7_14 + *data_14;
                data_14[1] = item_2c_3 * 0.5f + data_14[1];
                data_14[2] = item_28_3 * 0.5f + data_14[2];
                result = result_1;
                *entity_5 = fpu_val_7_14 + *entity_5;
                entity_5[1] = item_2c_3 * 0.5f + entity_5[1];
                entity_5[2] = item_28_3 * 0.5f + entity_5[2];
            } while (temp_6 < result);

            context_val = context;
            i = param_2;
        }

        source_val = &source_val[3];
        i += 1;
        param_2 = i;
    } while (i < 1);

    return result;
}
