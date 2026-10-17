// Original IGI.EXE function: Camera_ApplyPostProcess_5 (VA 0x004A5760; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_5.h"
int32_t Camera_ApplyPostProcess_5(long double a1 @ fp0, long double a2 @ fp1) __location("fp0")

{
    double v_8 = a1;
    int16_t x87control;
    int16_t x87tag;
    return Camera_UpdateViewCone_5(*(&v_8 + 4), x87control, x87tag, a1, a2, v_8);
}
