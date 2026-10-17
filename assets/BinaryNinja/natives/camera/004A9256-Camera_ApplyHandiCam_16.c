// Original IGI.EXE function: Camera_ApplyHandiCam_16 (VA 0x004A9256; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_16.h"
int32_t Camera_ApplyHandiCam_16(long double context , long double param_2 ) {
    int16_t fpu_control;
    return Camera_ApplyLineFilter_16(fpu_control, context, param_2);
}
