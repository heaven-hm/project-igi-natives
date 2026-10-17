// Original IGI.EXE function: Camera_ApplyLineFilter_9 (VA 0x004A6B6C; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_9.h"
char Camera_ApplyLineFilter_9(int32_t* a1)

{
    char result = a1[3];

    if (result & 0x83 && result & 8)
    {
        int32_t v_8_1 = a1[2];
        void** objC;
        Camera_UpdateTransform_9(objC);
        a1[3] &= 0xfbf7;
        result = 0;
        *a1 = 0;
        a1[2] = 0;
        a1[1] = 0;
    }

    return result;
}
