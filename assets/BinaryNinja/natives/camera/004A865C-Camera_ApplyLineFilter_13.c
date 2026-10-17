// Original IGI.EXE function: Camera_ApplyLineFilter_13 (VA 0x004A865C; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyLineFilter_13.h"
int32_t Camera_ApplyLineFilter_13(char context) {
    if (context & 0x20)
        return 5;

    if (context & 8)
        return 1;

    if (context & 4)
        return 2;

    if (!(context & 1))
        return (context & 2) << 1;

    return 3;
}
