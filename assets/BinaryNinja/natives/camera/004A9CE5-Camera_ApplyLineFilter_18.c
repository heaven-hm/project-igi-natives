// Original IGI.EXE function: Camera_ApplyLineFilter_18 (VA 0x004A9CE5; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_18.h"
long double __fastcall __fload_withFB(int32_t context, double* param_2)

{
    if ((*(param_2 + 4) & 0x7ff00000) != 0x7ff00000)
        return *param_2;

    int32_t item_4 = *(param_2 + 4) | 0x7fff0000;
    int32_t entity_val = *param_2;
    int32_t item_6 = *(param_2 + 4) << 0xb | entity_val >> 0x15;
    *(param_2 + 4);
    return (entity_val << 0xb);
}
