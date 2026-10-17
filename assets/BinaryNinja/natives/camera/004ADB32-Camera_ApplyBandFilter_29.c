// Original IGI.EXE function: Camera_ApplyBandFilter_29 (VA 0x004ADB32; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_29.h"
int32_t Camera_ApplyBandFilter_29(char* context, int32_t param_2, int32_t param_3)

{
    int32_t result = param_2;
    int32_t* context_val = param_3;
    int32_t item_8 = 0x404e;
    *context_val = 0;
    context_val[1] = 0;
    context_val[2] = 0;

    if (result > 0)
    {
        param_3 = result;
        int32_t i;

        do
        {
            int32_t item_14 = *context_val;
            int32_t item_10;
            int32_t* dest_1 = &item_10;
            int32_t* source_2 = &context_val[1];
            *dest_1 = *source_2;
            dest_1[1] = source_2[1];
            Camera_SetFieldOfView_29(context_val);
            Camera_SetFieldOfView_29(context_val);
            Camera_UpdateTransform_29(context_val, &item_14);
            Camera_SetFieldOfView_29(context_val);
            item_10 = 0;
            int32_t item_c_1 = 0;
            item_14 = *context;
            result = Camera_UpdateTransform_29(context_val, &item_14);
            context = &context[1];
            i = param_3;
            param_3 -= 1;
        } while (i != 1);
    }

    while (!context_val[2])
    {
        int32_t entity_1 = context_val[1];
        context_val[2] = entity_1 >> 0x10;
        int32_t data_4 = *context_val;
        result = data_4 << 0x10;
        item_8 += 0xfff0;
        context_val[1] = data_4 >> 0x10 | entity_1 << 0x10;
        *context_val = result;
    }

    while (!(context_val[2] & 0x8000))
    {
        result = Camera_SetFieldOfView_29(context_val);
        item_8 += 0xffff;
    }

    result = item_8;
    *(context_val + 0xa) = result;
    return result;
}
