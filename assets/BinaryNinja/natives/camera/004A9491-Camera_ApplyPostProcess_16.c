// Original IGI.EXE function: Camera_ApplyPostProcess_16 (VA 0x004A9491; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_16.h"
int32_t Camera_ApplyPostProcess_16(long double a1 @ fp0, long double a2 @ fp1) __location("fp0")

{
    int16_t x87control;
    return Camera_ApplyLineFilter_16(x87control, a2, a1);
}
