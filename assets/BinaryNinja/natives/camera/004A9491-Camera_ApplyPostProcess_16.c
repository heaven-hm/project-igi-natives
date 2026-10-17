// Original IGI.EXE function: Camera_ApplyPostProcess_16 (VA 0x004A9491; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_16.h"
int32_t Camera_ApplyPostProcess_16(long double context , long double param_2 ) {
    int16_t fpu_control;
    return Camera_ApplyLineFilter_16(fpu_control, param_2, context);
}
