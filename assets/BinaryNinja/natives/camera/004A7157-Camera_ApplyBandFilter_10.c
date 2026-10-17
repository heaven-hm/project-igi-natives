// Original IGI.EXE function: Camera_ApplyBandFilter_10 (VA 0x004A7157; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_10.h"
int32_t Camera_ApplyBandFilter_10()

{
    return Camera_ApplyLineFilter_24(0x10000, 0x30000);
}
