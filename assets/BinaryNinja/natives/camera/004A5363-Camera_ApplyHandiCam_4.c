// Original IGI.EXE function: Camera_ApplyHandiCam_4 (VA 0x004A5363; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_4.h"
int32_t Camera_ApplyHandiCam_4()

{
    Camera_ApplyPostProcess_4();
    g_93605c = Camera_Kernel32();
    int32_t result = Camera_ApplyBandFilter_10();
    __fnclex();
    return result;
}
