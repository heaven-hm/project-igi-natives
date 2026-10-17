// Original IGI.EXE function: Camera_ApplyPostProcess_5 (VA 0x004A5760; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_5.h"
int32_t Camera_ApplyPostProcess_5(long double context , long double param_2 ) {
    double item_8 = context;
    int16_t fpu_control;
    int16_t x87tag;
    return Camera_UpdateViewCone_5(*(&item_8 + 4), fpu_control, x87tag, context, param_2, item_8);
}
