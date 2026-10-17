// Original IGI.EXE function: Camera_ApplyHandiCam_7 (VA 0x004A5E25; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_7.h"
int32_t Camera_ApplyHandiCam_7(void* a1 @ flagP)

{
    int32_t result = 0;
    result = ***(a1 - 0x14) == 0xc0000005;
    return result;
}
