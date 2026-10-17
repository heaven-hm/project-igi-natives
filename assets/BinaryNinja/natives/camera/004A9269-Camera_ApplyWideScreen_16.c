// Original IGI.EXE function: Camera_ApplyWideScreen_16 (VA 0x004A9269; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_16.h"
int32_t Camera_ApplyWideScreen_16(long double context , long double param_2 ) {
    int16_t fpu_control;
    return Camera_ApplyLineFilter_16(fpu_control, param_2, context);
}
