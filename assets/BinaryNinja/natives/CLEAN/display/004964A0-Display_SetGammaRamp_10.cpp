// IGI native provenance: Display_SetGammaRamp_10 - 0x004964A0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004964A0-Display_SetGammaRamp_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Display_SetGammaRamp_10.h"
int32_t Display_SetGammaRamp_10(void* context, int32_t* param_2, char param_3)

{
    int32_t* flagP = param_2;
    void* data_1 = context;
    int32_t* source_val = flagP[9];
    uint32_t context_3 = (flagP[6] * *(flagP + 0x16) * flagP[8]) >> 3;
    param_2 = source_val;

    if (data_1)
    {
        int32_t* entity_1 = *(data_1 + 0x10);
        param_2 = entity_1;
        source_val = entity_1;
    }

    if (param_3)
    {
        int32_t data_3 = (*(*source_val + 0x50))(source_val);
        data_3 = !data_3;
        return data_3;
    }

    int32_t item_8;
    int32_t item_4;
    int32_t data_5 = (*(*source_val + 0x2c))(source_val, 0, context_3, &item_4, &param_3, &item_8, &context, 0);

    if (!data_5)
    {
        int32_t data_6 = param_3;

        if (context_3 <= data_6)
        {
            int32_t source_2;
            int32_t dest_2;
            dest_2 = memcpy(item_4, flagP[0xb], data_6 & 0xfffffffc);
            memcpy(dest_2, source_2, data_6 & 3);
            data_6 = param_3;
            source_val = param_2;
            context_3 -= data_6;
        }

        if (context_3 > 0)
        {
            void* entity_6 = context;

            if (context_3 <= entity_6)
            {
                int32_t source_5;
                int32_t dest_4;
                dest_4 = memcpy(item_8, flagP[0xb] + data_6, entity_6 & 0xfffffffc);
                memcpy(dest_4, source_5, entity_6 & 3);
                data_6 = param_3;
                source_val = param_2;
            }
        }

        data_5 = (*(*source_val + 0x4c))(source_val, item_4, data_6, item_8, context);

        if (!data_5)
        {
            data_5 = 1;
            return data_5;
        }
    }

    data_5 = 0;
    return data_5;
}
