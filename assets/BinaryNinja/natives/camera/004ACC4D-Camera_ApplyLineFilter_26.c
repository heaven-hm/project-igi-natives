// Original IGI.EXE function: Camera_ApplyLineFilter_26 (VA 0x004ACC4D; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_26.h"
int32_t* Camera_ApplyLineFilter_26(int32_t* context, int32_t* param_2)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t data_val;
    data_val = *(param_2 + 6);
    int32_t entity_3 = data_val >> 4 & 0x7ff;
    int32_t temp_1 = *param_2;
    uint32_t context_val = entity_3;
    int32_t data_3 = param_2[1] & 0xfffff;
    int32_t item_8_1 = 0x80000000;
    int32_t dest_1;

    if (context_val)
    {
        dest_1 = context_val == 0x7ff ? 0x7fff : entity_3 + 0x3c00;

        goto label_4accc6;
    }

    int32_t* result;

    if (data_3 || temp_1)
    {
        dest_1 = entity_3 + 0x3c01;
        item_8_1 = 0;
    label_4accc6:
        result = context;
        int32_t entity_7 = temp_1 >> 0x15 | data_3 << 0xb | item_8_1;
        result[1] = entity_7;
        *result = temp_1 << 0xb;

        while (!(0x80000000 & entity_7))
        {
            int32_t temp_3 = *result;
            int32_t context_3 = temp_3 >> 0x1f | (entity_7 * 2);
            *result = temp_3 * 2;
            result[1] = context_3;
            dest_1 += 0xffff;
            entity_7 = context_3;
        }

        result[2] = (data_val & 0x8000) | dest_1;
    }
    else
    {
        result = context;
        result[1] = 0;
        *result = 0;
        result[2] = 0;
    }

    return result;
}
