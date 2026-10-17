// Original IGI.EXE function: Camera_ApplyBandFilter_18 (VA 0x004A9D28; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_18.h"
🌐  int32_t __checkTOS_withFB(int32_t a1 @ 0x8) __pure

{
    int32_t valA = a1 & 0x7ff00000;

    if (valA == 0x7ff00000)
        return a1;

    return valA;
}
