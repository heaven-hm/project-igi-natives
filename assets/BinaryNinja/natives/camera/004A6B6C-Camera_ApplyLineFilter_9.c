// Original IGI.EXE function: Camera_ApplyLineFilter_9 (VA 0x004A6B6C; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_9.h"
char Camera_ApplyLineFilter_9(int32_t* context)

{
    char result = context[3];

    if (result & 0x83 && result & 8)
    {
        int32_t item_8_1 = context[2];
        void** entity_val;
        Camera_UpdateTransform_9(entity_val);
        context[3] &= 0xfbf7;
        result = 0;
        *context = 0;
        context[2] = 0;
        context[1] = 0;
    }

    return result;
}
