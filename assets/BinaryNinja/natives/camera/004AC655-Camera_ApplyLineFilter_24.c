// Original IGI.EXE function: Camera_ApplyLineFilter_24 (VA 0x004AC655; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_24.h"
int32_t Camera_ApplyLineFilter_24(int32_t context, int32_t param_2)

{
    int16_t fpu_control;
    return Camera_SetFieldOfView_24(fpu_control, context, param_2 & 0xfff7ffff);
}
