// Original IGI.EXE function: Camera_ApplyBandFilter_18 (VA 0x004A9D28; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_18.h"
int32_t __checkTOS_withFB(int32_t context ) {
    int32_t data_val = context & 0x7ff00000;

    if (data_val == 0x7ff00000)
        return context;

    return data_val;
}
